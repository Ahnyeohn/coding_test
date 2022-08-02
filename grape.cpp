#include<iostream>


int grape[10000];
int dp[10000];

using namespace std;

int Max(int a,int b) {
    return a>b?a:b;
}

int main() {

    int num;
    cin>>num;

    for(int i=0; i<num; i++) {
        cin>>grape[i];
    }

    dp[0] = grape[0];
    dp[1] = Max(grape[0]+grape[1],grape[1]);
    dp[2] = Max( Max(grape[0]+grape[2],grape[1]+grape[2]), Max(grape[0]+grape[1],grape[1]+grape[2]));

    for(int i=3; i<num; i++) {
        dp[i]= Max(Max(dp[i-2]+grape[i],grape[i-1]+grape[i]+dp[i-3]) , Max(dp[i-1] ,grape[i-1]+grape[i]+dp[i-3])); 
    }

    cout<<dp[num-1]<<'\n';

}