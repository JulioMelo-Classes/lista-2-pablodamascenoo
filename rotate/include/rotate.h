#ifndef GRAAL_H
#define GRAAL_H

#include <utility>
using std::pair;
#include <iterator>
using std::distance;
#include <algorithm>
using std::sort;

namespace graal {

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class ForwardIt>
ForwardIt rotate(ForwardIt first, ForwardIt n_first, ForwardIt last)
{
    // TODO
    int aux_1=0, aux_2 = 0, teste=*n_first;
    ForwardIt itr = first;
    while(*first != teste){
        aux_1 = *first;
        *first = *(last-1);
        for(ForwardIt i = first+1; i<last; i++){
            aux_2 = *i;
            *i = aux_1;
            aux_1 = aux_2;
        }
        if(itr==last){
            itr = first;}
        else{
            itr++;
        }
    }
   return itr;
}

}
#endif

