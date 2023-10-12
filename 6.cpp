#include <iostream>
class counter{
    static int count;
    public:
    void sdf(){
        count++;
        std::cout<<count;
    }
};

int counter::count=0;

int main(){
    counter object1;
    object1.sdf();
    counter object2;
    object2.sdf();
    // std::cout<<object2.count;
}