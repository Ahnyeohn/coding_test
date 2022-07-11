#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    int num;//영화 시리지 숫자
    int a;

    cin>>num;

    a= 666;
    int cnt=0;
    while(1) {
        if(to_string(a).find("666")!=string::npos)//666이 포함된 숫자라면
            cnt++;
    
        if(cnt==num)
            break;

        a++;

    }

    cout<<a<<"\n";
}
