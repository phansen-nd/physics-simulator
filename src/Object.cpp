//
// Created by Pat Hansen on 3/4/23.
//

#include <sstream>
#include <functional>
#include <algorithm>

#include "Object.h"

Object::Object(std::string name, char icon) {
    mName = name;
    mIcon = icon;
    mPosition = Vector2D();
    mVelocity = Vector2D();
}

char Object::getIcon() const { return mIcon; }

Vector2D Object::getPosition() const { return {mPosition.x, mPosition.y}; }
void Object::setPosition(int x, int y) {
    mPosition.x = x;
    mPosition.y = y;
}

std::ostream &operator<<(std::ostream & os, const Object &object) {
    os << "Object summary" << std::endl;
    os << "--------------------" << std::endl;
    os << "Position     | x: " << object.mPosition.x << " y: " << object.mPosition.y << std::endl;
    os << "Velocity     | x: " << object.mVelocity.x << " y: " << object.mVelocity.y << std::endl;
    return os;
}

void Object::addForce(Force f, int startTime, int endTime) {
    mForces.emplace_back(f);
}

void Object::removeForce(Force f) {
    mForces.erase(std::remove(mForces.begin(), mForces.end(), f), mForces.end());
}

void Object::tick() {
    for (auto it = mForces.begin(); it != mForces.end(); it++) {
        Vector2D accel = it->getAcceleration();
        mVelocity.x += accel.x;
        mVelocity.y += accel.y;

        mPosition.x += mVelocity.x;
        mPosition.y += mVelocity.y;
    }
}