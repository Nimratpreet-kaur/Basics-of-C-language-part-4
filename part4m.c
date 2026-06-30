#include <stdio.h>
int main()
{
    //string using pointer
    char *name = "Nimratpreet kaur";//can be reinitialized/changed
    puts(name);
    name = "Nimrat";
    puts(name);
    char _name[] = "Nimratpreet kaur";//cannot be reinitialized/changed
    puts(_name);
    return 0;
}