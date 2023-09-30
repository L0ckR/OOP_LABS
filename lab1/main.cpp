#include <strToNum.hpp>

int main(){
    std::string line;
    while(std::getline(std::cin, line)){
        std::cout << digitsFromStr(line) << std::endl;
    }

    return 0;
}