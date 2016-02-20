#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long int a,b,c;
    for(a=1;a<1000/3;a++){
        for(b=a+1;b<1000/2;b++){
                    c=1000-a-b;
                    if(c*c == a*a + b*b){
                       cout<<"\nTripliet : "<<a<<" "<<b<<" "<<c<<endl;
                       
                    if(a+b+ sqrt(c) == 1000)
                        cout<<"\nDesired: "<<a<<" "<<b<<" "<<c<<endl;
                    }
        
    }
    }
   return 0;
} 
