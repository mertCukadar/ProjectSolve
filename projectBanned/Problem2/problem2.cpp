#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    vector<int> initial_num{1,1};

    vector<int> fibonacci;

    int next_num = initial_num[0] + initial_num[1];

    while (next_num <= 4000000) {
        fibonacci.push_back(next_num);

        initial_num[0] = initial_num[1];
        initial_num[1] = next_num;

        next_num = initial_num[0] + initial_num[1];
    }

    int sum_evens = 0;
    for (int i = 0; i < fibonacci.size(); i++){
        if (fibonacci[i] % 2 == 0) {
            sum_evens += fibonacci[i];
        }
    }

    cout << "sum of even numbers: " << sum_evens << endl;

    return 0;
}
