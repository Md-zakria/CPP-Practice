#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    int ans1 = -1, ans2 = -1;
    
    // check every pair of numbers
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            
            // if these two numbers add up to target, we found our answer
            if (nums[i] + nums[j] == target) {
                ans1 = i;
                ans2 = j;
            }
        }
    }
    
    cout << "Answer: [" << ans1 << ", " << ans2 << "]" << endl;
    
    return 0;
}
