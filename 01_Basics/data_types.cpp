#include <iostream>
#include <string>
using namespace std;

int main() {

    string input = "set ";

    // remove spaces from the beginning
    int start = 0;
    while (start < input.size() && input[start] == ' ') {
        start++;
    }

    // remove spaces from the end
    int end = input.size() - 1;
    while (end >= 0 && input[end] == ' ') {
        end--;
    }

    // get the clean word without spaces
    string word = input.substr(start, end - start + 1);

    // check primitive types
    bool isPrimitive = (word == "int" || word == "float" || 
                        word == "bool" || word == "char");

    // check composite types
    bool isComposite = (word == "array" || word == "list" || 
                        word == "set" || word == "map");

    if (isPrimitive || isComposite) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
