#include<iostream>
using namespace std;


struct information{
    /* data */
    float bill;
    char name;
    int salary;

};

union village{
    int subject;
    char name;
    float marks;
};

int main(){
    union village first;
    first.subject = 2;
    cout<<first.subject;
    // struct information vijay;
    // vijay.bill = 12.6;
    // vijay.name = 'k';
    // vijay.salary = 25000;
    // cout<<"this is the inforation "<<vijay.bill<<endl;
    // cout<<"this is the inforation "<<vijay.salary<<endl;
    // cout<<"this is the inforation "<<vijay.name<<endl;

    
    return 0;
}