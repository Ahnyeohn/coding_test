#include <iostream> 

using namespace std;

int main(){

   int n;
   cin >> n;
   int *dp = new int[n+1];
   
   // 타일은 00 , 1 
   
   dp[1] = 1 % 15746; // 1
   dp[2] = 2 % 15746; // 00 1+1
   
   for(int i=3; i<=n; i++){
      dp[i] = (dp[i-2] + dp[i-1]) % 15746 ;
   }
   
   cout << dp[n] << "\n";
   
    return 0;
}