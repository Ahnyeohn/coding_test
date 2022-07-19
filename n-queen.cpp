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

        //현재 cnt는 0~ n-1이다.
        // if(cnt!=0) {

        //     if(check(i, n)) {  //해당하는 수가 조건에 맞으면

        //         //v.push_back(i); //vector 배열에 현재 수를 저장
        //         a[position(n)] = i;
        //         for(int i=0; i<n; i++) 
        //             printf("%d ", a[i]);
        //         printf("\n");    

        //         if(position(n)==n) {
        //             printf("\n");
        //             amount++;
        //         }
        //         else
        //             recursive(++cnt, n);
        //     }
        // }

        // else { //첫번째 라인에 대해 적용
        //     if(position(n)!=0) {
        //         for(int i=0; i<n; i++)
        //             a[i] = 0;
        //     } 
        //     a[0] = i;

        //     printf("%d\n", a[0]);
        //     recursive(++cnt, n);
        // }
        
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

   

