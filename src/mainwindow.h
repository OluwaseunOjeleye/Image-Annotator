#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QListWidgetItem>
#include <QInputDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionLoad_Image_triggered();
    void showListMenu(const QPoint&);
    void on_Item_Clicked(QListWidgetItem* item);
    //void showContextMenu(const QPoint&);

    void add_Boundbox();
    void delete_Boundbox();

    void select_class(int index);
    void add_new_class();

    //void label_mouse_clicked();
    //void label_mouse_dragged();
    void label_mouse_released();

    void on_pushButton_clicked();
    void indexChanged(int index);


private:
    void clear_Label();
    void reload_label();

    Ui::MainWindow *ui;
    QMessageBox MsgBox;

    QString fileName;
    std::vector<QString> classes;
    int current_class_index;
};
#endif // MAINWINDOW_H
