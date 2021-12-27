#ifndef CHART_CYLINDER_H
#define CHART_CYLINDER_H
#include "chart_base.h"

class Chart_Cylinder : public Chart_Base
{
private:
    virtual void paintChart(QPainter & p);

public:
    Chart_Cylinder(QWidget *parent = nullptr, PaintChartType type = PaintChartType::CYLINDER) : Chart_Base(parent,type,false,true){}
    Chart_Cylinder(Chart_Cylinder &cr):Chart_Base(cr){}
    Chart_Cylinder( int x1, int y1, int x2, int y2, QWidget *parent = nullptr,PaintChartType type = PaintChartType::CYLINDER) : Chart_Base(x1,y1,x2,y2,parent,type){}
    ~Chart_Cylinder(){}

};

#endif // CHART_CYLINDER_H
