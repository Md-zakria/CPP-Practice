#include <iostream>
#include <string>
using namespace std;

int main() {

    string s = "abcabcbb";

    // to track if a character is currently in our window
    bool seen[256] = {false};

    int start = 0;
    int longest = 0;

    for (int end = 0; end < s.size(); end++) {

        // if this character is already in our window
        // shrink the window from the left until it's gone
        while (seen[s[end]]) {
            seen[s[start]] = false;
            start++;
        }

        // add current character to our window
        seen[s[end]] = true;

        // check if current window is the longest so far
        int currentLength = end - start + 1;
        if (currentLength > longest) {
            longest = currentLength;
        }
    }

    cout << "Longest substring length: " << longest << endl;

    return 0;
}
