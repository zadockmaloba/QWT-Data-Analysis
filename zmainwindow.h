#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_zmainwindow.h"

class zmainwindow : public QMainWindow
{
    Q_OBJECT

public:
    zmainwindow(QWidget *parent = Q_NULLPTR);

private:
    Ui::zmainwindowClass ui;
};
