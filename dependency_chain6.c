/*
 * Copyright (C) 2014  Marco Antonio Zanata Alves (mazalves at inf.ufrgs.br)
 *
 * This program is free software: you can redistribute it and/or modify
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char *argv[]) {

    uint64_t repetitions;
    if(argc == 2) {
        repetitions = atoi(argv[1]);
    }
    else {
        printf("Please provide the number of repetitions.\n");
        exit(EXIT_FAILURE);
    }

    uint64_t i = 0;
    uint64_t count0 = 0;
    uint64_t count1 = 0;
    uint64_t count2 = 0;
    uint64_t count3 = 0;
    uint64_t count4 = 0;
    uint64_t count5 = 0;

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");

    for (i=0; i<repetitions; i++) {
        asm volatile("add %0, %0" : "=r" (count0) : "0" (count0) : );
        asm volatile("add %0, %0" : "=r" (count1) : "0" (count1) : );
        asm volatile("add %0, %0" : "=r" (count2) : "0" (count2) : );
        asm volatile("add %0, %0" : "=r" (count3) : "0" (count3) : );
        asm volatile("add %0, %0" : "=r" (count4) : "0" (count4) : );
        asm volatile("add %0, %0" : "=r" (count5) : "0" (count5) : );

        asm volatile("add %0, %0" : "=r" (count0) : "0" (count0) : );
        asm volatile("add %0, %0" : "=r" (count1) : "0" (count1) : );
        asm volatile("add %0, %0" : "=r" (count2) : "0" (count2) : );
        asm volatile("add %0, %0" : "=r" (count3) : "0" (count3) : );
        asm volatile("add %0, %0" : "=r" (count4) : "0" (count4) : );
        asm volatile("add %0, %0" : "=r" (count5) : "0" (count5) : );

        asm volatile("add %0, %0" : "=r" (count0) : "0" (count0) : );
        asm volatile("add %0, %0" : "=r" (count1) : "0" (count1) : );
        asm volatile("add %0, %0" : "=r" (count2) : "0" (count2) : );
        asm volatile("add %0, %0" : "=r" (count3) : "0" (count3) : );
        asm volatile("add %0, %0" : "=r" (count4) : "0" (count4) : );
        asm volatile("add %0, %0" : "=r" (count5) : "0" (count5) : );

        asm volatile("add %0, %0" : "=r" (count0) : "0" (count0) : );
        asm volatile("add %0, %0" : "=r" (count1) : "0" (count1) : );
        asm volatile("add %0, %0" : "=r" (count2) : "0" (count2) : );
        asm volatile("add %0, %0" : "=r" (count3) : "0" (count3) : );
        asm volatile("add %0, %0" : "=r" (count4) : "0" (count4) : );
        asm volatile("add %0, %0" : "=r" (count5) : "0" (count5) : );

        asm volatile("add %0, %0" : "=r" (count0) : "0" (count0) : );
        asm volatile("add %0, %0" : "=r" (count1) : "0" (count1) : );
        asm volatile("add %0, %0" : "=r" (count2) : "0" (count2) : );
        asm volatile("add %0, %0" : "=r" (count3) : "0" (count3) : );
        asm volatile("add %0, %0" : "=r" (count4) : "0" (count4) : );
        asm volatile("add %0, %0" : "=r" (count5) : "0" (count5) : );
    }

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");

    printf("%"PRIu64"\n", count0);
    exit(EXIT_SUCCESS);
}
