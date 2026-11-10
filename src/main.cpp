#include <iostream>
#include <string>
#include <vector>
#include <format>
#include<fstream>

std::string ReadFile(const std::string& fileName)
{
    std::ifstream myReadFile(fileName);
    if (!myReadFile.is_open()) {
        std::cerr << "Could not open " << fileName << "\n";
        return "";   
    }

    std::string content;
    std::string line;
    while (std::getline(myReadFile, line))
    {
        content += line + "\n";   
    }
    return content;
}



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
    
    std::string myString = ReadFile("test.txt"); 
    printVectorString(stringToHex(myString));
    std::cout << std::endl;


   return 0;
}
