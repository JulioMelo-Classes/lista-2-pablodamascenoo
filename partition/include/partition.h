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
template<class ForwardIt, class UnaryPredicate>
ForwardIt partition(ForwardIt first, ForwardIt last, UnaryPredicate p)
{
    // TODO
    int aux=0;
    for(ForwardIt i = first; i<last; i++){
        if(p(*i)==false){
            aux = *i;
            for(ForwardIt x=i; x<last-1; x++){    
                *x = *(x+1);
                *(x+1) = aux;
            }
            last--;
            i--;
        }
        
    }
    return last;
}

}
#endif


// {2,3,4,5,6,7,8,9,|1|} e>5