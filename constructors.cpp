#include<iostream>
using namespace std;
class demo{
    int a, b, c;
    public:
    demo(){
        cout<<"Default constructor called"<<endl;
        a=b=c=1;
    }
    demo(int x, int y, int z){
        cout<<"Parametrized constructor called"<<endl;
        a=x;b=y;c=z;
    }
    demo(demo &temp){
        cout<<"Copy constructor called"<<endl;
        a=temp.a;b=temp.b;c=temp.c;
    }
    ~demo(){
        cout<<"Destructor called"<<endl;
    }
    void print(){
        cout<<a<<b<<c<<endl;
    }
};

int main(){
    demo obj1;
    obj1.print();
    demo obj2(obj1);
    obj2.print();
    demo obj3(2,2,2);
    obj3.print();
}