class Age {
	int age;
public:
	Age(int a) { age = a; }
	void older() { 
		age++;
	}
};

class Circle {
	int radius;
public:
	double getArea();
};