#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    bool isMale = false;
    int array[] = {1, 2, 3};

    if(!isMale) {
        cout << "Female\n";
        cout << array[1] << "\n";
    } else {
        cout << "Male\n";
    }

    return 0;
}
