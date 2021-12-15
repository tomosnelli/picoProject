#include "pico/stdlib.h"

#define GPIO_ON 1
#define GPIO_OFF 0
#define LED_PIN 25

void loop();

int main(){
	gpio_init(LED_PIN);
	gpio_set_dir(LED_PIN, GPIO_OUT);

	//while(true){
		gpio_put(LED_PIN, GPIO_ON);
		//sleep_ms(1000);
		loop();
		gpio_put(LED_PIN, GPIO_OFF);
		//sleep_ms(1000);
	//}
}
