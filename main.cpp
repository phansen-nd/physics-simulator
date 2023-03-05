#include "Object.h"
#include "Space2D.h"

using namespace std;

int main() {
    Space2D space = Space2D();

    Object ball = Object("ball", 'o');
    ball.setPosition(2, 1);
    ball.setVelocity(3, 0);

    Object cat = Object("cat", 'c');
    cat.setPosition(4, 4);
    cat.setVelocity(2, 3);

    space.addObject(ball);
    space.addObject(cat);
    space.run();

    return 0;
}
