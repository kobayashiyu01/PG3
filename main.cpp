#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Enemy.h"
#include "Min.h"
#include "Animal.h"
#include "IShape.h"

using namespace std;

int main() {
   
    Enemy enemy;
    while (1) enemy.Update();

  /*  IShape* shapes[2];
    shapes[0] = new Circle(2.0f);
    shapes[1] = new Rectangle(3.0f, 4.0f);

    for (int i = 0; i < 2;i++) {
        shapes[i]->Size();
        shapes[i]->Draw();
    }
   
    delete shapes[0];
    delete shapes[1];*/
	return 0;
}

