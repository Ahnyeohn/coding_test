#include<iostream>

using namespace std;

int n, k;
int coin[10];
int point;
int amount;

void calculate();
void find();
int main() {

    
    cin>>n>>k;
    point = n-1;

    for(int i=0; i<n; i++) {
        cin>>coin[i];
    }
    calculate();
}

void calculate() {
    while(k!=0) {
        find();

        amount = amount + k/coin[point];
        k = k%coin[point];
        point--;
    }

    cout<<amount<<"\n";

}

void find() {
    for(int i=point; i>=0; i--) {
        if(k>=coin[i]) {
            point = i;
            break;
        }
    }
    //가장 크게 지불가능한 동전으로 위치시키기
}