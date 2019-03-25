#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int i;
    int m,n;
    long sumj,sumo;
    long x=0,y=0;
    while(cin>>m>>n)
    {
        if(m>n)
        {
            i=m;
            m=n;
            n=i;
        }
        for(int i=m;i<=n;i++)
        {
            if(i%2==0)
            {
                sumo = i*i;
                x+=sumo;
            }
            else
            {
                sumj=i*i*i;
                y+=sumj;
            }
        }
        cout <<x<<" "<<y<<endl;
        x=0;
        y=0;
    }
    return 0;
}