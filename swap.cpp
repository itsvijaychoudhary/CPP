#include<iostream>
using namespace std;
// This will not swap the values bacause it takes the actual paramentres//
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
// Call by refrence by pointers //
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x=4, y=9;
    cout<<"The value of X is "<<x<<" And the value of Y is "<<y<<endl;
    //swap(x, y); this will not swap //
    swapPointer(&x, &y);
    cout<<"The value of X is "<<x<<" And the value of Y is "<<y<<endl;
    return 0;
}