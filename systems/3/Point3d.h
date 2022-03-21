#ifndef POINT3D_H_
#define POINT3D_H_

#include <inttypes.h>

// Represents a point in 3d space
typedef struct point3d_st {
  int32_t x, y, z;
} Point3d;

// Allocates a Point3d with the given x, y, and z values and returns
// a pointer to it. The user is responsible for freeing the newly
// allocated Point3d. Returns NULL if a Point3d cannot be allocated.
Point3d* Point3d_Allocate(int32_t x, int32_t y, int32_t z);

// Scales each cooridinate in the Point3d pointed to by point_ptr by
// the given scale value. Does nothing if point_ptr is NULL.
void Point3d_Scale(Point3d* point_ptr, int32_t scale);

// Returns a Point3d representing the origin (x, y, and z values are 0)
Point3d Point3d_GetOrigin();

#endif  // POINT3D_H_