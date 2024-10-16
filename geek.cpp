// Geek is learning a new programming language. As data type forms the most fundamental part of a language, Geek is learning them with focus and needs your help.
// Given a data type, help Geek in finding the size of it in byte. Example Input: Character
// Output: 1
// Complete the function dataTypeSize() which takes a string as input and returns the size of the data type represented by the given string in byte unit.
// Return -1 if the input data type is invalid.D

#include <iostream>
#include <string>

int dataTypeSize(std::string dataType) {
    if (dataType == "int") {
        return sizeof(int);
    } else if (dataType == "float") {
        return sizeof(float);
    } else if (dataType == "double") {
        return sizeof(double);
    } else if (dataType == "char") {
        return sizeof(char);
    } else {
        return -1; // Invalid data type
    }
}

int main() {
    std::string dataType;
    std::cout << "Enter a data type: ";
    std::cin >> dataType;

    int size = dataTypeSize(dataType);
    if (size != -1) {
        std::cout << "Size of " << dataType << " is " << size << " bytes" << std::endl;
    } else {
        std::cout << "Invalid data type" << std::endl;
    }

    return 0;
}