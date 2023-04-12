const int pinoLed = 12;
const int pinoSensor = 8;

void setup() {
  Serial.begin(9600);
  pinMode(pinoSensor,OUTPUT);
  pinMode(pinoLed,INPUT);
  digitalWrite(pinoLed, LOW);
}

void loop() {
  if(digitalRead(pinoSensor) == LOW){
    digitalWrite(pinoLed, HIGH);
    }
  else{
    digitalWrite(pinoLed, LOW);
    }
    Serial.print(analogRead(pinoSensor));
    Serial.print("\t");
    Serial.println(digitalRead(pinoSensor));
}
