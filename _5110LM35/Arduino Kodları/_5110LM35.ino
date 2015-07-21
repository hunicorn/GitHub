



    #include <LCD5110_Basic.h> // LCD kütüphanesini taslağımıza dahil ediyoruz.
     
    LCD5110 myGLCD(8,9,10,11,12); //LCD pinlerinin hangi Arduino pinlerine bağlı olduğunu belirtiyoruz.
    extern uint8_t SmallFont[]; // Küçük harflerle yazı yazmamızı sağlayan SmallFont'u tanıtıyoruz.
    extern uint8_t MediumNumbers[]; // Ortanca boy sayıları yazmamızı sağlayan MediumNumbers'ı tanıtıyoruz.
    extern uint8_t BigNumbers[]; // Büyük sayıları yazmamızı sağlayan BigNumbers'ı tanıtıyoruz.
    float sicaklik = 0; 

void setup(void)
{
  pinMode(A0,INPUT); // A0 pinini sensör girişi olarak tanıtıyoruz.
  pinMode(7,OUTPUT); // 5110 ekranını çıkış olarak tanıtıyoruz.
  digitalWrite(7,HIGH); // 5110 ekran ışığını açıyoruz.
  myGLCD.InitLCD(); // Ekranı başlatıyoruz.
  myGLCD.setContrast(60);  //  Ekran kontrastını 60'a ayarlıyoruz.
  
}

void loop(void)
{ 

  myGLCD.clrScr();
  myGLCD.setFont(SmallFont); //Harfleri kullanacağımızı bildiriyoruz.
   myGLCD.print("SICAKLIK:",5,1); // Yazacağımız şeyi ve koordinatlarını giriyoruz.
    sicaklik = analogRead(A0); //"isik" isimli değişkenimizin Işık direncinden gelen sayısal değeri saklamasını istiyoruz.
    sicaklik = sicaklik * 0.48828125; // Celcius'a çevirmek için çarptık.
     myGLCD.setFont(BigNumbers); //Büyük sayıları kullanacağımızı bildiriyoruz.
      myGLCD.printNumI(sicaklik,25,20); // Ekranda yazacağımız şeyi ve koordinatlarını giriyoruz.
      myGLCD.setFont(SmallFont); //Harfleri kullanacağımızı bildiriyoruz.
      myGLCD.print("Celc:",57,25); // Yazacağımız şeyi ve koordinatlarını giriyoruz.
      delay(200); // Çok da hızlı olmasın, biraz yavaşlatalım.
   

  
 
}



