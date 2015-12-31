#using <mscorlib.dll>

__gc class equation{
public:
	equation();
	~equation();
	virtual int math();
	int getOne();
	int getTwo();
	void setNums(int a, int b);

private:
	int one;
	int two;
};