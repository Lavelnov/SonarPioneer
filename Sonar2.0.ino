#include "SonarPioneer.h"
  SonarPioneer Sonar(A4,A5,A2,A6,A3,A7);
  /*
   *A4 1 |A0    A1|2 A5
   *A2  3||A2  Inh |4 A6
   *A3  5||Tri 5v|6
   *   7||5v GND|8
   *  9 |GND Echo|10 A7
   * 
   * 
   */
void setup() {
  delay(3000);
  //Serial.begin(9600);
}

void loop() {
  int aux=0;
  int i=0;
  for(i=0; i<=7;i++){
  aux=Sonar.Read(i);
 /*
  Serial.print("S");
  Serial.print(i);
  Serial.print("   ");
  Serial.print(aux);
  Serial.print("   |   ");
  if(i==7){
    Serial.println(" ");
  }
*/
  }
  
    delay(100);
}
