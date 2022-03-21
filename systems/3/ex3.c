#include "Point3d.h"

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define X_COORD 0
#define Y_COORD -2
#define Z_COORD 333
#define SCALE 21

// Tests that AllocatePoint3d allocates a Point3d struct
// with appropriate fields.
// Returns true if tests pass, false otherwise.
bool TestPoint3d_Allocate();

// Tests that ScalePoint3d SCALEs a Point3d correctly when
// given appropriate values and that it does nothing when
// given a null pointer.
// Returns true if tests pass, false otherwise.
bool TestPoint3d_Scale();

// Tests that GetOrigin returns a Point3d representing the origin
// Returns true if tests pass, false otherwise.
bool TestPoint3d_GetOrigin();


// Tests all functions defined in Point3d.h
int main(int argc, char** argv) {
  printf("Testing Point3d:\n");
  if (!TestPoint3d_Allocate() ||
      !TestPoint3d_Scale() ||
      !TestPoint3d_GetOrigin()) {
    fprintf(stderr, "Testing failed.\n");
    return EXIT_FAILURE;
  }
  printf("Success: All tests passed!\n");
  return EXIT_SUCCESS;
}

bool TestPoint3d_Allocate() {
  Point3d* point_ptr = Point3d_Allocate(X_COORD, Y_COORD, Z_COORD);

  if (point_ptr == NULL) {
    fprintf(stderr, "Point3d_Allocate failed: returned NULL.\n");
    return false;
  }
  if (point_ptr->x != X_COORD ||
      point_ptr->y != Y_COORD ||
      point_ptr->z != Z_COORD) {
    fprintf(stderr, "Point3d_Allocate failed: did not set correct values");
    free(point_ptr);
    return false;
  }
  free(point_ptr);
  return true;
}

bool TestPoint3d_Scale() {
  // invalid case: null ptr
  Point3d_Scale(NULL, 5);

  Point3d point = {X_COORD, Y_COORD, Z_COORD};

  // valid case
  Point3d_Scale(&point, SCALE);
  if (point.x != X_COORD * SCALE ||
      point.y != Y_COORD * SCALE ||
      point.z != Z_COORD * SCALE) {
    fprintf(stderr, "Point3d_Scale failed: did not SCALE values correctly");
    return false;
  }

  return true;
}

bool TestPoint3d_GetOrigin() {
  Point3d origin = Point3d_GetOrigin();
  if (origin.x != 0 || origin.y != 0 || origin.z != 0) {
    fprintf(stderr, "Point3d_GetOrigin failed: did not return origin");
    return false;
  }
  return true;
}