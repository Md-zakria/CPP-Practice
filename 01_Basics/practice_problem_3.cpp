#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    // start with the first element
    int currentSum = nums[0];
    int biggestSum = nums[0];

    for (int i = 1; i < nums.size(); i++) {

        // should we keep going or start fresh from here?
        if (currentSum + nums[i] > nums[i]) {
            currentSum = currentSum + nums[i];
        } else {
            // starting fresh is better
            currentSum = nums[i];
        }

        // update biggest sum if current is larger
        if (currentSum > biggestSum) {
            biggestSum = currentSum;
        }
    }

    cout << "Largest sum: " << biggestSum << endl;

    return 0;
}
