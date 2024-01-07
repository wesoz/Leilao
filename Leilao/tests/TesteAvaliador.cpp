//
//  TesteAvaliador.cpp
//  Leilao
//
//  Created by Wesley De Oliveira De Paula on 05/01/24.
//

#include <iostream>
#include "Avaliador.hpp"

int main() {
    Lance primeiroLance(Usuario("Vinicius Dias"), 1000);
    Lance segundoLance(Usuario("Ana Maria"), 2000);
    Leilao leilao("Fiat 147 0km");
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);
    
    Avaliador leiloeiro;
    leiloeiro.avalia(leilao);
    
    std::cout << leiloeiro.recuperaMaiorValor() << std::endl;
    
    return 0;
}
