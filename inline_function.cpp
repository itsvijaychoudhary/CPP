#include<iostream>
using namespace std;

// here we are using inline function so that the excution do not take more time. It is used when the same function is being called several times in a code //
inline int product( int a, int b){
    return a * b;
}
// note: do not use inline for longer function as it is not feasible //
int main(){
    int a,b;
    cout<<"Enter the two numbers to be multiplied to each other "<<endl;
    cin>>a>>b;
    cout<<"The multiplication of the two numbers is "<<product(a,b)<<endl;
    cout<<"The multiplication of the two numbers is "<<product(a,b)<<endl;
    cout<<"The multiplication of the two numbers is "<<product(a,b)<<endl;
    cout<<"The multiplication of the two numbers is "<<product(a,b)<<endl;
    cout<<"The multiplication of the two numbers is "<<product(a,b)<<endl;
    cout<<"The multiplication of the two numbers is "<<product(a,b)<<endl;
    cout<<"The multiplication of the two numbers is "<<product(a,b)<<endl;
    cout<<"The multiplication of the two numbers is "<<product(a,b)<<endl;
    cout<<"The multiplication of the two numbers is "<<product(a,b)<<endl;

    return 0;
}