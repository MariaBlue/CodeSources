 #include <iostream>
 #include <algorithm>
 #include <cmath>

 using namespace std;

 int main(){

   long j,a=1,sum=0;
   int n;
   cin >> n;
    for(int i=1;i<=n;i++)
    {
        a*=i;
        sum+=a;
    }
        cout << sum << endl;
   return 0;
 }
