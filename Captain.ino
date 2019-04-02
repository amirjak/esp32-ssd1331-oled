
#include <SPI.h>
#include <SSD_13XX.h>

#include "_images/Captain.c"


#define __CS    5
#define __DC    4
#define __RST   2


SSD_13XX tft1 = SSD_13XX(__CS, __DC, __RST);

void setup()
{
  tft1.begin();
  tft1.drawImage(0, 0, &Captain);

}

void loop()
{
}
