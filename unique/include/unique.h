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
template<class InputIt, class Equal>
InputIt unique( InputIt first, InputIt last, Equal eq )
{
    // TODO
    int aux=0;
    for(InputIt i = first; i<last-1; i++){
        for(InputIt j= i+1; j<last; j++){
            if(eq(*i, *j)==true){
                aux = *j;
                for(InputIt x=j; x<last-1; x++){    
                    *x = *(x+1);
                    *(x+1) = aux;
                }
                last--;
                j = i+1;
            }
        }
    }
    return last-1;
}

}
#endif
