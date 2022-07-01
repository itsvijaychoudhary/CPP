#include<iostream>
using namespace std;

// default arguments is 1.09 but we can use are own values also in function parametres itself and if we dont use anything then it takes default value //

float investment(int amount, float interest = 1.09){
    return amount * interest;

}
int main(){
    int intial = 50000;
    cout<<"If you had invested "<<intial<<" in mutual funds 1 Year ago, you have recivied "<<investment(intial)<<endl;
    cout<<"If you had invested "<<intial<<" in equity 1 Year ago, you have recivied "<<investment(intial, 1.16);

    return 0;
}