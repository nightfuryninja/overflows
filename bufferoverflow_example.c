#include <string.h>
#include <stdio.h>

int check_password(const char *buffer)
{
    /* Moving these variables can prevent the authflag from being
       subject to a buffer overflow from password.
    */
    int authflag = 0;
    char password[10];

    strcpy(password, buffer);
    if (strcmp(password, "password") == 0)
    {
        authflag = 1;
    }

    return authflag;
}

int main(int argc, char const *argv[])
{
    if (argc < 2)
    {
        printf("Expected a password.\n");
        return 0;
    }

    if  (check_password(argv[1]))
    {
        printf("ACCESS GRANTED\n");
    }
    else
    {
        printf("ACCESS DENIED\n");
    }

    return 0;
}
