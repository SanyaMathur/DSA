#include<iostream>
using namespace std;

void swap (int * a,int *b)
{
    int temp= *a;
    *a=*b;
   * b=temp;
}
  void selectionsort(int arr[],int n)
    {
        int i,j;
        
        for (int i=0;i<n-1;i++)
        {
        int min_idx=i;
        for (j=i+1;j<n;j++)
        {
       
        if (arr[j] < arr[min_idx])
        {
         min_idx=j;
        }
        //if(min_idx!=i)
        swap (&arr[min_idx],&arr[i]);
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
    int arr[] = { 3,2,1,67,8};
    int N = sizeof(arr) / sizeof(arr[0]);
    selectionsort(arr, N);
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
