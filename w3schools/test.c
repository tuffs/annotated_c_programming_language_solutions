#include <stdio.h>

void myFunc() {
    // Local var that belongs to myFunc()
    int x = 5;
}

int main() {
    myFunc();

    // Print the variable x in the main function
    printf("%d", x);

    return 0;
}

