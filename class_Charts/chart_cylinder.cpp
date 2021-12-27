#include "chart_cylinder.h"

void Chart_Cylinder::paintChart(QPainter & p)
{
    QPen tmp = p.pen();
    p.setPen(paintChartDrawPen);

    int sx = paintStart.rx(),sy = paintStart.ry(),ex = paintEnd.rx(),ey = paintEnd.ry();
    int midx = (sx+ex)>>1,midy = (sy+ey)>>1;
    int longx = ex-sx, longy = ey-sy;

    if(graphPath) delete graphPath;
    graphPath = new QPainterPath;
    graphPath->addEllipse(sx+longx/6,sy,longx*2/3,longy/3);
    graphPath->addEllipse(sx+longx/6,ey-longy/3,longx*2/3,longy/3);
    graphPath->moveTo(sx+longx/6,sy+longy/6);
    graphPath->lineTo(sx+longx/6,ey-longy/6);
    graphPath->moveTo(ex-longx/6,sy+longy/6);
    graphPath->lineTo(ex-longx/6,ey-longy/6);
    p.fillPath(*graphPath,paintChartFillPen);
    p.drawPath(*graphPath);

    p.setPen(tmp);
}
