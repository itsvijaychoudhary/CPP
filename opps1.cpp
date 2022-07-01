#include<iostream>
using namespace std;

class worker
{
    private:
        int a, b, c;
    public:
        int d, e, f;
        void setData(int a1, int b1, int c1);
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
            cout<<"The value of f is "<<f<<endl;
        }
};

void worker :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;


}

int main(){
    worker vijay;
    vijay.d = 12;
    vijay.e = 13;
    vijay.f = 14;
    vijay.setData(4,5,6);
    vijay.getData();
    return 0;
}