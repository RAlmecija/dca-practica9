#include <iostream>
#include <string>
#include <sstream>
#include <libintl.h>
#include <locale.h>
#define _(STRING) gettext(STRING)
// Especificamos el dominio de mensajes que se utilizará en nuestro programa
#define TEXT_DOMAIN "app"


int main()
{

    // Establecemos la localización del programa
    setlocale(LC_ALL, "");
    // Especificamos el directorio en el que se encuentran los archivos de traducción
    bindtextdomain(TEXT_DOMAIN, "idiomas");
    // Inicializamos la biblioteca gettext
    textdomain("app");


    // Pedimos al usuario que ingrese el texto
    std::cout << _("Ingresa el texto de ejemplo: ");
    std::string text;
    std::getline(std::cin, text);

    // Creamos un contador para llevar un registro de cuántas palabras hemos contado
    int word_count = 0;

    // Creamos un flujo de entrada a partir del texto ingresado por el usuario
    std::istringstream input(text);

    // Creamos una variable para almacenar la palabra actual
    std::string current_word;

    // Iteramos hasta que hayamos leído todas las palabras del texto
    while (input >> current_word)
    {
        // Incrementamos nuestro contador
        word_count++;
    }

    // Mostramos al usuario el resultado
    std::cout << _("El texto tiene ") << word_count - 10 << _(" palabras.") << std::endl;

    return 0;
}

