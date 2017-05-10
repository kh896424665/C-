#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int i,n=0,k,m;
    bool prime;
    for(m=101;m<200;m=m+2)
    {
        k=(int)sqrt(m);
        prime=true;
    	i=2;
        while(i<=k)
        {
            if(m%i==0)
               {
                   prime=false;
                   break;
               }
            i++;

        }
        if(prime)
        {
            n++;
            cout <<setw(10)<<m;
            if(n%10==0)
                cout <<endl;
        }
    }
    return 0;
}
