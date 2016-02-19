#include<iostream>
using namespace std;
int main(){
    long long int d; 
    
    d=600851475143;
    for(long long int i=2;d>1 ;i++){
      //  cout<<i<<endl;
            if(d%i==0){
                d/=i;
            cout<<i<<" ";
            i=+i;
        }
    }
    return 0;
}
