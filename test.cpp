#include <iostream>
#include <conio.h>
using namespace std;

class mainclass{
    private: 
    int pri = 2;
    protected:
    int pro = 3;
    public:
    int pub = 1;
    void pvtfn(){cout << pri;}
};
    
class secclass : public mainclass{
    public:
    int neun = 4;
    int profn(){return pro;}
};    

int main(){
    mainclass objec;
    objec.pvtfn();
    return 0;
}
