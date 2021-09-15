#include<stdio.h>

int main(void){

    int a = 0, b = 0, c = 0, d = 0;
    int counter = 0;
    int acounter = 0;
    int bcounter = 0;
    int ccounter = 0;
    int dcounter = 0;
    int score;
    int total = 0;

    printf("Hi,please inter your first score:\n");

    scanf("%d", &score);

    while(score != -1){

        counter++;
        total += score;

        printf("inter your next score:\n");

        if (score >= 15){
            a += score;
            acounter++;
        }else if (score >= 10){
            b += score;
            bcounter++;
        }else if (score >= 5){
            c += score;
            ccounter++;
        }else {
            d += score;
            dcounter++;
        }

        scanf("%d", &score);
        }

        printf("avg all: %f\n", (float) total / counter);
        printf("avg a: %f\n", (float) a / acounter ? acounter: 0.0);
        printf("avg b: %f\n", (float) b / bcounter ? bcounter: 0.0);
        printf("avg c: %f\n", (float) c / ccounter ? ccounter: 0.0);
        printf("avg d: %f\n", (float) d / dcounter ? dcounter: 0.0);

    return 0;
}