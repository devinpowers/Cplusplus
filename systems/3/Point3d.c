#include "Point3d.h"

#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

Point3d* Point3d_Allocate(int32_t x, int32_t y, int32_t z) {
  Point3d* point_ptr = (Point3d*) malloc(sizeof(Point3d));
  if (point_ptr == NULL) {
    return NULL;
  }
  point_ptr->x = x;
  point_ptr->y = y;
  point_ptr->z = z;
  return point_ptr;
}

void Point3d_Scale(Point3d* point_ptr, int32_t scale) {
  if (point_ptr != NULL) {
    point_ptr->x = scale * point_ptr->x;
    point_ptr->y = scale * point_ptr->y;
    point_ptr->z = scale * point_ptr->z;
  }
}

Point3d Point3d_GetOrigin() {
  Point3d origin = {0, 0, 0};
  return origin;
}