/*************************************************************************
**                                                                      **
**                             Serial                                   **
**                             Number communication                     **
**                                                                      ** 
**  ADAM LAAOUAJ                                            07/02/2017  **                                            
*************************************************************************/

//***************************** INCLUDE **********************************

//***************************** VARIABLES ********************************
int n;             // variables for the R's
int r;// variables for the results

//***************************** SETUP ************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra un numero?");
  
}
//***************************** LOOP *************************************
void loop() {
  
  while (Serial.available() > 0) {  // if there's any serial available, read it
    n = Serial.parseInt();// look for valid int the incoming serial stream

    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
    r = n / 10;

    Serial.print("El numero ");
    Serial.print(n);
    if (r >= 10 & r <100)
    {
    Serial.println(" te 3 xifres");
    Serial.println("");
    }
    else if ( r >= 1 & r <10) 
    {
    Serial.println(" te 2 xifres");
    Serial.println("");
    }
    else if ( r >= 0,1 & r <1)
    {
    Serial.println(" te 1 xifres");
    Serial.println(""); 
    }
    else if ( r >= 100 & r <1000)
    {
    Serial.println(" te 4 xifres");
    Serial.println(""); 
    }
    else if ( r >= 1000 & r <10000)
    {
    Serial.println(" te 5 xifres");
    Serial.println(""); 
    }
    
    Serial.println("Entra un numero?");
    Serial.println("");
    }
  }
}
//***************************** FUNCIONS *********************************
