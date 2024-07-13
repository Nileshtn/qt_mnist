#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QObject>
#include <QWidget>
#include <QPainterPath>
#include <QPainter>

class RenderArea:public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = nullptr);

public slots:
    void setBrush(const QBrush &brush);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    QBrush brush;
    QPainterPath path;
};

#endif // RENDERAREA_H
