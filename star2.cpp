#include <iostream>
using namespace std;

void star(int i, int j, int num);

int main() {

    int num;
    cin >> num;
    
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
            star(i,j,num);
        cout << '\n';
    }
}

void star(int i, int j, int size) {
    if((i / size)%3 == 1 && (j / size)%3 == 1) {
        printf(" ");
    } //중앙 공백의 위치: 

    else
    {
        if(size==1)
            printf("*");
        else
            star(i,j,size/3);//중앙 공백의 위치인지 지속적으로 확인하기 위해 재귀 호출 
    }
}