#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "Enemy.h"
#include "Min.h"
#include <iostream>
#include "Animal.h"
using namespace std;

int main() {
    Animal animal;
    Dog dog;
    Cat cat;

    // 親クラスのポインタで各オブジェクトを指す
    Animal* animal1 = &animal;
    Animal* animal2 = &dog;
    Animal* animal3 = &cat;

    animal1->sound();
    animal2->sound();
    animal3->sound();

    return 0;

	return 0;
}

