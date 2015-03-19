//Lai Zhichen 2014060105007
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int k=0;
int hanoi(int n,char a,char b,char c)
{
    //k++;
    if(n==1)
        cout<<a<<" to "<<c<<endl;
    else
    {
        hanoi(n-1,a,c,b);
        cout<<a<<" to "<<c<<endl;
        hanoi(n-1,b,a,c);

    }
}
int main()
{
    int n;
    cin>>n;
    hanoi(n,'A','B','C');
    cout<<pow(2,n)-1;
}
