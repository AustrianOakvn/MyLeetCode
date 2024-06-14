#ifndef COLOR_H 
#define COLOR_H 

#include "vec3.h"
#include <iostream>

using Color = Vec3;

void write_color(std::ostream& out, const Color& pixel_color){
  auto r = pixel_color.x();
  auto g = pixel_color.y();
  auto b = pixel_color.z();

  int rbyte = int(255.999 * r);
  int gbyte = int(255.999 * g);
  int bbtye = int(255.999 * b);

  out << rbyte << ' ' << gbyte << ' ' << bbtye << "\n";
}

#endif
