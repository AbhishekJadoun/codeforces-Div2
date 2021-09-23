#include<bits/stdc++.h>
using namespace std;
 
int main(){
         int t ;
         cin>>t;
         while(t--){
         int n  , tl=0;
        cin>>n;
        for(int i=1;i<=n;i++){
           tl=0;
           string s="";
           int zero =0;
           while(tl < 2*n){
                 for(int j=0; j<i; j++){
                    s.push_back('(');
                    zero++;
                    tl++;
                 }
                 while(zero > 0){
                   s.push_back(')');
                   zero--;
                   tl++;
                 }
                 for(int k = tl ; k<2*n; k=k+2){
                                 s.push_back('(');
                                 zero++;
                                 tl++;
                                 s.push_back(')');
                                 zero--;
                                 tl++;
                 }
           }
           cout<<s<<endl;
        }
         }
         return 0;
}
