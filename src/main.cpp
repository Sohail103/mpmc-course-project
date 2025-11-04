#include <Arduino.h>
#include "image1.hpp"  
#include "house-image.hpp"
#define framedelay 17

void setup() {}

void loop()
{
  image1.draw();
  delay(framedelay);
}