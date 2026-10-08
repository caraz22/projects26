#include "Player.h"

Player::Player(float startX, float startY) {
    x = startX;
    y = startY;
    // speed = 5.0f; 
}

// void Player:: update() {
    // for updating player position
// }

float Player::getX() {
    return x;
}

float Player::getY() {
    return y;
}