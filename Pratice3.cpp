//Pratice3.cpp

#include<iostream>
using namespace std;

class Demo{
    public:
    Demo (){
        cout<<"Constructer"<<endl;
    }
    ~ Demo(){
        cout<<"Distructor"<<endl;
    }

};

int main(){
    Demo d1,d2;
    return 0;
}