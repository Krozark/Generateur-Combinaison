#include "Combinaison.hpp"

int main(int argc,char * argv[])
{
    Combinaison::returnType* res = Combinaison::genAllFor(6);
    Combinaison::__print__(*res);
    delete res;

    return 0;
}
