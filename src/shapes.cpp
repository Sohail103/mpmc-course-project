#include "shapes.hpp"
#include <Arduino.h>
#define xchannel 25
#define ychannel 26
#define wait_us 500
#define dac_min 0
#define dac_max 255

void drawline(int x1, int y1, int x2, int y2)
{
  int dx = x2 - x1;
  int dy = y2 - y1;

  float xinc, yinc;
  int steps;

  steps = abs(dx)>abs(dy) ? abs(dx):abs(dy);
  xinc = dx / (float)steps;
  yinc = dy / (float)steps;

  float x = x1;
  float y = y1;

  for(int i = 0; i<= steps; i++)
  {
    dacWrite(xchannel, (uint8_t)constrain(x, dac_min, dac_max));
    dacWrite(ychannel, (uint8_t)constrain(y, dac_min, dac_max));
    x += xinc;
    y += yinc;
    delayMicroseconds(wait_us);
  }
}

void Shape::draw()
{
    size_t len = x.size();
    if(x.size() != y.size() || len < 2) return;

    for (size_t i = 0; i < len-1; i++)
    {
        drawline(x[i], y[i], x[i+1], y[i+1]);
    }
}

void Image::draw()
{
    for (auto &s: shapes)
    {
        s.draw();
    }
}