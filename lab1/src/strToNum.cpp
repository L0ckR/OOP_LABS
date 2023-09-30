#include <strToNum.hpp>

struct BindIfDigit
{
    std::string operator()(const std::string & s1, const char & s2) const {
        if (!isdigit(s2)){
            return s1;
        }
        return s1 + s2;
    }    
};

std::string digitsFromStr(std::string_view str){
    return std::accumulate(str.begin(), str.end(), std::string(""), BindIfDigit());
}



// std::string digitsFromStr(std::string_view str){
//     std::string result;
//     for (unsigned long i=0; i < str.length(); i++){
//         if (isdigit(str[i])){
//             result += str[i];
//         }
//     }
//     return result;
// }