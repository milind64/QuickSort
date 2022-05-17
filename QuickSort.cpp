#include <iostream>
using namespace std;

void swap(int *a ,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int arr[], int low, int high)
{
    int i= -1;
    for (int j=0;j<)
    int pivot = arr[low];
    if ()
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    cout << n << endl;
    printArray(arr, n);
    return 0;
}