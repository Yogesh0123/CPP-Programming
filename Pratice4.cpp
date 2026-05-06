//Pratice4.cpp
#include<iostream>
using namespace std;

class Demo{
    public:
    Demo()
    {
         cout<<"Constructor"<<endl;
    }
    ~Demo()
    {
        cout<<"Destructor"<<endl;
    }
};

int main(){
    Demo d1;
    {
        Demo d2;
    }
    return 0;
}