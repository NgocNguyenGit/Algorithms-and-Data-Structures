//
//  palindrome.h
//  DS_Homework 2_1
//
//  Created by Nguyen Le Khanh Ngoc on 22/11/2020.
//  Copyright © 2020 Nguyen Le Khanh Ngoc. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef palindrome_h
#define palindrome_h
void readChar (char *str);       //read only one character of the input string
struct Stack;                    //structure defining Stack data structure
struct Stack* createStack(unsigned capacity);
int isFull(struct Stack* stack); //stack is full when top is equal to the last index
int isEmpty(struct Stack* stack);//stack is empty when top is equal to -1
void push(struct Stack* stack, char ele);//add an element to stack and then increment top index
char pop(struct Stack* stack);   //remove top element from stack and decrement top index
int isPalindrome(char *str);     //determine whether an input string is a palindrome
void printPalindrome (int i, char *str); //print the result
#endif /* palindrome_h */
