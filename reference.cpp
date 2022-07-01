#include<iostream>
using namespace std;

// Swap by reference //
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


int main(){
    int x=12, y=25;
    cout<<"The value of x is "<<x<<" And the value of y is "<<y<<endl;
    swapReferenceVar(x, y);
    cout<<"The value of x is "<<x<<" And the value of y is "<<y<<endl;
        return 0;
}