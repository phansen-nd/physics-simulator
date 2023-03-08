//
// Created by Pat Hansen on 3/5/23.
//

#ifndef PHYSICS_FORCE_H
#define PHYSICS_FORCE_H

#include "Vector2D.cpp"

class Force {
private:
    Vector2D mAcceleration;
public:
    Force(double x, double y);
    Force(Vector2D vec);

    Vector2D getAcceleration();

    bool operator== (const Force &other) const;
};


#endif //PHYSICS_FORCE_H
