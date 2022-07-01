#include<iostream>
using namespace std;
// function overloading is the case when a same function is used for different purposes and the parametres passed in the statement dicides the use of function //

// calculate the volume of the sphere
int volume(int r){
    return 4/3*3.14*r*r*r ;
}

// calculate the volume of the cylinder
int volume(int r, int h){
    return 3.14*r*r*h ;
}

int main(){
    cout<<"The volume of the sphere having 3 radius is "<<volume(3)<<endl;
    cout<<"The volume of the cylinder having r=2 and h=4 is "<<volume(2,4)<<endl;
    
    return 0;
}