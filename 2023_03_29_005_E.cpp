// 2023_03_29_005_E.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>
#include <string>
int main()
{
    //estructura de control 1
    //1F
    //Syntaxis
    int edad = 0;
    std::cout << "Que edad tienes?" << std::endl;
    std::cin >> edad;
    if (edad >= 18)
    {
        std::cout << " bienvenido al mundo de los videojuegos " << std::endl;
    
    }
    if (edad < 18)
    {
        std::cout << " saquese al club de los pequeñines " << std::endl;
    }
    //if else
    //syyntaxis
    float temperatura = 0;
    std::cout << "Cuantos grados tienes de temperatura? \n";
    std::cin >> temperatura;
    if (temperatura >= 36 && temperatura <= 38)
    {
        std::cout << "Usted esta en perfecto estado \n";
    }
    else
    {
        std::cout << "Si sigue consciente vaya al medico \n";
    }
    //switch
    //syntaxxis
    int opc = 0;
    std::cout << "Hola usuario presiona una tecla del 1 al 4 para leer la frase de tu personaje favorito \n";
    std::cin >> opc;
    switch (opc)

    {
    case 1:
        std::cout << "Super!!!!!" << std::endl;
        break;
    case 2:
        std::cout << "Detras de ti imbecil" << std::endl;
        break;
    case 3:
        std::cout << "YUJUU" << std::endl;
        break;
    case 4:
        std::cout << "Mi taladro es el taladro que perforara los cielos" << std::endl;
        break;
    default:
        std::cout << "Al final todo estara bien, y si todo no esta bien, es porque no hemos llegado al final" << std::endl;
        break;
    }



    

}

