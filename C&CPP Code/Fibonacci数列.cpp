#include <iostream>
using namespace std;
int main(){
    long f[1000000];
    f[1]=f[2]=1;
    for(int i=3;i<=1000000;i++)
        f[i]=(f[i-1]+f[i-2])%10007;
    long n;
	cin>>n;
    cout<<f[n]<<endl;
    return 0;
}