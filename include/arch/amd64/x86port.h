/*
 * Copyright © 2024 Vinícius Schütz Piva
 *
 * This file is part of dagger
 *
 * dagger is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>
 *
 */

#ifndef KERNEL_ARCH_AMD64_X86PORT_H_
#define KERNEL_ARCH_AMD64_X86PORT_H_

#include <stdint.h>

void   outb(uint16_t port_id, uint8_t data);
uint8_t inb(uint16_t port_id);

#endif // KERNEL_ARCH_AMD64_X86PORT_H_
