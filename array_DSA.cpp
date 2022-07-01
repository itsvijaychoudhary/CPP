#include<iostream>
using namespace std;

int main(){
    int i;
    int arr[] = {1,3,9,6,8,4,0};

    // adding the elements in the array after 3 //

    int Num[10] = {1,2,3,4,5,6,7};
    if(Num[i] == 3){    // searching for the correct array //
        for(i=6; i>1; i--){         // printng all the elements together using loop //
            Num[i] = i + 1;
            for(i = 0; i < 6; i++){
                cout<<Num[i]<<" ";
            }
        }    
    }


    // delete the the number 6 in th array //

    for(i = 3; i < 6; i++){
        arr[i] = arr[i+1];
    }
    for(i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}