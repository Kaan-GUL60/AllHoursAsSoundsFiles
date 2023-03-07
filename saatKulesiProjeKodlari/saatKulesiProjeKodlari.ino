#include <virtuabotixRTC.h>                            //Kütüphanemizi ekliyoruz.
int CLK_PIN = 6;                                       //6. pini clock pini olarak tanımladık
int DAT_PIN = 7;                                       //7. pini data pini olarak tanımladık
int RST_PIN = 8;                                       //8. pini reset pini olarak tanımladık.
virtuabotixRTC myRTC(CLK_PIN, DAT_PIN, RST_PIN);      // Kütüphanemizi pinlere atıyoruz.

#include <SD.h>                      // sd kart kütüphanesi
#define Sd_Chip_pin 4
#include <TMRpcm.h>           // melodi çalma kütüphanesi
char val;
TMRpcm tmrpcm;   // melodi fonksiyonu oluşturma


void setup() {
  Serial.begin(9600);                                   //Seri haberleşmeyi başlatıyoruz.
  myRTC.setDS1302Time(55, 59, 8, 3, 04, 03, 2023);     //Saati saniye, dakika, saat, haftanın günü, ayın günü, ay, yıl olarak ayarlıyoruz.


  tmrpcm.speakerPin = 9; // hoparlör + bacağı digital 9. pine tak

  if (!SD.begin(Sd_Chip_pin)) {  // sd module bağlanma
    return;
  }

}

void loop() {
  myRTC.updateTime();                                   //RTC'den zamanı okuyoruz
  Serial.print("Tarih / Saat: ");                       //Aldığımız verileri Serial Porta bastırıyoruz.
  Serial.print(myRTC.dayofmonth);
  Serial.print("/");
  Serial.print(myRTC.month);
  Serial.print("/");
  Serial.print(myRTC.year);
  Serial.print(" ");
  Serial.print(myRTC.hours);
  Serial.print(":");
  Serial.print(myRTC.minutes);
  Serial.print(":");
  Serial.println(myRTC.seconds);
  delay(1000); //1sn bekleme.

  kontrol();
  /*tmrpcm.play("15.wav");
  delay(1000);
  tmrpcm.play("20.wav");
    delay(1000);
  tmrpcm.play("25.wav");
    delay(1000);
  tmrpcm.play("30.wav");
    delay(1000);
  tmrpcm.play("35.wav");
    delay(1000);
  tmrpcm.play("40.wav");
    delay(1000);
  tmrpcm.play("45.wav");
    delay(1000);
  tmrpcm.play("50.wav");
    delay(1000);
  tmrpcm.play("55.wav");
    delay(1000);
  tmrpcm.play("60.wav");
    delay(1000);
  tmrpcm.play("65.wav");
    delay(1000);
  tmrpcm.play("70.wav");
    delay(1000);
  tmrpcm.play("75.wav");
    delay(1000);
  tmrpcm.play("80.wav");
    delay(1000);
  tmrpcm.play("85.wav");
    delay(1000);
  tmrpcm.play("42.wav");
    delay(1000);
  tmrpcm.play("68.wav");
    delay(1000);
  tmrpcm.play("73.wav");
    delay(1000);
  tmrpcm.play("49.wav");
    delay(1000);
  tmrpcm.play("54.wav");
    delay(1000);
  tmrpcm.play("53.wav");
    delay(1000);
  tmrpcm.play("28.wav");
    delay(1000);
  tmrpcm.play("16.wav");
    delay(1000);
  tmrpcm.play("29.wav");
    delay(1000);
  tmrpcm.play("44.wav");
    delay(1000);
  tmrpcm.play("33.wav");
    delay(1000);
  tmrpcm.play("66.wav");
    delay(1000);
  tmrpcm.play("81.wav");
    delay(1000);*/
}

