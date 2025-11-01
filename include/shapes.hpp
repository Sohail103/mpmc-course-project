#include <vector>

#ifndef SHAPES_H
#define SHAPES_H

void drawline(int x1, int y1, int x2, int y2);

class Shape {

    public:
    std::vector<__UINT8_TYPE__> x;
    std::vector<__UINT8_TYPE__> y;

    Shape(const std::vector<__UINT8_TYPE__>& xpts, const std::vector<__UINT8_TYPE__>& ypts)
    : x(xpts), y(ypts) {};

    void draw();
};

class Image {

    public:
    std::vector<Shape> shapes;

    Image(const std::vector<Shape>& imgshapes)
    : shapes(imgshapes) {};

    void draw();
};

#endif