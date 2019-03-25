#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
    double a,b;
    double x1,y1;
    double x2,y2;
    while(cin>>x1>>y1>>x2>>y2){
        a=fabs(x1-x2);
        b=fabs(y1-y2);
        printf("%.2f\n",sqrt(a*a+b*b));
    }
    return 0;;
}