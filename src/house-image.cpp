#include "shapes.hpp"

#include "shapes.hpp"

// Ground base
Shape ground(
    {0, 255},
    {230, 230}
);

// Main house square
Shape housebody(
    {60, 200, 200, 60, 60},
    {130, 130, 230, 230, 130}
);

// Roof (triangle)
Shape roof(
    {50, 130, 210, 50},
    {130, 60, 130, 130}
);

// Door
Shape door(
    {115, 145, 145, 115, 115},
    {190, 190, 230, 230, 190}
);

// Left window
Shape window1(
    {75, 95, 95, 75, 75},
    {150, 150, 170, 170, 150}
);

// Right window
Shape window2(
    {165, 185, 185, 165, 165},
    {150, 150, 170, 170, 150}
);

// Door knob (small line detail)
Shape doorknob(
    {140, 142},
    {210, 210}
);

// Combine into an image
Image image2({ground, housebody, roof, door, window1, window2, doorknob});