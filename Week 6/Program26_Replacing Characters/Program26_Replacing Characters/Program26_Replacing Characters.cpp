#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string sentence;

    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::cout << "Original sentence: " << sentence << std::endl;

    std::replace(sentence.begin(), sentence.end(), 'e', 'X');

    std::cout << "Modified sentence: " << sentence << std::endl;

    return 0;
}
