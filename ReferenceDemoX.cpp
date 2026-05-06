#include <iostream>
using namespace std;

int main()
{
    //we can create one reference to one variable 
    int no = 11;
    int &x = no;

    //we can create multiple references for single variable 
    int &y = no;

    // we can craete reference to reference 
    int &z = y;

    //we can crate reference to pointer.
    int *p = &no;
    int *(&q) = p;

    return 0;
}
// RefereceDemo.cpp
//RefereceDemo.cpp