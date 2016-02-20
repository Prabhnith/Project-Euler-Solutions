#include<iostream>
using namespace std;
int main(){
    long int sum=0,sumOfSquare=0;
    for(long int i=1;i<=100;i++){
        sumOfSquare +=i*i;
        sum+=i;
    }
   cout<<((sum*sum) - sumOfSquare)<<endl;
   return 0;
}
