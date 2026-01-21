#include <Arduino.h>
#include "PrintStream.h"
#include "tcouple.h"


void task_TC(void* p_params)
{
	TCouple thermo_1 [12];

	TCouple thermo_2 [12, 2.718, -3.1415];

	Serial << thermo_1 << " | " << thermo_2 << endl;

	for (;;)
	{
		Serial << thermo_1.read() << "," << thermo_2.read() << endl;

		vTaskDelay(1000);
	}
}

int main()
{
	TCouple t(1);
	print(t);

	return 0;
}

