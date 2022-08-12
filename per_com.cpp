#include <iostream>
#include <string>

using namespace std;
//char a[200000];
string a;
int s[26][200001];
int cnt[26] = {0,};
char b;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int l, r;
    int sum=0;
    char temp;

    cin>>a;
    cin>>n;

    for(int i=0; i<a.length(); i++) {
        
        cnt[a[i]-97]++;
    }

    for(int i=0; i<26; i++) {
        s[i][0] = 0;
        if(cnt[i]>0) { // 해당 알파벳이 문자열에 있으면, 
            for(int j=1; j<=a.length(); j++) {
                if(a[j-1] == i+97 )
                    s[i][j] = s[i][j-1] +1 ;
                else 
                    s[i][j] = s[i][j-1];

            }

        }
    }
    
    for(int i=1; i<=n; i++) {
        cin>>b>>l>>r;
        sum = s[b-97][r+1] - s[b-97][l];
        cout<<sum<<"\n";
    }

}