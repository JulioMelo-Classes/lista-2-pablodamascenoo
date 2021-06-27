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
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
    // TODO
    
    BidirIt pos_count = first;
    BidirIt neg_count = last-1;
    int range = (last-first);
    int aux;
    for(int i=0; i<(range/2); i++){
        aux = *pos_count;
        *pos_count = *neg_count;
        *neg_count = aux;
        pos_count++;
        neg_count--;
    }
}

}
#endif


// {1,2,3,4,5,6,7} aux = 1; 
// {7,2,3,4,5,6,1}







