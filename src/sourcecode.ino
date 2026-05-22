// C++ code

//#define DHTPIN7 7 // sensor DHT conectado ao pino 7

//#include "DHT.h"
int green = 5;
int yellow = 2;
int red = 3;
int buzz = 4;
int photo = A0;
int lightValue = 100;
bool isReadingTemperature = false;
int dhtPin = A2;
int humPin = A1;

int rawValue = 0;
float voltage = 0;
float tempC = 0;

int lowThreshold = 33;
int midThreshold = 66;

bool buzzerSounded;

void setup()
{
  pinMode(green, OUTPUT);
  pinMode (yellow, OUTPUT);
  pinMode (red, OUTPUT);
  pinMode (buzz, OUTPUT);
  pinMode (photo, INPUT);
  pinMode (dhtPin, INPUT);
  pinMode (humPin, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  //lightValue = analogRead(photo);
  
  /*
  Serial.print("Light level: ");
  Serial.println(lightValue);
  
  if (lightValue < lowThreshold){
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
  }
  else if (lightValue < midThreshold){
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
  }
  else {
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    if (!buzzerSounded){
    	buzzer();
    }
  }*/
  
  if (!isReadingTemperature){
    temperatureWrite();
    isReadingTemperature = true;
  }
}

void lightWrite(){
  float light = 0;

  for (int i = 0; i < 5; i++){
    lightValue = analogRead(photo);
    light += lightValue;
    
    delay(1000);
  }
  
  light = light/5;
  Serial.print("Light: ");
  Serial.print(map(light, 0, 1023, 0, 100));
  Serial.println("%");
  
  if(map(light, 0, 1023, 0, 100) < 33){
    Serial.print("Ambiente escuro")
  }
  else if (map(light, 0, 1023, 0, 100) < 66){
    Serial.print("Ambiente a Meia Luz");
  }
  else{
    Serial.print("Ambiente muito claro");
  }
  
  temperatureWrite();
    /*
    if (lightValue < lowThreshold){
    
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
  }
  else if (lightValue < midThreshold){
    
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
  }
  else {
    /*
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    if (!buzzerSounded){
    	buzzer();
    }
    
  }*/
}

void temperatureWrite(){
 	float temp = 0;
  
  for (int i = 0; i < 5; i++){
    rawValue = analogRead(dhtPin);
    voltage = (rawValue/1023.0) * 5000;
    tempC = (voltage - 500) * 0.1;
    
    temp += tempC;
    //Serial.print(rawValue);
    delay(1000);
  }
  
  temp = temp/5;
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println("C");
  humidityWrite();
}

void humidityWrite(){
  float hum = 0;
  float humidity = 0;
  
  for (int i = 0; i < 5; i++){
    humidity = analogRead(humPin);
    
    hum += humidity;
    delay(1000);
  }
  
  hum = hum/5;
  Serial.print("Humidity: ");
  Serial.print(map(hum, 0, 1023, 0, 100));
  Serial.println("%");
  lightWrite();
}

void buzzer(){
  buzzerSounded = true;
  digitalWrite(buzz, HIGH);
  delay(3000);
  digitalWrite(buzz, LOW);
  delay(3000);
  buzzerSounded = false;
  }