#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = " f652825549cf41df922245ae4bc27785"; //You will get this Auth Token in Gmail if you signin Blynk app with your Gmail ID

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "sammy"; //Enter your WIFI Name
char pass[] = "12345678";//Enter your WIFI Password

void setup()
{
  // Debug console
  Serial.begin(9600);
  pinMode(D0, OUTPUT);//bulb pin to arduino pin A3 
  pinMode(D4, OUTPUT);//code 1
  pinMode(D5, OUTPUT);//code 2
  pinMode(D6, OUTPUT);//code 3
  pinMode(D7, OUTPUT);//code 4
  pinMode(D8, OUTPUT);//gate key to arduino pin A5

  digitalWrite(D0, LOW);
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  digitalWrite(D7, LOW);
  digitalWrite(D8, LOW);

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 8442);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8442);
}

void loop()
{
  Blynk.run();

  int w = digitalRead(D4);
  int x = digitalRead(D5);
  int y = digitalRead(D6);                     
  int z = digitalRead(D7);
  Serial.print(w);
  Serial.print(x);
  Serial.print(y);
  Serial.println(z);
  
  
  if (w == 1 && x==0 && y==0 && z==1)
  {
    digitalWrite(D8, HIGH);
  }  
  else
  {
     digitalWrite(D8, LOW);
  }
}
