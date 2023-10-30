// strtref.cpp -- using structure references
#include <iostream>
using namespace std;
struct sysop
{
    char name[26];
    char quote[64];
    int used;
};

sysop & use(sysop & sysopref);  // function with a reference return type

int main()
{
    sysop looper =
    {
        "Rick \"Fortran\" Looper",
        "I'm a goto kind of guy.",
        0
    };

    use(looper);            // looper is type sysop
    cout << looper.used << " use(s)\n";

    use (use(looper));      // use(looper) is type sysop
    cout << looper.used << " use(s)\n";

    sysop morf =
    {
        "Polly Morf",
        "Polly's not a hacker.",
        0
    };
    use(looper) = morf;     // can assign to function!
    cout << looper.name << " says:\n" << looper.quote << '\n';
    cout << looper.used << " use(s)\n";
	return 0;
}

// use() returns the reference passed to it
sysop & use(sysop & sysopref)
{
    cout << sysopref.name << " says:\n";
    cout << sysopref.quote << "\n";
    sysopref.used++;
    return sysopref;
}

