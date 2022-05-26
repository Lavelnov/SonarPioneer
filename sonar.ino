
unsigned long duration;
#define tri 8
#define echo 18
#define inh 10
void setup() {
  //selector
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
//trigger
  pinMode(8,OUTPUT);
//echo
  pinMode(A0,INPUT);
  //inhibits
  pinMode(10,OUTPUT);

  //Selector de sensor
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  
  digitalWrite(8,LOW);
  //digitalWrite(9,LOW);
  digitalWrite(10,LOW); 

  long duration=0;
  delay(3000);
  Serial.begin(9600);

}

  int flag = 0;
  int ecpin=0;
void loop() {

  //trigger off
  digitalWrite(tri,LOW);
  
  digitalWrite(inh,LOW);
  delayMicroseconds(1200);
  
  digitalWrite(tri,HIGH);
  delayMicroseconds(800);
  digitalWrite(inh,HIGH);
  
 // delayMicroseconds(38000);

  //digitalWrite(tri,LOW);
  //digitalWrite(inh,LOW);

  flag=1;
  duration=8;
  do{
    delayMicroseconds(1);
    duration++;
    ecpin=analogRead(A0);
    if(ecpin>600){
      break;
      flag=0;
    }
    if(duration>2000){
      break;
      flag=0;
    }
  }while(flag=1);

 // duration = pulseIn(18, HIGH);
  Serial.println(duration* 3.4 / 2,"    ");
   // delay(5);
  //Serial.println(ecpin);
 // delay(38);
  delay(500);

 // delay(2000);
}
