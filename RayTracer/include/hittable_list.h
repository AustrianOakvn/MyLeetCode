#ifndef HITTABLE_LIST_H 
#define HITTABLE_LIST_H 

#include "hittable.h"
#include <memory>
#include <vector>

using std::make_shared;
using srd::shared_ptr;

class HittableList:public Hittable{
  public:
    std::vector<shared_ptr<Hittable>>> objects;

    HittableList() {}
    HittableList(shared_ptr<Hittable> object){ add(object);}

    void clear() {objects.clear();}

    void add(shared_ptr<Hittable> object){
      objects.push_back(object);
    }

    bool hit(const Ray& r, double ray_tmin, double ray_tmax, hit_record &rec) const override {
      hit_record tmp_rec;
      bool hit_anything = false;
      auto closest_so_far = ray_tmax; 

      for (const auto& object : objects){
        if(object->hit(r, ray_tmin, ray_tmax, closest_so_far, tmp_rec)){
          hit_anything = true;
          closest_so_far = tmp_rec.t; 
          rec = tmp_rec;
        }
      }
      return hit_anything;
    }
};

#endif // !HITTABLE_LIST_H 