//2.13.2022
float SoundAbs;
float frequencies[] = {100, 200, 500, 1500};
int  sensorDigitalPin = 3;

void setup() {
  Serial.begin(9600);
  pinMode(sensorDigitalPin,INPUT);
}

void loop() {
  for(int i = 0; i< 4; i++){
    tone(8, frequencies[i], 500);

    delay(2000);
  }
}
