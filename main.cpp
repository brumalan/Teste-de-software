#include <iostream>
#include <vector>
#include <numeric>
#include <stdexcept>
#include <algorithm>
#include <cassert>

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

// --- Funções de Teste Simples ---

void testCalculateAverage() {
    std::cout << "Executando testes para calculateAverage..." << std::endl;

    // Cenário 1: Caso normal
    std::vector<int> data1 = {10, 20, 30, 40, 50};
    assert(calculateAverage(data1) == 30.0);
    std::cout << "   -> Teste 'Caso normal' passou." << std::endl;

    // Cenário 2: Vetor com um único elemento
    std::vector<int> data2 = {100};
    assert(calculateAverage(data2) == 100.0);
    std::cout << "   -> Teste 'Único elemento' passou." << std::endl;
    
    // Cenário 3: Vetor vazio (espera exceção)
    std::cout << "   -> Testando 'Vetor vazio'..." << std::endl;
    std::vector<int> data3;
    bool exceptionThrown = false;
    try {
        calculateAverage(data3);
    } catch (const std::invalid_argument& e) {
        exceptionThrown = true;
    }
    assert(exceptionThrown);
    std::cout << "   -> Teste 'Vetor vazio' passou." << std::endl;
}

void testFindMaxValue() {
    std::cout << "Executando testes para findMaxValue..." << std::endl;

    // Cenário 1: Caso normal
    std::vector<int> data1 = {1, 5, 2, 9, 3};
    assert(findMaxValue(data1) == 9);
    std::cout << "   -> Teste 'Caso normal' passou." << std::endl;

    // Cenário 2: Vetor com números negativos
    std::vector<int> data2 = {-10, -5, -20, -3};
    assert(findMaxValue(data2) == -3);
    std::cout << "   -> Teste 'Números negativos' passou." << std::endl;

    // Cenário 3: Vetor vazio (espera exceção)
    std::cout << "   -> Testando 'Vetor vazio'..." << std::endl;
    std::vector<int> data3;
    bool exceptionThrown = false;
    try {
        findMaxValue(data3);
    } catch (const std::invalid_argument& e) {
        exceptionThrown = true;
    }
    assert(exceptionThrown);
    std::cout << "   -> Teste 'Vetor vazio' passou." << std::endl;
}

int main() {
    try {
        testCalculateAverage();
        std::cout << "\n";
        testFindMaxValue();
        std::cout << "\nTodos os testes passaram com sucesso!" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Um erro inesperado ocorreu: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}