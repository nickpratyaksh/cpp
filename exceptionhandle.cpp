#include<iostream>
using namespace std;
int main(){
    

    try{int a = 5;
    if(a==5)
    throw "bruh";}

    catch(int x){
        cout<<"exception :"<<x;
    }

    catch(char const* err){
        cout<<"exception: "<< err;
    }

    catch(...){
        cout<<"error :(";
    }

    return 0;
}