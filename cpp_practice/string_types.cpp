#include <iostream> // handles std namespace
#include <string> // do I really need this?


void toCharArray(std::string s, char c_string[])
{
    // // declaring a pointer to reference the first character in s
    // char* p;

    // // assigning the pointer
    // p = &s[0];

    for (uint8_t i = 0; i < s.length(); i++)
    {
        c_string[i] = s[i];
    }

    // append the null terminator
    c_string[s.length()] = '\0';

}

int main()
{
    std::string cpp_string = "4560";

    char c_string[cpp_string.length() + 1];

    toCharArray(cpp_string, c_string);

    std::cout << "C-String: " << c_string << std::endl;
    std::cout << "Byte Size: " << sizeof(c_string) << std::endl;
    std::cout << "C-String is now an int: " << std::stoi(c_string) << std::endl;
    std::cout << "ByteSize: " << sizeof(std::stoi(c_string)) << std::endl;

    return 0;
}

