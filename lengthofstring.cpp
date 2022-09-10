#include<iostream>
using namespace std;

int getlength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
     count++;
     return count;
     
}

int main()
{
    char name[20];
    cout<<"enter name"<<endl;
    cin>>name;
    
    cout<<"length of string "<<getlength(name)<<endl;
}
