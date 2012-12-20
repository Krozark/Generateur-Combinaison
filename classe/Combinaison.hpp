#include <vector>


class Combinaison 
{
    public:
        typedef std::vector<std::vector<int> > returnType; //juste pour éviter de le retaper tout le temps
        static returnType* genAllFor(const int n);
        static void __print__(const returnType& res);

    private :
        Combinaison(){};
};
