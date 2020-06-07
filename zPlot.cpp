#include "zPlot.h"

zPlot::zPlot(QWidget* parent) : plt(parent)
{
	this->setParent(parent);
	plt.move(200, 200);
	plt.setTitle("Random Live Plot");
	plt.setAxisTitle(QwtPlot::xBottom, "x-Axis");
	//plt.setAxisScale(QwtPlot::xBottom, 0.0, 1.0, 0.1);
	plt.setAxisAutoScale(QwtPlot::xBottom);
	plt.setAxisTitle(QwtPlot::yLeft, "y-Axis");
	plt.setAxisScale(QwtPlot::yLeft, 0.0, 1.0, 0.1);
	setRandomData();
	zobj.grid->attach(&plt);
	zobj.grid->setPen(Qt::red, 0.8, Qt::DotLine);
}

zPlot::~zPlot()
{
}

void zPlot::drawCurve(QVector<double>& xd, QVector<double>& yd)
{
	zobj.curve->setSamples(xd, yd);
	zobj.curve->attach(&plt);
}

void zPlot::setRandomData()
{
	xdata.clear(); ydata.clear();
	for (int i = 0; i < 10; i++)
	{
		//xdata.push_back(rnd.getRandomInt(0.1, 0.98));
		ydata.push_back(rnd.getRandomInt(0.1, 0.98));
	}
	xdata = { 0,0.1,0.2,0.3,0.4,0.5,0.6,0.8,0.9,1.0 };
	zobj.curve->setSamples(xdata, ydata);
	zobj.curve->attach(&plt);
	plt.replot();
}
