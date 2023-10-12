#include <iostream>
using namespace std;

void myfunc(int &x){
    x++;
    cout<<"inside function: "<<x<<endl;
}

int main(){
    int a = 5;
    int &b = a;
    myfunc(b);
    cout<<"inside main: "<<a<<endl;
}