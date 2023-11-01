// Problem Statement : Display Below Pattern..
// Conclusion :        *   *   *   *   *   *
//                    

// Step 1 : Uderstand the problem statement 

// Step 2 : Write Algorithm for Problem
/*  
        START   
                Create a function as Display which retuns nathing i.e void Display()
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

void Display()                 // Function not return nothing 
{
    int iCnt = 0;           // it is counter for loop

    for(iCnt = 1; iCnt <= 6; iCnt++)        // Loop for Condition check
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
    Display();              // Call the function

    return 0;
}

// Step 5 : 
/*
    Test Case : 
                Input  : 6
                Output : *  *   *   *   *   *

*/