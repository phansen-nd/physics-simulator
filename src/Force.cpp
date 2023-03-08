//
// Created by Pat Hansen on 3/5/23.
//

#include "Force.h"

Force::Force(double x, double y): mAcceleration({x, y}) { }
Force::Force(Vector2D vec): mAcceleration(vec) {}

Vector2D Force::getAcceleration() {
    return mAcceleration;
}

int Force::getStartTime() { return mStartTime; }
int Force::getEndTime() { return mEndTime; }

void Force::setStartTime(int start) { this->mStartTime = start; }
void Force::setEndTime(int end) { this->mEndTime = end; }

bool Force::operator==(const Force &other) const {
    return mAcceleration == other.mAcceleration;
}