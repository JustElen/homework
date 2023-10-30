#include <iostream>
using namespace std;
typedef int Arr10[10];
// ok: parameter is a reference to an array; size of array is fixed
     void printValues(Arr10&); 
     int main()
     {
         int i = 0, j[2] = {0, 1};
         int k[10] = {0,1,2,3,4,5,6,7,8,9};
         
         //printValues(j);  // error: argument is not an array of 10 ints
         printValues(k);  // ok: argument is an array of 10 ints
         
		 
         Arr10& r_arr = k;                 //independent reference
	     cout <<endl<<r_arr[9]<<endl;

		 return 0;
     }

// ok: parameter is a reference to an array; size of array is fixed
     void printValues(Arr10& a)
     {
         for (size_t i = 0; i != 10; ++i) {
             cout << a[i] << endl;
         }
     }



