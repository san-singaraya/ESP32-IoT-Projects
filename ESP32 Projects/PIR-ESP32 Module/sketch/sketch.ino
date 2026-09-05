#define PIR_PIN 15

void setup(){
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);
  Serial.println("PIR Sensor Ready");
}

void loop(){
  int motionStatus = digitalRead(PIR_PIN);

  if(motionStatus == HIGH){
    Serial.println("Motion Detected");
  }
  else{
    Serial.println("No Motion Detected");
  }
}