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

void setup()                // només funciona la primera vegada
{
  Serial.begin(9600);       // posar a 9600 bps
  Serial.println("");
  Serial.println("Escull el numero de l'operacio que vols realitzar?");
  Serial.println("  1. Comprovar numero de tarjeta de credit");
  Serial.println("  2. Comprovar numero de compte bancari");
  Serial.println("  3. Buscar un digit perdut de tarjeta de credit"); 
}

//***************************** LOOP *************************************
void loop() // es repeteix
{
  // no fa res
}

//***************************** FUNCIONS *********************************
