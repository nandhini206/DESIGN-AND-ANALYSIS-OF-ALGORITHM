#include <iostream>
using namespace std;

void search(int arr[], int N, int x)
{
    int i,c=0,f=0;
    for (i = 0; i < N; i++)
    {
        c++;
        if (arr[i] == x)
        {
            f=1;
            break;
        }
    }
    (f==1)?cout<<"elemnt found at index : "<<c-1:cout<<"element not found";

}
int main(void)
{
    int n,t;
    cout<<"enter size : ";
    cin>>n;int a[n];
    cout<<"enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter target : ";
    cin>>t;
    search(a, n, t);

}







