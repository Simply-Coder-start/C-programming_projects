#include <stdio.h>

int main() {
    // Declare variables
    int i;
    int ans1, ans2, ans3; // Answers for each question
    int point1, point2, point3; // Points for each answer
    int point01, point02, point03; // Extra points for incorrect answers

    // Start the program
    printf("Welcome to the game\n");
    printf("\n");
    printf("> Press 7 to start\n");
    printf("> Enter 0 to quit\n");
    scanf("%d", &i);
    printf("\n");

    // Check user input for starting or quitting
    if (i == 7) {
        printf("The game has started\n");
    } else if (i == 0) {
        printf("The game has ended\n");
    } else {
        printf("Invalid input\n");
    }

    // Start quiz if user presses 7
    if (i == 7) {
        // Question 1
        printf("1. Which company developed the first personal computer?\n\n");
        printf("A) IBM\n");
        printf("B) Apple\n");
        printf("C) Microsoft\n");
        printf("D) Commodore\n");
        printf("\n");
        printf("Enter the answer: ");
        scanf("%d", &ans1);
        
        if (ans1 == 4) { // Correct answer is D) Commodore
            printf("Correct answer\n");
            point1 = 5;
            printf("You have got %d point(s)\n", point1);
        } else {
            printf("Wrong answer\n");
            printf("The correct answer is D) Commodore\n");
            point01 = 0;
            point1 = 0;
            printf("You have scored %d point(s)\n", point01);
        }

        // Question 2
        printf("\n2. What does HTTP stand for in web addresses?\n");
        printf("A) Hyper Text Transfer Protocol\n");
        printf("B) Hyper Time Transmission Process\n");
        printf("C) Hyper Transfer Technology Process\n");
        printf("D) High-Tech Transmission Protocol\n");
        printf("\n");
        printf("Enter the answer: ");
        scanf("%d", &ans2);
        
        if (ans2 == 1) { // Correct answer is A) Hyper Text Transfer Protocol
            printf("Correct answer\n");
            point2 = 5;
            printf("You got %d point(s)\n", point2 + point1);
        } else {
            printf("Wrong answer\n");
            printf("The correct answer is A) Hyper Text Transfer Protocol\n");
            point02 = 0;
            point2 = 0;
            printf("You got %d point(s)\n", point02);
        }

        // Question 3
        printf("\n3. What year was the first iPhone released?\n");
        printf("A) 2005\n");
        printf("B) 2007\n");
        printf("C) 2009\n");
        printf("D) 2010\n");
        printf("\n");
        printf("Enter the answer: ");
        scanf("%d", &ans3);
        
        if (ans3 == 2) { // Correct answer is B) 2007
            printf("Correct answer\n");
            point3 = 5;
            printf("You got %d point(s)\n", point3 + point2 + point1);
        } else {
            printf("Wrong answer\n");
            printf("The correct answer is B) 2007\n");
            point03 = 0;
            point3 = 0;
            printf("You got %d point(s)\n", point03);
        }

        // End of game
        printf("\nThanks for playing\n");
    }
    
    return 0;
}
