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
 * {7,5,8,4,2,3,9} menor = 7;
 * {5,7,8,4,2,3,9} menor = 5;
 * {}
 * 
 */
template<class ForwardIt, class Comparison>
void sort(ForwardIt first, ForwardIt last, Comparison cmp)
{
    // TODO
    int menor = *first;
    int maior = *(last-1);
    int aux = 0;
    ForwardIt counter = first+1;
    for (ForwardIt i = first; i<last; i++){
        if(cmp(*i, menor)==true){
            aux = *first;
            menor = *i;
            *first = *i;
            *i = aux;
            i--;
        }
        else if(cmp(maior, *i)==true){
            aux = *(last-1);
            maior = *i;
            *(last-1) = *i;
            *i = aux;
            i--;
        }
    }
    for (ForwardIt i = first+2; i<last; i++){
        if(cmp(*i, *counter)==true){
            aux = *counter;
            *counter = *i;
            *i = aux;
            i = first+2;
        }
        else{
            counter++;
            while(*counter!= *i){
                if(cmp(*i,*counter)==true){
                    aux = *i;
                    *i = *counter;
                    *counter = aux;
                    i = first+2;
                    break;
                }
                counter++;
            }
            counter = (first+1);
        }
    }
}

}
#endif
