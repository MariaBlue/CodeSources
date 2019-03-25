#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int num;
    int hour=0,minute=0,second=0;
    cin>>num;
    hour=num/3600;
    num%=3600;
    minute=num/60;
    second=num%60;
    cout<<hour<<":"<<minute<<":"<<second<<endl;
    return 0;
}