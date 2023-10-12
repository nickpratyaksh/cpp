#include <iostream>
class demo{
    public:
    int a=1;
    demo(){
        std::cout<<"Constructor called"<<std::endl;
    }
    ~demo(){
        std::cout<<"Destructor called";
    }
};

int main(){
    demo obj;
    std::cout<<"Value from object used: "<<obj.a<<std::endl;
}