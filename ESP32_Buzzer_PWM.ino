/* usar Buzzer via PWM y la funcion ledcWriteTone */

int BuzzerPin = 26;  // Pin donde conecto el Buzzer
int freq = 2000;     // Frecuencia inicial (cualquiera)
int canal = 0;       // Resolucion PWM
int resolucion = 8;  // Canal PWM
  
void setup() {
  
  ledcSetup(canal, freq, resolucion);
  ledcAttachPin(BuzzerPin, canal);
  
}
  
void loop() {

  // Suena Buzzer con frecuencia 500
  ledcWriteTone(canal, 500);
  delay(1000);
  // Suena Buzzer con frecuencia 3500
  ledcWriteTone(canal, 3500);
  delay(1000);
  // Silencio Buzzer
  ledcWrite(canal,0);

  delay(10000);
   
}
