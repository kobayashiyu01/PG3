#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "Enemy.h"

using namespace std;


int main() {
    Enemy enemy;
    while (1) enemy.Update();
    return 0;
}

