#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long f1=1,f2=1;
    int n,i;
    cout <<"������Ҫ����ĸ���:";
    cin >>n;
    for(i=1;i<=n/2;i++)
    {
        cout <<setw(10)<<f1<<setw(10)<<f2;
        if(i%2==0) cout <<endl;
        f1=f1+f2;
        f2=f1+f2;
    }
    return 0;
}
