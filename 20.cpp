#include <iostream>
class demo{
    int a =5;
    int b = 10;
    public:
    void sum(){
        std::cout<<a+b;
    }
};

int main(){
    demo object;
    demo *objectptr = & object;
    objectptr->sum();
}