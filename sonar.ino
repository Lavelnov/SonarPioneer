#include "SonarPioneer.h"
  SonarPioneer Sonar(3,4,5,8,9,A0);
void setup() {
  delay(3000);
  Serial.begin(9600);
}

void loop() {
  int aux=0;
  int i=0;
  for(i=0; i<=7;i++){
  aux=Sonar.Read(i);
  Serial.print("S");
  Serial.print(i);
  Serial.print("   ");
  Serial.print(aux);
  Serial.print("   |   ");
  if(i==7){
    Serial.println(" ");
  }

  }
    //delay(100);
}
