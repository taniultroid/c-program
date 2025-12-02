#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess;
    srand(time(0));
    num = rand() % 10 + 1;

    printf("Guess the number (1 to 10): ");
    scanf("%d", &guess);

    if (guess == num)
        printf("🎉 Correct! You guessed the number!");
    else
        printf("❌ Wrong! The number was %d", num);
}
