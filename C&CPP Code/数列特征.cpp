#include <iostream>
using namespace std;
int main(){
  int n;
  int sum=0;
  int max;
  int min;
  int arry[10000];
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> arry[i];
    sum+=arry[i];
    }
    min=arry[0];
    max=arry[0];
    for(int i=0;i<n;i++)
    {
        if(arry[i]>max)
          max=arry[i];
        if (arry[i]<min)
          min=arry[i];
    }
  cout << max << endl << min << endl << sum << endl;
  return 0;
}