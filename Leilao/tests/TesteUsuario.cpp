//
//  TesteUsuario.cpp
//  Leilao
//
//  Created by Wesley De Oliveira De Paula on 17/01/24.
//

#include "catch.hpp"
#include "Usuario.hpp"

TEST_CASE("Usuário deve saber informar seu primeiro nome") {
    Usuario vinicius("Vinicius Dias");
    
    std::string primeiroNome = vinicius.recuperaPrimeiroNome();
    
    REQUIRE("Vinicius" == primeiroNome);
}
