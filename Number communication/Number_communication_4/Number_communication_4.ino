/*************************************************************************
**                                                                      **
**                             Serial                                   **
**                             Number communication                     **
**                                                                      ** 
**  ADAM LAAOUAJ                                            07/02/2017  **                                            
*************************************************************************/

//***************************** INCLUDE **********************************

//***************************** VARIABLES ********************************
int hores;// variables for the R's
int r;// variables for the results
int h;
float z;

//***************************** SETUP ************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Quantes hores de treball?");
  
}
//***************************** LOOP *************************************
void loop() {
  
  while (Serial.available() > 0) {  // if there's any serial available, read it
    hores = Serial.parseInt();// look for valid int the incoming serial stream

    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
    {

    Serial.print("El salari de ");
    Serial.print(hores);
    Serial.print(" hores es de ");
    
    
    if (hores <= 37)
    
    {
      r = (hores * 20 * 95) / 100 ;
      Serial.print(r);
      Serial.println(" euros");
      Serial.println ("");
      Serial.println ("Quantes hores de treball?");
    }      
    else if (hores >37)
    {
      h = hores - 37;
      r = (37 * 20) + (h *30);
         
    
      if (r <= 800)
      {
         z = ((37*20) + (h*30))*(float) 95/100;
         Serial.print (z);
         Serial.println(" euros");
         Serial.println ("");
      }
      else
      {
        z = ((37*20) + (h*30))*(float) 90/100;
        Serial.print (z);
        Serial.println(" euros");
        Serial.println ("");
        
      }
    Serial.println ("Quantes hores de treball?");
    }
    }
    }
  }
} 

  
//***************************** FUNCIONS *********************************
