/*************************************************************************
**                                                                      **
**                             Serial                                   **
**                             Math is fun                              **
**                                                                      ** 
**  ADAM LAAOUAJ                                            20/01/2017  **                                            
*************************************************************************/

//***************************** INCLUDE **********************************


//***************************** VARIABLES ********************************

int a = 3;
int b = 2;
float d;

//***************************** SETUP ************************************

void setup()               // funciona una vegada
{
  Serial.begin(9600);      // Posar el Serial Library a 9600

  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  d = (float)a / b; //dividim pero posant float de manera que quedi en decimal la operació
  
  Serial.print("a / b = ");
  Serial.println(d);
}

//***************************** LOOP *************************************
void loop() // es repeteix a l'infinit
{
  
}
//***************************** FUNCIONS *********************************


