#pragma once
class Enemy {
public:
    void Update();

    void Approach(); 
    void Attack();   
    void Retreat();  

    
    
private:
    int index = 0;
    static void (Enemy::*table[])();
};
