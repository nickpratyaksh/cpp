#include <iostream>
class calculate{
    int a,b,sum, diff;
    public:
    void calc(){
        std::cout<<"Enter two numbers: ";
        std::cin>>a>>b;
        sum = a+b;
        diff= a-b;
    }
    friend class print;
};

class print{
    public:
    void psum(calculate tempobj){
        std::cout<<"The sum is: "<<tempobj.sum<<"\n";
    }
    void pdiff(calculate tempobj){
        std::cout<<"The difference is: " <<tempobj.diff<<"\n";
    }
};

int main(){
    calculate obje;
    obje.calc();
    print printobj;
    printobj.psum(obje);
    printobj.pdiff(obje);
}