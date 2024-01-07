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
    float maiorValor;
public:
    void avalia(Leilao leilao);
    float recuperaMaiorValor();
};

#endif /* Avaliador_hpp */
