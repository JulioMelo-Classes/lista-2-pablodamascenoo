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
template<class InputIt, class UnaryPredicate>
bool all_of(InputIt first, InputIt last, UnaryPredicate p)
{
    // TODO
    if(first == last){
        return false;
    }
    do{
        if(p(*first)==false){
            return false;
        }
        first++;
    }
    while(first!=last);
    return true;
}

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool any_of(InputIt first, InputIt last, UnaryPredicate p)
{
    // TODO
    if(first == last){
        return false;
    }
    do{
        if(p(*first)==true){
            return true;
        }
        first++;
    }
    while(first!=last);
    return false;
}

/*! 
 * TODO: documentação no estilo doxygen
 */
template<class InputIt, class UnaryPredicate>
bool none_of(InputIt first, InputIt last, UnaryPredicate p)
{
    // TODO
    if(first == last){
        return true;
    }
    do{
        if(p(*first)==true){
            return false;
        }
        first++;
    }
    while(first!=last);
    return true;
}

}
#endif
