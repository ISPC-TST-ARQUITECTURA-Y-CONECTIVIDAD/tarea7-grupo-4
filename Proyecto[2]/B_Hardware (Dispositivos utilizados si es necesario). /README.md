
![circuito](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tarea7-grupo-4/assets/106171748/6173ca14-6f79-4eab-af33-0769d57fdeac)

##Circuito eléctrico

El circuito eléctrico está compuesto por el Arduino, que va conectado directamente al módulo de Bluetooth. Aquí se deben considerar sólo cuatro conexiones; el pin Tx de Arduino va al pin Rx del módulo de Bluetooth y viceversa, el pin Rx de Arduino va conectado al pin Tx del módulo de Bluetooth, es decir, la conexión es cruzada. Las otras dos conexiones son las de alimentación, que en este caso, se utiliza la fuente de alimentación proporcionada por la placa Arduino.

La siguiente conexión es la del Arduino y el módulo de relevadores. Esta conexión sólo consta de tres simples conexiones; la alimentación del módulo de relevadores, ya sea con la misma fuente que proporciona el Arduino o con alguna fuente externa y el pin de salida digital del Arduino hacia el pin de dato del relevador, el cual permitirá energizar o des - energizar la carga eléctrica.

Finalmente, la última conexión es la del módulo de relevadores hacia las cargas eléctricas. Inicialmente se contempla que se tiene una fuente de alimentación en CA, por lo cual, el cable neutro debe ir conectado a todas las cargas eléctricas en paralelo y la fase debe ir conectada al punto común del módulo de relevadores (pin de en medio del relevador) y el retorno a la carga debe ir conectada al pin de la derecha (pin de la derecha del relevador), de esta manera, al enviar un estado HIGH desde el Arduino, el circuito se cierra y la carga eléctrica se enciende. La figura 5 ilustra el circuito eléctrico completo desarrollado en la plataforma de diseño y simulación de circuitos, Fritzing.
[HC-06.PDF](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tarea7-grupo-4/files/11668891/HC-06.PDF)
[rele-1canal.pdf](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tarea7-grupo-4/files/11668893/rele-1canal.pdf)
[A000066-datasheet.pdf](https://github.com/ISPC-TST-ARQUITECTURA-Y-CONECTIVIDAD/tarea7-grupo-4/files/11668895/A000066-datasheet.pdf)
