#include <SoftwareSerial.h>
#include <Adafruit_VS1053.h>

SoftwareSerial bluetooth(10, 11); // Configura los pines RX y TX del módulo Bluetooth
Adafruit_VS1053 player = Adafruit_VS1053(12, 13, 6, 5, 4); // Configura los pines del módulo VS1053

const int ventiladorPin = 2; // Pin para controlar el ventilador
const int lamparaPin = 3; // Pin para controlar la lámpara

void setup() {
  Serial.begin(9600); // Inicia la comunicación serial con el monitor serie
  bluetooth.begin(9600); // Inicia la comunicación serial con el módulo Bluetooth
  player.begin(); // Inicializa el módulo VS1053

  pinMode(ventiladorPin, OUTPUT); // Configura el pin del ventilador como salida
  pinMode(lamparaPin, OUTPUT); // Configura el pin de la lámpara como salida

  digitalWrite(ventiladorPin, LOW); // Apaga el ventilador
  digitalWrite(lamparaPin, LOW); // Apaga la lámpara
}

void loop() {
  if (bluetooth.available()) {
    String command = bluetooth.readString(); // Lee el comando enviado desde el dispositivo Bluetooth
    
    if (command == "encender ventilador") {
      digitalWrite(ventiladorPin, HIGH); // Enciende el ventilador
      reproducirAudio("Ventilador encendido"); // Reproduce un mensaje de audio
    } else if (command == "apagar ventilador") {
      digitalWrite(ventiladorPin, LOW); // Apaga el ventilador
      reproducirAudio("Ventilador apagado"); // Reproduce un mensaje de audio
    } else if (command == "encender lámpara") {
      digitalWrite(lamparaPin, HIGH); // Enciende la lámpara
      reproducirAudio("Lámpara encendida"); // Reproduce un mensaje de audio
    } else if (command == "apagar lámpara") {
      digitalWrite(lamparaPin, LOW); // Apaga la lámpara
      reproducirAudio("Lámpara apagada"); // Reproduce un mensaje de audio
    }
  }
}

void reproducirAudio(const char* mensaje) {
  if (!player.readyForData()) {
    return;
  }

  player.sineTest(0x44, 500); // Genera una señal de prueba para solucionar un problema en el módulo VS1053
  delay(200);

  player.useInterrupt(VS1053_FILEPLAYER_PIN_INT); // Configura la interrupción del módulo VS1053

  if (!player.startPlayingFile("mensaje.wav")) { // Cambia "mensaje.wav" con el nombre de tu archivo de audio
    return;
  }

  while (player.isPlaying()) {
    // Espera a que termine la reproducción del audio
  }

  player.stopPlaying(); // Detiene la reproducción del audio
}



