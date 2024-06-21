#include <iostream>
#include <string>
#include <sstream>

std::string findLongestWord(const std::string& input) {
    std::istringstream stream(input);
    std::string word;
    std::string longestWord;
    
    while (stream >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }
    
    return longestWord;
}

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::string longestWord = findLongestWord(input);

    std::cout << "The longest word is: " << longestWord << std::endl;

    return 0;
}
