/*************************************************************************
**                                                                      **
**                             Serial                                   **
**                             Math is fun                              **
**                                                                      **
**  ADAM LAAOUAJ                                            20/01/2017  **
*************************************************************************/

//***************************** INCLUDE **********************************


//***************************** VARIABLES ********************************

long drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;
long missing_drive_kb;  // hem canviat de "int" a "long"

//***************************** SETUP ************************************

void setup()            // funciona una vegada
{
  Serial.begin(9600);    // Posar el Serial Library a 9600

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024 * drive_gb;
  drive_kb = 1024 * drive_mb;

  Serial.print("In theory, it can store ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");
  Serial.print(drive_kb);
  Serial.println(" Kilobytes.");

  real_drive_mb = 1000 * drive_gb;
  real_drive_kb = 1000 * real_drive_mb;

  Serial.print("But it really only stores ");
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes, ");
  Serial.print(real_drive_kb);
  Serial.println(" Kilobytes.");

  missing_drive_kb = drive_kb - real_drive_kb;

  Serial.print("You are missing ");
  Serial.print(missing_drive_kb);
  Serial.println(" Kilobytes!");
}

//***************************** LOOP *************************************
void loop()     // es repeteix a l'infinit
{
}
//***************************** FUNCIONS *********************************





