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
 * Exemplo de documentação seguindo o formato Doxygen
 *
 * @tparam Itr iterator para o range.
 * @tparam Compare o tipo de uma função bool(const T &a, const T &b)
 *
 * @param first Ponteiro para o primeiro elemento do range
 * @param last Ponteiro para a posição logo após o último elemento do range
 * @param cmp A função de comparação que retorna true quando o primeiro parâmetro é menor do que o segundo
 *
 * @return Um std::pair contendo o menor e maior elemento, nesta ordem
 *
 */
 /*
 blz
 */
template <typename Itr, typename Compare >
std::pair<Itr, Itr> minmax( Itr first, Itr last, Compare cmp )
{


    std::pair<Itr, Itr>pares;
    pares.first = first;
    pares.second = first;
    for(Itr i = first; i!=last; i++){
        if(cmp(*pares.second, *i)==true){
            pares.second = i;
        }
        else if(*pares.second == *i){
            pares.second = i;
        }
        if(cmp(*i, *pares.first)== true){
            pares.first = i;
        }
    }


    return pares;
}
}
#endif
