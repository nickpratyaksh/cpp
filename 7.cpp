#include <iostream>
int area(int length){
    return length*length;
}
int area(int length, int breadth){
    return length*breadth;
}
int main(){
    std::cout<< area(5,2);
    return 0;
}
