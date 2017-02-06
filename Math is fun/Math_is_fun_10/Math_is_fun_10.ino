/*************************************************************************
**                                                                      **
**                             Serial                                   **
**                             Math is fun                              **
**                                                                      ** 
**  ADAM LAAOUAJ                                            20/01/2017  **                                            
*************************************************************************/

//***************************** INCLUDE **********************************


//***************************** VARIABLES ********************************


//***************************** SETUP ************************************

int a = 3;
int b = 2;
float d;

void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);      // set up Serial library at 9600 bps

  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  d = (float)a / b;
  
  Serial.print("a / b = ");
  Serial.println(d);
}

//***************************** LOOP *************************************
void loop() {
  
}
//***************************** FUNCIONS *********************************


