/** This is the header file for tcouple.h - a C++ class that represents a thermocouple
 * **/

class TCouple
{
	protected:
		uint8_t adc_pin;
		float gain;
		float offset;

	protected:
		TCouple(uint8_t adc_pin);
		TCouple(uint8_t adc_pin, float gain, float offset);	/** This is an example of overloading the constructor **/
		
		/** methods **/
		void setGain(float newGain);
		uint8_t getGain();

		void setOffset(float newOffset);
		uint8_t getOffset();

		friend Print& operator << (Print& ser, TCouple& tc);
};


