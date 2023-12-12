#include<iostream>
using namespace std;

char before(char x){
	if (x == 'A') {
        return 'Z';
    } else if (x >= 'B' && x <= 'Z') {
        return x - 1;
    } else {
        // Handle invalid x (not 'A' to 'Z')
        return '0';
    }
    }
