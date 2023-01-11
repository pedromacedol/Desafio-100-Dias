# C++

---

- Programação procedimental/procedural
    
    - Conjunto de passos computacionais
    
    - Sub-problemas
    
- Programação Orientada a Objetos
    
    - Classe e Objeto
    

---

- **namespace**
    
    Declara um escopo contendo um conjunto de objetos relacionados, ou seja, contém as funções das bibliotecas.
    
    - Permite agrupar classes, objetos e funções
    - Divide o escopo global em “subescopos”
    
    ```cpp
    namespace nome_namespace
    //declarações
    
    namespace std; // funções da biblioteca padrão
    :: // retorna apenas a função especificada -> RECOMENDADA
    ```
    
- **Escrever e Ler dados (Input e Output)**
    - Ler (Output)
        
        ```cpp
        //Estrutura Básica
        cout << dados;
        
        //Vários dados
        cout << dados << dados2 << dadosX
        ```
        
        ```cpp
        //endl = "fim de linha"
        cout << dados << endl;
        
        //alterar a formatação antes
        cout.precision(1)
        cout << dados << endl;
        ```
        
    - Escrever (Input)
        
        ```cpp
        //Estrutura Básica
        cin >> variavel;
        
        //Receber varios valores
        cin >> variavel1 >> variavel2 >> variavelX;
        ```
        
    
    Exemplo
    
    ```cpp
    //recebe o valor de "var1"
    cin >> var1;
    
    //exibi o valor de "var1"
    cout << var1;
    ```
    
- 

---
