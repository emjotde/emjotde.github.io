#include <cstdlib>
#include <iostream>
#include <string>

void split(std::string text, char sign) {
    std::string elem;
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == sign) {
            std::cout << elem << " ";
            elem.clear();
        } else { 
            elem += text[i];
        }
    }
    if (! elem.empty())
        std::cout << elem << " ";
}

std::string lower(std::string str) {
    for (int i = 0; i < str.size(); i++) { 
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - ('Z'-'z');
    }
    return str;
}

/*
std::string parse_options(int argc, const char *argv[]) {
    if (argc < 2) {
        std::cout << "Usage: ./stem DICT_FILE" << std::endl;
        exit(1);
    }
    return std::string(argv[1]);
}
*/

int main(int argc, const char *argv[]) {
    std::string line;
    while (std::getline(std::cin, line)) {
        split(line, ' ');
        std::cout << std::endl;
    }

    return 0;
}
