#include <iostream>

using namespace std;

//funcion contontar longitud cadena de caracteres
int contar_caracteres(char * cadena){
    int contador=0; // variable para ir sumando o contandoclos caracteres
    while(cadena[contador]!='\0'){ //el ciclo finaliza cuando se encuentre el caracter nulo
        contador++;//aumetamos 1 al  contador
    }
    return contador;
}

int main()
{

    cout << "Longitud de la cadena: " << contar_caracteres("Hola musica") << endl;
    return 0;
}
