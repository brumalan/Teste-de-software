#include <iostream>
#include <vector>
#include <numeric>
#include <stdexcept>
#include <algorithm>
#include <cassert>

// Funções principais
double calculateAverage(const std::vector<int>& data);
int findMaxValue(const std::vector<int>& data);

// Funções de teste de unidade
void testCalculateAverage();
void testFindMaxValue();

// Função de teste de integração
void testIntegration();

// Função principal
int main();

// --- Implementação das Funções ---

// Função para calcular a média de um vetor de inteiros
double calculateAverage(const std::vector<int>& data) {
    if (data.empty()) {
        throw std::invalid_argument("O vetor não pode estar vazio para calcular a média.");
    }
    long long sum = 0;
    for (int value : data) {
        sum += value;
    }
    return static_cast<double>(sum) / data.size();
}

// Função para encontrar o maior valor em um vetor de inteiros
int findMaxValue(const std::vector<int>& data) {
    if (data.empty()) {
        throw std::invalid_argument("O vetor não pode estar vazio para encontrar o valor máximo.");
    }
    return *std::max_element(data.begin(), data.end());
}

// --- Funções de Teste de Unidade ---

void testCalculateAverage() {
    std::cout << "Executando testes para calculateAverage..." << std::endl;
    // ... código de teste de unidade para calculateAverage
}

void testFindMaxValue() {
    std::cout << "Executando testes para findMaxValue..." << std::endl;
    // ... código de teste de unidade para findMaxValue
}

// --- Nova Função para Teste de Integração ---

void testIntegration() {
    std::cout << "Executando Teste de Integracao..." << std::endl;
    // ... código do teste de integração
}

// --- Função main() Atualizada ---

int main() {
    try {
        testCalculateAverage();
        std::cout << "\n";
        testFindMaxValue();
        std::cout << "\n";
        testIntegration();
        std::cout << "\nTodos os testes (unidade e integracao) passaram com sucesso!" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Um erro inesperado ocorreu: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}