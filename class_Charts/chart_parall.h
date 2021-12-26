#ifndef CHART_PARALL_H
#define CHART_PARALL_H

#include "chart_base.h"

class Chart_Parall : public Chart_Base
{
private:
    virtual void paintChart(QPainter & p);

public:
    Chart_Parall(QWidget *parent = nullptr, PaintChartType type = PaintChartType::PARALL) : Chart_Base(parent,type,false,true){}
    Chart_Parall(Chart_Parall &cr):Chart_Base(cr){}
    Chart_Parall( int x1, int y1, int x2, int y2, QWidget *parent = nullptr,PaintChartType type = PaintChartType::PARALL) : Chart_Base(x1,y1,x2,y2,parent,type){}
    ~Chart_Parall(){}

};

#endif // CHART_PARALL_H
