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
        if (this->maiorValor < lance.recuperaValor()) {
            this->maiorValor = lance.recuperaValor();
        }
    }
    
    Lance ultimoLance = lances.back();
    this->maiorValor = ultimoLance.recuperaValor();
}

float Avaliador::recuperaMaiorValor() {
    return this->maiorValor;
}
