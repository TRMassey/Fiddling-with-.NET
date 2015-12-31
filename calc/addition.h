#pragma once
#using <mscorlib.dll>

__gc class addition : public equation {
public:
	int math(){ 
		int one = getOne();
		int two = getTwo();
		return one + two; 
	};
};