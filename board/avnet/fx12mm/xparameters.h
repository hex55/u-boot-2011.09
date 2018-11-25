/*
 * (C) Copyright 2008
 *
 * Georg Schardt <schardt@team-ctech.de>
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 *
 * CAUTION: This file is based on the xparameters.h automatically
 * generated by libgen. Version: Xilinx EDK 10.1.02 Build EDK_K_SP2.5
 */

#ifndef __XPARAMETER_H__
#define __XPARAMETER_H__

/* RS232 */
#define XPAR_UARTNS550_0_CLOCK_FREQ_HZ 100000000
#define XPAR_UARTNS550_0_BASEADDR 0x83E00000


/* INT_C */
#define XPAR_XPS_INTC_0_DEVICE_ID 0
#define XPAR_XPS_INTC_0_BASEADDR 0x81800000
#define XPAR_INTC_MAX_NUM_INTR_INPUTS 2

/* CPU core clock */
#define XPAR_CORE_CLOCK_FREQ_HZ 300000000
#define XPAR_PLB_CLOCK_FREQ_HZ  100000000

/* RAM */
#define XPAR_DDR2_SDRAM_MEM_BASEADDR 0x00000000

/* FLASH */
#define XPAR_FLASH_MEM0_BASEADDR 0xFFC00000

#endif
