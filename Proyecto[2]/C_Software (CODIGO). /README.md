![logica](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tarea7-grupo-4/assets/106171748/80ead512-d215-4aa7-958f-5cc6490c0c79)

![94459796001_gf6](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tarea7-grupo-4/assets/106171748/b8640f91-ad81-4079-92a6-d18bc9abb968)
A continuación, se muestra la lógica utilizada para la recepción de datos del módulo de Bluetooth y procesarla en Arduino. Inicialmente, se declara una variable tipo Char en donde se almacena el dato recibido y se le da un valor inicial de cero. Después se declaran las variables de salida para las cargas eléctricas, en este caso el pin 13, 12 y 11.

Dentro del void setup, se inicializa el monitor serial. Igualmente, se indica la configuración de cómo serán utilizados los pines; ya sea como entradas o como salidas, para este caso se declaran como salidas.

Dentro de void loop, se declara una condición para evaluar si se está recibiendo algún dato en el puerto serial, si es así, ese dato se almacena en la variable “lectura” que inicialmente se declaró.

Dentro de la estructura switch, se evalúa el valor de la variable “lectura, en la cual, dependiendo de su valor (en tipo de caracter), serán las instrucciones que se ejecutarán. En este caso, si se recibe la letra “a”, se enciende la carga eléctrica #1 y así respectivamente con los demás comandos. La figura 4., ilustra el funcionamiento del software del sistema; (a) diagrama a bloques de la lógica de programación, (b) código fuente desarrollado en el entorno de programación de Arduino.
