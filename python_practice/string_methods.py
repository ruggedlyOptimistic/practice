import math

def reverse_string(my_string):

    string_length = len(my_string)

    for i in range(0, int(string_length/2)):
        a = my_string[i]
        b = my_string[string_length - 1 - i]

        my_string.replace(my_string[i], b)
        my_string.replace(my_string[string_length-1-i], a)

    return my_string

if __name__ == '__main__':

    print(reverse_string("hello"))