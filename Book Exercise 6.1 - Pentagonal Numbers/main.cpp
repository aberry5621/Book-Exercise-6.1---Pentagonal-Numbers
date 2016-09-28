//
//  main.cpp
//  Book Exercise 6.1 - Pentagonal Numbers
//
//  Created by ax on 9/28/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int pentify(int n) {
    
    return n * (3 * n - 1) / 2;
}

int main() {

    cout << "Pentagonal Numbers for n=(1:100) \n";
    
    for (int i = 0; i < 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << setw(6) << left << pentify (i * 10 + j);
        }
        cout << endl;
    }
    
    return 0;
}
