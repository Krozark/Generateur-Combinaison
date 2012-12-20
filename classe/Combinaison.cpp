#include <iostream>
#include <string.h>

#include "Combinaison.hpp"

using namespace std;

#define MAX(x,y) ((x>y)?x:y)

#define get_firt_not_used(i_not_used,i) for(i_not_used=MAX(min_index[i],0);(i_not_used < n) and (used[i_not_used]==true) ;++i_not_used){}

#define reset() used[min_index[i-1]] = false;\
for(int j=i;j<n;++j)\
{\
    used[min_index[j]] = false;\
    min_index[j] = -1;\
}

#define next() if (--i <0) break; do ++min_index[i]; while(used[min_index[i]]== true && min_index[i] < n);

Combinaison::returnType Combinaison::genAllFor(const int n)
{
    returnType res;
    const int n_1 = n-1;
    int min_index[n]; //current min index of each lvl and 1 finded result
    memset(min_index,-1,n*sizeof(int));

    bool used[n]; // if 0...n is currently used 
    memset(used,false,n*sizeof(bool));
    
    int i = 0;//curente lvl

    while (min_index[0] <n)
    {
        register int i_not_used;
        //on cherche le plus petit 0..n qui est pas utilisé qui est plus grand que l'indice actuel
        get_firt_not_used(i_not_used,i)

        if (i_not_used >=n)
        {
            //reset tout le dessous
            reset();
            //incrémenter le min du niveau du dessus
            next();

            continue;
        }

        min_index[i] = i_not_used;

        if (i == n_1)
        {
            //save
            res.emplace_back(vector<int>(min_index,min_index+n)); //on copie le tableau
            //reset
            reset();
            // pas trouvé de truc répondant au critère, on recule d'un lvl
            next();
        }
        else
        {
            used[i_not_used] = true;
            //on avence
            ++i;
        }
    }

    //returnType& ret = res;
    return res;
};

void Combinaison::__print__(const returnType& res)
{
    const int size = res.size();
    for(int i=0;i<size;++i)
    {
        const int size2=res[i].size();
        for(int j=0;j<size2;++j)
            cout<<res[i][j];
        cout<<",";
    }
    cout<<endl;
};

