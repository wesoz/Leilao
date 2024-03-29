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
    std::vector<Lance> maiores3Lances;
    static bool ordenaLances(const Lance&, const Lance&);
public:
    void avalia(Leilao leilao);
    float recuperaMaiorValor();
    float recuperaMenorValor();
    std::vector<Lance> recupera3MaioresLances() const;
};

#endif /* Avaliador_hpp */
