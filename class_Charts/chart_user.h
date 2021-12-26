#ifndef CHART_USER_H
#define CHART_USER_H


#include "chart_base.h"

class Chart_User : public Chart_Base
{
private:
    virtual void paintChart(QPainter & p);

public:
    Chart_User(QWidget *parent = nullptr, PaintChartType type = PaintChartType::USER) : Chart_Base(parent,type,false,true){}
    Chart_User(Chart_User &cr):Chart_Base(cr){}
    Chart_User( int x1, int y1, int x2, int y2, QWidget *parent = nullptr,PaintChartType type = PaintChartType::USER) : Chart_Base(x1,y1,x2,y2,parent,type){}
    ~Chart_User(){}

};

#endif // CHART_USER_H
