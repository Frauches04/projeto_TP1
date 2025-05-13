/// @file cabecalho_ordem.hpp
/// @brief Declaração das classes de domínio de ordeme, responsável por validar e armazenar os valores.

#ifndef CABECALHO_QUANTIDADE_HPP_INCLUDED
#define CABECALHO_QUANTIDADE_HPP_INCLUDED

#include <string>
#include <stdexcept>
using namespace std;

/**
 * @class Quantidade
 * @brief Representa os valores válidos que são entre 1 e 1.000.000.
 *
 * Esta classe verifica se a quantidade fornecida está dentro dos limites permitidos.
 * Lança exceções caso o valor seja inválido.
 */
class Quantidade {
private:
    static constexpr int LIMITE_baixo = 1;        ///Valor mínimo permitido = 1.
    static constexpr int LIMITE_cima = 1000000;   ///Valor máximo permitido = 1.000.000.

    int valor_quantidade; ///Armazena o valor da quantidade.

    /**
     * @brief Valida se o valor está entre os limites permitidos.
     * @param valor Valor a ser validado.
     * @throw std::invalid_argument se o valor estiver fora dos limites.
     */
    void validarValorQuantidade(int valor);

public:
    /**
     * @brief Define a quantidade após validação.
     * @param valor Valor a ser definido.
     * @throw std::invalid_argument se o valor estiver fora dos limites.
     */
    void setQuantidade(int valor);

    /**
     * @brief Retorna o valor atual armazenado.
     * @return Valor da quantidade.
     */
    int getQuantidade();
};

/// @brief Implementação inline do método getter.
/// @return Retorna o valor da quantidade armazenada.
inline int Quantidade::getQuantidade() {
    return valor_quantidade;
}

#endif // CABECALHO_QUANTIDADE_HPP_INCLUDED

