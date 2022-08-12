#include <iostream>

long long a[1000001];
long long s[1000001];
long long t[1000] = {0,};

using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, m;
    long long cnt=0;
    s[0] = 0;
    cin>>n>>m;

    for(int i=1; i<=n; i++) {

        cin>>a[i];
        s[i]= s[i-1]+ a[i];
        if(s[i]%m==0)
            cnt++;
        t[s[i]%m]++;

    }

    for(int i=0; i<m; i++) {
        if(t[i]>1) {
            cnt = cnt+ t[i]*(t[i]-1)/2;
        }
    }
    cout<<cnt<<"\n";
}
// 보통 2*10^9 정도가 int값의 한계이다. 따라서 이를 넘어가면 long 이상은 써주자