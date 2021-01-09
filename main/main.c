#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_sleep.h"
#include "driver/rtc_io.h"

#define PIN_BUTTON 15
#define PIN_LED 2

RTC_DATA_ATTR int buttonPresses = 0;
void app_main(void)
{
  rtc_gpio_pullup_en(PIN_BUTTON);
  rtc_gpio_pulldown_dis(PIN_BUTTON);

  esp_sleep_enable_ext0_wakeup(PIN_BUTTON, 0);
  printf("going into deepsleep, button has been pressed %d times\n", buttonPresses++);

  esp_deep_sleep_start();

  
}
