Projeto de Análise de Dados Simples em C++ com Teste de Unidade e de Integração
Este projeto é uma demonstração de como desenvolver e testar software em C++. Ele inclui uma pequena biblioteca de análise de dados e uma implementação de testes de unidade e de integração para garantir a qualidade do código.

Conteúdo do Projeto
main.cpp: Contém a lógica principal da biblioteca de análise de dados, incluindo as funções de processamento de dados (calculateAverage e findMaxValue), os testes de unidade e um teste de integração que verifica o comportamento das funções em conjunto.

Métodos Implementados
calculateAverage(std::vector<int>& data): Calcula a média de todos os números inteiros em um vetor. Lança uma exceção se o vetor estiver vazio.

findMaxValue(std::vector<int>& data): Encontra o maior valor em um vetor de números inteiros. Lança uma exceção se o vetor estiver vazio.

Tipos de Teste
Este projeto inclui dois tipos de testes para garantir a robustez do código:

Testes de Unidade: Verificam se cada função (calculateAverage e findMaxValue) se comporta corretamente de forma isolada, em cenários normais e de borda (como vetores vazios ou com um único elemento).

Testes de Integração: Verificam se a interação entre as funções funciona como esperado. O teste de integração simula um cenário real onde a saída de uma função é usada como entrada para outra, garantindo que o fluxo do programa seja coeso.

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
Execute o programa compilado. Ele irá rodar todos os testes de unidade e o teste de integração, mostrando o resultado no terminal.

Bash

./testeunitario
Exemplo de Saída Esperada
A saída no terminal deve indicar que todos os testes, incluindo o de integração, passaram com sucesso.

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

Executando Teste de Integracao...
   -> Teste de Integracao 'Media dos Maximos' passou.

Todos os testes (unidade e integracao) passaram com sucesso!