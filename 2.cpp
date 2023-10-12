#include <iostream>
using namespace std;

class area{
    public:
    int l,b,area;
    void input(){
        cout<<"Enter the length and breadth of rectangle: ";
        cin>>l>>b;
    }
    void output(){
        cout<<"The area of rectangle is: "<<l*b;
    }
};

int main(){
    area rec;
    rec.input();
    rec.output();
    return 0;
}