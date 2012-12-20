#include "Combinaison.hpp"

int main(int argc,char * argv[])
{
    auto res = Combinaison::genAllFor(4);
    Combinaison::__print__(res);

    return 0;
}
