#define BLYNK_TEMPLATE_ID    "TMPL3uvDW_L4Q"      // ← paste from Blynk console
#define BLYNK_TEMPLATE_NAME  "Alert"      // ← must match your template name
#define BLYNK_AUTH_TOKEN     "bzGKsFtAVCYuxbj8JOpifu-YaiFKrVKH" 
#include <WiFi.h>
#include <WiFiClient.h>

#include <BlynkSimpleEsp32.h>
#include "fall_model.h" // Your trained ML model
#include "features.h"   // Your feature extraction logic

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "ESP32TEST";
char pass[] = "12345678";

BlynkTimer timer;

void checkFall() {
  // 1. Get features from your buffer
  float features[46]; 
  extractFeatures(features);

  // 2. Run your ML Prediction
  int prediction = predict(features); 

  if (prediction == 1) { // Fall detected
    digitalWrite(25, HIGH); // Buzzer ON
    digitalWrite(26, HIGH); // LED ON
    
    // 3. Update Blynk
    Blynk.virtualWrite(V0, "FALL DETECTED!");
    Blynk.logEvent("fall_alert", "Emergency: A fall has been detected!");
    
    Serial.println("ALERT: Fall detected and sent to Blynk!");
  } else {
    Blynk.virtualWrite(V0, "System OK");
    digitalWrite(25, LOW);
    digitalWrite(26, LOW);
  }
}

void setup() {
  Serial.begin(115200);
  pinMode(25, OUTPUT); // Buzzer
  pinMode(26, OUTPUT); // LED
  
  Blynk.begin(auth, ssid, pass);
  
  // Run detection every 100ms to match your 100Hz/100 sample window logic
  timer.setInterval(100L, checkFall);
}

void loop() {
  Blynk.run();
  timer.run();
}
