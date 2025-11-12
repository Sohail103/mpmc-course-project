#include "shapes.hpp"

// --- Outer frame ---
Shape frame(
    {0, 255, 255, 0, 0},
    {0, 0, 255, 255, 0}
);

// --- Ground line ---
Shape gnd(
    {0, 255},
    {150, 150}
);

// --- Left mountain ---
Shape mountain_left(
    {10, 80, 150},
    {150, 60, 150}
);

// --- Right mountain ---
Shape mountain_right(
    {100, 180, 250},
    {150, 70, 150}
);

// --- Sun (octagon-like circle) ---
Shape sun(
    {200, 210, 220, 220, 210, 200, 190, 190, 200},
    {40, 30, 40, 60, 70, 60, 70, 40, 40}
);

// --- Lake reflection (inverted mountains) ---
Shape reflection_left(
    {10, 80, 150},
    {150, 210, 150}
);

Shape reflection_right(
    {100, 180, 250},
    {150, 230, 150}
);

// --- Tree trunk ---
Shape trunk(
    {40, 50, 50, 40, 40},
    {130, 130, 110, 110, 130}
);

// --- Tree foliage (triangle) ---
Shape foliage(
    {30, 45, 60, 30},
    {110, 85, 110, 110}
);

// --- Combine into one image ---
Image image4({
    frame,
    gnd,
    mountain_left,
    mountain_right,
    sun,
    reflection_left,
    reflection_right,
    trunk,
    foliage
});