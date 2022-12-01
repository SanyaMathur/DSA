***
***
*** 

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
            cout<< " * " ;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
111
222
333
  
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
            cout<< i ;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
123
123
123
  
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
            cout<< j ;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
321
321
321
  
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
            cout<< n-j+1<< " " ;
            
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
123
456
789
  
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=n){
            cout<< count<< " " ;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*
**
****

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=i){
            cout<< " * " ;
            
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

1
22
333
4444
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=i){
            cout<< i ;
            
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

1
23
456
78910
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=1;
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=i){
            cout<< count << " "  ;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
