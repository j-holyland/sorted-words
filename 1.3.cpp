#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> words; // Vector to store the words
    std::string word; // String to store each word read from input

    std::cout << "Enter a sequence of words separated by whitespace, including newline. Enter 'Quit' to terminate input:\n";

    // Read words from input until 'Quit' is entered
    while (std::cin >> word && word != "Quit") {
        words.push_back(word); // Add word to vector
    }

    // Sort the words
    std::sort(words.begin(), words.end());

    // Print the unique words in sorted order
    std::cout << "Unique words entered (sorted):\n";
    for (size_t i = 0; i < words.size(); ++i) {
        if (i == 0 || words[i] != words[i - 1]) { // Check for duplicates
            std::cout << words[i] << "\n";
        }
    }

    return 0;
}
