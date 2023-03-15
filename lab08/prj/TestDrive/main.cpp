#include <iostream>
#include <cmath>
#include "ModulesKikhot.h"

#define ARR_SIZE 7

using namespace std;

int main() {
    const float x[ARR_SIZE] = {6, 3, 8, 5, 9,  8,  13};
    const float z[ARR_SIZE] = {1, 4, 9, 10, 9, -10,  22};
    const float expResult[ARR_SIZE] = {8.9647, 2, 13.2692, 5.2082, 8.9991, 3.7692, 17.7798};

    for (short int i = 0; i < ARR_SIZE; i++) {
        const float currResult = round(s_calculation(x[i], z[i])*1000) / 1000;
        if (currResult == expResult[i])
            cout << "Test @" << i+1 << " - PASSED\n";
        else
            cout << "Test @" << i+1 << " - FAILED\n";
    }
}

