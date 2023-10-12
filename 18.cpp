#include <iostream>
class a{
    public:
    int a =1;
};
class e{
    public:
    int e= 5;
};
class b : public a{
    public:
    int b = 2;
};
class c : public a, public e{
    public:
    int c = 3;
};
class d : public b{
    public:
    int d = 4;
};

int main(){
    d obj;
    c obj2;
    std::cout<<obj.a<<obj.b<<obj.d;
    std::cout<<obj2.a<<obj2.c<<obj2.e;
}