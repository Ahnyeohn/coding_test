#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector <string> v;
    vector<string>::iterator iter;
    int cnt = 0;
    string sentence; 
    string substr;

    cin>>sentence;


    for(int i=1; i<=sentence.length(); i++) { //i는 길이!
        for(int j=0; j<=sentence.length()-i; j++) {
            substr = sentence.substr(j, i);
            if( find(v.begin(), v.end(), substr)== v.end() ) //반복되는 문자열이 아니라면
                v.push_back(substr);
        }
        cnt = cnt + v.size();
        v.clear();

    }

    printf("%d\n", cnt);

}