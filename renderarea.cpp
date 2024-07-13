#include "renderarea.h"
#include <QPainter>
RenderArea::RenderArea(QWidget *parent) : QWidget(parent) {
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
    setMouseTracking(true);
}

void RenderArea::setBrush(const QBrush &brush){
    this->brush=brush;
    update();
}
void RenderArea::paintEvent(QPaintEvent *){
    QPainterPath path;
    path.moveTo(20,80);
    path.lineTo(20,30);
    path.cubicTo(80,0,50,50,80,80);

    QPainter painter(this);
    painter.setBrush(brush);

    for (int x = 0; x < width(); x += 100) {
        for (int y = 0; y < height(); y += 100) {
            painter.save();
            painter.translate(x, y);
            painter.drawPath(path);
        }
    }
}


