#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "custom_label.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->label->setContextMenuPolicy(Qt::CustomContextMenu);
    //connect(ui->label, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(showContextMenu(QPoint)));

    ui->listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->listWidget, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(showListMenu(QPoint)));

    //connect(ui->label, SIGNAL(Mouse_Pressed()), this, SLOT(label_mouse_clicked()));
    //connect(ui->label, SIGNAL(Mouse_Pos()), this, SLOT(label_mouse_dragged()));
    connect(ui->label, SIGNAL(Mouse_Released()), this, SLOT(label_mouse_released()));
    connect(ui->listWidget, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(on_Item_Clicked(QListWidgetItem*)));

    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(indexChanged(int)));

    ui->label_2->setScaledContents(true);
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionLoad_Image_triggered()
{
    fileName=QFileDialog::getOpenFileName(this, tr("Open Image"), QDir::currentPath(), tr("Image Files (*.png *.jpg *.bmp)"), 0, QFileDialog::DontUseNativeDialog);

    if(fileName.isEmpty()){
        this->MsgBox.setText("Select an image");
        this->MsgBox.exec();
        return;
    }

    ui->label->clear_Label();
    ui->listWidget->clear();

    /*
    QImageReader r(fileName);
    r.setDecideFormatFromContent(true);
    QImage i = r.read();
    if (!i.isNull()) ui->label->Pix= QPixmap::fromImage(i);
    */

    QPixmap pixmap = QPixmap(fileName);
    ui->label->setPixmap(pixmap);


    int combo_pos_x=ui->label->pos().x()+ui->label->width()+10;
    int combo_pos_y=ui->label->pos().y();
    ui->comboBox->move(combo_pos_x, combo_pos_y);

    int btn_pos_x=combo_pos_x;
    int btn_pos_y=combo_pos_y+ui->comboBox->height()+2;
    ui->pushButton->move(btn_pos_x, btn_pos_y);

    int label2_pos_x=btn_pos_x;
    int label2_pos_y=btn_pos_y+ui->pushButton->height()+5;
    ui->label_2->move(label2_pos_x, label2_pos_y);

    int list_pos_x=label2_pos_x;
    int list_pos_y=label2_pos_y+ui->label_2->height()+5;
    ui->listWidget->move(list_pos_x, list_pos_y);

    if((ui->label->pos().y()+ui->label->height()) > (ui->listWidget->pos().y()+ui->listWidget->height())){
        resize(ui->listWidget->pos().x()+ui->listWidget->width()+5, ui->label->pos().y()+ui->label->height()+5);
    }
    else{
        resize(ui->listWidget->pos().x()+ui->listWidget->width()+5, ui->listWidget->pos().y()+ui->listWidget->height()+5);
    }
}

/*
void MainWindow::label_mouse_clicked()
{

}

void MainWindow::label_mouse_dragged()
{

}
*/
void MainWindow::label_mouse_released()
{
    //showContextMenu(ui->label->bbox_final);
    add_Boundbox();
}

void MainWindow::indexChanged(int index)
{
    current_class_index=index;
}

void MainWindow::add_Boundbox(){
    if (ui->comboBox->count() == 0){
        this->MsgBox.setText("Add and/or Select Class");
        this->MsgBox.exec();
        ui->label->Boxes.pop_back();
        ui->label->current_box.rect=QRect(0,0,0,0);
        ui->label->reload_label();
        return;
    }

    ui->label->current_box.class_name=classes[current_class_index];
    ui->label->current_box.class_id=current_class_index;
    ui->label->Boxes[ui->label->Boxes.size()-1]=ui->label->current_box;

    box b=ui->label->current_box;

    //converting boundbox to yolo format
    double x=b.rect.center().x()/(double)ui->label->Original_Pix.width();
    double y=b.rect.center().y()/(double)ui->label->Original_Pix.height();
    double w=abs(b.rect.width()/(double)ui->label->Original_Pix.width());
    double h=abs(b.rect.height()/(double)ui->label->Original_Pix.height());

    QString str="<"+QString::number(x)+", "+QString::number(y)+", "+QString::number(w)+", "+QString::number(h)+"> "+b.class_name;
    //
    ui->listWidget->addItem(str);
}

void MainWindow::delete_Boundbox(){
    QModelIndexList indexes = ui->listWidget->selectionModel()->selectedIndexes();
    std::vector<int> indexList;
    foreach(QModelIndex index, indexes){
        indexList.push_back(index.row());
    }
    //deleting boxes from vector Boxes
    for(int i=0; i<indexList.size(); i++){
        ui->label->Boxes.erase(ui->label->Boxes.begin() + indexList[i]);
    }

    // If multiple selection is on, we need to erase all selected items
    for (int i = 0; i < ui->listWidget->selectedItems().size(); ++i) {
        // Get curent item on selected row
        QListWidgetItem *item = ui->listWidget->takeItem(ui->listWidget->currentRow());
        // And remove it
        delete item;
    }
    ui->label->current_box.rect=QRect(0,0,0,0);
    ui->label->reload_label();
}

void MainWindow::showListMenu(const QPoint &pos){
    // Handle global position
    QPoint globalPos = ui->listWidget->mapToGlobal(pos);

    // Create menu and insert some actions
    QMenu myMenu;
    myMenu.addAction("Erase",  this, SLOT(delete_Boundbox()));

    // Show context menu at handling position
    myMenu.exec(globalPos);
}

void MainWindow::on_Item_Clicked(QListWidgetItem* item){
    int index=ui->listWidget->row(item);
    QRect rect=ui->label->Boxes[index].rect;
    QPixmap original(fileName);
    QPixmap cropped = original.copy(rect);
    ui->label_2->setPixmap(cropped);
}

void MainWindow::select_class(int index){
    ui->label->Boxes[ui->label->Boxes.size()-1].class_name=classes[index-1];
    ui->label->current_box =ui->label->Boxes[ui->label->Boxes.size()-1];
}

void MainWindow::add_new_class(){
    bool ok;
    QString label=QInputDialog::getText(0, "Input dialog", "Class:", QLineEdit::Normal, "", &ok);//=message box to get text from user and click OK
    if (ok && !label.isEmpty()) {
        auto it=std::find(classes.begin(), classes.end(), label);
        // if classes does not contains label
        if(it==classes.end()){
            classes.push_back(label);
        }
        ui->comboBox->addItem(label);
    }
    else{
        return;
    }

}


void MainWindow::on_pushButton_clicked()
{
    add_new_class();
}

/*
void MainWindow::showContextMenu(const QPoint &pos){
    // Handle global position
    QPoint globalPos = ui->label->mapToGlobal(pos);

    // Create menu and insert some actions
    QMenu myMenu;
    for(int index=0; index<classes.size(); index++){
        myMenu.addAction(classes[index],  this, SLOT(select_class(index)));
    }
    myMenu.addAction("Add New Class",  this, SLOT(add_new_class()));


    // Show context menu at handling position
    myMenu.exec(globalPos);
}
*/
