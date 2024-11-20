#include string


string reverseString(std::string &myString)
{
    std::string newString = []

    for (int i = 0; i < myString.length(); i++)
    {
        newString.push(myString.charAt(i));
    }
    
    return newString;
}

int main()
{
    std::cout << reverseString("hell0!");

    return 0;
}
