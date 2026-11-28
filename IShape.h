#pragma once
#include <cstdio>
class IShape
{
public:
	virtual	void Size() = 0;
	virtual void Draw() = 0;
	virtual ~IShape() = default;
};

class Circle : public IShape
{
private:
	float rad_;
	float area_ = 0.0f;
public:
	Circle(float r) { rad_ = r; }

	void Size()override { area_ = rad_ * rad_ * 3.14159f; }
	void Draw()override { printf("Area:%f\n", area_); }
};

class Rectangle : public IShape
{
private:
	float wid_;
	float hgi_;
	float area_ = 0.0f;
public:
	Rectangle(float wid, float hgi) {wid_ = wid ;hgi_ = hgi; }

	void Size()override { area_ = wid_ * hgi_; }
	void Draw()override { printf("Area:%f\n", area_); }
};
