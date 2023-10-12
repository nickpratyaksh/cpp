#include <iostream>
class demo{
    public:
    int a,b;
    demo(int x, int y){
        a=x;
        b=y;
    }
};

void operator+(demo& o1, demo& o2){
    std::cout<<"First no:"<<o1.a+o2.a<<std::endl;
    std::cout<<"Second no:"<<o1.b+o2.b<<std::endl;
}

int main(){
    demo obj1(2,5);
    demo obj2(1,2);
    obj1 + obj2;
}