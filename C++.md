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
        
- ****struct e typedef****
    
    Struct → Agrupamento de dados
    
    ```cpp
    //Estrutura padrão
    struct cadastro{
    	char nome[50];
    	int idade;
    };
    cadastro c;
    
    //Estrutura anônima -> sem nome
    struct cadastro{
    	char nome[50];
    	int idade;
    } cad1,cad2; //tem que ter variável declarada junto
    ```
    
    ```cpp
    //Inicicialização
    
    // Tradicional
    cadastro c1 = {"john", 32};
    
    // Uniforme
    cadastro c2 {"john", 32};
    
    // Atribuição
    cadastro cad;
    cad = {"john", 32};
    ```
    
    - typedef e using → Itnicialização de variável
    
    ```cpp
    Using 
    
    typedef int inteiro;
    using integer = int;
    ```
    
- **Strings**
    
    Sequência de caracteres utilizadas para representar palavras ou textos
    
    - Inicializar
        
        ```cpp
        // Forma tradicional C
        char str[tam] = "oi";
        
        //Padrão C++
        string str; //objeto
        ```
        
        ```cpp
        //  INICIALIZAÇÃO
        
        //atribuição
        string str = "texto"; 
        
        //construtor
        string str("texto");
        
        //Atribuir valor a outra string
        str1 = str2
        
        ```
        
    - Percorrer string
        
        ```cpp
        //FOR
        string str = "hello";
        for (int i = 0; i < str.size(); i++){
        	cout << str[i] << endl;
        }
        ```
        
    - Escrever na tela
        
        ```cpp
        string str = "hello";
        cout << str;
        ```
        
    - Lendo a string
        
        ```cpp
        string str;
        cin >> str;
        cout << str;
        
        //frase
        string str;
        getline(cin,str);
        cout << str;
        
        //limpar buffer
        string str;
        getline(cin,str);
        cin.ignore(32767, '\n'); 
        cout << str;
        ```
        
    - Manipulação de String
        
        Métodos internos desenvolvidos para manipulação de caracteres;
        
        ```cpp
        //tamanho
        string str = "hello";
        cout << str.length() << endl;
        cout << str.size() << endl;
        
        //copia de string
        string str, str2 = "hello";
        str.assign(str2);
        str = str2;
        
        //concatenar
        string str = "bom";
        string str2 = "dia";
        
        str += " ";
        str1.append(str2);
        str.pus_back('!'); //1 caracter
        
        //comparar
        string str = "bom";
        string str2 = "dia";
        
        if(str == str2)
        	cout << "iguais << endl
        else
        	cout << "dif" << endl
        
        str.compare(str2) == 0 // iguais
        
        ```
        
- Ponteiros e referência
    
    Funcionam como
    
    ```cpp
    int idade = 21;
    int *p;
    p = &idade;
    cout << *p << endl;
    cout << p << endl;
    
    //NUll 
    int *p1 = 0;
    nullptr // valor ponteiro NULL
    
    ```
    
    - Operador de referência → sempre inicializar
        
        Sempre será sinônimo para a 1º variável.
        
    
    ```cpp
    tipo_referencia &nome_referencia = variável; //sinonimo
    int idade = 22;
    int &refe = idade;
    
    cout << idade << endl; //22
    cout << refe << endl; //22
    ```
    
- **Funções**
    
    ```cpp
    //declarar antes do void
    int função(vall){
    	return val;
    }
    
    //proibido função dentro de função
    ```
    
    - tipos de passagem
        
        ```cpp
        //por valor
        
        //por referência -> Ponteiro
        
        //por referência -> Referência
        void function(int &n){
        	n = n+1;
        }
        
        ```
        
    - Sobrecarga → criar funções com o mesmo nome e parâmetros diferentes.
        
        ```cpp
        //Utilizar com cuidado, pois pode gerar um casting.
        
        void funcao(double a){
        }
        
        void funcao(int a){
        }
        
        void funcao(string a){
        }
        ```
        
    - Funções em linha → Substitui o código na definição da chamada da função
        
        ```cpp
        void funcao_comun_mensagem()
        {
            printf("\nStack OverFlow\nFunção comum.\n\n");
        }
        ```
        
    
- **Alocação dinâmica**
    
    Toda variável será alocada memória, ou seja, saber o tamanho de memória necessário para armazenar a informação.
    
    - Alocação de variável → new e delete
        
        ```cpp
        ponteiro = new tipo_dado;
        delete ponteiro;
        
        int *p = new int;
        *p = 80
        cout << &p << endl;
        
        ```
        
    - Alocação de Array → new[ ] e delete [ ]
        
        ```cpp
        ponteiro = new tipo_dados[tamanho];
        delete[] ponteiro;
        
        int *vet = new int[10];
        cout << vet[0]; << endl;
        delete[] vet;
        ```
        
    - Arrays multidimensionais (Matrizes)
        
        ```cpp
        //Utilizando a mesma forma do array
        int matriz[4][5] //Pode ser etendido como 20 posições na memória
        new int matriz[4][5] // Alocar apenas uma dimensão(FIXA)
        
        //Utilizando um array unidimensional
        for ...
        
        //Utilizando ponteiro do ponteiro
        int* //cria um array
        int** //array de ponteiros
        ```
        
    
      
    
- **Manipulação de Arquivos**
    
    fstream → Arquivo aberto;
    
    ofstream → Saída;
    
    ifstream → Entrada
    
    ```cpp
    //Biblioteca -> fstream
    objeto.open(nome_arq, modo);
    
    //bnario
    arq.open(nome_arq, ios::binary | ios::out);
    
    //nome_arq: diretório ou caminho relativo
    //modo: forma de abertura
    
    //para fechar:
    arquivo.close();
    ```
    
    - Escrever → ofstream  ( <<, Igual cout)
        
        ```cpp
        //textos
        arquivo << dados; 
        arquivo.close();
        
        //arquivos binários
        arquivo.read
        ```
        
    - Ler → ifstream (>>, igual cin)
        
        ```cpp
        //Modo de leitura
        
        //textos
        arquivo >> dados;
        arquivo.close();
        
        //arquivos binários
        arquivo.read(char *buffer, streamsize N);
        arquivo.close();
        ```
        
    - Ler todo o arquivo → eof (criar uma flag)
        
        ```cpp
        if(arq.eof()){
        	break;
        }
        ```
        
- **Tratamento e exceções**
    
    Verificar erros no sistemas e gerar exceções
    
    - Try → Código a ser testado;
    - Catch → Código a ser executado, em caso de erro no try;
    - Throw → Gera um retorno para uma exceção
    
    ```cpp
    throw expressão;
    
    try {
    	if (y < 0)
    		throw 42
    }
    catch(...){
    	cout << valor inválido;
    }
    ```
    

---