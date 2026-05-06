//Pratice5.cpp
#include<iostream>
using namespace std;

class Demo{
    public:
    Demo(int a, int b)
    {
        cout<<"Addition is Your birthday Date: "<<a+b<<endl;
    }
    ~Demo()
    {
        cout<<"Destructor"<<endl;
    }

};
int main(){
    Demo d1(5,4);
    return 0;
}