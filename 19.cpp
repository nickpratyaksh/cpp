#include <iostream>
class a{
public:
    class b{
        public:
        int b = 2;
    };
};
int main(){
    a::b obj;
    std::cout<<obj.b;
}