//
// Created by Pat Hansen on 3/4/23.
//

#ifndef PHYSICS_OBJECT_H
#define PHYSICS_OBJECT_H

#include <vector>
#include <string>
using namespace std;

struct Coordinate2D {
    int x, y;
};

class Object {
    vector<int> mPosition;
    vector<int> mVelocity;
    vector<int> mAcceleration;
    string mName;
    char mIcon;

public:
    Object(string name, char icon);
    string toString();

    Coordinate2D getPosition();
    char getIcon();
    void setPosition(int x, int y, int z = 0);
    void setVelocity(int x, int y, int z = 0);
    void setAcceleration(int x, int y, int z = 0);

    void tick();
};

#endif //PHYSICS_OBJECT_H
