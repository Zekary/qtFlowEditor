#include "chart_triangle.h"

void Chart_Triangle::paintChart(QPainter & p)
{
    QPen tmp = p.pen();
    p.setPen(paintChartDrawPen);

    int sx = paintStart.rx(),sy = paintStart.ry(),ex = paintEnd.rx(),ey = paintEnd.ry();
    int midx = (sx+ex)>>1,midy = (sy+ey)>>1;

    if(graphPath) delete graphPath;
    graphPath = new QPainterPath;
    graphPath->moveTo(midx,sy);
    graphPath->lineTo((sx+midx)/2,midy);
    graphPath->lineTo(sx,ey);
    graphPath->lineTo(midx,ey);
    graphPath->lineTo(ex,ey);
    graphPath->lineTo((midx+ex)/2,midy);
    graphPath->lineTo(midx,sy);

    p.fillPath(*graphPath,paintChartFillPen);
    p.drawPath(*graphPath);

    p.setPen(tmp);
}
