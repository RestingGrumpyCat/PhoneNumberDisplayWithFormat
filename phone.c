#include <stdio.h>
#include <stdlib.h>


/****************************************** ^ - ^  **************************************************/

/**This program takes an input of 10 digits phone number and format option,
 * then prints out the phone number with different formats according to the option
 *
 *Student Name:   Shiyu Wang
 *
 **/

/****************************************** ^ - ^ **************************************************/


int main() {

    //initialize the variables for reading digits and option
    int num1, num2, num3;
    char option;

    //get input from user for phone number
    printf("Input Phone Number:\t");


    /* scan the first three digits to num1, another three digits to num2, and the final four digits to num3
     * Also check if the input is integers, if not exit the program*/
    if(scanf("%3d %3d %4d", &num1, &num2, &num3) != 3){

        printf("\nError: Invalid Phone Number! \n");
        exit(1);
    }


    //check if input is correct, exit if not
    if(num1<0 || num2 < 0 || num3 <0){
        printf("\nError: Invalid Phone Number! ");
        exit(2);

    }


    else if (num1<100 || num2 < 100 || num3 <1000){
        printf("\nError: Invalid Phone Number! ");
        exit(3);
    }


    //get input from user for options
    printf("\nFormat Options:\n A) Local\n B) Domestic\n C) International\n D) Odd\n");
    printf("\nInput Option: ");
    scanf(" %c", &option);


    //print different formats according to option specified
    switch(option){

        case 'a':
        case 'A': printf("\nPhone Number: %d-%d\n", num2, num3);
        break;

        case 'b':
        case 'B': printf("\nPhone Number: (%d) %d-%d\n", num1, num2, num3);
        break;

        case 'c':
        case 'C': printf("\nPhone Number: +1-%d-%d-%d\n", num1, num2, num3);
        break;

        case 'd':
        case 'D': printf("\nPhone Number: %6.4d%6.4d%6d\n", num1, num2, num3);
        break;

        //any invalid option will print an error, and exit with a status of 4
        default : printf("\nError: Invalid Option!\n");
        exit(4);

    }


    return 0;
}
