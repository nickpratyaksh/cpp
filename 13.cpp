#include <iostream>
class a{
    public: 
    int a = 1;
};
class b : public a{
    public:
    int b = 2;
};

int main(){
    b obj;
    std::cout<<obj.a<<"\n"<<obj.b;
}