#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
    double score;
    while(cin>>score){
        if(score>=90 && score<=100)
            cout<<"A"<<endl;
        else if(score>=80 && score<90)
            cout<<"B"<<endl;
        else if(score>=70 && score<80)
            cout<<"C"<<endl;
        else if(score>=60 && score<70)
            cout<<"D"<<endl;
        else if(score>=0 && score<60)
            cout<<"E"<<endl;
        else 
            cout<<"Score is error!"<<endl;
    }
}