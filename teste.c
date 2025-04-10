





void set_pins_from_counter(uint8_t count)
{
	// Desligar todos os pinos
	//
	uint8_t pin_array[8] = {GPIO_PIN_3, GPIO_PIN_4, GPIO_PIN_5, GPIO_PIN_6, GPIO_PIN_7};
	
	uint8_t pins_to_turn_on = 0x0;

	for (int i = 0; i < 5; i++) {
		// eh um bool
		uint8_t current_bit = (count >> i) & 1;

		if (current_bit == 1) {
			pins_to_turn_on |= pin_array[i];
		
	}
}
