#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    int sum=1;
    int num[10000];
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin >> num[i];
            if(num[i]%2==1)
                sum*=num[i];
        }
        cout << sum<<endl;
        sum = 1;
    }
    return 0;
}