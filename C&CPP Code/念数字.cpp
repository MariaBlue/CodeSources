 #include <iostream>
 #include <algorithm>
 #include <cmath>

 using namespace std;

 int main(){
   char word[][10]={
     ("ling"),("yi"),("er"),("san"),("si"),
     ("wu"),("liu"),("qi"),("ba"),("jiu")
   };
   int num;
   int temp;
   int tmp=0;
   cin >> num;
   if(num>0){
     while(num>0){
       tmp=tmp*10+num%10;
       num/=10;
     }
     cout << tmp << endl;
     while(tmp>0){
      temp=tmp%10;
      cout << word[temp] << " ";
      tmp/=10;
     }
   }
   else{
     cout << "fu" << " ";
     num=abs(num);
     while(num>0){
       tmp=tmp*10+num%10;
       num/=10;
     }
    cout << tmp << endl;
     while(tmp>0){
      temp=tmp%10;
      cout << word[temp] << " ";
      tmp/=10;
     }
   }
   cout << endl;
   return 0;
 }
