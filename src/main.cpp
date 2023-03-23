/*************************************************************

  This sketch shows how to read values from Virtual Pins

  App dashboard setup:
    Slider widget (0...100) on Virtual Pin V1
 *************************************************************/

/* Fill-in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID "TMPLV6-xIYrE"
#define BLYNK_TEMPLATE_NAME "testTemplate"
#define BLYNK_AUTH_TOKEN "7dDmglYZGXAZIF7WXX650xYU5Ln3q7od"

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "VODAFONE_andoniskgr";
char pass[] = "Tony0105";

// This function will be called every time Slider Widget
// in Blynk app writes values to the Virtual Pin V1
BLYNK_WRITE(V1)
{
  int pinValue = param.asInt(); // assigning incoming value from pin V1 to a variable
  if (pinValue == 1)
  {
    digitalWrite(1, LOW);
  }
  else
  {
    digitalWrite(1, HIGH);
  }

  delay(400);

  // process received value
}

void setup()
{
  pinMode(1, OUTPUT);
  delay(100);
  // Debug console

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  // You can also specify server:
  // Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, "blynk.cloud", 80);
  // Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass, IPAddress(192,168,1,100), 8080);
}

void loop()
{
  Blynk.run();
}
