#include <stdio.h>
enum { RED, BLUE, WHITE, BLACK };
int main()
{
    int palette = RED;
    switch (palette) 
    {
        case RED:
            printf("plalette : RED \n");
            break;
        case BLUE:
            printf("plalette : BLUE \n");
            break;
        case WHITE:
            printf("plalette : WHITE \n");
            break;
        case BLACK:
            printf("plalette : BLACK \n");
            break;
    }
}
