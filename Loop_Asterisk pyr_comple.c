//Program to Make Pyramid of Asterisk for rows nos. enetered by user//

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    system("cls");

// Credits //
            printf("\n"); printf("Coded By...\n\n");
            printf(" **  **    **  *  * **** *    *       *** *   *  *  **   **  *  *  *\n");
            printf(" * * * *  *  * * *  *    * *  *       *   *   * * * * * *  * * * * *\n");
            printf(" **  **   *  * **   ***  *  * *  ***  *** ***** *** * * *  * **   **\n");
            printf(" * * * *  *  * * *  *    *   **         * *   * * * * * *  * **   **\n");
            printf(" **  *  *  **  *  * **** *    *       *** *   * * * **   **  *     *\n");
            printf("-------------------------------------------------------------------------\n");
// Credits //

    int row;
    for(int l=1; l<=100; l++) 
    {
        printf("\n________________\nEnter your desired no. of Rows (Below 80): ");
        scanf("%d", &row);
            if(row > 80)
                { system("cls");
                 printf("\n-------------------------------------");
                 printf("\nError! Please Enter a Number Below 80.");
                 printf("\n-------------------------------------\n"); 
                 break; 
                 }
            else if(row <= 0)
                { system("cls");
                 printf("\n-------------------------------------");
                 printf("\nError! Please Enter a Number Above 0.");
                 printf("\n-------------------------------------\n"); 
                 break; 
                }

        printf("\n");
        system("cls");

// Credits //
            printf("\n"); printf("Coded By...\n\n");
            printf("**  **    **  *  * **** *    *       *** *   *  *  **   **  *  *  *\n");
            printf("* * * *  *  * * *  *    * *  *       *   *   * * * * * *  * * * * *\n");
            printf("**  **   *  * **   ***  *  * *  ***  *** ***** *** * * *  * **   **\n");
            printf("* * * *  *  * * *  *    *   **         * *   * * * * * *  * **   **\n");
            printf("**  *  *  **  *  * **** *    *       *** *   * * * **   **  *     *\n");
            printf("-------------------------------------------------------------------------\n"); printf("\n");
// Credits //

// Main Code Starts Here//
            for(int i=1; i<=row; i++)        // For the Number of Rows that will be entered by user in r //
            {
                for(int j=row; j>i; j--)     // For the Spaces for every row initial will be equal to row initial Value is //
                    { printf(" "); }       // equal to rows so that the spaces won't be limited or reatract to screen //

                for(int k=1; k<=i; k++)    // For printing the Asterisk end value is equal to i for each loop //
                    { printf("* "); }

                printf("\n");              // To change the line on Every Row //
            }


        char r;
        printf("\nDo you want to draw another Pyramid? (Yes = y, No = n): ");
        scanf("%s",&r);
        
            if(r == 'n')
            { system("cls"); printf("\nThanks For Using our Program!");
                             printf("\n----------------------------------\n");break; }
            else if(r != 'y' && r != 'Y')
            { printf("\n-x-x- Error! (Using Default Value 'No') -x-x-\n"); break; }
            else
            { printf("----------------"); }

    } //Loop 1 End

    printf("\n");
    printf("Press any key to close");
    getch();
}