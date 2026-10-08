#pragma once

#include <string>

using namespace std;

class Player {
    private:
    float x;
    float y;
    float speed;

    public:
    Player(float startX, float startY); // add speed to constructor

    void update();

    float getX();
    float getY();
};