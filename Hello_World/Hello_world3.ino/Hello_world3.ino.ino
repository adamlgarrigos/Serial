/*************************************************************************
**                                                                      **
**                             Serial                                   **
**                             Hello World!                             **
**                                                                      ** 
**  ADAM LAAOUAJ                                            30/01/2017  **                                            
*************************************************************************/

//***************************** INCLUDE **********************************


//***************************** VARIABLES ********************************


//***************************** SETUP ************************************

void setup ()             
{
  Serial.begin(9600);    
}

//***************************** LOOP *************************************
void loop()                     
{
  Serial.println("Hello world!");  // Escriure Hello World!
  delay(1000); //cada segon
}

//***************************** FUNCIONS *********************************