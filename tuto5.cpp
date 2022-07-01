#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    cout<<"Enter the number x and y : ";
    cin>>x>>y;
    z = x;
    x = y;
    y = z;
    cout<<x<<" ";    
    return 0;
}
