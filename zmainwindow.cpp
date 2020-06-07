#include "zmainwindow.h"

zmainwindow::zmainwindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    this->resize(800, 600);
}
