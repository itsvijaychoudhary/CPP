#include<iostream>
using namespace std;

//*function protoype *//
int sum(int ,int);
void vijay();


int main(){
    int num1, num2;
    cout<<"Enter the first number "<<endl;
    cin>>num1;
    cout<<"Enter the second number "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);
    vijay();
    return 0;  
}
void vijay( void ){
    cout<<"\nHello, This is vijay here ";
}
int sum(int a, int b){
    int c = a+b;
    return c;
}