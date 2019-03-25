#include <iostream>
#include <algorithm>
using namespace std;
int cmp(int a, int b){
  return a>b;
}

int main(){
  int n;  //序列长度  
  int num[1000];  //给定的序列
  int temp[1000]; //缓存数组
  int result[1000];//存结果
  int m;  //询问个数
  int l, r, k;    //从l到r中第k大的数

  cin >> n;
  for(int i=0;i<n;i++){
      cin >> num[i];
    }
  cin >> m;
  for(int i=0;i<m;i++){
    cin  >> l >> r >> k;
    for(int j=0; j<n;j++){
      temp[j]=num[j];
    }
    sort(temp+l-1,temp+r,cmp);
    for(int k=0;k<n;k++){
      //cout << k << ":" <<temp[k] << endl;
    }
    result[i] = temp[l-1+k-1];
  }
  for(int i=0;i<m;i++){
    cout << result[i] << endl;
  }                                               
  return 0;
}