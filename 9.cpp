#include <iostream>
class demo{
    public:
    int a;
    demo(){
        a=5;
    }
};
int main(){
    demo obj;
    std::cout<<obj.a;
}