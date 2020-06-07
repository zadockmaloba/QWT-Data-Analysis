#include "zmainwindow.h"
#include "zPlot.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPushButton* nbtn = new QPushButton();
    a.setStyle("Fusion");
    zmainwindow w;
    //replot button actions
    nbtn->setParent(&w);
    nbtn->resize(60, 40);
    nbtn->move(500, 300);
    nbtn->setText("Replot");
    //
    zPlot zp(&w);
    zp.plt.resize(400, 400);
    zp.plt.move(10, 15);
    w.show();
    QObject::connect(nbtn, SIGNAL(clicked()), &zp, SLOT(setRandomData()));
    return a.exec();
}
