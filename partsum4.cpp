#include <iostream>

int a[100001];
int s[100001];

using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //위의 3줄은 c++ 입출력에서 시간을 단축해주는 코드이다. 요거 3줄만 적용했더니 정답이라고 뜰만큼 체감이 큰 듯?
    /*알고리즘을 풀 때는 보통 싱글 쓰레드 환경이기 때문에 ios_base::sync_with_stdio(false); 코드를 추가해줘도 
    결과에 영향이 없고 C와 C++의 버퍼를 분리하기 때문에 속도가 빨라집니다. (이때, c 스타일의 입출력문을 혼용하지 않도록 주의해줘야 합니다.)
    기본적으로 cin으로 읽을 때 먼저 출력 버퍼를 비우는데, 마찬가지로 알고리즘을 풀 때는 화면에 바로 보이는 것이 중요하지 않습니다. 
    따라서, 입력과 출력을 여러 번 번갈아가며 반복해야 하는 경우 필수적으로 cin.tie(null); 코드를 추가하여 cout과 cin의 묶음을 풀어줘야 합니다.
    출처: https://jaimemin.tistory.com/1521 [꾸준함:티스토리]*/
    int n, m;
    int j, k;
    int sum=0;
    cin>>n>>m;
    s[0] = 0;
    for(int i=1; i<=n; i++) {
        cin>>a[i];
        s[i]= s[i-1]+ a[i];
    }

    for(int i=0; i<m; i++) {

        cin>>j>>k;
        sum = s[k] - s[j-1];
        cout<<sum<<"\n";
    }
}