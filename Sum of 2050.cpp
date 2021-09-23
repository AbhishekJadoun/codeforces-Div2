#include<bits/stdc++.h>
using namespace std;
 
int main(){
         int t ;
         cin>>t;
         while(t--){
        long long int num;
         cin>>num;
         if(num % 2050 == 0){
             num = num /2050;
             int sum =0;
             while(num > 0){
                int rem = num %10;
                num = num /10;
                sum += rem;
             }
             cout<<sum<<endl;
         }
         else{
                cout<<-1<<endl;         
         }
            
         }
         return 0;
}
