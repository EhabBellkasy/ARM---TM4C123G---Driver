/*
 * RIS.cpp
 *
 *  Created on: 2019/03/04
 *      Author: Ehab Bellkasy
 */
 
#include "hw_types.h"
#include "RIS.hpp"


gRIS_Status_t	ReadBOR0RIS () {
	
	// Read VDD under BOR0 Raw Interrupt Status 
	/**
	 ** @brief this function will return back  VDD under BOR0 Raw Interrupt Status.
	 ** 	Note the BOR0 bit in the PBORCTL register must be cleared to cause an interrupt due to a BOR0 Event. This bit is cleared by writing a 1 to the BOR0MIS bit in the MISC register.
	 ** 	Value		Description
	 ** 	0x0			A VDD BOR0 condition is not currently active.
	 ** 	0x1			A VDD BOR0 condition is currently active.
	 ** @param 		void
	 ** @return   	gRIS_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(RIS_ADDRESS) & (1<< RIS_BOR0RIS) ) >> RIS_BOR0RIS ) ;

	
} // End of Function.

gRIS_Status_t	ReadVDDARIS () {
	
	// Read VDDA Power OK Event Raw Interrupt Status 
	/**
	 ** @brief this function will return back  VDD under BOR0 Raw Interrupt Status.
	 ** 	Note: This bit is cleared by writing a 1 to the VDDAMIS bit in the MISC register.
	 ** 	Value		Description
	 ** 	0x0			VDDA power is not at its appropriate functional voltage.
	 ** 	0x1			VDDA is at an appropriate functional voltage.
	 ** @param 		void
	 ** @return   	gRIS_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(RIS_ADDRESS) & (1<< RIS_VDDARIS) ) >> RIS_VDDARIS ) ;

	
} // End of Function.

gRIS_Status_t	ReadMOSCPUPRIS () {
	
	// Read MOSC Power Up Raw Interrupt Status 
	/**
	 ** @brief this function will return back MOSC Power Up Raw Interrupt Status.
	 ** 	Note: This bit is cleared by writing a 1 to the MOSCPUPMIS bit in the MISC register.
	 ** 	Value		Description
	 ** 	0x0			Sufficient time has not passed for the MOSC to reach the expected frequency.
	 ** 	0x1			Sufficient time has passed for the MOSC to reach the expected frequency. The value for this power-up time is indicated by T MOSC_START.
	 ** @param 		void
	 ** @return   	gRIS_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(RIS_ADDRESS) & (1<< RIS_MOSCPUPRIS) ) >> RIS_MOSCPUPRIS ) ;

	
} // End of Function.

gRIS_Status_t	ReadUSBPLLLRIS () {
	
	// Read USB PLL Lock Raw Interrupt Status 
	/**
	 ** @brief this function will return back USB PLL Lock Raw Interrupt Status.
	 ** 	Note: This bit is cleared by writing a 1 to the USBPLLLMIS bit in the MISC register.
	 ** 	Value		Description
	 ** 	0x0			The USB PLL timer has not reached T READY.
	 ** 	0x1			The USB PLL timer has reached T READY indicating that sufficient time has passed for the USB PLL to lock
	 ** @param 		void
	 ** @return   	gRIS_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(RIS_ADDRESS) & (1<< RIS_USBPLLLRIS) ) >> RIS_USBPLLLRIS ) ;

	
} // End of Function.

gRIS_Status_t	ReadPLLLRIS () {
	
	
	// Read PLL Lock Raw Interrupt Status 
	/**
	 ** @brief this function will return back PLL Lock Raw Interrupt Status.
	 ** 	Note: This bit is cleared by writing a 1 to the PLLLMIS bit in the MISC register.
	 ** 	Value		Description
	 ** 	0x0			The PLL timer has not reached T_READY.
	 ** 	0x1			The PLL timer has reached T_READY indicating that sufficient time has passed for the PLL to lock.
	 ** @param 		void
	 ** @return   	gRIS_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(RIS_ADDRESS) & (1<< RIS_PLLLRIS) ) >> RIS_PLLLRIS ) ;

	
} // End of Function.

gRIS_Status_t	ReadMOFRIS () {
	
	// Read  Main Oscillator Failure Raw Interrupt Status.
	/**
	 ** @brief this function will return back Main Oscillator Failure Raw Interrupt Status.
	 ** 	Note: This bit is cleared by writing a 1 to the MOFMIS bit in the MISC register.
	 ** 	Value		Description
	 ** 	0x0			The main oscillator has not failed.
	 ** 	0x1			The MOSCIM bit in the MOSCCTL register is set and the main oscillator has failed.
	 ** @param 		void
	 ** @return   	gRIS_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(RIS_ADDRESS) & (1<< RIS_MOFRIS) ) >> RIS_MOFRIS ) ;

	
} // End of Function.

gRIS_Status_t	ReadBOR1RIS () {
	
	// Read VDD under BOR1 Raw Interrupt Status.
	/**
	 ** @brief this function will return back VDD under BOR1 Raw Interrupt Status.
	 ** 	Note: the BOR1 bit in the PBORCTL register must be cleared to cause an interrupt due to a BOR1 Event. This bit is cleared by writing a 1 to the BOR1MIS bit in the MISC register.
	 ** 	Value		Description
	 ** 	0x0			A VDDS BOR1 condition is not currently active.
	 ** 	0x1			A VDDS BOR1 condition is currently active.
	 ** @param 		void
	 ** @return   	gRIS_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(RIS_ADDRESS) & (1<< RIS_BOR1RIS) ) >> RIS_BOR1RIS ) ;

	
} // End of Function.


