#include <string.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int value = 5;
    char buffer_one[8], buffer_two[8];
    strcpy(buffer_one, "one");
    strcpy(buffer_two, "two");

    printf("Buffer one: %p data: %s\n", &buffer_one, buffer_one);
    printf("Buffer one: %p data: %s\n", &buffer_two, buffer_two);

    strcpy(buffer_two, argv[1]);

    printf("Buffer one: %p data: %s\n", &buffer_one, buffer_one);
    printf("Buffer two: %p data: %s\n", &buffer_two, buffer_two);

    return 0;
}