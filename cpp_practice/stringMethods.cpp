#include <string>
#include <iostream>

void reverseString(std::string &myString)
{
    char a, b;
    u_int8_t size = myString.length();

    // Loop through the characters in the string, set the limit at 1/2 the length of the string
    for (int i = 0; i < size/2; i++)
    {
        a = myString[i];
        b = myString[size-1-i];     // NOTE: last index = size - 1

        // Manual implementation of the swap() method
        myString[i] = b;
        myString[size-1-i] = a;
    }

    /*
        No return method because 'myString' was passed by reference. This means that we are not creating a new variable,
        but rather directly modifying the original variable in memory
    */ 
    
}

int main()
{
    /*
        NOTE: printf() also works, but it is typically regarded as a relic of ANSI C and does not automatically handle different data types.
                -> Most importantly, it does not allow printing of objects, which is probably the biggest reason for C++ (OOP support), so
                -> modern C++ uses 'cout' as the defacto print method
    */
    std::string myString;
    
    std::cout << "Enter a word: ";
    std::cin >> myString;
    std::cout << "Original word: " << myString << "\n";

    // Reverse the string
    reverseString(myString);
    std::cout << "Reversed: " << myString << "\n";

    return 0;
}
