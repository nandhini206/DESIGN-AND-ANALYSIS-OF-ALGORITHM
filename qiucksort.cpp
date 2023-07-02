#include <iostream>
using namespace std;
int partition(int arr[], int s , int e)
{
    int i = s+1;
    int p  = arr[s];

    for(int j = s+1 ; j <= e ; j++)
    {
        if(arr[j] < p){
            swap(arr[i],arr[j]);
            i+=1;
        }
    }
    swap(arr[i-1],arr[s]);
    return i -1 ;
}

void quickSort(int arr[] , int start , int end)
{

    if(start < end)
    {
        int p_Pos = partition(arr,start,end);
        quickSort(arr,start , p_Pos -1);
        quickSort(arr,p_Pos+1 , end);
    }
}
int main()
{
   int n;
    cout<<"enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter values of array :";
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    cout<<"\nafter sorting \n";
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }

  }
