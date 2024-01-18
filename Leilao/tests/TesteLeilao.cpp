//
//  TesteLeilao.cpp
//  Leilao
//
//  Created by Wesley De Oliveira De Paula on 17/01/24.
//

#include "catch.hpp"
#include "Leilao.hpp"
#include "Usuario.hpp"

TEST_CASE("Leilão não deve receber lances consecutivos do mesmo usuário") {
    Leilao leilao("Fiat 147 0KM");
    Usuario vinicius("Vinicius Dias");
    
    Lance primeiroLance(vinicius, 1000);
    Lance segundoLance(vinicius, 1500);
    
    leilao.recebeLance(primeiroLance);
    leilao.recebeLance(segundoLance);
    
    REQUIRE(1 == leilao.recuperaLances().size());
    REQUIRE(1000 == leilao.recuperaLances()[0].recuperaValor());
}
