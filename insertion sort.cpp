#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			swap(arr[j],arr[j+1]);
			j = j - 1;
		}
	}
}
int main()
{
	int n;
	cout<<"enter size : ";
	cin>>n;
	int a[n];
	cout<<"enter elements : ";
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	insertionSort(a, n);
	cout<<"after sorting : \n";
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
}
