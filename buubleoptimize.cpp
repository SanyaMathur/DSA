#include<iostream>
using namespace std;

  void bubblesort(int arr[],int n)
    {
        int i,j;
        bool swapped;
        for (int i=0;i<=n;i++)
        {
        swapped=false;
        for (j=0;j<n-1;j++)
        {
       
        if (arr[j] > arr[j+1])
        {
        swap (arr[j],arr[j+1]);
        swapped=true;
        }
        }
        
        if (swapped == false)
        {
            break;
        }
        }
    }
    void printarr (int arr[],int size)
    {
        int i;
        for (int i=0;i<size ;i++ )
        cout<<arr[i] << " ";
        cout<<endl;
    }
    int main()
    {
    int arr[] = { 5, 1, 4, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, N);
    cout << "Sorted array: \n";
    printarr(arr, N);
    return 0;
        /*int n;
        cout<<"Enter number of elements\n";
        cin>>n;
        bubblesort (arr,n);
        cout<<"sorted array:\n";
        printarr(arr,n);
        return 0; */
    }
