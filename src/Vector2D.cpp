//
// Created by Pat Hansen on 3/6/23.
//

#ifndef VECTOR_2D
#define VECTOR_2D

struct Vector2D {
    double x, y;

    bool operator==(const Vector2D &other) const {
        return x == other.x && y == other.y;
    }
};

#endif