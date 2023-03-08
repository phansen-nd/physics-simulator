#include "src/Object.h"
#include "src/Space2D.h"

int main() {
    Space2D space = Space2D();

    Object ball = Object("ball", 'o');
    ball.setPosition(1, 50);
    ball.addForce({0, -1}, 0, Space2D::maxTime);

    Object cat = Object("cat", 'c');
    cat.setPosition(4, 25);
    cat.addForce({0, -1}, 0, Space2D::maxTime);
    cat.addForce({1, 2}, 0, 2);

    space.addObject(ball);
    space.addObject(cat);
    space.run();

    return 0;
}
