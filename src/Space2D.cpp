//
// Created by Pat Hansen on 3/4/23.
//

#include <sstream>
#include <iostream>
#include <unistd.h>
#include "Space2D.h"

Space2D::Space2D(int dimension) {
    mSize = dimension;
}

void Space2D::addObject(Object object) {
    mObjects.push_back(object);
}

void Space2D::draw() {
    for (int y = mSize - 1; y >= 0; y--) {
        for (int x = 0; x < mSize; x++) {
            char toDraw = '.';
            for (auto const& object : mObjects) {
                Vector2D position = object.getPosition();
                if (position.x == x && position.y == y)
                    toDraw = object.getIcon();
            }
            cout << " " << toDraw;
        }
        cout << "\n";
    }
    cout << "\n";
}

void Space2D::tick(int time) {
    for (auto & object : mObjects) {
        object.tick(time);
    }
};

void Space2D::run() {
    int iterations = maxTime;

    for (int t = 0; t < iterations; t++) {
        cout << "Time: " << t << endl;
        tick(t);
        draw();
        usleep(200*1000);
    }
}