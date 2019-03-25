#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,i;
    int b1,b2,b3;
    double a[101];
    while(cin>>n&&n!=0)
    {
        b1=b2=b3=0;
        for(i=0;i<n;i++)
         {
            cin>>a[i];
         }
         for(i=0;i<n;i++)
         {
            if(a[i]<0)
                b1++;
            else if(a[i]==0)
                b2++;
            else
                b3++;
         }
         cout<<b1<<" "<<b2<<" "<<b3<<endl;
       }
    return 0;
}