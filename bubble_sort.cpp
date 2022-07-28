#include <iostream>
using namespace std;

// using sorting function for bubble sorting //

void BubbleSort(int arr[], int n)
{
  int i, j, temp;
  for (i = 0; i < n - 1; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
};

// printing the values of the array //

void PrintSorting(int arr[], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
};

int main()
{
  int arr[] = {4, 1, 3, 9, 7};
  int n = 5;
  PrintSorting(arr, n);
  cout << " " << endl;
  cout << "After sorting : " << endl;
  BubbleSort(arr, n);
  PrintSorting(arr, n);
  return 0;
}