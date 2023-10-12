#include <iostream>
class demo{
    public:
    int a;
    demo(int b){
        a=b;
    }
};
int main(){
    demo obj(10);
    std::cout<<obj.a;
}