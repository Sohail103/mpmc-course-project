#include "shapes.hpp"

#include "shapes.hpp"

// Outer square head
Shape head(
    {40, 215, 215, 40, 40},
    {40, 40, 215, 215, 40}
);

// Left eye
Shape lefteye(
    {75, 105, 105, 75, 75},
    {80, 80, 110, 110, 80}
);

// Right eye
Shape righteye(
    {150, 180, 180, 150, 150},
    {80, 80, 110, 110, 80}
);

// Mouth rectangle
Shape mouth(
    {90, 165, 165, 90, 90},
    {160, 160, 180, 180, 160}
);

// Antenna stem
Shape antenna(
    {125, 125},
    {40, 20}
);

// Antenna tip (small square)
Shape antennatip(
    {120, 130, 130, 120, 120},
    {10, 10, 20, 20, 10}
);

// Combine into image
Image image3({head, lefteye, righteye, mouth, antenna, antennatip});