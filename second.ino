
const int analogPin = A0;    // pin analogo
const int ledPin = 13;       // pin donde enciende led
const int threshold = 970;   // valor de la entrada 

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // Inicializa comunicación serial que es la que permite la entrada analógica
  Serial.begin(9600);
}

void loop() {
  // lee el valor del potenciometro
  int analogValue = analogRead(analogPin);

  // si el valor de la lectura analógica es mayor, enciende el LED
  if (analogValue > threshold) {
    digitalWrite(ledPin, HIGH);
  } else { //De lo contrario, apágalo. 
    digitalWrite(ledPin, LOW);
  }

  // Imprime en consola el valor del valor analogo
  Serial.println(analogValue);
  delay(1);        // retardo entre lecturas, para la estabilidad. 
}
