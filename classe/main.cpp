#include "Combinaison.hpp"
#include <stdlib.h>
#include <stdio.h>

int main(int argc,char * argv[])
{
    if (argc > 1)
    {
        Combinaison::returnType* res = Combinaison::genAllFor(atoi(argv[1]));
        Combinaison::__print__(*res);
        delete res;
    }
    else
        printf("manque le nombre en param\n");

    return 0;
}
