#include "drawing.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    drawing w;
    w.show();
    return a.exec();
}
