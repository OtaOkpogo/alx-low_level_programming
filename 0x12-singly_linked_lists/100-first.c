#include<stdio.h>

/**
* myStartupFun - Applies the constructor attribute to myStartupFun()
*/
void myStartupFun(void) __attribute__((constructor));

/**
* myStartupFun - implementation of myStartupFun
*/
void myStartupFun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
