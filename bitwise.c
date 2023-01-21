#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    /*
        take integer input from cmdline

        Ex: input: 10
            binary: 0000 0000 0000 0000 0000 0000 0000 1010

            # of 0's: 30
            # of 1's: 2
    */

    if (argc > 2 || argc == 1)
    {
        printf("Provide one number as argument.\n");
        return 1;
    }

    unsigned int inputNum = strtol(argv[1], (char **)NULL, 10);
    int zeroCount = 0;
    int oneCount = 0;

    for (size_t i = 0; i < 32; i++)
    {
        if (inputNum & 1)
        {
            oneCount++;
        }
        else
        {
            zeroCount++;
        }
        inputNum >>= 1;
    }

    printf("Ones: %d\n", oneCount);
    printf("Zeros: %d\n", zeroCount);

    return 0;
}