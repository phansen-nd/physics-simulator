//
// Created by Pat Hansen on 3/4/23.
//

#ifndef PHYSICS_OBJECT_H
#define PHYSICS_OBJECT_H

#include <vector>
#include <string>
#include <iostream>
#include <functional>

#include "Vector2D.cpp"
#include "Force.h"

class Object {
    Vector2D mPosition;
    Vector2D mVelocity;
    std::vector<Force> mForces;

    std::string mName;
    char mIcon;

public:
    Object(std::string name, char icon);
    friend std::ostream &operator<<(std::ostream & os, const Object &object);

    Vector2D getPosition() const;
    char getIcon() const;
    void setPosition(int x, int y);

    void addForce(Force f, int startTime, int endTime);
    void removeForce(Force f);
    void tick(int time);
};

#endif //PHYSICS_OBJECT_H
