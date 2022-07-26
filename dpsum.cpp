#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int num;
    int sum=0;
    int max;

    cin>>num;
    int *a = new int [num];
    
    for(int i=0; i<num; i++) {
        cin>>a[i];
    }//수열 입력

    for(int i=0; i<num; i++) {
        
        if(a[i]>=0){// 수가 양수이면 (0포함)
            sum = sum+ a[i];
            if(i==0)
                max = sum;

            if(max<sum)
                max = sum; // sum의 값이 현재 max값보다 큰 경우 max에 sum값 저장

        }
        else{ // 수가 음수이면
            sum = sum+ a[i]; 
            if(i==0)
                max = sum;
                
            if(sum<0) 
                sum=0;
        }
    }

    printf("%d\n", max);
    return 0;
}