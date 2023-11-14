#include "main.h"
/*
 * custom_write - use a local buffer of 1024
 * to call write function
 * @buffer: input
 * @size: size
 * Return: void
 */
void custom_write(const char *buffer, size_t size)
{
	write(STDOUT_FILENO, buffer, size);
}
