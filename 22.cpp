#include <iostream>
class a{
    public:
    virtual void func(){
        std::cout<<"function from class a";
    }
};

class b: public a{
    public:
    void func(){
        std::cout<<"function from class b";
    }
};

int main(){
    b object;
    a *objptr = &object;
    objptr -> func();
}