#ifndef COMBINAISON_HPP
#define COMBINAISON_HPP

#include <vector>


class Combinaison 
{
    public:
        typedef std::vector<std::vector<int> > returnType; //juste pour éviter de le retaper tout le temps
        static returnType* genFor(const int n);
        static returnType* getOrGenFor(const int n);
        static void __print__(const returnType& res);
        static void clear();

        static std::vector<returnType*> results;
    private :
        Combinaison(){};
};


#endif
