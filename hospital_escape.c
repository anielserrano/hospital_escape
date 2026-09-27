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
    
    // Keep tracks of the player's items.
    int items[3] = {0, 0, 0};
    
    int playAgain = 1;

    // Repeats the game if the player wants to play again.
    while (playAgain == 1) {
        
        // Resets the game.
        choice = 0;
        gameOver = 0;
        items[0] = 0;
        items[1] = 0;
        items[2] = 0;
    
    printf("====================================\n");
    printf("      ABANDONED HOSPITAL ESCAPE\n");
    printf("====================================\n\n");

    printf("You wake up alone in an abandoned hospital.\n");
    printf("The room is dark and the building is silent.\n");
    printf("You need to find a way to escape.\n");
    printf("You look around the hospital room.\n\n");
    
    // Aniels part
    // Keeps asking until the player picks 1 or 2.
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
            
            // Saves the keycard.
            items[0] = 1;
        }
    
        else if  (choice == 2) {
        
            printf("You leave the room and enter the hallway.\n");
        }
        
        // Choice will be invalid if it isn't 1 or 2
        else {
        
            printf("Invalid choice.\n\n");
        }
    }    
    
    // Shows the hallway introduction once.
    // Aniels part
    printf("\n====================================\n");
    printf("            MAIN HALLWAY\n");
    printf("====================================\n");
        
    printf("\nYou step into the hallway.\n");
    printf("The hallway splits into three directions.\n");
    printf("To your left, you see a sign for the Pharmacy Room.\n");
    printf("Straight ahead is the Operating Room.\n");
    printf("To your right is a door that says Security Room.\n");
    printf("Or go back to the Hospital Room.\n\n");
    
    // Keeps the game going until the player escapes.
    while (gameOver == 0) {

        printf("\n------------------------------------\n");
        printf("Which direction do you want to take?\n");
        printf("1. Go left to the Pharmacy Room.\n");
        printf("2. Go straight toward the Operating Room.\n");
        printf("3. Go right to the Security Room.\n");
        printf("4. Go back to the Hospital Room.\n");
        printf("Enter your choice: ");

    
        scanf("%d", &choice);
        printf("\n"); 

        
        // Aniels Part
        if (choice == 1) {
            
            printf("\n====================================\n");
            printf("            PHARMACY ROOM\n");
            printf("====================================\n");

            // Checks if the flashlights was already found.
            if (items[1] == 0) {
            
                printf("You search around the room and found a flashlight!\n");
                
                // Saves the flashlight.
                items[1] = 1;
            }
        
            else {
            
                printf("You already searched this room and took the flashlight.\n");
            }

            printf("You return back to the main hallway.\n");
        }

        // Maliks Part
        else if (choice == 2) {

            printf("\n====================================\n");
            printf("            OPERATING ROOM\n");
            printf("====================================\n");
            
            // Checks if the player has the flashlight.
            if (items[1] == 0) {

                printf("it is too dark to see anything.\n");
                printf("Maybe you need something to light up the room.\n");
            }
            
            // Gives the player the security code.
            else if (items[2] == 0) {

                printf("You use the flashlight and search the room\n");
                printf("You found a paper with the security code on it!\n");

                // Saves the security code.
                items[2] = 1;
            }

            else {

                printf("You already searched this room and took the security code.\n");
            }

            printf("You return back to the main hallway.\n");
        }

        // Maliks Part
        else if (choice == 3) {

            printf("\n====================================\n");
            printf("            SECURITY ROOM\n");
            printf("====================================\n");
            
            // Make sure that the player has both required item.
            if (items[0] == 1 && items[2] == 1) {

                printf("You use the keycard and enter the security code.\n");
                printf("the exit door unlocks and you escape the hospital.\n");
                printf("You win!\n");

                // Ends the current game.
                gameOver = 1;
            }
            
            // Responses if the player doesn't have one of the required items.
            else {

                printf("The exit door is locked.\n");

                if (items[0] == 0) {

                    printf("You still need the keycard.\n");
                }

                if (items[2] == 0) {

                    printf("You still need the security code.\n");
                }

                printf("you return back to the main hallway.\n");
            }
        }

        // Aniels part
        else if (choice == 4) {
            
            printf("\n====================================\n");
            printf("            HOSPITAL ROOM\n");
            printf("====================================\n");
        
            // Lets the player find a missed key card.
            if (items[0] == 0) {
            
                printf("You search around the room and found the keycard.\n");
                
                // Saves the Keycard.
                items[0] = 1;
            }
            
            else {
            
                printf("You already searched this room and took the keycard.\n");
            }
        
            printf("You return back to the main hallway.\n");
        }

           // Handles numbers other than 1 through 4.
            else {

                printf("Invalid choice. Please choose 1, 2, 3, or 4.\n");
            }
        }
        
    // Asks if the player wants to restart.
    printf("\n------------------------------------\n");
    printf("Would you like to play again?\n");
        printf("1. Yes\n");
        printf("2. No\n");
        printf("Enter your choice: ");

        scanf("%d", &playAgain);
        printf("\n");
    }


    printf("Thanks for playing!\n");

    return 0;

}