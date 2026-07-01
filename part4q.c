// salting(securing password)
// find the salted form of a password entered by user if the salt is "123" & added at the end
#include <stdio.h>
#include <string.h>
void salting(char password[]);

int main()
{
    char pass[100];
    printf("Enter PASSWORD: ");
    scanf("%s", pass);
    salting(pass);
    return 0;
}
void salting(char password[])
{
    char salt[] = "123";
    char newPass[200];
    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPass);
}