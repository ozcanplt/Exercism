#include "resistor_color.h"
static const resistor_band_t _colors[] = {
  BLACK,
  BROWN,
  RED,
  ORANGE,
  YELLOW,
  GREEN,
  BLUE,
  VIOLET,
  GREY,
  WHITE
};
int color_code(resistor_band_t band)
{
  return band;
}
const resistor_band_t* colors(void)
{
  return _colors;
}
