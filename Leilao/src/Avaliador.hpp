//
//  Avaliador.hpp
//  Leilao
//
//  Created by Wesley De Oliveira De Paula on 05/01/24.
//

#ifndef Avaliador_hpp
#define Avaliador_hpp

#include "Leilao.hpp"

class Avaliador {
private:
    float maiorValor = INT_MIN;
    float menorValor = INT_MAX;
public:
    void avalia(Leilao leilao);
    float recuperaMaiorValor();
    float recuperaMenorValor();
};

#endif /* Avaliador_hpp */
