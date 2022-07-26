#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>

using namespace std;
void basic(int number, int line, int order);

int main() {
    
    int number;
    
    cin>>number;

    basic(number, 1, 1);
}

void basic(int number, int line, int order) {

    if(line >= (number/3+1) && line<=2*number) {
        
        if(order >= (number/3+1) && order<=2*number/3)
             printf(" ");
        else {
            if(line%2==0) {
                if(order%3==2)
                    printf(" ");
                else
                    printf("*");         
            }   
            else {
                printf("*");
            }
        }

    }

    else {
        if(line%2==0) {
            if(order%3==2)
                printf(" ");
            else
                printf("*");         
        }   

        else {
            printf("*");
        }
    }
    
    if(order<number)
        basic(number, line, ++order);
    else{
        if(line<number) {
            printf("\n");
            basic(number, ++line, 1);
        }
    }
}
