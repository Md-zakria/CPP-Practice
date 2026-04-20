#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {4, 1, 2, 1, 2};

    // count how many times each number appears
    int count[1000] = {0};
    for (int i = 0; i < nums.size(); i++) {
        count[nums[i]]++;
    }

    // find the number that appears only once
    int answer = -1;
    for (int i = 0; i < nums.size(); i++) {
        if (count[nums[i]] == 1) {
            answer = nums[i];
        }
    }

    cout << "Single number: " << answer << endl;

    return 0;
}
