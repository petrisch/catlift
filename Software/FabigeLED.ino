//Wir testen git nochmals

const int rot=9;
const int gruen=10;
const int blau=11;

const int sensorpin=A0;

int rotValue=0;
int gruenValue=0;
int blauValue=0;

int sensorwert=0;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

pinMode(rot,OUTPUT);
pinMode(gruen,OUTPUT);
pinMode(blau,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

sensorwert=analogRead(sensorpin);
delay(5);
Serial.println(sensorwert);

if (sensorwert<500){
  analogWrite(rot,100);
  analogWrite(gruen,0);
} else{
  analogWrite(gruen,100);
  analogWrite(rot,0);
  }



}
