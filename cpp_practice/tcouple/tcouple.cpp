#include "tcouple.h"

class TCouple
{

	protected:
		uint8_t adc_pin;
		float gain;
		float offset;

	protected:
		/** '::' is the scope definition operator **/
		
		/** Insert a comment block before each constructor! **/
		TCouple::TCouple(uint8_t pin)
		{
			adc_pin = pin;
			gain = 1.0;
			offset = 0;
		}

		void TCouple::setGain(float newGain)
		{
			if (newGain > 0)
			{
			gain = newGain;
			}

		}

		uint8_t TCouple::getGain()
		{
			return gain;
		}

		void TCouple::setOffset(float newOffset)
		{
			offset = newOffset;
		}

		uint8_t TCouple::getOffset()
		{
			return offset;
		}
		
		/** overriding the print operator to display print text in a particular format **/
		Print& operator << (Print& ser, TCouple& tc)
		{
			ser << "TC pin: " << tc.adc_pin
				<< ", gain: " << tc.gain;
		}
};


