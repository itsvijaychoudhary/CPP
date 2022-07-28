#include<iostream>
using namespace std;

// function for sorting the values of the array //
void SelectionSort(int arr[], int n){
    int i, j, Min_value, temp;
    for ( i = 0; i < n-1; i++)
    {
        Min_value = i;
        for ( j = i+1; j < n; j++)
            if (arr[j]<arr[Min_value])
                Min_value = j;
        // Swapping the values of the 
        temp = arr[i];
        arr[i] = arr[Min_value];
        arr[Min_value] = temp;
    }  
};

void PrintArray(int arr[], int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
};

int main(){
    int arr[] = {2, 12, 6, 3, 9, 1};
    int n = 6;
    PrintArray(arr, n);
    SelectionSort(arr, n);
    cout<<" "<<endl;
    cout<<"Sorted array is : "<<endl;
    PrintArray(arr, n);
    return 0;
}