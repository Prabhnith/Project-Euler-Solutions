#include<iostream>
using namespace std;
int main(){
    long int n=5000000;
    for(long int i=3;i<=100;i+=2){
                for(long int j=3;j<=i;j+=2){
                    if(i%j==0){
                        cout<<i<<endl;
                        break;
                    }
                }
    }   
     
        return 0;
}
