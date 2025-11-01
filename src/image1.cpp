#include "shapes.hpp"

Shape outersquare(
    {0, 255, 255, 0, 0},
    {0, 0, 255, 255, 0}
);

Shape lowerline1(
    {30, 225},
    {30, 30}
);

Shape lowerline2(
    {30, 225},
    {60, 60}
);

Shape squarelogo(
    {30, 30, 130, 130, 30},
    {90, 190, 190, 90, 90}
);

Shape triangle(
    {50, 50, 110, 50},
    {110, 170, 140, 110}
);

Shape rect1(
    {150, 225, 225, 150, 150},
    {90, 90, 120, 120, 90}
);

Shape rect2(
    {150, 225, 225, 150, 150},
    {150, 150, 180, 180, 150}
);

Image image1({outersquare, lowerline1, lowerline2, squarelogo, triangle, rect1, rect2});