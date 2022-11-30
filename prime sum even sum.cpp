#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int sum=0;
    int i=1;
    while (i<=n)
    {
        sum=sum+i; 
        i+=1;
    }
    cout<<" value of sum  is= " << sum << endl ;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int sum=0;
    int i=2;
    while (i<=n)
    {
        sum=sum+i; 
        i+=2;
    }
    cout<<" value of all even number is= " << sum << endl ;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    
    int i=2;
    while (i<n)
    {
       if (n%i==0)
       {
           cout<<"not prime" << i <<endl;
       }
       else
       {
           cout<<"primne" << i <<endl;
       }
       i +=1;
    }
    return 0;
}
