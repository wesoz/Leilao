#include "Leilao.hpp"

Leilao::Leilao(std::string descricao): descricao(descricao)
{
    
}

const std::vector<Lance>& Leilao::recuperaLances() const
{
    return lances;
}

void Leilao::recebeLance(const Lance& lance)
{
    if (lances.size() > 0) {
        Lance ultimoLance = lances.back();
        if (ultimoLance.recuperaNomeUsuario() == lance.recuperaNomeUsuario()) {
            return;
        }
    }
    
    lances.push_back(lance);
}
