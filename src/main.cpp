#include <iostream>
#include <string>
#include <vector>
#include <format>



std::vector<std::string> stringToHex(const std::string& s)
{
    std::vector<std::string> vecString;
    vecString.reserve(s.length());

    for (unsigned char c : s)
    {
        std::string myCharHex = std::format("{:02x}", c);
        vecString.push_back(myCharHex);
    }

    return vecString;
}

void printVectorString(const std::vector<std::string> &vec)
{
    for(const auto& c:vec)
    {
        std::cout << c << " ";
    }

}

int main(int, char**){
    
    std::string myString; 
    std::getline(std::cin, myString);    
    printVectorString(stringToHex(myString));

std::cout << std::endl;
   return 0;
}
