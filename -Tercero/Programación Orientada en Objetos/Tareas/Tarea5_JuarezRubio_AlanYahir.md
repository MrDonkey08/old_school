# <center>Universidad de Guadalajara</center>

## <center>Centro Universitario de Ciencias Exactas E Ingenierías</center>

![Portada-UDG | left | 200](../../../Attachments/Images/Portada-UDG.jpeg) ![Portada-CUCEI | right | 200](../../../Attachments/Images/Portada-CUCEI.jpeg)
 
<br> <br> <br> <br> <br><br> <br><br><br><br><br><br><br><br><br><br><br>

### División de Tecnologías para la Integración Ciber-humana

### Departamento de Ciencias Computacionales

#### Tarea 5

#### Tema: IGU (Interfaz Gráfica para el Usuario)

#### Estudiante: Juárez Rubio Alan Yahir

#### Materia: Programación Orientada a Objetos

#### Sección: D03

#### Calendario: 2023-A

#### Profesor: Mariscal Lugo Luis Felipe

#### Fecha de entrega: 01/05/2023

<div style="page-break-after: always;"></div>

# Marco Teórico

<!-- ¿Qué es una interfaz gráfica para el usuario?, Tres ejemplos de interfaces gráficas para los usuarios. Código fuente completo que implemente una IGU en C++ -->

## Qué es una interfaz gráfica para el usuario

Una **interfaz gráfica para el usuario** o _**GUI**_ (_graphical user interface_) es aquel _entorno visual_ mediante el cual un usuario y una máquinta pueden interactuar. Esta **interfaz** permite al usuario controlar de dispositivos electrónicos a través de elementos como imágenes, iconos, menús, botones, ventanas, entre otros.

El **propósito** de una **interfaz gráfica para el usuario** es establecer un canal de comunicación entre el sistema y el usuario, permitíendole una interacción más sencilla y amigable, en el que no es necesario el conocimiento técnico para hacer uso de este.

Previas a esta, se implementaba la **intefaz de línea de comando** o _**CLI**_ (_command line interface_), la cual funcionan con puras entradas y salidas de texto, para poder operar programas y sistemas operativos, a través del uso de comandos. Esta, a diferencia de la **interfaz gráfica de usuario**, requiere de un conocimiento técnico para manejarla. 

### Ejemplos

![| center](Attachments/Pasted%20image%2020230513202508.png)

<center>Figura 1 - Interfaz gráfica de Apple</center>

![ center | 750](Attachments/Pasted%20image%2020230513202910.png)

<center>Figura 2 - Interfaz gráfica de Excel</center>

![ center  | 750](Attachments/Pasted%20image%2020230513203145.png)

<center>Figura 3 - Interfaz gráfica de YouTube</center>

<div style="page-break-after: always;"></div>

## Código


```cpp
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

using namespace sf;

int main()
{
    RenderWindow window(VideoMode(400, 200), "Suma de dos numeros");
    Font font;
    if (!font.loadFromFile("arial.ttf")) {
        return EXIT_FAILURE;
    }

    Text text;
    text.setFont(font);
    text.setCharacterSize(24);
    text.setFillColor(Color::Black);
    text.setPosition(20, 50);

    Text result;
    result.setFont(font);
    result.setCharacterSize(24);
    result.setFillColor(Color::Black);
    result.setPosition(20, 100);

    RectangleShape rectangle(Vector2f(80, 50));
    rectangle.setFillColor(Color::White);
    rectangle.setOutlineThickness(2);
    rectangle.setOutlineColor(Color::Black);
    rectangle.setPosition(150, 50);

    bool first_input = true;
    bool second_input = false;
    bool calculation = false;
    std::string first_num_str = "";
    std::string second_num_str = "";
    int first_num = 0;
    int second_num = 0;
    int sum = 0;

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();

            if (event.type == Event::TextEntered) {
                if (first_input) {
                    if (event.text.unicode >= '0' && event.text.unicode <= '9') {
                        first_num_str += static_cast<char>(event.text.unicode);
                        text.setString("Primer numero: " + first_num_str);
                    }
                }
                else if (second_input) {
                    if (event.text.unicode >= '0' && event.text.unicode <= '9') {
                        second_num_str += static_cast<char>(event.text.unicode);
                        text.setString("Segundo numero: " + second_num_str);
                    }
                }
            }

            if (event.type == Event::MouseButtonPressed) {
                if (rectangle.getGlobalBounds().contains(window.mapPixelToCoords(Mouse::getPosition(window)))) {
                    if (first_input) {
                        first_num = std::stoi(first_num_str);
                        first_input = false;
                        second_input = true;
                        text.setString("Segundo numero: ");
                    }
                    else if (second_input) {
                        second_num = std::stoi(second_num_str);
                        calculation = true;
                    }
                }
            }
        }

        if (calculation) {
            sum = first_num + second_num;
            result.setString("Resultado: " + std::to_string(sum));
            calculation = false;
        }

        window.clear(Color::White);
        window.draw(text);
        window.draw(result);
        window.draw(rectangle);
        window.display();
    }

    return 0;
}
```
<div style="page-break-after: always;"></div>



## Conslusión

Para finalizar, es importante recalcar que una **interfaz gráfica de usuario** permite interacción más sencilla a través de elementos visuales. Cabe mencionar que, hoy en día, es necesario aprender a desarrollas interfaces gráficas, ya que son mucho más intuitivas y, por ende, más demandadas que programas creados con interfaz de comando.

<div style="page-break-after: always;"></div>

# Referencias

- The Astrology Page. (s. f.). _Command Line Interface_. Recuperado el 13 de mayo de 2023 de https://es.theastrologypage.com/command-line-interface
- ECDISIS. (s. f.). _¿Qué es la Interfaz Gráfica de Usuario (GUI)?_ Recuperado el 13 de mayo de 2023 de https://ecdisis.com/que-es-la-interfaz-grafica-de-usuario-gui/
- ionos.mx. (s. f.). _¿Qué es una GUI? Recuperado el 13 de mayo de 2023_ de https://www.ionos.mx/digitalguide/paginas-web/desarrollo-web/que-es-una-gui/
- Krypton Solid. (s. f.). _¿Qué es una Interfaz de Línea de Comandos (CLI)?_ Recuperado el 13 de mayo de 2023 de https://kryptonsolid.com/que-es-una-interfaz-de-linea-de-comandos-cli/
