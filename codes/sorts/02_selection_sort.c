#include<stdio.h>
#include<conio.h>

int main() {
    int total_count, counter1, counter2, minimum, temp_value;
    int a[20];

    printf("\n Enter the Number of Elements: ");
    scanf("%d", &total_count);
    printf("\n Enter %d Elements: ", total_count);
    for (counter1 = 0; counter1 < total_count; counter1++) {
        scanf("%d", &a[counter1]);
    }
    for (counter1 = 0; counter1 < total_count - 1; counter1++) {
        minimum = counter1;
        for (counter2 = counter1 + 1; counter2 < total_count; counter2++) {
            if (a[minimum] > a[counter2])
                minimum = counter2;
        }
        if (minimum != counter1) {
            temp_value = a[counter1];
            a[counter1] = a[minimum];
            a[minimum] = temp_value;
        }
    }
    printf("\n The Sorted array in ascending order: ");
    for (counter1 = 0; counter1 < total_count; counter1++) {
        printf("%d ", a[counter1]);
    }
    getch();

    return 0;
}