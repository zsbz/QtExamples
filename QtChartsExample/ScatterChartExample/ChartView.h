#ifndef CHARTVIEW_H
#define CHARTVIEW_H

#include <QChartView>

QT_CHARTS_USE_NAMESPACE
class ChartView : public QChartView
{
    Q_OBJECT
public:
    explicit ChartView(QWidget* parent = nullptr);
};

#endif  // CHARTVIEW_H
