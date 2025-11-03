/*
 * print_utils.h
 *
 *  Created on: May 5, 2025
 *      Author: alberto
 */

#ifndef INC_PRINT_UTILS_H_
#define INC_PRINT_UTILS_H_

int _write(int file, char *ptr, int len)
{
	int DataIdx;
	for (DataIdx = 0; DataIdx < len; DataIdx++)
	{
		ITM_SendChar(*ptr++);
	}
	return len;
}

#endif /* INC_PRINT_UTILS_H_ */
