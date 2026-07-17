#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence, word = "", longest = "";
    int maxLength = 0;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] != ' ') {
            word += sentence[i];
        } else {
            if (word.length() > longest.length()) {
                longest = word;
            }
            word = "";
        }
    }
    // Check the last word
    if (word.length() > longest.length()) {
        longest = word;
    }

    cout << "Longest word: " << longest << endl;
    cout << "Length: " << longest.length() << endl;

    return 0;
}
