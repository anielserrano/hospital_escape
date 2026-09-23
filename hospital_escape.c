/*
@file hospital_escape.c
@brief text-based abandoned hospital escape game.

The player wakes up alone in abandoned hospital and has 
to escape by finding items needed, and make choices to escape

Aniel and Malik
*/

#include <stdio.h>

int main(void) {
    int choice = 0;
    int gameOver = 0;
    int items[3] = {0, 0, 0};

    printf("====================================\n");
    printf("      ABANDONED HOSPITAL ESCAPE\n");
    printf("====================================\n\n");

    printf("You wake up alone in an abandoned hospital.\n");
    printf("The room is dark and the building is silent.\n");
    printf("You need to find a way to escape.\n");
    printf("You look around the hospital room.\n\n");

    while (choice !=1 && choice !=2) {

        printf("\n------------------------------------\n");
        printf("What do you want to do?\n");
        printf("1. Search the room.\n");
        printf("2. Leave the room.\n");
        printf("Enter your choice: ");
    
        scanf("%d", &choice);
        printf("\n");

        if (choice == 1) {
        
            printf("You search the room and found a keycard!\n");
            printf("You put the keycard in your pocket and enter the hallway.\n");
        
            items[0] = 1;
        }
    
        else if  (choice == 2) {
        
            printf("You leave the room and enter the hallway.\n");
        }
    
        else {
        
            printf("Invalid choice.\n\n");
        }
    }    

    while (gameOver == 0) {
        
        printf("\n====================================\n");
        printf("            MAIN HALLWAY\n");
        printf("====================================\n");
        
        printf("\nYou step into the hallway.\n");
        printf("The hallway splits into three directions.\n");
        printf("To your left, you see a sign for the Pharmacy Room.\n");
        printf("Straight ahead is the Operating Room.\n");
        printf("To your right is a door that says Security Room.\n");
        printf("Or go back to the Hospital Room.\n\n");
        
        printf("\n------------------------------------\n");
        printf("Which direction do you want to take?\n");
        printf("1. Go left to the Pharmacy Room.\n");
        printf("2. Go straight toward the Operating Room.\n");
        printf("3. Go right to the Security Room.\n");
        printf("4. Go back to the Hospital Room.\n");
        printf("Enter your choice: ");

    
        scanf("%d", &choice);
        printf("\n"); 
         
        
        if (choice == 1) {
            printf("\n====================================\n");
            printf("            PHARMACY ROOM\n");
            printf("====================================\n");

            if (items[1] == 0) {
            
                printf("You search around the room and found a flashlight!\n");
            
                items[1] = 1;
            }
        
            else {
            
                printf("You already searched this room and took the flashlight.\n");
            }

            printf("You return back to the main hallway.\n");
        }

        else if (choice == 4) {
            printf("\n====================================\n");
            printf("            HOSPITAL ROOM\n");
            printf("====================================\n");
        
            if (items[0] == 0) {
            
                printf("You search around the room and found the keycard.\n");
           
                items[0] = 1;
            }
            else {
            
                printf("You already searched this room and took the keycard.\n");
            }
        
            printf("You return back to the main hallway.\n");
        }
    }

    return 0;

}           