#include<iostream>
using namespace std;
class demo{
    public:
    void myfunc(){
        cout<<"function called"<<endl;
    }
};

int main(){
    int obj[5];
    for (int i = 0; i < 8; i++)
    {
        obj[i]=i+1;
        
    }
    cout<<obj[9];
    
}