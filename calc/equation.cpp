#include "equation.h"
#include <iostream>

equation::equation(){
	one = 0;
	two = 0;
};

equation::~equation(){};

int equation::math(){
	return 0;
};

int equation::getOne(){
	return one;
};

int equation::getTwo(){
	return two;
};

void equation::setNums(int a, int b){
	one = a;
	two = b;
};
