#include <iostream>

using namespace std;

int main()
{
    int variavel_1;
    int* ponteiro_1;
    
    variavel_1 = 100;
    ponteiro_1 = &variavel_1;

    cout << "Valor de variavel_1:\n" << *ponteiro_1 << endl;
    cout << "Endereço da variavel_1:\n" << ponteiro_1 << endl;
    
    return 0;
}
