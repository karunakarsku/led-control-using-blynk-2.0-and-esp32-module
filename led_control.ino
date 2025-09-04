#define BLYNK_TEMPLATE_ID "your TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "your TEMPLATE_NAME"
#define BLYNK_AUTH_TOKEN "your BLYNK_AUTH_TOKEN"
#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#define led 5
 char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "your ssid";  // Enter your Wifi Username
char pass[] = "your password";  // Enter your Wifi password
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
