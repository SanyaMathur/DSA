#include<iostream>
using namespace std;

int main ()
{
    int a[100], num, i, sum = 0; // declaring variables
    cout << "Enter the size of the array : ";
    cin >> num;   
    cout << "\nEnter the elements of the array : "; // taking elements of array
    for (i = 0; i < num; i++)
    cin >> a[i];
    for (i = 0; i < num; i++)
    {
        sum += a[i];     // adding vaules or array
    }
    cout << "\nSum of  elements : " << sum;   // printing sum.....
    return 0;
}
