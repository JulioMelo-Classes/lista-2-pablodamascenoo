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
template<class InputIt>
InputIt copy(InputIt first, InputIt last, InputIt d_first)
{
    do{
        *d_first = *first;
        d_first++;
        first++;
    }
    while(first!=last);
    return d_first;
}

}
#endif
