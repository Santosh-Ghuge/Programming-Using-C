// Problem Statement : Accept Number from User and Display Below Pattern..
// Conclusion :        *   *   *   *   *   *
//                    

// Step 1 : Uderstand the problem statement 

// Step 2 : Write Algorithm for Problem
/*  
        START   
                Creat a varible integer as iValue for accept number from user 
                Create a function as Display 
                we Use for loop for this problem
                give condition to loop and display pattern
         STOP
*/

// Step 3 : We choose C Programming for Display the above Pattern

// Step 4 : Write a Program

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//      Function Name    : Display
//      Description      : It is used to perform the Logic
//      Input Argument   : Integer
//      Output Argumment : Symbol
//      Author           : Santosh Dnyandev Ghuge
//      Date             : 01/11/2023
//
////////////////////////////////////////////////////////////////////////

void Display(int iNo)                 // Function
{
    int iCnt = 0;           // it is counter for loop

    for(iCnt = 1; iCnt <= iNo; iCnt++)        // Loop for Condition check
    {
        printf("*\t");              
    }

}

////////////////////////////////////////////////////////////////////////
//
//      Main Entry Point Funtion
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;             // Varible to accept number from user

    printf("Enter the count : \n");         // Print on screen
    scanf("%d", &iValue);                   // Accept the Value

    Display(iValue);              // Call the function

    return 0;
}

// Step 5 : 
/*
    Test Case 1 : 
                Input  : 12
                Output : *  *   *   *   *   *   *  *   *   *   *   *


    Test Case 2 : 
                Input  : 6
                Output : *  *   *   *   *   *

    Test Case 3 : 
                Input  : 5
                Output : *   *   *   *   *

    Test Case 4 : 
                Input  : 10
                Output : *  *   *   *   *   *   *   *   *   *

    Test Case 5 : 
                Input  : 4
                Output : *  *   *   *

*/