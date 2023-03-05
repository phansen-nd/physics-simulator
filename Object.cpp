//
// Created by Pat Hansen on 3/4/23.
//

#include <sstream>
#include "Object.h"

Object::Object(string name, char icon) {
    mName = name;
    mIcon = icon;
    mPosition = vector<int>(3, 0);
    mVelocity = vector<int>(3, 0);
    mAcceleration = vector<int>(3, 0);
}

string Object::toString() {
    stringstream ss;
    ss << "Object summary" << endl;
    ss << "--------------------" << endl;
    ss << "Position     | x: " << mPosition[0] << " y: " << mPosition[1] << " z: " << mPosition[2] << endl;
    ss << "Velocity     | x: " << mVelocity[0] << " y: " << mVelocity[1] << " z: " << mVelocity[2] << endl;
    ss << "Acceleration | x: " << mAcceleration[0] << " y: " << mAcceleration[1] << " z: " << mAcceleration[2] << endl;
    return ss.str();
}

Coordinate2D Object::getPosition() {
    Coordinate2D coord = {mPosition[0], mPosition[1]};
    return coord;
}

char Object::getIcon() { return mIcon; }

void Object::setPosition(int x, int y, int z) {
    mPosition[0] = x;
    mPosition[1] = y;
    mPosition[2] = z;
}

void Object::setVelocity(int x, int y, int z) {
    mVelocity[0] = x;
    mVelocity[1] = y;
    mVelocity[2] = z;
}

void Object::setAcceleration(int x, int y, int z) {
    mAcceleration[0] = x;
    mAcceleration[1] = y;
    mAcceleration[2] = z;
}

void Object::tick() {
    for (int i = 0; i < mPosition.size(); i++) {
        mPosition[i] += mVelocity[i];
        mVelocity[i] += mAcceleration[i];
    }
}