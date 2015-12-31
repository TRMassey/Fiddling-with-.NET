#using <mscorlib.dll>

__gc class subtraction : public equation {
public:
	int math(){
		int one = getOne();
		int two = getTwo();
		return one - two;
	};
};