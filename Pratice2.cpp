//Pratice2.cpp

#include<iostream>
using namespace std;
class Demo
{
    int x;
    public:
    Demo(int a)
    {
        x=a;
        cout<<"Value is = "<<x<<endl;
    }
    ~ Demo(){
        cout<<"Distructor"<<endl;
      
    }
};
int main(){
    Demo d1(10);
    return 0;
}