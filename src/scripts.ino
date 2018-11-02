void showdisplay(int display) // 0=normal display 1=red blink
{
  int DELAY=100;
  int k=0;
  switch (display)
    {
    case 0:
          {
          for(int i=0;i<NUMPIXELS;i=i+5)
            {
              pixels.setPixelColor(i, pixels.Color(1,10,1)); // Moderately bright color.
              pixels.show(); // This sends the updated pixel color to the hardware.
            }
          for(int i=0;i<NUMPIXELS;i=i+15)
            {
            pixels.setPixelColor(i, pixels.Color(1,1,10));
            pixels.show();
            }
          pixels.setPixelColor(hour, pixels.Color(125,125,0)); // point for hour
          pixels.setPixelColor(minute, pixels.Color(0,125,125)); // point for minute
          pixels.show();
          }
          break;
    case 1:
          {
          for(int i=0;i<NUMPIXELS;i=i+1)
            {
              if(i!=0){k=i-2;}else{k=NUMPIXELS+1;}
              pixels.setPixelColor(i, pixels.Color(255,0,0));
              pixels.setPixelColor(k, pixels.Color(0,0,0));
              pixels.show();

              if(i-2==hour)
                {
                  pixels.setPixelColor(i-2, pixels.Color(125,125,0));
                  pixels.show();
                }
              if(i-2==minute)
                {
                  pixels.setPixelColor(i-2, pixels.Color(0,125,125));
                  pixels.show();
                }
              switch (i) {
// Hour Points
                case 2: pixels.setPixelColor(i-2, pixels.Color(1,1,10));
                        pixels.show();
                        break;
                case 17: pixels.setPixelColor(i-2, pixels.Color(1,1,10));
                        pixels.show();
                        break;
                case 32: pixels.setPixelColor(i-2, pixels.Color(1,1,10));
                        pixels.show();
                        break;
                case 47: pixels.setPixelColor(i-2, pixels.Color(1,1,10));
                        pixels.show();
                        break;
// Minute Points
                case 7: pixels.setPixelColor(i-2, pixels.Color(1,10,1));
                        pixels.show();
                        break;
                case 12: pixels.setPixelColor(i-2, pixels.Color(1,10,1));
                        pixels.show();
                        break;
                case 22: pixels.setPixelColor(i-2, pixels.Color(1,10,1));
                        pixels.show();
                        break;
                case 27: pixels.setPixelColor(i-2, pixels.Color(1,10,1));
                        pixels.show();
                        break;
                case 37: pixels.setPixelColor(i-2, pixels.Color(1,10,1));
                        pixels.show();
                        break;
                case 42: pixels.setPixelColor(i-2, pixels.Color(1,10,1));
                        pixels.show();
                        break;
                case 52: pixels.setPixelColor(i-2, pixels.Color(1,10,1));
                        pixels.show();
                        break;
                case 57: pixels.setPixelColor(i-2, pixels.Color(1,10,1));
                        pixels.show();
                        break;
              }
              delay(DELAY);
            }
            pixels.setPixelColor(NUMPIXELS-2, pixels.Color(0,0,0));pixels.show();delay(DELAY);
            pixels.setPixelColor(NUMPIXELS-1, pixels.Color(0,0,0));pixels.show();delay(DELAY);
          }
          break;
      }
}
