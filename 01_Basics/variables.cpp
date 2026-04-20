#include <iostream>
#include <string>
using namespace std;

int main() {

    string text = "varbbiables";
    string word = "variables";

    // count how many times each letter appears in text
    int textCount[26] = {0};
    for (int i = 0; i < text.size(); i++) {
        textCount[text[i] - 'a']++;
    }

    // count how many times each letter is needed in "variables"
    int wordCount[26] = {0};
    for (int i = 0; i < word.size(); i++) {
        wordCount[word[i] - 'a']++;
    }

    // find the minimum times we can form the word
    int result = INT_MAX;
    for (int i = 0; i < 26; i++) {

        // only check letters that are actually needed
        if (wordCount[i] > 0) {
            result = min(result, textCount[i] / wordCount[i]);
        }
    }

    cout << "Max instances: " << result << endl;

    return 0;
}
