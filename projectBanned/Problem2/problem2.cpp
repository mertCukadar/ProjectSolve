#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    vector<int> initial_num{1,2};
    

    // let us create a vector named as fibonacci:
    vector<int> fibonacci;


    for (int i=1 ; i < 1000 ; i++){
        int add_num = initial_num[i] + initial_num[i -1];

        initial_num.push_back(add_num);

        cout << "Fibonacci Series" << initial_num[i] + ",";

    }


    fibonacci = initial_num;
    vector<int> evens;
    for (int i=0; i <= initial_num.size(); i++){
        if (initial_num[i] % 2 == 0) {
            evens.push_back(initial_num[i]);
        }
    }

    int sum_evens = 0;
    int *point_evens;

    point_evens = &sum_evens;


    for (int i = 0; i == evens.size(); i++){
        point_evens += evens[i];
    }

    cout << "sum of even number is: " << sum_evens << "..";

return 0;

}

