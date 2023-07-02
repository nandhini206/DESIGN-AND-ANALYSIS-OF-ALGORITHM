#include<iostream>
using namespace std;
void selectionSort(int *array, int size)
{
   int i, j, imin;
   for(i = 0; i<size-1; i++)
   {
      imin = i;
      for(j = i+1; j<size; j++)
      {
         if(array[j] < array[imin])
            imin = j;
         swap(array[i], array[imin]);
      }
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++)
   {
      cin >> arr[i];
   }
   selectionSort(arr, n);
   cout << "Array after Sorting: \n";
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
}
