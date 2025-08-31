Projeto de Análise de Dados Simples em C++ com Teste de Unidade
Este projeto é uma demonstração de como desenvolver e testar software em C++. Ele inclui uma pequena biblioteca de análise de dados e uma implementação de testes de unidade para garantir a qualidade do código.

Conteúdo do Projeto
main.cpp: Contém a lógica principal da biblioteca de análise de dados, incluindo duas funções com processamento de dados (calculateAverage e findMaxValue), e os testes de unidade que verificam o comportamento dessas funções em diversos cenários.

Métodos Implementados
calculateAverage(std::vector<int>& data): Calcula a média de todos os números inteiros em um vetor. Lança uma exceção se o vetor estiver vazio.

findMaxValue(std::vector<int>& data): Encontra o maior valor em um vetor de números inteiros. Lança uma exceção se o vetor estiver vazio.

Como Compilar e Rodar
Para compilar e executar o projeto, você precisará de um compilador C++ (como o g++) instalado no seu sistema.

Navegue até a pasta do projeto
Abra um terminal e use o comando cd para ir para a pasta onde o arquivo main.cpp está salvo.

Bash

cd "caminho/para/o/seu/projeto"
Compile o código
Use o seu compilador para transformar o código-fonte em um programa executável. O comando abaixo cria um executável chamado testeunitario.

Bash

g++ main.cpp -o testeunitario
Rode o programa
Execute o programa compilado. Ele irá rodar todos os testes de unidade e mostrar o resultado no terminal.

Bash

./testeunitario
Exemplo de Saída Esperada
A saída no terminal deve indicar que todos os testes passaram com sucesso, como no exemplo abaixo:

Executando testes para calculateAverage...
   -> Teste 'Caso normal' passou.
   -> Teste 'Único elemento' passou.
   -> Testando 'Vetor vazio'...
   -> Teste 'Vetor vazio' passou.

Executando testes para findMaxValue...
   -> Teste 'Caso normal' passou.
   -> Teste 'Números negativos' passou.
   -> Testando 'Vetor vazio'...
   -> Teste 'Vetor vazio' passou.

Todos os testes passaram com sucesso!