#pragma once

#include <QString>

struct Point
{
public:
    Point() {}
    Point(double x, double y) :x(x), y(y) { }
    double x, y;
};


struct BBox
{
    double xmin;
    double xmax;
    double ymin;
    double ymax;
    Point center;
};





