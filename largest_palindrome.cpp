#include<iostream>
using namespace std;
int main(){
    long int p,r,max=0;
    int dig,c=1;
        for( int a=999;a>=100;a--){
           for(int b=999;b>=100;b--){
              p=a*b;
              r=0;
              while(p>0){
                  dig=p%10;
                  r=r*10+dig;
                  p=p/10;
                  c++;
              }
              if(r==(a*b) && c>5){c=0;
                  if((a*b)>max) max=a*b; 
                  cout<<a<<" * "<<b<<" = "<<a*b<<" c="<<c<< endl;
                  break;
              }
           }
        }
        cout<<"\n\n"<<max;
        return 0;
}
