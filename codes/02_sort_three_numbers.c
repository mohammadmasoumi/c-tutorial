#include <stdio.h>

int main(void) {

    // inputs
    int a, b, c;
    
    // temps - s: smallest, m: medium, l: largest
    int s, m, l;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a > b) {
        if (b > c){
            // a > b > c
            s = c;
            m = b;
            l = a;
        } else {
            // a > b && c > b
            // a ? c
            if (a > c){
                // a > c > b
                s = b;
                m = c;
                l = a;
            } else {
                // a > b, c > b, c > a
                // c > a > b
                s = b;
                m = a;
                l = c;
            }
        }
    } else {
        // b > a
        if (a > c) {
            // b > a > c
                s = c;
                m = a;
                l = b;
        } else {
            // b > a && c > a
            // b ? c
            if (b > c) {
                // b > a && c > a && b > c
                // b > c > a
                s = a;
                m = c;
                l = b;
            } else {
                // b > a && c > a && c > b
                // c > b > a
                s = a;
                m = b;
                l = c;
            }
        }
    }

    printf("smallest: %d, medium: %d, largest: %d", s, m, l);

    return 0;
}