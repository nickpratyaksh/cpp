#include <iostream>
class a{
    protected:
    int a =1;
};
class b : public a{
    public: 
    void print(){
        std::cout<<a;
    }
};

int main(){
    b obj;
    obj.print();
}