#include<iostream>
using namespace std;
int main(){
    long long int a=1,b=1,t=0,s=0;
    cout<<a<<" ";
    for(long long int i=0;a<4000000 &&b<4000000;i++){

        t=a+b;
     //   cout<<t<<" ";
        if(t%2==0){
            if(a<4000000 && b<4000000 && a+b<4000000){
                s+=t;
               // cout<<"\nS = "<<s<<endl;
            }

        }
        a=b;
        b=t;
    }
    cout<<s;
    return 0;
}
