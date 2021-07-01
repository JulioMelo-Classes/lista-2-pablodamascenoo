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
 /*
 80%
 */
template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, Equal eq)
{
    // TODO
    for(InputIt1 i = first1; i<last1; i++){
        if(eq(*i, *first2)==false){
            return false;
        }
        first2++;
    }
    return true;
}

template<class InputIt1, class InputIt2, class Equal>
bool equal(InputIt1 first1, InputIt1 last1,
           InputIt2 first2, InputIt2 last2,
           Equal eq )
{
    // TODO
    if((last1-first1)==(last2-first2)){
        for(InputIt1 i = first1; i<last1; i++){
            if(eq(*i, *first2)==false){
                return false;
            }
            first2++;
        }
        return true;
    }
    return false;
}

}
#endif
