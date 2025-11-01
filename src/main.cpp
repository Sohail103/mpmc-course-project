#pragma once
#include "shapes.hpp"
#include "Arduino.h"
#define framedelay 17

extern Image image1;

void setup() {}

void loop()
{
  image1.draw();
  delay(framedelay);
}