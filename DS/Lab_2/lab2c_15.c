#include <stdio.h>
#include <math.h>

void main() {
    int i;

    for(i = 1; i <= 1000; i++) {

        int temp = i;
        int count = 0;
        int ans = 0;

        while(temp != 0) {
            count++;
            temp /= 10;
        }
        temp = i;
        while(temp != 0) {
            int digit = temp % 10;
            ans += pow(digit, count);
            temp /= 10;
        }
        if(ans == i) {
            printf("%d\n", i);
        }
    }

}