/*************************************************************************
**                                                                      **
**                             Serial                                   **
**                             Math is fun                              **
**                                                                      ** 
**  ADAM LAAOUAJ                                            20/01/2017  **                                            
*************************************************************************/

//***************************** INCLUDE **********************************


//***************************** VARIABLES ********************************

int a = 5; // valor es igual a 5
int b = 10; // valor es igual a 10
int c = 20; // valor es igual a 20

//***************************** SETUP ************************************

void setup()              // funciona una vegada
{
  Serial.begin(9600);     // posar a 9600

  Serial.println("Here is some math: "); 

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // sumar
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiplicar
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // dividir
  Serial.println(c / b);

  Serial.print("c % b = ");       // residu de la divisio
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // restar
  Serial.println(b - c);
}


//***************************** LOOP *************************************
void loop() { // es repeteix a l'infinit
  

}

//***************************** FUNCIONS *********************************
