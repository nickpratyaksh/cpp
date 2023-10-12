#include <iostream>
inline void func(int a){
    std::cout<<a;
}
int main(){
    for(int i=1;i<=5;i++)
    func(i);
    return 0;
}