#include <stdio.h>

int main() {
    int a[5] = {1, 0, 1, 1, 0};
    int i, present = 0, absent = 0;
    float percentage;

    for(i = 0; i < 5; i++) {
        if(a[i] == 1) {
            present++;
        } else {
            absent++;
        }
    }

    percentage = (present * 100.0) / 5;

    printf("Present = %d\n", present);
    printf("Absent = %d\n", absent);
    
    return 0;
}
