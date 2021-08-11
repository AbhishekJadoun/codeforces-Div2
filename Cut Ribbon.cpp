#include<bits/stdc++.h>
using namespace std;

int main(){
      int n, a, b, c,k, ans=0;
      cin>>n>>a>>b>>c;
      
      for(int i=0; i*a <=n ;i++){
          for(int j=0; i*a + j*b <=n; j++){
                 int remain = n - (a*i + b*j);
                 if(remain % c ==0){
                    k= remain / c;
                    ans = max(ans , i+j+k);
                 }
          }            
      }
      cout<<ans;
}
