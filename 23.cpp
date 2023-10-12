#include <iostream>
class demo{
    public:
    void func();
};

void demo::func(){
    std::cout<<"Function declared outside class";
}

int main(){
    demo object;
    object.func();
}