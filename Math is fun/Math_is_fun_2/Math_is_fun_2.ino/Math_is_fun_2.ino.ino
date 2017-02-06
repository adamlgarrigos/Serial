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

int a = 3; // valor es igual a 3
int b = 4; // valor es igual a 4
int h = sqrt(a*a + b*b); // valor es igual a la hipotenusa
void setup()              // funciona una vegada
{
  Serial.begin(9600);     // posar a 9600

  Serial.println("Lets calculate an hipotenuse "); 
  
  Serial.print("a =  ");
  Serial.println(a);
  Serial.print("b =  ");
  Serial.println(b);
  Serial.print("h =  ");       // sumar
  Serial.println (h);
}


//***************************** LOOP *************************************
void loop() {
  

}

//***************************** FUNCIONS *********************************


