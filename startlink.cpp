#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int** a;
int * b;
int num;
int mini = -1;

void select(int cnt , int k);

int main()
{
    vector <int> team;
    cin>>num;

    a = new int*[num]; 

    b = new int [num]; // 갯수 => 개체 같은 느낌

    for(int i=0; i<num; i++) {
       a[i] = new int[num];
        b[i] = 1;
    }

    for(int i=0; i<num; i++) {
        for(int j=0; j<num; j++) {
            cin>>a[i][j];
        }
    }//이차원 배열 저장

    select(0, 0);
    
    printf("%d\n", mini);
    
}

void select(int cnt, int k) {

    if(cnt == num/2) { // 재귀호출하여 cnt+1하여 num/2가 된 경우 

        int sum1 = 0;
        int sum2 = 0;
        int k1=0;
        int k2=0;
        int *team = new int[num/2];
        int *team2 = new int[num/2];

        for(int i=0; i<num; i++) {
            if(b[i]==1) 
                team2[k1++]=i; // team 2에 추가
        
            else
                team[k2++]=i; // team 1에 추가

        } 

        for(int i=0; i<num/2-1; i++) { 
            //i=> 0~2
            for(int j=i+1; j<num/2; j++) {
                sum1 = sum1+ a[team[i]][team[j]] + a[team[j]][team[i]];
                sum2 = sum2+ a[team2[i]][team2[j]] + a[team2[j]][team2[i]];
            }    
        } //해당 팀의 능력치 합계 계산

        if (mini == -1)
            mini = abs(sum1-sum2);
        else if ( mini >= abs(sum1-sum2) ) // 계산한 값이 현재 최소값보다 더 작거나 같으면, 갱신한다.
            mini = abs(sum1-sum2);


        return;

    }

    for(int i=k; i<num; i++) {
        
        if(b[i]>0) { //해당 개체가 아직 선택되지 않았다. 
            b[i] = b[i]- 1; // 개체를 선택했으므로 개수 줄이기 ==0
            select(cnt+1, i); // 이후 다음 멤버를 고르기 위해 재귀 호출
            b[i] = b[i] + 1;

        }

    }

}