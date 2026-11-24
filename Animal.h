#pragma once
#include <cstdio>

class Animal {

public:
    // 親クラスの仮想関数
    virtual void sound() const {
        printf("AnimalSound\n");
    }

    virtual ~Animal() = default;
};

class Dog : public Animal {

public:
    // 親クラスのsoundをオーバーライド
    void sound() const override {
        printf("DogSound:わん\n");
    }
};

class Cat : public Animal {

public:
    // 親クラスのsoundをオーバーライド
    void sound() const override {
        printf("CatSound:にゃー\n");
    }
};
