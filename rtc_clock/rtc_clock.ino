
#include <SPI.h>
#include <DMD.h>
#include <TimerOne.h>
#include "SystemFont5x7.h"
#include "Arial_black_16.h"

int adc = 5;
#define DISPLAYS_ACROSS 1
#define DISPLAYS_DOWN 1
DMD dmd(DISPLAYS_ACROSS, DISPLAYS_DOWN);

#include <Wire.h>

#include "RTClib.h"
String dayOfTheWeek = "   ";
int x = 0;
int hr1, hr12;
DateTime now;


RTC_DS3231 rtc;




void ScanDMD()
{
  dmd.scanDisplayBySPI();
}



void setup ()
{
  Serial.begin(9600);

  if (! rtc.begin())
  {
    Serial.println("Couldn't find RTC Module");
    while (1);
  }
  Timer1.initialize( 5000 );
  Timer1.attachInterrupt( ScanDMD );


  dmd.clearScreen( true );
  dmd.selectFont(Arial_Black_16);

}



void loop ()
{

  dmd.clearScreen( true );
  now = rtc.now();




  String Date = String(now.year()) + "/" + String(now.month()) + "/" + String(now.day());
  
  char d[10];
  String str1;
  str1 = String(Date);
  str1.toCharArray(d, 11);
  char t [3];
  String str2;

  char h [3];
  String str3;

  hr1 = now.hour();
  if (hr1 >= 13)
    hr12 = hr1 - 12;
  else
    hr12 = hr1;
  String Time = String(hr12) +  String (now.minute());
  Serial.println(Time);
  char b[5];
  String str;
  str = String(Time);
  str.toCharArray(b, 5);
  int x = now.dayOfTheWeek();

  switch (x)
  {
    case 1:
      dayOfTheWeek = "MONDAY";
      break;
    case 2:
      dayOfTheWeek = "TUESDAY";
      break;
    case 3:
      dayOfTheWeek = "WEDNESDAY";
      break;
    case 4:
      dayOfTheWeek = "THURSDAY";
      break;
    case 5:
      dayOfTheWeek = "FRIDAY";
      break;
    case 6:
      dayOfTheWeek = "SATURDAY";
      break;
    case 7:
      dayOfTheWeek = "SUNDAY";
      break;
    default:
      Serial.println(" ");
  }

  char dy[11];
  String str5;
  str5 = String(dayOfTheWeek);
  str5.toCharArray(dy, 11);

   if (hr12 < 10) {
    Serial.println("aawa2");
    dmd.clearScreen( true );
    dmd.selectFont(SystemFont5x7);
    dmd.drawChar(  1,  adc, '0', GRAPHICS_NORMAL );
    dmd.drawChar( 8,  adc,  b[0], GRAPHICS_NORMAL );
    dmd.drawChar(  13,  adc,  ':', GRAPHICS_NORMAL );
    dmd.drawChar( 17,  adc,  b[1], GRAPHICS_NORMAL );
    dmd.drawChar( 24,  adc,  b[2], GRAPHICS_NORMAL );

    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_NOR    );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_NOR    );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_NOR    );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_NOR    );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_NOR    );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_NOR    );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_NOR    );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_NOR    );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );

  }
  else {
    Serial.println("aawa3");
    dmd.clearScreen( true );
    dmd.selectFont(SystemFont5x7);
    dmd.drawChar(  1,  adc, b[0], GRAPHICS_NORMAL );
    dmd.drawChar(  8,  adc,  b[1], GRAPHICS_NORMAL );
    dmd.drawChar( 13,  adc,  ':', GRAPHICS_NORMAL );
    dmd.drawChar( 17,  adc,  b[2], GRAPHICS_NORMAL );
    dmd.drawChar( 24,  adc,  b[3], GRAPHICS_NORMAL );

    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_NOR    );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_NOR    );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_NOR    );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_NOR    );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_NOR    );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_NOR    );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_NOR    );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_NOR    );
    delay( 1000 );
    dmd.drawChar( 13,  adc, ':', GRAPHICS_OR     );
    delay( 1000 );
  }


  //displaying Day
  dmd.clearScreen( true );
  dmd.selectFont(SystemFont5x7);
  dmd.drawMarquee(dy,9, (32 * DISPLAYS_ACROSS) - 1, 1);
  long start1 = millis();
  long timer1 = start1;
  boolean ret1 = false;
  while (!ret1)
  {
    if ((timer1 + 50) < millis())
    {
      ret1 = dmd.stepMarquee(-1, 0);
      timer1 = millis();
    }
  }

  //displaying Date
  dmd.clearScreen( true );
  dmd.selectFont(SystemFont5x7);
  dmd.drawMarquee(d, 10, (32 * DISPLAYS_ACROSS) - 1, 1);
  long start2 = millis();
  long timer2 = start2;
  boolean ret2 = false;
  while (!ret2)
  {
    if ((timer2 + 50) < millis())
    {
      ret2 = dmd.stepMarquee(-1, 0);
      timer2 = millis();
    }
  }
  delay(1000);
  dmd.clearScreen( true );
  dmd.selectFont(Arial_Black_16);
  dmd.drawMarquee("SHASHITHA ASHAN", 8, (32 * DISPLAYS_ACROSS) - 1, 1);
  long start4 = millis();
  long timer4 = start4;
  boolean ret4 = false;
  while (!ret4)
  {
    if ((timer4 + 20) < millis())
    {
      ret4 = dmd.stepMarquee(-1, 0);
      timer4 = millis();
    }
  }
  delay(1000);

}








