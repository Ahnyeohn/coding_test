#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;
void backtracking(string od, int* op, int cp);
int calculate (string od);

int cnt=0;
int number;
int Max, Min;
int *a = new int [number];

int main() {

    cin>>number;
    cin.ignore();
    int op[4];

    for(int i=0; i<number; i++){

        cin>>a[i];
    }

    for(int i=0; i<4; i++){

        cin>>op[i];
    }

    backtracking("", op, 0);

    printf("%d\n", Max);
    printf("%d\n", Min);

}

void backtracking(string od, int* op, int cp) {

    if(cp == number-1) {

        int value = calculate(od);
        if(cnt==0) {//처음 
            Max= value;
            Min= value;
        }
            
        else{
            if(value>Max)
                Max= value;
            if (value<Min)
                Min= value;
        }

        cnt++;
        return;
    }
    string temp;

    for(int i=0; i<4; i++)  {
        
        if(op[i]>0) {

            op[i]= op[i]-1; //해당 연산자를 사용했으므로 갯수를 하나 줄이고, 
            temp = od;
            od = od + to_string(i+1); // 연산자 배열에 추가

            backtracking(od, op, cp+1); // 다음 단계로 재귀 호출 
            op[i]= op[i]+1;
            od = temp;
        }


    }

}
int calculate (string od) {
    int temp = a[0];
    for(int i=0; i<number-1; i++) {
        switch(od[i]) {
            case '1': temp = temp + a[i+1];break;
            case '2': temp = temp - a[i+1];break;
            case '3': temp = temp * a[i+1];break;
            case '4': temp = temp / a[i+1];break;
        }

    }
    return temp;
}