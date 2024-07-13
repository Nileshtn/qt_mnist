#ifndef DRAWING_H
#define DRAWING_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class drawing;
}
QT_END_NAMESPACE

class drawing : public QMainWindow
{
    Q_OBJECT

public:
    drawing(QWidget *parent = nullptr);
    ~drawing();

private:
    Ui::drawing *ui;
    QBrush brush;
    int brushSize;

};
#endif // DRAWING_H
