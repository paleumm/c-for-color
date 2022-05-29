#include <stdio.h>

int main(void)
{
    int color;
    for (color = 17; color < 232; color++)
    {
        printf("\t\033[48;5;%dm PROGRAMMING!!\t\033[0m\n", color);
    }
    return 0;
}