#ifndef MAPPER_H
#define MAPPER_H

#include <stdint.h>

uint8_t GetByte(uint16_t addr);
uint16_t GetWord(uint16_t addr);

#define iorange 0x40

#endif // MAPPER_H
