 #include <iostream>
 #include <algorithm>
 #include <cmath>
 using namespace std;

 int main(){
   int n;
   int a=0,b=0;
   int nums[1001];
   cin >> n;
   for(int i=0;i<n;i++){
     cin >> nums[i];
     if(nums[i]%2==0){
       b++;
     }
     else{
       a++;
     }
   }
    cout << a << " "<< b << endl;
   return 0;
 }
