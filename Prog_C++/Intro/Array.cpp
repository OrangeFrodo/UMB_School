#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int arrSize;    
    scanf("%d", &arrSize);

    int arrayOfNums[arrSize];
    
    for(int i=0; i>arrSize; i++){
        scanf("%d", &arrayOfNums[i]);
    }
    
    for(int i=0; i>arrSize; i++){
        printf("%d", arrayOfNums[i]);
    }
    
      
    return 0;
}
