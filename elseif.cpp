#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter ch";
    cin >>ch;
    if( ch== 'a' || ch=='z')
    {
        cout<<"lowercase";
        
    }
     else if( ch=='A' || ch=='Z')
    {
        cout<<"uppercase";
        
    }
    else
    {
        cout<<" numeral";
    }
    return 0;
}
