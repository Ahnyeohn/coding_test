#include <iostream>

using namespace std;
int calculate(int number);

int main() {
    int number;
    int answer;
    int sum = 0;

    cout<<"input number(3~50000): ";
    cin>>number;

    if(number>7) {

        answer = calculate(number);
        
        cout<< answer<<"\n";
    }
    else{

        switch (number) {
            case 1:
            case 2: cout<<"-1\n"; break;
            case 3: cout<<"1\n"; break;
            case 4: cout<<"-1\n"; break;
            case 5: cout<<"1\n"; break;
            case 6: cout<<"2\n"; break;
            case 7: cout<<"-1\n"; break;
        }

    }

    return 0;
}

int calculate(int number) {
    
    int sum = 0;
    while(1) {
        if(number%3==0 && number<=12) {
            sum = sum + number/3;
            break;
        }

        sum +=1;
        number -=5;
    } 
    return sum;
}  