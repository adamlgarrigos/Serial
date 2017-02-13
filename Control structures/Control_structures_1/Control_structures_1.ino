/*************************************************************************
**                                                                      **
**                             Serial                                   **
**                             Control structures                       **
**                                                                      ** 
**  ADAM LAAOUAJ                                            07/02/2017  **                                            
*************************************************************************/

//***************************** INCLUDE **********************************


//***************************** VARIABLES ********************************

int tempAigua = 101;

//***************************** SETUP ************************************

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
}

//***************************** LOOP *************************************
void loop()   // we need this to be here even though its empty
{
}
//***************************** FUNCIONS *********************************











