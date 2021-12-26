#ifndef CHART_HEXAGON_H
#define CHART_HEXAGON_H

#include "chart_base.h"

class Chart_Hexagon : public Chart_Base
{
private:
    virtual void paintChart(QPainter & p);

public:
    Chart_Hexagon(QWidget *parent = nullptr, PaintChartType type = PaintChartType::HEXAGON) : Chart_Base(parent,type,false,true){}
    Chart_Hexagon(Chart_Hexagon &cr):Chart_Base(cr){}
    Chart_Hexagon( int x1, int y1, int x2, int y2, QWidget *parent = nullptr,PaintChartType type = PaintChartType::HEXAGON) : Chart_Base(x1,y1,x2,y2,parent,type){}
    ~Chart_Hexagon(){}

};
#endif // CHART_HEXAGON_H
