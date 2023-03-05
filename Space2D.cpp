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
            for (auto & object : mObjects) {
                Coordinate2D position = object.getPosition();
                if (position.x == x && position.y == y)
                    toDraw = object.getIcon();
            }
            cout << " " << toDraw;
        }
        cout << "\n";
    }
    cout << "\n";
}

void Space2D::tick() {
    for (auto & object : mObjects) {
        object.tick();
    }
};

void Space2D::run() {
    int timeInterval = 500 * 1000;
    int iterations = 15;

    for (int i = 0; i < iterations; i++) {
        tick();
        draw();
        usleep(timeInterval);
    }
}