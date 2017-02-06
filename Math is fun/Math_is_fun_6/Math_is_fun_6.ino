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

long drive_gb = 100;
long drive_mb;     // we changed the type from "int" to "long"

void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);    // set up Serial library at 9600 bps

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



