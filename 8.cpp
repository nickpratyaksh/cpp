#include <iostream>
class demo{
    public:
    int a;
};
int main(){
    demo object[5];
    for(int i = 1; i<=5;i++)
        object[i].a=i;
    for(int i = 1; i<=5;i++)
        std::cout<<object[i].a;
}