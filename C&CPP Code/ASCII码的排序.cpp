#include <iostream>
using namespace std;
int main(){
    char a, b, c, t;
    while(scanf("%c%c%c",&a,&b,&c)!=EOF){
        getchar();//====cin>>a>>b>>c
        if(a>b){
            t=a;
            a=b;
            b=t;
        }
        if(a>c){
            t=a;
            a=c;
            c=t;
        }
        if(b>c){
            t=b;
            b=c;
            c=t;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}