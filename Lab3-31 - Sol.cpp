
#include <iostream>
#include <cstring>
using namespace std;

class samp {
    char s[80];
public:
   explicit  samp(const char *str)
	{ strcpy_s(s,80, str); }
    ~samp () 
	{cout<<"In destructor"<<endl<<flush;}
    void show() { cout << s << "\n"<<flush; }
};



int main()
{
    samp ob1("Test1");
    ob1.show();
    
	samp ob2 = samp("Test2");
    ob2.show();
	
	ob1 = samp("Test2"); 
	ob1.show();

    return 0;
}