void kontrol() {
  bool a = true;
  int bekle = 30000;
  if (myRTC.hours == 9 && myRTC.minutes == 0) {
    if (a == true) {
      tmrpcm.play("1.wav");
      Serial.println("1.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 9 && myRTC.minutes == 5) {
    if (a == true) {
      tmrpcm.play("2.wav");
      Serial.println("2.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 9 && myRTC.minutes == 10) {
    if (a == true) {
      tmrpcm.play("3.wav");
      Serial.println("3.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 9 && myRTC.minutes == 10) {
    if (a == true) {
      tmrpcm.play("4.wav");
      Serial.println("4.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 9 && myRTC.minutes == 20) {
    if (a == true) {
      tmrpcm.play("5.wav");
      Serial.println("5.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 9 && myRTC.minutes == 25) {
    if (a == true) {
      tmrpcm.play("6.wav");
      Serial.println("6.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 9 && myRTC.minutes == 30) {
    if (a == true) {
      tmrpcm.play("7.wav");
      Serial.println("7.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 9 && myRTC.minutes == 35) {
    if (a == true) {
      tmrpcm.play("8.wav");
      Serial.println("8.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 9 && myRTC.minutes == 40) {
    if (a == true) {
      tmrpcm.play("9.wav");
      Serial.println("9.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 9 && myRTC.minutes == 45) {
    if (a == true) {
      tmrpcm.play("10.wav");
      Serial.println("10.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 9 && myRTC.minutes == 50) {
    if (a == true) {
      tmrpcm.play("11.wav");
      Serial.println("11.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 9 && myRTC.minutes == 55) {
    if (a == true) {
      tmrpcm.play("12.wav");
      Serial.println("12.wav");
      delay(bekle);
      a = false;
    }
  }

  //***************************-----------**********************---------------******************
  else if (myRTC.hours == 10 && myRTC.minutes == 0) {
    if (a == true) {
      tmrpcm.play("13.wav");
      Serial.println("13.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 10 && myRTC.minutes == 5) {
    if (a == true) {
      tmrpcm.play("14.wav");
      Serial.println("14.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 10 && myRTC.minutes == 10) {
    if (a == true) {
      tmrpcm.play("15.wav");
      Serial.println("15.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 10 && myRTC.minutes == 10) {
    if (a == true) {
      tmrpcm.play("16.wav");
      Serial.println("16.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 10 && myRTC.minutes == 20) {
    if (a == true) {
      tmrpcm.play("17.wav");
      Serial.println("17.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 10 && myRTC.minutes == 25) {
    if (a == true) {
      tmrpcm.play("18.wav");
      Serial.println("18.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 10 && myRTC.minutes == 30) {
    if (a == true) {
      tmrpcm.play("19.wav");
      Serial.println("19.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 10 && myRTC.minutes == 35) {
    if (a == true) {
      tmrpcm.play("20.wav");
      Serial.println("20.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 10 && myRTC.minutes == 40) {
    if (a == true) {
      tmrpcm.play("21.wav");
      Serial.println("21.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 10 && myRTC.minutes == 45) {
    if (a == true) {
      tmrpcm.play("22.wav");
      Serial.println("22.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 10 && myRTC.minutes == 50) {
    if (a == true) {
      tmrpcm.play("23.wav");
      Serial.println("23.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 10 && myRTC.minutes == 55) {
    if (a == true) {
      tmrpcm.play("24.wav");
      Serial.println("24.wav");
      delay(bekle);
      a = false;
    }
  }
  //***************************-----------**********************---------------******************
  else if (myRTC.hours == 11 && myRTC.minutes == 0) {
    if (a == true) {
      tmrpcm.play("25.wav");
      Serial.println("25.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 11 && myRTC.minutes == 5) {
    if (a == true) {
      tmrpcm.play("26.wav");
      Serial.println("26.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 11 && myRTC.minutes == 10) {
    if (a == true) {
      tmrpcm.play("27.wav");
      Serial.println("27.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 11 && myRTC.minutes == 10) {
    if (a == true) {
      tmrpcm.play("28.wav");
      Serial.println("28.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 11 && myRTC.minutes == 20) {
    if (a == true) {
      tmrpcm.play("29.wav");
      Serial.println("29.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 11 && myRTC.minutes == 25) {
    if (a == true) {
      tmrpcm.play("30.wav");
      Serial.println("30.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 11 && myRTC.minutes == 30) {
    if (a == true) {
      tmrpcm.play("31.wav");
      Serial.println("31.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 11 && myRTC.minutes == 35) {
    if (a == true) {
      tmrpcm.play("32.wav");
      Serial.println("32.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 11 && myRTC.minutes == 40) {
    if (a == true) {
      tmrpcm.play("33.wav");
      Serial.println("33.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 11 && myRTC.minutes == 45) {
    if (a == true) {
      tmrpcm.play("34.wav");
      Serial.println("34.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 11 && myRTC.minutes == 50) {
    if (a == true) {
      tmrpcm.play("35.wav");
      Serial.println("35.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 11 && myRTC.minutes == 55) {
    if (a == true) {
      tmrpcm.play("36.wav");
      Serial.println("36.wav");
      delay(bekle);
      a = false;
    }
  }
  //***************************-----------**********************---------------******************
  else if (myRTC.hours == 12 && myRTC.minutes == 0) {
    if (a == true) {
      tmrpcm.play("37.wav");
      Serial.println("37.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 12 && myRTC.minutes == 5) {
    if (a == true) {
      tmrpcm.play("38.wav");
      Serial.println("38.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 12 && myRTC.minutes == 10) {
    if (a == true) {
      tmrpcm.play("39.wav");
      Serial.println("39.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 12 && myRTC.minutes == 10) {
    if (a == true) {
      tmrpcm.play("40.wav");
      Serial.println("40.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 12 && myRTC.minutes == 20) {
    if (a == true) {
      tmrpcm.play("41.wav");
      Serial.println("41.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 12 && myRTC.minutes == 25) {
    if (a == true) {
      tmrpcm.play("42.wav");
      Serial.println("42.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 12 && myRTC.minutes == 30) {
    if (a == true) {
      tmrpcm.play("43.wav");
      Serial.println("43.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 12 && myRTC.minutes == 35) {
    if (a == true) {
      tmrpcm.play("44.wav");
      Serial.println("44.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 12 && myRTC.minutes == 40) {
    if (a == true) {
      tmrpcm.play("45.wav");
      Serial.println("45.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 12 && myRTC.minutes == 45) {
    if (a == true) {
      tmrpcm.play("46.wav");
      Serial.println("46.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 12 && myRTC.minutes == 50) {
    if (a == true) {
      tmrpcm.play("47.wav");
      Serial.println("47.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 12 && myRTC.minutes == 55) {
    if (a == true) {
      tmrpcm.play("48.wav");
      Serial.println("48.wav");
      delay(bekle);
      a = false;
    }
  }
  //***************************-----------**********************---------------******************
  else if (myRTC.hours == 13 && myRTC.minutes == 0) {
    if (a == true) {
      tmrpcm.play("49.wav");
      Serial.println("49.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 13 && myRTC.minutes == 5) {
    if (a == true) {
      tmrpcm.play("50.wav");
      Serial.println("50.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 13 && myRTC.minutes == 10) {
    if (a == true) {
      tmrpcm.play("51.wav");
      Serial.println("51.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 13 && myRTC.minutes == 10) {
    if (a == true) {
      tmrpcm.play("52.wav");
      Serial.println("52.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 13 && myRTC.minutes == 20) {
    if (a == true) {
      tmrpcm.play("53.wav");
      Serial.println("53.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 13 && myRTC.minutes == 25) {
    if (a == true) {
      tmrpcm.play("54.wav");
      Serial.println("54.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 13 && myRTC.minutes == 30) {
    if (a == true) {
      tmrpcm.play("55.wav");
      Serial.println("55.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 13 && myRTC.minutes == 35) {
    if (a == true) {
      tmrpcm.play("56.wav");
      Serial.println("56.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 13 && myRTC.minutes == 40) {
    if (a == true) {
      tmrpcm.play("57.wav");
      Serial.println("57.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 13 && myRTC.minutes == 45) {
    if (a == true) {
      tmrpcm.play("58.wav");
      Serial.println("58.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 13 && myRTC.minutes == 50) {
    if (a == true) {
      tmrpcm.play("59.wav");
      Serial.println("59.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 13 && myRTC.minutes == 55) {
    if (a == true) {
      tmrpcm.play("60.wav");
      Serial.println("60.wav");
      delay(bekle);
      a = false;
    }
  }
  //***************************-----------**********************---------------******************
  else if (myRTC.hours == 14 && myRTC.minutes == 0) {
    if (a == true) {
      tmrpcm.play("61.wav");
      Serial.println("61.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 14 && myRTC.minutes == 5) {
    if (a == true) {
      tmrpcm.play("62.wav");
      Serial.println("62.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 14 && myRTC.minutes == 10) {
    if (a == true) {
      tmrpcm.play("63.wav");
      Serial.println("63.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 14 && myRTC.minutes == 10) {
    if (a == true) {
      tmrpcm.play("64.wav");
      Serial.println("64.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 14 && myRTC.minutes == 20) {
    if (a == true) {
      tmrpcm.play("65.wav");
      Serial.println("65.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 14 && myRTC.minutes == 25) {
    if (a == true) {
      tmrpcm.play("66.wav");
      Serial.println("66.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 14 && myRTC.minutes == 30) {
    if (a == true) {
      tmrpcm.play("67.wav");
      Serial.println("67.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 14 && myRTC.minutes == 35) {
    if (a == true) {
      tmrpcm.play("68.wav");
      Serial.println("68.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 14 && myRTC.minutes == 40) {
    if (a == true) {
      tmrpcm.play("69.wav");
      Serial.println("69.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 14 && myRTC.minutes == 45) {
    if (a == true) {
      tmrpcm.play("70.wav");
      Serial.println("70.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 14 && myRTC.minutes == 50) {
    if (a == true) {
      tmrpcm.play("71.wav");
      Serial.println("71.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 14 && myRTC.minutes == 55) {
    if (a == true) {
      tmrpcm.play("72.wav");
      Serial.println("72.wav");
      delay(bekle);
      a = false;
    }
  }
  //***************************-----------**********************---------------******************
  else if (myRTC.hours == 15 && myRTC.minutes == 0) {
    if (a == true) {
      tmrpcm.play("73.wav");
      Serial.println("73.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 15 && myRTC.minutes == 5) {
    if (a == true) {
      tmrpcm.play("74.wav");
      Serial.println("74.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 15 && myRTC.minutes == 10) {
    if (a == true) {
      tmrpcm.play("75.wav");
      Serial.println("75.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 15 && myRTC.minutes == 10) {
    if (a == true) {
      tmrpcm.play("76.wav");
      Serial.println("76.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 15 && myRTC.minutes == 20) {
    if (a == true) {
      tmrpcm.play("77.wav");
      Serial.println("77.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 15 && myRTC.minutes == 25) {
    if (a == true) {
      tmrpcm.play("78.wav");
      Serial.println("78.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 15 && myRTC.minutes == 30) {
    if (a == true) {
      tmrpcm.play("79.wav");
      Serial.println("79.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 15 && myRTC.minutes == 35) {
    if (a == true) {
      tmrpcm.play("80.wav");
      Serial.println("80.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 15 && myRTC.minutes == 40) {
    if (a == true) {
      tmrpcm.play("81.wav");
      Serial.println("81.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 15 && myRTC.minutes == 45) {
    if (a == true) {
      tmrpcm.play("82.wav");
      Serial.println("82.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 15 && myRTC.minutes == 50) {
    if (a == true) {
      tmrpcm.play("83.wav");
      Serial.println("83.wav");
      delay(bekle);
      a = false;
    }
  }
  else if (myRTC.hours == 15 && myRTC.minutes == 55) {
    if (a == true) {
      tmrpcm.play("84.wav");
      Serial.println("84.wav");
      delay(bekle);
      a = false;
    }
  }
  //----------------****************------------------******************----------------********************
  else if (myRTC.hours == 16 && myRTC.minutes == 0) {
    if (a == true) {
      tmrpcm.play("85.wav");
      Serial.println("85.wav");
      delay(bekle);
      a = false;
    }
  }
  
}
