#define Pin12 12
#define Pin13 13
char caracter;

void setup() {
Serial.begin(9600);
pinMode(Pin12, OUTPUT);
pinMode(Pin13, OUTPUT);
}

void loop() {
if(Serial.available()) {
caracter = Serial.read();

if(caracter == 'a'){ digitalWrite(Pin12, HIGH);}
if(caracter == 'b'){ digitalWrite(Pin12, LOW);} 
if(caracter == 'c'){ digitalWrite(Pin13, HIGH);}
if(caracter == 'd'){ digitalWrite(Pin13, LOW);}
}

}
