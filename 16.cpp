#include <iostream>
class a{
    public:
    int a =1;
};
class b : public a{
    public:
    int b = 2;
};
class c : public a{
    public:
    int c = 3;
};

int main(){
    c obj1;
    b obj2;
    std::cout<<obj1.a<<obj2.a;
}