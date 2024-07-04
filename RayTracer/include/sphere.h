#ifndef SPHERE_H
#define SPHERE_H

#include "hittable.h"
#include "vec3.h"

class sphere: public Hittable{
  public:
    sphere(const Point3& center, double radius): center(center), radius(fmax(0, radius)){}

    bool hit(const Ray& r, double ray_tmin, double ray_tmax, hit_record& rec) const override{
      Vec3 oc = center - r.origin();
      auto a = dot(r.direction(), r.direction());
      auto h = dot(r.direction(), oc);
      auto c = oc.length_squared() - radius*radius;
      auto discriminant = h*h - a*c;

      if (discriminant < 0){
        return false;
      }
      auto sqrtd = sqrt(discriminant);

      auto root = (h - sqrtd) / a;
      if (root <= ray_tmin || ray_tmax <= root){
        root = (h+sqrtd) / a;
        if (root <= ray_tmin || ray_tmax <= root)
          return false;
      }
      rec.t = root;
      rec.p = r.at(rec.t);
      Vec3 outward_normal = (rec.p - center) / radius;
      rec.set_face_normal(r, outward_normal);

      return true;
    }
  private:
    Point3 center;
    double radius;
};

#endif

