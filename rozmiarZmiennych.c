#include <stdio.h>
#include <stdbool.h>

#define BITS_IN_BYTE 8

int main(void)
{
    short int               var_1;
    int                     var_2;
    long int                var_3;
    long long int           var_4;

    short unsigned int      var_5;
    unsigned int            var_6;
    long unsigned int       var_7;
    long long unsigned int  var_8;

    char                    var_9;

    float                   var_10;
    double                  var_11;

    bool                    var_12;

    printf("short int            : %2zu B | %3zu bits\n", sizeof(var_1),  sizeof(var_1)  * BITS_IN_BYTE);
    printf("int                  : %2zu B | %3zu bits\n", sizeof(var_2),  sizeof(var_2)  * BITS_IN_BYTE);
    printf("long int             : %2zu B | %3zu bits\n", sizeof(var_3),  sizeof(var_3)  * BITS_IN_BYTE);
    printf("long long int        : %2zu B | %3zu bits\n", sizeof(var_4),  sizeof(var_4)  * BITS_IN_BYTE);

    printf("short unsigned int   : %2zu B | %3zu bits\n", sizeof(var_5),  sizeof(var_5)  * BITS_IN_BYTE);
    printf("unsigned int         : %2zu B | %3zu bits\n", sizeof(var_6),  sizeof(var_6)  * BITS_IN_BYTE);
    printf("long unsigned int    : %2zu B | %3zu bits\n", sizeof(var_7),  sizeof(var_7)  * BITS_IN_BYTE);
    printf("long long unsigned   : %2zu B | %3zu bits\n", sizeof(var_8),  sizeof(var_8)  * BITS_IN_BYTE);

    printf("char                 : %2zu B | %3zu bits\n", sizeof(var_9),  sizeof(var_9)  * BITS_IN_BYTE);
    printf("float                : %2zu B | %3zu bits\n", sizeof(var_10), sizeof(var_10) * BITS_IN_BYTE);
    printf("double               : %2zu B | %3zu bits\n", sizeof(var_11), sizeof(var_11) * BITS_IN_BYTE);
    printf("bool                 : %2zu B | %3zu bits\n", sizeof(var_12), sizeof(var_12) * BITS_IN_BYTE);

    return 0;
}