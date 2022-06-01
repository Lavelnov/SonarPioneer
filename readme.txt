Sonar Pioneer
Leonardo Góngora Velasco

This code is for the use of the sonar with library and  selector
Use the constructor 
 SonarPioneer Sonar(S0,S1,S2,trigger,Inhibits,Echo);
Function:
Sonar.Read(Number of sonar);

S0,S1,S2 are the pins for selecting the phisical sonar.
Trigger sends the sonar signal out.
Ihnibits Changes the sonar state from sending to reading
Echo is attached to an analog pin and is the response of the signal, it reaches only 3.7-4.2 v
connection Diagram: 
               ________
GND         _|9      10|  Echo
 5v        | |7       8|   GND
 Trigger   | |5       6|  5v
S2         |_| 3     4 |     Ihnibits
S0           | 1_____2 |     S1
