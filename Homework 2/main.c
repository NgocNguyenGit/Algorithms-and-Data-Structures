//
//  main.c
//  DS_Homework 2_1
//
//  Created by Nguyen Le Khanh Ngoc on 22/11/2020.
//  Copyright © 2020 Nguyen Le Khanh Ngoc. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "palindrome.h"

int main(int argc, const char * argv[]) {
    char *str;                      //Pointer variable, this pointer will hold the
                                    //base address of the block created
    
    unsigned long size = 0;         //Assign to 0 to fix the compile warning
    
    str = (char *) malloc (size);   //Dynamically allocate memory using malloc()
    
    readChar(str);                  //Read only one character of the input string
    
    printPalindrome(isPalindrome(str), str); //Determines whether an input string is a palindrome
    return 0;
}
