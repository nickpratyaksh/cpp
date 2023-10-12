#include <iostream>
class calculate{
    int a, b, sum;
    public:
    void sumo(){
        // std::cout<<"Enter two numbers: ";
        std::cin>>a>>b;
        sum=a+b;
    }
    friend void print(calculate);
};

void print(calculate tempobj){
    std::cout<<"The sum is: "<<tempobj.sum;
}

int main(){
    calculate inst;
    inst.sumo();
    print(inst);
    return 0;
}