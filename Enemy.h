#pragma once
class Enemy {
public:
    void Update();

    void Approach(); 
    void Attack();   
    void Retreat();  

    
    static void (Enemy::*table[])();
private:
    int index = 0;
};
