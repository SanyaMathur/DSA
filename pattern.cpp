1
23
345
4567

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   
    int i=1;
    while (i<=n){
        int j=1;
        int value=i;
        while (j<=i){
            cout<< value  ;
           value=value+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
AAA 
BBB
CCC
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   
    int i=1;
    while (i<=n){
        int j=1;
        
        while (j<=n){
            char ch='A' + i -1;
            cout<< ch;
           
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
