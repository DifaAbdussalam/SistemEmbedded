int motor=A0; //hubungkan motor ke A0
int h=255; //kondisi high (5 V)
int l=0; //kondisi low (0 V)
String motion;

void setup(){
  Serial.begin(9600);
  pinMode(motor,OUTPUT);
}

void loop(){
  Serial.println("Click 'P' to spin the motor, and 'S' to stop");
  while(Serial.available()==0){}

  motion=Serial.readString();
  if (motion == "p"){
    analogWrite(motor,l);
  }

  if (motion == "s"){
    analogWrite(motor,h);
  }
}
