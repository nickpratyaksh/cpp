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
class d : public b{
    public:
    int d = 4;
};

int main(){
    d obj;
    std::cout<<obj.a<<obj.b<<obj.d;
}