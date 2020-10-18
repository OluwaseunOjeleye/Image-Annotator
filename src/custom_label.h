#ifndef CUSTOM_LABEL_H
#define CUSTOM_LABEL_H

#include <QString>
#include <QRect>
#include <QLabel>
#include <QPixmap>
#include <QPainter>
#include <QMouseEvent>

typedef struct {
    QRect rect = QRect(0,0,0,0);
    QString class_name="";
    int class_id=0;
} box;

class custom_label : public QLabel
{
    Q_OBJECT
public:
    explicit custom_label(QWidget *parent=0);
    ~custom_label();

    void setPixmap (QPixmap & );
    void clear_Label();
    void reload_label();

    QPixmap Original_Pix;
    QPoint bbox_origin, bbox_final;
    std::vector<box> Boxes;
    box current_box;

protected:
    void mousePressEvent(QMouseEvent *ev) override;
    void mouseMoveEvent(QMouseEvent *ev) override;
    void mouseReleaseEvent(QMouseEvent *ev) override;
    void paintEvent(QPaintEvent *) override;



signals:
    void Mouse_Pressed();
    void Mouse_Pos();
    void Mouse_Released();

private:

    QPixmap Pix;

    QPainter painter;

    bool DRAWING_STARTED=false, DRAWING_CONTINUED=false;

    QPoint set_constraint(QPoint p);
    void redraw_bound_boxes();
};

#endif // CUSTOM_LABEL_H
