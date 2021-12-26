#include "chart_hexagon.h"

void Chart_Hexagon::paintChart(QPainter & p)
{
    QPen tmp = p.pen();
    p.setPen(paintChartDrawPen);

    int sx = paintStart.rx(),sy = paintStart.ry(),ex = paintEnd.rx(),ey = paintEnd.ry();
    int longx = ex-sx, longy = ey-sy;

    if(graphPath) delete graphPath;
    graphPath = new QPainterPath;
    graphPath->moveTo(sx+longx/3,sy);
    graphPath->lineTo(ex-longx/3,sy);
    graphPath->lineTo(ex-longx/6,sy+longy/2);
    graphPath->lineTo(ex-longx/3,ey);
    graphPath->lineTo(sx+longx/3,ey);
    graphPath->lineTo(sx+longx/6,sy+longy/2);
    graphPath->lineTo(sx+longx/3,sy);

    p.fillPath(*graphPath,paintChartFillPen);
    p.drawPath(*graphPath);

    p.setPen(tmp);
}
