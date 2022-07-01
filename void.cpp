#include<iostream>
using namespace std;
class ABC{
    public: int a;
    ABC()
    {a=5;}
};

int main(){
    ABC X;
    cout<<"value of a is: "<<X.a;
    return 0;
}