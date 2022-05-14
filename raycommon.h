#ifndef RAYCOMMON_H
#define RAYCOMMON_H

#include <cmath>
#include <limits>
#include <memory>
#include <cstdlib>

//eh
using std::shared_ptr;
using std::make_shared;
using std::sqrt;

//constants
const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

//util
inline double dtr(double degrees){
    return degrees *pi/180.0;
}

inline double random_double(){
    return rand() /(RAND_MAX + 1.0);
}

inline double random_double(double min, double max){
    return min + (max-min)*random_double();
}

inline double clamp(double x, double min, double max){
    if(x < min) return min;
    if(x > max) return max;
    return x;
}
//headers

#include "ray.h"
#include "vec3.h"

#endif