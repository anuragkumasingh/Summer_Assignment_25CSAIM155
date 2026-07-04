#include <stdio.h>
int main() {
    int answer, score = 0;
    printf("===== Quiz Application =====\n\n");
    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
        score++;
    printf("\n2. Which language is used to write C programs?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
        score++;
    printf("\n3. How many days are there in a week?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
        score++;
    printf("\n===== Quiz Result =====\n");
    printf("Your Score = %d out of 3\n", score);
    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good Job!\n");
    else
        printf("Better Luck Next Time!\n");
    return 0;
}
