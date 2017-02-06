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

int drive_gb = 100;
long drive_mb;
void setup()             // Només una vegada
{
  Serial.begin(9600);     // Posar el Serial Library a 9600
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");
}



//***************************** LOOP *************************************
void loop()     // Ha d'estar buit
{
}

//***************************** FUNCIONS *********************************




