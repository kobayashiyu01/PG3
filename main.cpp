#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "Enemy.h"
#include "Min.h"
#include <iostream>

using namespace std;

int main() {
	TemplateClass<int, float> intFloatTemplate(100, 50.0f);
	TemplateClass<int, double> intDoubleTemplate(80, 20.0);
	TemplateClass<float, int> floatIntTemplate(2.0f, 18);
	TemplateClass<float, double> floatDoubleTemplate(11.0f, 3.5);
	TemplateClass<double, int> doubleIntTemplate(234.0, 123);
	TemplateClass<double, float> doubleFloatTemplate(400.1, 500.2f);

	std::cout << "int(100)&float(50.0f):"
		<< intFloatTemplate.Min() << std::endl;

	std::cout << "int(80)&double(20.0):"
		<< intDoubleTemplate.Min() << std::endl;

	std::cout << "float(2.0f)&int(18):"
		<< floatIntTemplate.Min() << std::endl;

	std::cout << "float(11.0f)&double(3.5):"
		<< floatDoubleTemplate.Min() << std::endl;

	std::cout << "double(234.0)&int(123):"
		<< doubleIntTemplate.Min() << std::endl;

	std::cout << "double(400.1)&float(500.2):"
		<< doubleFloatTemplate.Min() << std::endl;

	return 0;
}

