#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main()
{
    double n,m;
    double num;
    double sum = 0;
    while(cin>>n>>m)
    {
        num = n;
        for(int i=0;i<m;i++)
        {
            sum+=num;
            num = sqrt(num);
        }
        printf("%.2f\n",sum);
        sum = 0;
    }
    return 0;
}