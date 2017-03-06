/*************************************************************************
**                                                                      **
**                             Serial                                   **
**                             Number communication                     **
**                                                                      ** 
**  ADAM LAAOUAJ                                            07/02/2017  **                                            
*************************************************************************/

//***************************** INCLUDE **********************************

//***************************** VARIABLES ********************************
long n;             // variables for the R's
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
    r = n % 23;

    Serial.print("El DNI es ");
    Serial.print(n);
    if (r == 0)
    {
    Serial.println(" T ");
    Serial.println("");
    }
    else if (r == 1)
    {
    Serial.println(" R ");
    Serial.println("");
    }
    else if (r == 2)
    {
    Serial.println(" W ");
    Serial.println("");
    
    }
    else if (r == 2)
    {
    Serial.println(" W ");
    Serial.println("");
    
    }
    else if (r == 3)
    {
    Serial.println(" A ");
    Serial.println("");
    
    }
    else if (r == 4)
    {
    Serial.println(" G ");
    Serial.println("");
    
    }
    else if (r == 5)
    {
    Serial.println(" M ");
    Serial.println("");
    
    }
    else if (r == 6)
    {
    Serial.println(" Y ");
    Serial.println("");
    
    }
    else if (r == 7)
    {
    Serial.println(" F ");
    Serial.println("");
    
    }
    else if (r == 8)
    {
    Serial.println(" P ");
    Serial.println("");
    
    }
    else if (r == 9)
    {
    Serial.println(" D ");
    Serial.println("");
    
    }
    else if (r == 10)
    {
    Serial.println(" X ");
    Serial.println("");
    
    }
    else if (r == 11)
    {
    Serial.println(" B ");
    Serial.println("");
    
    }
    else if (r == 12)
    {
    Serial.println(" N ");
    Serial.println("");
    
    }
    else if (r == 13)
    {
    Serial.println(" J ");
    Serial.println("");
    
    }
    else if (r == 14)
    {
    Serial.println(" Z ");
    Serial.println("");
    
    }
    else if (r == 15)
    {
    Serial.println(" S ");
    Serial.println("");
    
    }else if (r == 16)
    {
    Serial.println(" Q ");
    Serial.println("");
    
    }else if (r == 17)
    {
    Serial.println(" V ");
    Serial.println("");
    
    }
    else if (r == 18)
    {
    Serial.println(" H ");
    Serial.println("");
    
    }
    else if (r == 19)
    {
    Serial.println(" L ");
    Serial.println("");
    
    }
    else if (r == 20)
    {
    Serial.println(" C ");
    Serial.println("");
    
    }else if (r == 21)
    {
    Serial.println(" K ");
    Serial.println("");
    
    }else if (r == 22)
    {
    Serial.println(" E ");
    Serial.println("");
    
    }
    
  }
}
}
//***************************** FUNCIONS *********************************
