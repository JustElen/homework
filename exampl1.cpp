//8.RetObj - exampl1.cpp
// ����������� ������� �� �������
#include <iostream>
#include <cstring>
using namespace std;

class samp {
    char s[80];
public:
    void show() { cout << s << "\n"<<flush; }
    void set(char *str) { strcpy(s, str); }
    ~samp () 
	{cout<<"In destructor"<<endl<<flush;}
};

// ���������� ������ ���� samp
samp input()
{
    char a[80];
    samp str;

    cout << "Input string: ";
    cin >> a;

    str.set(a);

    return str;
}

int main()
{
    samp ob;

    // ������������ ������������� �������� ������� ob 
    ob=input();
    ob.show();

    return 0;
}

