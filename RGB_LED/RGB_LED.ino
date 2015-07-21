//Katot RGB led'iniz varsa uzun ayağı GND'ye, Anot RGB LED'iniz varsa 5v'a bağlayın.
//Diğer ayakları Arduino giriş çıkış pinlerine 220Ohm'luk dirençlerle bağlayın.

const int kirmizi = 3; 
const int yesil = 5;
const int mavi = 6;

void setup() {
pinMode(mavi, OUTPUT);
pinMode(yesil, OUTPUT);
pinMode(kirmizi, OUTPUT);


}

void loop() {
analogWrite(mavi, 0);
analogWrite(yesil, 0);
analogWrite(kirmizi, 255);
delay(200);
analogWrite(mavi, 255);
analogWrite(yesil, 0);
analogWrite(kirmizi, 0);
delay(100);
analogWrite(mavi, 0);
analogWrite(yesil, 255);
analogWrite(kirmizi, 0);
delay(200);
analogWrite(mavi, 255);
analogWrite(yesil, 255);
analogWrite(kirmizi, 0);
delay(100);
analogWrite(mavi, 0);
analogWrite(yesil, 255);
analogWrite(kirmizi, 255);
delay(200);
analogWrite(mavi, 255);
analogWrite(yesil, 0);
analogWrite(kirmizi, 255);
delay(100);
analogWrite(mavi, 100);
analogWrite(yesil, 150);
analogWrite(kirmizi, 175);
delay(200);
}
