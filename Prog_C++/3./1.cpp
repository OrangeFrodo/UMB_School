// Statements and Functions
#include <iostream>

// Function 
int addNumbers(int  fNum, int sNum)
{
    // Sum of two numbers + 5
    return fNum + sNum + 5;
}

int main()
{
    int Firstnum = 10;
    int Secondnum = 20;
    
    int ThirdNum {3};
    int FourthNum {4};

    int sum = Firstnum + Secondnum;
    int sum2 = ThirdNum + FourthNum;

    std::cout << "Sum " << sum << std::endl;
    std::cout << "Sum " << sum2 << std::endl;
    std::cout << "Sum " << addNumbers(Firstnum, Secondnum) << std::endl;
}

