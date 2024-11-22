#include <string>
#include <iostream>
#include <set>


// write a function that takes a string and reverses the order of the characters in the string
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

// write a function to return the length of the longest substring without repeating characters
int lengthOfLongestSubstring(std::string &myString)
{
    // make a counter
    int counter, max = 1;
    char previous;

    // create a substring variable
    for (int index = 1; index < myString.length(); index++) // we normally start the index at zero, but we can reduce the program size by starting at 1
    {   
        previous = myString[index-1];
        if (myString[index] != previous)
        {
            // increment the counter if the current character is not equal to the previous one
            counter++;
        }

        else
        {
             counter = 0;    // if it is, reset the counter to zero
        }  

        // compare the current value stored in max to the counter, update max as needed
        if (max < counter)
        {
            max = counter;
        }
    }

    return max;
}

int main()
{
    /*
        NOTE: printf() also works, but it is typically regarded as a relic of ANSI C and does not automatically handle different data types.
                -> Most importantly, it does not allow printing of objects, which is probably the biggest reason for C++ (OOP support), so
                -> modern C++ uses 'cout' as the defacto print method
    */
    
    std::string myString;
    u_int8_t len;

    for (;;)
    {  
    std::cout << "Enter a word: ";
    std::cin >> myString;
    std::cout << "Original word: " << myString << "\n";

    // Reverse the string
    reverseString(myString);
    std::cout << "Reversed: " << myString << "\n";

    std::cout << "Longest substring of non-repeating characters: " << lengthOfLongestSubstring(myString) << "\n";
    }

    return 0;
}
