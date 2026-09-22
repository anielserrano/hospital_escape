/*
@file hospital_escape.c
@brief text-based abandoned hospital escape game.

The player wakes up alone in abandoned hospital and has 
to escape by finding items needed, and make choices to escape

Aniel and Malik
*/

#include <stdio.h>

int main(void) {
    int choice;
    int gameOver = 0;
    int items[3] = {0, 0, 0};

    printf("====================================\n");
    printf("      ABANDONED HOSPITAL ESCAPE\n");
    printf("====================================\n\n");

    printf("You wake up alone in an abandoned hospital.\n");
    printf("The room is dark and the building is silent.\n");
    printf("You need to find a way to escape.\n\n");

    printf("You look around the hospital room.\n");
    printf("1. Search the room.\n");
    printf("2. Leave the room.\n");
    printf("Enter your choice: ");
    
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You search the room and found a keycard!\n");
        printf("You put the keycard in your pocket and enter the hallway.\n");
        items[0] = 1;
    }
    else if  (choice == 2) {
        printf("You leave the room and enter the hallway.\n");
    }
    else {
        printf("Invalid choice.\n");
    }
    
    while (gameOver == 0) {
        printf("\nYou step into the hallway.\n");
        printf("The hallway splits into three directions.\n");
        printf("To your left, you see a sign for the Pharmacy Room.\n");
        printf("Straight ahead is the Operating Room.\n");
        printf("To your right is a door that says Security Room.\n\n");
        
        printf("Which direction do you want to take?\n");
        printf("1. Go left to the Pharmacy Room.\n");
        printf("2. Go straight toward the Operating Room.\n");
        printf("3. Go right to the Security Room.\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);
        
        
        if (choice == 1) {
            printf("\nYou walk down the left hallway and enter the Pharmacy Room.\n\n");
            printf("You search around the room and find a flashlight.\n");
            items[1] = 1;
            printf("You return to the main hallway.\n");
        }
    }


    return 0;


}