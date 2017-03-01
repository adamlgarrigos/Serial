/*************************************************************************
**                                                                      **
**                             Serial                                   **
**                             Number communication                     **
**                                                                      ** 
**  ADAM LAAOUAJ                                            07/02/2017  **                                            
*************************************************************************/

//***************************** INCLUDE **********************************

//***************************** VARIABLES ********************************
int programa = 6;
float r1, r2;             // variables for the R's
float rSerie, rParalel;// variables for the results
//***************************** SETUP ************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Escull el numero del programa que es vol executar?");
  Serial.println("1. Resistencia serie i paral.lel");
  Serial.println("2. Numero parell o senar");
  Serial.println("3. Xifres dun nombre");
  Serial.println("4. Salari net setmanal");
  Serial.println("5. Mida cargol");
  Serial.println("6. Suma i mitja");
    
  }
  

//***************************** LOOP *************************************
void loop() {
    
    while (Serial.available() > 0) {  // if there's any serial available, read it
    programa = Serial.parseInt();// look for valid int the incoming serial stream
    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
  switch (programa){
  case 1:
  
    Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
    
    r1 = Serial.parseInt();// look for valid int the incoming serial stream

    r2 = Serial.parseInt();

    if (Serial.read() == '\n') { //look for newline. Is the end of your sentence
    Serial.print("r1 = ");
    Serial.print(r1);
    Serial.print(" ohms");
    Serial.print(" r2 = ");
    Serial.print(r2);
    Serial.println(" ohms");
   
    rSerie = r1 + r2;

    Serial.print("RSerie = ");
    Serial.print(rSerie);
    Serial.print(" ohms");
    
    rParalel = r1*r2 / (r1+r2);
    
    Serial.print(" RParalel = ");
    Serial.print(rParalel);
    Serial.println(" ohms");
    Serial.println("");
    Serial.println("Entra nous valors per r1 i r2");
    Serial.println("");
    break;
    
    }
    }
  }
  }
    }
    
  

  

//***************************** FUNCIONS *********************************
