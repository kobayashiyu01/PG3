#include "Enemy.h"
#include <iostream>
using namespace std;

void Enemy::Approach() { 
    cout << 
        "tekigasekkin!" 
        << endl;
}

void Enemy::Attack() { 
    cout << 
        "tekigakougeki!"
        << endl;
}

void Enemy::Retreat() { 
    cout <<
        "tekigaridatu" 
        << endl; 
}


void Enemy::Update() {

    
    (this->*Enemy::table[2])();

    cout << "tuginojyoutainiikou(0: yes, hoka: no)";
    int input;
    cin >> input;

    if (input == 0) { index = (index + 1) % 3; }
}


void (Enemy::* Enemy::table[])() = {
    &Enemy::Approach,
    & Enemy::Attack, 
   &Enemy::Retreat 
};

