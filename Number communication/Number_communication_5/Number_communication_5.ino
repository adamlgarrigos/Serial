/*************************************************************************
**                                                                      **
**                             Serial                                   **
**                             Number communication                     **
**                                                                      ** 
**  ADAM LAAOUAJ                                            07/02/2017  **                                            
*************************************************************************/

//***************************** INCLUDE **********************************

//***************************** VARIABLES ********************************
float mida;// variables for the R's


//***************************** SETUP ************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Quina mida te el cargol en cm?");
  
}
//***************************** LOOP *************************************
void loop() {
  
  while (Serial.available() > 0) {  // if there's any serial available, read it
    mida = Serial.parseInt();// look for valid int the incoming serial stream

    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
    {

    Serial.print("El cargol amb una mida ");
    Serial.print(mida);
    Serial.print(" cm es");
    
    if (mida >= 1 & mida < 3)
    {
      Serial.println(" petit.");
      Serial.println ("");
    }      
    else if (mida >= 3 & mida < 5)
    {
      Serial.println(" mitja.");
      Serial.println ("");
    }
    
     else if (mida >= 5 & mida < 8)
    {
      Serial.println(" gran.");
      Serial.println ("");
    }
     else if (mida >= 8 & mida < 10)
    {
      Serial.println(" molt gran.");
      Serial.println ("");
    }
    else 
    {
      Serial.println(" de mida incorrecta.");
      Serial.println(""); 
    }
    Serial.println ("Quina mida te el cargol en cm?");
    }
    }
  }
} 

  
//***************************** FUNCIONS *********************************
