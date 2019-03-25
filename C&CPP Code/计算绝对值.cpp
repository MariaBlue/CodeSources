#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    double num;
    while(cin>>num){
        printf("%.2f\n",fabs(num));
    }
}