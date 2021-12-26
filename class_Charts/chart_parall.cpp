#include "chart_parall.h"

void Chart_Parall::paintChart(QPainter & p)
{
    QPen tmp = p.pen();
    p.setPen(paintChartDrawPen);

    int sx = paintStart.rx(),sy = paintStart.ry(),ex = paintEnd.rx(),ey = paintEnd.ry();
    int squ1 = (ex-sx)/3;
    int squ2 = (ey-sy)*2/15;

    if(graphPath) delete graphPath;
    graphPath = new QPainterPath;
    graphPath->moveTo(sx+squ1,sy+squ2);
    graphPath->lineTo((ex+sx+squ1)/2,sy+squ2);
    graphPath->lineTo(ex,sy+squ2);
    graphPath->lineTo(ex-squ1/2,(sy+ey)/2);
    graphPath->lineTo(ex-squ1,ey-squ2);
    graphPath->lineTo((ex+sx-squ1)/2,ey-squ2);
    graphPath->lineTo(sx,ey-squ2);
    graphPath->lineTo(sx+squ1/2,(sy+ey)/2);
    graphPath->lineTo(sx+squ1,sy+squ2);

    p.fillPath(*graphPath,paintChartFillPen);
    p.drawPath(*graphPath);

    p.setPen(tmp);
}
