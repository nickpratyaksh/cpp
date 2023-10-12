#include<iostream>
using namespace std;
class a{
    protected:
    int a = 5;
};

class b: public a{
    public:
    void print(){
        cout<<a;
    }
};

int main(){
    b obj;
    obj.print();
}