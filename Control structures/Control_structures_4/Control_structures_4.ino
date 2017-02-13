/*************************************************************************
**                                                                      **
**                             Serial                                   **
**                             Control structures                       **
**                                                                      ** 
**  ADAM LAAOUAJ                                            20/01/2017  **                                            
*************************************************************************/

//***************************** INCLUDE **********************************


//***************************** VARIABLES ********************************

int a = 30;

//***************************** SETUP ************************************

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( a < 3.5)
  {
    Serial.print("Qualificacio energetica = A");
  }
  else if ( a < 6.5)
  {
    Serial.print("Qualificacio energetica = B");
  }
  else if (a < 11.1)
  {
    Serial.print("Qualificacio energetica = C");
  }
    else if ( a < 17.7)
  {
    Serial.print("Qualificacio energetica = D");
  }
  else if (a < 38.2)
  {
    Serial.print("Qualificacio energetica = E");
  }   
  else if ( a < 43.2)
  {
    Serial.print("Qualificacio energetica = F");
  }
  else 
  {
    Serial.print("Qualificacio energetica = G");
  }
}

//***************************** LOOP *************************************
void loop()   // we need this to be here even though its empty
{
}
//***************************** FUNCIONS *********************************

