# C++

---

- Programação procedimental/procedural
    
    - Conjunto de passos computacionais
    
    -Sub-problemas
    
- Programação Orientada a Objetos
    
    -Classe e Objeto
    

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
    
- **Variáveis e Tipos**
    - Tipos
        
        
        | Tipo | Bits |
        | --- | --- |
        | Char | 8  |
        | int | 32 |
        | float | 32 |
        
        | Tipo | Bits |
        | --- | --- |
        | double | 8  |
        | void | 8 |
        | bool |  |
        
        → Pontos flutuante: permite testar números com precisão
        
        → auto: indentificar de forma automática o tipo de variável
        
    - Declaração de Variável
        
        tipo nome_da_variavel
        
    
    ```cpp
    int num, value;
    ```
    
    - Inicialização de Variável
    
    ```cpp
    //Por cópia, com operador de atribuição -> forma tradicional
    int x = 5;
    
    //Direta, com parêntes() 
    int x(5);
    
    //Uniforme, com chaves{}
    int x{5};
    ```
    
    - If e Else
        
        ```cpp
        
        if (x == 0)
        condição;
        else{
        	condição
        }
        ```
        
    
    - Switch e Break
        
        ```cpp
        switch(N){
        	case 1:
        		break;
        	case 2:
        		break;
        	default:
        		cout << "value 3";
        ```
        
    - while e do-while
        
        ```cpp
        while(condição){
        	ação;
        }
        
        do{
        	ação
        }while(condição);
        ```
        
    - for
        
        ```cpp
        for(variável, condição, ação sobre variável)
        	ação;
        
        //for para lista de valores
        int l[5] = {1, 2, 3, 4}
        for(int x: l)
        	cout << x << "\n";
        ```
        
    
    - Array
        
        ```cpp
        int l[5] = {1, 2, 3, 4}
        ```
        

---