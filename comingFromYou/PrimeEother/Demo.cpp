#include "Demo.h"

Demo::Demo(int count){
    this->counter = count;
}

int Demo::checkNumbers(int x , int y){
    int counter = 0;

    vector<int> vector1 = {x , y};
    int minimum = min(vector1.front() , vector1.back());

    for (int i = 5; i < minimum; i++){
        if (x % i == 0 & y % i == 0){
            cout << "x:" << x << "y:" << counter << y << endl; 
            break;
        } else {
            counter++; 
        }

        if (i == minimum - 1){
            cout << x << ":" << y << "aralarında asaldır..." << endl;
        }

    }

    return 0;
}
