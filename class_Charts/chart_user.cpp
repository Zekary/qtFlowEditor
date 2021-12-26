#include "chart_user.h"

void Chart_User::paintChart(QPainter & p)
{
    QPen tmp = p.pen();
    p.setPen(paintChartDrawPen);

    int starx = paintStart.rx(),stary = paintStart.ry(),endx = paintEnd.rx(),endy = paintEnd.ry();
    int midx = (starx+endx)>>1,midy = (stary+endy)>>1;
    int longx = endx-starx,longy = endy-stary;

    if(graphPath) delete graphPath;
    graphPath = new QPainterPath;
    graphPath->addEllipse(starx+longx/3,stary,longx/3,longy/3);
    graphPath->moveTo(midx,stary+longy/3);
    graphPath->lineTo(midx,endy-longy/3);
    graphPath->moveTo(midx,endy-longy/3);
    graphPath->lineTo(starx+longx/3,endy);
    graphPath->moveTo(midx,endy-longy/3);
    graphPath->lineTo(endx-longx/3,endy);
    graphPath->moveTo(starx+longx/6,midy);
    graphPath->lineTo(endx-longx/6,midy);

    p.fillPath(*graphPath,paintChartFillPen);
    p.drawPath(*graphPath);

    p.setPen(tmp);
}
