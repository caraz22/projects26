#include <iostream>
#include "Player.h"

using namespace std;

int main() {
    Player player(100.0f, 200.0f);

    cout << "Player X: " << player.getX() << "\n";
    cout << "Player Y: " << player.getY() << "\n";

    

    return 0;
}