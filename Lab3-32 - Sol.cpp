//4.Constr2 - exampl1.cpp
#include <iostream>
using namespace std;

class myclass {
    int a, b;
	float c;
public:
   explicit  myclass(int x, int y, float z); // конструктор
	~myclass() { cout << "In destr" << endl; }
	void show();
};

myclass::myclass(int x, int y,float z)
{
    cout << "In constructor\n";
    a = x;
    b = y;
	c = z;
}

void myclass::show()
{
    cout << a << ' ' << b << ' ' << c << "\n";
}

void func(myclass);

int main()
{
    myclass ob(4, 7, 5.5);
    myclass ob1 = myclass{5, 10, 6.6};
	ob = myclass{ 14, 17, 8.8 };
	ob.show();
    ob1.show();
    	
	func (myclass{ 15,30, 7.7 });
	return 0;
}

void func(myclass ob3)
{
	ob3.show();
}