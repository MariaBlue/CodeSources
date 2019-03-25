#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int year;
    int month;
    int day;
    int sum = 0;
    int num[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int num1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    while(~scanf("%d/%d/%d",&year,&month,&day))
    {
        if(year%4==0 && year%100!=0 || year%400==0)
        {
            for(int i=0;i<month-1;i++)
                sum+=num[i];
            sum+=day;
        }

        else
        {
            for(int i=0;i<month-1;i++)
                sum+=num1[i];
            sum+=day;
        }
        cout << sum <<endl;
        sum = 0;
    }
    return 0;
}