#include "custom_label.h"
#include <QMessageBox>

custom_label::custom_label(QWidget *parent):QLabel(parent)
{
    setCursor(Qt::CrossCursor);
}

custom_label::~custom_label() {

}

void custom_label::setPixmap ( QPixmap & p)
{
    Pix = p;
    Original_Pix=Pix;
    resize(Pix.width(), Pix.height());
    QLabel::setPixmap(Pix);
}

void custom_label::clear_Label(){
    Pix = QPixmap();
    Original_Pix=Pix;
    setPixmap(Pix);
    Boxes.clear();
}

void custom_label::reload_label(){
    Pix=Original_Pix;
    setPixmap(Pix);
    redraw_bound_boxes();
}

QPoint custom_label::set_constraint(QPoint p){
    QPoint mouse_point=p;
    if(mouse_point.x()<=0) mouse_point.setX(0);
    if(mouse_point.x()>Pix.width()) mouse_point.setX(Pix.width());
    if(mouse_point.y()<=0) mouse_point.setY(0);
    if(mouse_point.y()>Pix.height()) mouse_point.setY(Pix.height());
    return mouse_point;
}

void custom_label::mousePressEvent(QMouseEvent *ev)
{
    if(Pix.isNull()) return;

    DRAWING_STARTED=true;
    bbox_origin = set_constraint(ev->pos());
    QRect bbox(bbox_origin, bbox_origin);
    current_box.rect=bbox;

    emit Mouse_Pressed();
}

void custom_label::mouseMoveEvent(QMouseEvent *ev)
{
    if(Pix.isNull()) return;

    bbox_final = set_constraint(ev->pos());
    QRect bbox(bbox_origin, bbox_final);
    current_box.rect=bbox;

    this->update();
    emit Mouse_Pos();
}

void custom_label::mouseReleaseEvent(QMouseEvent *ev)
{
    if(Pix.isNull()) return;
    Boxes.push_back(current_box);
    this->update();
    emit Mouse_Released();
}


void custom_label::paintEvent(QPaintEvent *p)
{
    if(Pix.isNull()) return;
    QLabel::paintEvent(p);

    painter.begin(this);

    QPen pen(Qt::green, 2);
    painter.setPen(pen);

    if(DRAWING_STARTED){
        painter.drawPixmap(0,0,Pix);
        painter.drawRect(current_box.rect);
        DRAWING_CONTINUED=true;
    }
    else if(DRAWING_CONTINUED){
        QPainter tempPainter(&Pix);
        tempPainter.drawRect(current_box.rect);
        painter.drawPixmap(0,0,Pix);
    }
    painter.end();
    reload_label();
}


void custom_label::redraw_bound_boxes(){
    painter.begin(this);
    QPen pen(Qt::red, 2);
    painter.setPen(pen);
    for(int i=0; i<Boxes.size(); i++){
        painter.drawRect(Boxes[i].rect);
    }
    painter.end();
}
