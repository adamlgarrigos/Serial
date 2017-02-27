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
  Serial.println("");
  
}
//***************************** LOOP *************************************
void loop() {
  
  while (Serial.available() > 0) {  // if there's any serial available, read it
    n = Serial.parseInt();// look for valid int the incoming serial stream

    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
    r = n % 2;

    Serial.print("El numero ");
    Serial.print(n);
    if (r == 0)
    {
    Serial.println(" es parell");
    Serial.println("");
    }
    else 
    {
    Serial.println(" es senar");
    Serial.println("");
    }
    Serial.println("Entra un numero?");
    Serial.println("");
    }
  }
}
//***************************** FUNCIONS *********************************
