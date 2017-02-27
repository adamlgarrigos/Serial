/*************************************************************************
**                                                                      **
**                             Serial                                   **
**                             Number communication                     **
**                                                                      ** 
**  ADAM LAAOUAJ                                            07/02/2017  **                                            
*************************************************************************/

//***************************** INCLUDE **********************************

//***************************** VARIABLES ********************************
int hores;// variables for the R's
int r;// variables for the results
int h;

//***************************** SETUP ************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra un numero?");
  
}
//***************************** LOOP *************************************
void loop() {
  
  while (Serial.available() > 0) {  // if there's any serial available, read it
    hores = Serial.parseInt();// look for valid int the incoming serial stream

    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
    {

    Serial.print("El salari de ");
    Serial.print(hores);
    Serial.print(" es de ");
    }
    
    if (hores <= 38)
    r = hores * 20 * 0,95;
    {
    Serial.print("r");
    Serial.println("euros");
    }
    else if (hores > 39) 
    {
    h = hores - 38;
    r = (hores * 20) + (h * 30);
    
    
    if (r <= 800)
    r = r * 0,95;
    {
    Serial.print(" r ");
    Serial.println(" euros");
    }
    
    else if (r > 800)
    
    {
    r = r * 0,9;   
    Serial.print("r");
    Serial.println(" euros");
    }
    }
  }
}
//***************************** FUNCIONS *********************************
