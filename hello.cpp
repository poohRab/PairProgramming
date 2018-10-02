#include <iostream>
#include <stdio.h>
#include "hello.hpp"

using namespace std;

int main() {
	cout << "input some value" << endl;

    int i,j;
    j = 1;
    for( i = 0; i < 10; i++ )
    {
        j = j + 2;
    }

    return 0;
}