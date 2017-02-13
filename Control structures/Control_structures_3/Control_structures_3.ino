/*************************************************************************
**                                                                      **
**                             Serial                                   **
**                             Control structures                       **
**                                                                      ** 
**  ADAM LAAOUAJ                                            20/01/2017  **                                            
*************************************************************************/

//***************************** INCLUDE **********************************


//***************************** VARIABLES ********************************

int tempAigua = 80;

//***************************** SETUP ************************************

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua < 90)
  {
    Serial.print("Aigua encara no bull");
  }
  else if ( tempAigua >= 90 & tempAigua <100)
  {
    Serial.print("Aigua a punt de bullir");
  }
  else if (tempAigua == 100)
  {
    Serial.print("Aigua a 100C");
  }
  else
  {
    Serial.print("Aigua bullint");
  } 
}

//***************************** LOOP *************************************
void loop()   // we need this to be here even though its empty
{
}
//***************************** FUNCIONS *********************************

