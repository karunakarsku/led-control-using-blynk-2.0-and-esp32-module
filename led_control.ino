#define BLYNK_TEMPLATE_ID "TMPL3-gv00syT"
#define BLYNK_TEMPLATE_NAME "led"
#define BLYNK_AUTH_TOKEN "uNQ2jkBI3_yk9tPIE0UY-9wN6Fa6lvyv"
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#define led 5
 char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "iotlab";  // Enter your Wifi Username
char pass[] = "skucetiot3";  // Enter your Wifi password
void setup()
{     
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);    
  pinMode(led,OUTPUT);
}
void loop()
{
  Blynk.run(); 

}
BLYNK_WRITE(V0) {
int ledstate = param.asInt();
digitalWrite(led, ledstate);
}
