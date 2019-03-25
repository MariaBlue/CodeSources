#include <iostream>
using namespace std;
int main ()
{
    int a,b;    
    while(cin>>a>>b){
        int i,j,k,n;
        int cnt = 0;
        for (n=a;n<=b;n++)
        {
            i=n/100;
            j=n/10-i*10;
            k=n%10;

            if (n == i*i*i + j*j*j + k*k*k)
            {
                if(cnt != 0){
                    std::cout<<" ";
                }
                cout<<n;
                ++cnt;
            }
                
        }
        if(cnt == 0)
        {
            std::cout<<"no";
        }
        cout<<endl;
    }
    return 0;
}