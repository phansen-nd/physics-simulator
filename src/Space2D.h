//
// Created by Pat Hansen on 3/4/23.
//

#ifndef PHYSICS_SPACE2D_H
#define PHYSICS_SPACE2D_H

#include <string>
#include "Object.h"

using namespace std;

class Space2D {
    int mSize;
    vector<Object> mObjects;

    void draw();
    void tick(int time);

public:
    Space2D(int dimension = 50);

    void addObject(Object object);

    void run();

    static const int maxTime = 20;
};


#endif //PHYSICS_SPACE2D_H
