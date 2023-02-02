#include <iostream>
#include <cmath>
#include <list>




using namespace std;


/* 
Problem 1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/



int main() {

    // first we need to make an array in range of 1000 with full integers...

    int collection[1000]{};
    int sum{};


    for (int i = 0; i <= 1000 ; i++) {
        collection[i] = i;
    }


    for(int i = 0; i <= 1000; i++) {

        if (i % 3 == 0 || i % 5 == 0){
            sum = sum + i;
        }else{
            continue;
        }
    
    }


    cout << "sum of values which's satisfy conditions is: " << sum << endl;
    return 0; 
}