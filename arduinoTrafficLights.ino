
//Traffic Lights

int redLed = 12;
int yellowLed = 11;
int blueLed = 10;
int switch1 = 2;
char activeLed = 'B'; 

void setup() {

pinMode(redLed, OUTPUT);
pinMode(yellowLed, OUTPUT);
pinMode(blueLed, OUTPUT);
pinMode(switch1, INPUT);

}

void trafficLightLogic(){
  if (activeLed == 'R'){
    digitalWrite(yellowLed, HIGH);
    digitalWrite(redLed, LOW);
    activeLed = 'Y';
  }
  else if (activeLed == 'Y'){
    digitalWrite(blueLed, HIGH);
    digitalWrite(yellowLed, LOW);
    activeLed = 'B';
  }

  else {
    digitalWrite(redLed, HIGH);
    digitalWrite(blueLed, LOW);
    activeLed = 'R';
  }
 delay(2000); 
}
  
void loop() {

if (digitalRead(switch1) == 1) {
trafficLightLogic();
}
else{
  //All lights off
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(blueLed, LOW);
}
}
