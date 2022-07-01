#include <iostream>
using namespace std;

int main(){
    int x,y,z,a;
    cout<<"Enter the marks of first subject : ";
    cin>>x;
    cout<<"Enter the marks of second subjets : ";
    cin>>y;
    cout<<"Enter the marks of third subjets : ";
    cin>>z;
    a=x+y+z/3;
    a=a/10;
    
    switch(a){
        case 9:
        cout<<"this is grade a";
        break;
        case 8:
        cout<<"this is grade b";
        break;
        default:
        cout<<"fail";
        break;

    }
    return 0;
    }

