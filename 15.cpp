#include <iostream>
class a{
    public:
    int a =1;
};
class b : public a{
    public:
    int b = 2;
};
class c : public b{
    public:
    int c = 3;
};

int main(){
    c obj;
    std::cout<<obj.a<<obj.b<<obj.c;
}