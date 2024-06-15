#include <iostream>
#include "vec3.h"
#include "color.h"
#include "ray.h"




Color ray_color(const Ray&r){
  Vec3 unit_direction = unit_vector(r.direction());
  auto a = 0.5*(unit_direction.y() + 1.0);
  return (1.0-a)*Color(1.0, 1.0, 1.0) + a*Color(0.5, 0.7, 1.0);
  //return Color(0, 0, 0);
}


int main(){
  //int image_width = 256; 
  //int image_height = 256;

  auto aspect_ratio = 16.0 / 9.0; 
  int image_width = 400;

  int image_height = int(image_width / aspect_ratio);
  image_height = (image_height < 1) ? 1: image_height;

  auto viewport_height = 2.0;
  auto viewport_width = viewport_height * (double(image_width)/image_height);
  auto focal_length = 1.0;
  auto camera_center = Point3(0, 0, 0);

  auto viewport_u = Vec3(viewport_width, 0, 0);
  auto viewport_v = Vec3(0, -viewport_height, 0);

  // calculate delta between pixels 
  auto pixel_delta_u = viewport_u / image_width;
  auto pixel_delta_v = viewport_v / image_height;

  // location of the upper left pixel
  auto viewport_upper_left = camera_center - 
                            Vec3(0, 0, focal_length) - 
                            viewport_u/2 - 
                            viewport_v/2;

  auto pixel00_loc = viewport_upper_left + 0.5 * (pixel_delta_u + pixel_delta_v);


  std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

  for (int j=0; j<image_height; j++){
    std::clog << "\r Scanlines remaining:" << (image_height -j) << ' ' << std::flush;
    for (int i=0; i<image_width; i++){
      //auto pixel_color = Color(double(i)/(image_width-1), 
      //                          double(j)/(image_height-1),
      //                          0);
      auto pixel_center = pixel00_loc + 
                          (i * pixel_delta_u) + 
                          (j * pixel_delta_v);
      auto ray_direction = pixel_center - camera_center;
      Ray r(camera_center, ray_direction);
      Color pixel_color = ray_color(r);
      
      write_color(std::cout, pixel_color);
    }
  }
  std::clog << "\rDone              \n";
}
