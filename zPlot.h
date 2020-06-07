#pragma once
#include <qwt/qwt.h>
#include <qwt/qwt_plot.h>
#include <qwt/qwt_plot_curve.h>
#include <qwt/qwt_plot_grid.h>
#include <qwt/qwt_plot_histogram.h>
#include <QtCore/qobject.h>
#include <QtCore/qvector.h>
#include <QtWidgets/qpushbutton.h>
#include <cmath>
#include "zRandom.h"

class zPlot : public QObject
{
	Q_OBJECT
public:
	QwtPlot plt;
	explicit zPlot(QWidget * parent = nullptr);
	~zPlot();
	void drawCurve(QVector<double> & xd, QVector<double> & yd);
	void zCurveAtrib();
	void setCurveData();
	void zHistAtrib();
	void setHistData();
	void loadCSVSamples();
public slots:
	void setRandomData();
private:
	struct zPlotObjs
	{
		QwtPlotCurve* curve = new QwtPlotCurve();
		QwtPlotGrid* grid = new QwtPlotGrid();
	}zobj;
	QVector <double> xdata, ydata;
	Random rnd;
};

