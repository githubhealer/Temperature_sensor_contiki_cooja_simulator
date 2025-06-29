#include "contiki.h"
#include "random.h"
#include <stdio.h>

PROCESS(temp_sensor, "Temperature process");
AUTOSTART_PROCESSES(&temp_sensor);

PROCESS_THREAD(temp_sensor, ev, data)
{
    static struct etimer etimer;
    static int temperature;
    static int ac_on = 0; // 0 = OFF, 1 = ON

    PROCESS_BEGIN();

    printf("Starting simulated temperature sensor with thermostat\n");

    etimer_set(&etimer, CLOCK_SECOND * 2);

    while (1) {
        PROCESS_WAIT_EVENT_UNTIL(etimer_expired(&etimer));
        etimer_reset(&etimer);

        // Simulate temperature reading (10.0 to 40.0 °C)
        temperature = 100 + (random_rand() % 300); // 100–399

        int temp_whole = temperature / 10;
        int temp_decimal = temperature % 10;

        printf("Temp: %d.%d °C - ", temp_whole, temp_decimal);

        // Thermostat control logic
        if (temperature > 250 && !ac_on) {
            ac_on = 1;
            printf("AC TURNED ON\n");
        } else if (temperature < 220 && ac_on) {
            ac_on = 0;
            printf("AC TURNED OFF\n");
        } else {
            printf("AC status: %s\n", ac_on ? "ON" : "OFF");
        }
    }

    PROCESS_END();
}

