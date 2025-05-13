/// @file quantidade.cpp
/// @brief Implementação dos métodos da classe Quantidade.

#include "cabecalho_quantidade.hpp"
#include <iostream>

/// @brief Define a quantidade após validar o valor.
/// @param valor Valor a ser definido.
/// @throw std::invalid_argument Se o valor estiver fora dos limites.
void Quantidade::setQuantidade(int valor) {
    validarValorQuantidade(valor);
    this->valor_quantidade = valor;
}

/// @brief Verifica se o valor está dentro dos limites aceitáveis.
/// @param valor Valor a ser validado.
/// @throw std::invalid_argument Se o valor estiver abaixo de 1 ou acima de 1.000.000.
void Quantidade::validarValorQuantidade(int valor) {
    if (valor < LIMITE_baixo || valor > LIMITE_cima) {
        throw std::invalid_argument("Codigo invalido: valor acima do limite.");
    }
    std::cout << "Valor valido: " << valor << std::endl;
}
