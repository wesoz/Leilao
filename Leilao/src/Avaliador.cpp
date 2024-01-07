//
//  Avaliador.cpp
//  Leilao
//
//  Created by Wesley De Oliveira De Paula on 05/01/24.
//

#include "Avaliador.hpp"

void Avaliador::avalia(Leilao leilao) {
    std::vector<Lance> lances = leilao.recuperaLances();
    for (Lance lance : lances) {
        if (lance.recuperaValor() > this->maiorValor) {
            this->maiorValor = lance.recuperaValor();
        }
        
        if (lance.recuperaValor() < this->menorValor) {
            this->menorValor = lance.recuperaValor();
        }
    }
}

float Avaliador::recuperaMaiorValor() {
    return this->maiorValor;
}

float Avaliador::recuperaMenorValor() {
    return this->menorValor;
}
