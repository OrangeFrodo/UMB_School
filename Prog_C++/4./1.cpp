// Input & Output
#include <iostream>
#include <string> // Not required

/*
    std::cout = Printing data to the console/terminal
    std::cin = Getting data from the terminal
    std::cerr = Printing errors to the console/terminal
    std::clog = Printing logs messages to the console/terminal
*/
int main()
{
    
    int value = {4};
    // Printing data to the console
    std::cout << "Hello World!" << std::endl;
    std::cout << "Number is " << value << std::endl;

    // Getting data from the terminal
    int age;
    std::string name;

    // String input = name
    std::cout << "Enter your name: ";
    std::cin >> name;

    // Integer input = age
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hello " << name << " you are " << age << " years old!" << std::endl;

    // Printing errors to the console
    std::cerr << "An error occurred!" << std::endl;

    // Printing logs messages to the console
    std::clog << "This is a log message!" << std::endl;
    
    // Data with spaces
    std::string fullName;
    int antoherAge;

    std::cout << "Enter your full name and age: " << std::endl;

    // This does not work
    std::getline(std::cin, fullName);
    std::cin >> antoherAge;


    std::cout << "Hello " << fullName << " you are " << antoherAge << " years old!" << std::endl;

    return 0;
}