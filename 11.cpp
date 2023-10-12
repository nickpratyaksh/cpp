#include <iostream>
class demo{
    public:
    int a;
    demo(){}
    demo(demo &b){
        a=b.a;
    }
};
int main(){
    demo obj1;
    obj1.a=5;
    demo obj2(obj1);
    std::cout<<obj2.a;
}