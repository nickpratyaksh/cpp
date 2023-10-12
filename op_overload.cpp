#include <iostream>
using namespace std;
class dist{
    public:
    int km;
    int m;
    dist(int x, int y){
        km=x;m=y;
    }
};

void operator+ (dist a, dist b){
    cout<<a.km+b.km<<" km"<<endl;
    cout<<a.m+b.m<<" metres"<<endl;
}

int main(){
    dist school(5,200);
    dist college(12,400);
    school+college;
}