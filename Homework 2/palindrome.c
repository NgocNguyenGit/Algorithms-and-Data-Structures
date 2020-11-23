//
//  palindrome.c
//  DS_Homework 2_1
//
//  Created by Nguyen Le Khanh Ngoc on 22/11/2020.
//  Copyright © 2020 Nguyen Le Khanh Ngoc. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "palindrome.h"
void readChar (char *str){
    int i;
    printf("Enter a string: ");
    i = 0;
    char ch = getchar ();
    while(ch!='\n') {               //get the string from the user by
        str[i] = ch;                //using only single char variable in a loop
        i++;
        ch = getchar();
    }
    printf("You entered the following string: %s.\n",str);
}

struct Stack                        //structure defining Stack data structure
{
    int top;
    unsigned capacity;
    char *ptr;
};

struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;                //initializes the top index to -1
    stack->ptr = (char*) malloc(stack->capacity * sizeof(char));
    return stack;
}
  
int isFull(struct Stack* stack){    //stack is full when top is equal to the last index
    if(stack->top == stack->capacity - 1){
        return 1;
    } else {
        return 0;
    }
}
  
int isEmpty(struct Stack* stack){   //stack is empty when top is equal to -1
    if(stack->top == -1){
        return 1;
    } else {
        return 0;
    }
}
  
void push(struct Stack* stack, char ele){    //function to add an item to stack
    stack->ptr[++stack->top] = ele;          //it increases top by 1
}
  
char pop(struct Stack* stack){               //function to remove an item from stack
    return stack->ptr[stack->top--];         //it decreases top by 1
}

int isPalindrome(char *str)
{
    unsigned int length = (unsigned int)strlen(str);
    struct Stack* stack = createStack(length);
    
    int i;
    unsigned long mid = length / 2;          //find the mid

    for (i = 0; i < mid; i++) {
        push(stack,str[i]);
    }

    if (length % 2 != 0) {                   //checking if the length of the string is odd,
        i++;                                 //if odd then neglect the middle character
    }

    while (str[i] != '\0') {                 //while not the end of the string
        char ele = pop(stack);
        if (ele != str[i]){                  //if the characters differ then the
            return 0;                        //given string is not a palindrome
        }
        i++;
    }
    return 1;
}

void printPalindrome (int i, char *str){     //print the result
    if (i == 1) {
        printf("Yes, \"%s\" is a palindrome.\n",str);
    }
    else {
        printf("No, \"%s\" is not a palindrome.\n",str);
    }
}

  
