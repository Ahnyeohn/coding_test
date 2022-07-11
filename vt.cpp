#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int IsPrimeNumber(int num);


int main() {
    vector <int> v;
    vector<int>::iterator iter;
    int number;
    int count;

    while(1) {
        cin>>number;
        if(number ==0) break;
        v.push_back(number);
    }


    for (iter = v.begin(); iter != v.end(); iter++) {
        number = *iter;
        count = 0;

        for(int i=number+1; i<=2*number; i++) {
            if(IsPrimeNumber(i) ==1)
                count++;
        }

        cout<<count<<"\n";
    }
}

int IsPrimeNumber(int num)
{
    if (num <= 1) {
        return 0;
    }

    int half = num / 2;
    for (int i = 2; i <=half; i++) {

        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}