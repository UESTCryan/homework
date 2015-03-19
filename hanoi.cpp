#include<iostream>
#include<algorithm>
using namespace std;
int k=0;
int hnt(int n,char a,char b,char c)
{
    k++;
    if(n==1)
        cout<<a<<" to "<<c<<endl;
    else
    {
        hnt(n-1,a,c,b);
        cout<<a<<" to "<<c<<endl;
        hnt(n-1,b,a,c);

    }
}
int main()
{
    int n;
    cin>>n;
    hnt(n,'A','B','C');
    cout<<k;
}
