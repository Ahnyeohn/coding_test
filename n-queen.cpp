#include <iostream>
#include <cstdlib>
// #include <algorithm>

using namespace std;
int amount=0;
int a[15];
int n;

void recursive(int cnt);
bool check(int cnt);

int main() {

    cin>>n;

    recursive(0);

    printf("%d\n", amount);

}
//cnt는 라인

/*1  2  3  4  5
  6  7  8  9 10
 11 12 13 14 15*/
void recursive(int cnt) {

    if (cnt == n) {
		amount++;
		return;
	}

    for(int i=0; i<n; i++) { // i는 현재 수

        a[cnt]=i;//해당하는 숫자 새로 넣은 숫자
        if(check(cnt))
            recursive(cnt+1);
    }
}

bool check(int cnt) { //해당 숫자가 검증이 가능한 숫자인가? k는 해당 숫자

    for(int i=0; i<cnt; i++) {
        if (a[cnt] == a[i] || cnt - i == abs(a[cnt] - a[i])) {
			return false;
		}

    }
    return true;
}

   

