#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;

    // if(i<10){
    //     j =3;
    // } else {
    //     j = 15;
    // }
    //j = (i<10) ? 3 : 15;

    printf("J: %d", (i < 10) ? 3 : 15);
    return 0;
}
