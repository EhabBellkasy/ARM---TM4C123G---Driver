/*
 * MISC.cpp
 *
 *  Created on: 2019/03/13
 *      Author: Ehab Bellkasy
 */
 
#include "hw_types.h"
#include "MISC.hpp"



gMISC_Status_t	ReadBOR0MIS () {
	
	// Read VDD under BOR0 Masked Interrupt Status. 
	/**
	 ** @brief this function will return back VDD under BOR0 Masked Interrupt Status.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			When read, a 0 indicates that a BOR0 condition has not occurred.
	 ** 	0x1			When read, a 1 indicates that an unmasked interrupt was signaled because of a BOR0 condition.
	 ** @param 		void
	 ** @return   	gMISC_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(MISC_ADDRESS) & (1<< MISC_BOR0MIS) ) >> MISC_BOR0MIS ) ;

	
} // End of Function.

gMISC_Status_t	ReadVDDAMIS () {
	
	// Read VDDA Power OK Masked Interrupt Status. 
	/**
	 ** @brief this function will return back VDDA Power OK Masked Interrupt Status.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			When read, a 0 indicates that VDDA power is good. 
	 ** 	0x1			When read, a 1 indicates that an unmasked interrupt was signaled because VDDA was below the proper functioning voltage.
	 ** @param 		void
	 ** @return   	gMISC_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(MISC_ADDRESS) & (1<< MISC_VDDAMIS) ) >> MISC_VDDAMIS ) ;

	
} // End of Function.

gMISC_Status_t	ReadMOSCPUPMIS () {
	
	// Read MOSC Power Up Masked Interrupt Status. 
	/**
	 ** @brief this function will return back MOSC Power Up Masked Interrupt Status.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			When read, a 0 indicates that sufficient time has not passed for the MOSC PLL to lock.
	 ** 	0x1			When read, a 1 indicates that an unmasked interrupt was signaled because sufficient time has passed for the MOSC PLL to lock.
	 ** @param 		void
	 ** @return   	gMISC_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(MISC_ADDRESS) & (1<< MISC_MOSCPUPMIS) ) >> MISC_MOSCPUPMIS ) ;

	
} // End of Function.

gMISC_Status_t	ReadUSBPLLLMIS () {
	
	// Read USB PLL Lock Masked Interrupt Status. 
	/**
	 ** @brief this function will return back USB PLL Lock Masked Interrupt Status.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			When read, a 0 indicates that sufficient time has not passed for the USB PLL to lock.
	 ** 	0x1			When read, a 1 indicates that an unmasked interrupt was signaled because sufficient time has passed for the USB PLL to lock.
	 ** @param 		void
	 ** @return   	gMISC_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(MISC_ADDRESS) & (1<< MISC_USBPLLLMIS) ) >> MISC_USBPLLLMIS ) ;

	
} // End of Function.

gMISC_Status_t	ReadPLLLMIS () {
	
	// Read PLL Lock Masked Interrupt Status. 
	/**
	 ** @brief this function will return back PLL Lock Masked Interrupt Status.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			When read, a 0 indicates that sufficient time has not passed for the PLL to lock.
	 ** 	0x1			When read, a 1 indicates that an unmasked interrupt was signaled because sufficient time has passed for the PLL to lock.
	 ** @param 		void
	 ** @return   	gMISC_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(MISC_ADDRESS) & (1<< MISC_PLLLMIS) ) >> MISC_PLLLMIS ) ;

	
} // End of Function.

gMISC_Status_t	ReadMOFMIS () {
	
	// Read Main Oscillator Failure Masked Interrupt Status. 
	/**
	 ** @brief this function will return back Main Oscillator Failure Masked Interrupt Status.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			When read, a 0 indicates that the main oscillator has not failed. 
	 ** 	0x1			When read, a 1 indicates that an unmasked interrupt was signaled because the main oscillator failed.
	 ** @param 		void
	 ** @return   	gMISC_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(MISC_ADDRESS) & (1<< MISC_MOFMIS) ) >> MISC_MOFMIS ) ;

	
} // End of Function.

gMISC_Status_t	ReadBOR1MIS () {
	
	// Read . 
	/**
	 ** @brief this function will return back .
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			When read, a 0 indicates that a BOR1 condition has not occurred.
	 ** 	0x1			When read, a 1 indicates that an unmasked interrupt was signaled because of a BOR1 condition.
	 ** @param 		void
	 ** @return   	gMISC_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(MISC_ADDRESS) & (1<< MISC_BOR1MIS) ) >> MISC_BOR1MIS ) ;

	
} // End of Function.


gMISC_StdErr_t	ClearBOR0MIS (gMISC_Input_t input) {
	
	// Clear  VDD under BOR0 Masked Interrupt Status. 
	/**
	 ** @brief this function will Clear VDD under BOR0 Masked Interrupt Status.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			A write of 0 has no effect on the state of this bit.
	 ** 	0x1			Writing a 1 to this bit clears it and also the BOR0RIS bit in the RIS register.
	 ** @param 		gMISC_Input_t
	 ** @return   	gMISC_StdErr_t
	 */
	
	gMISC_StdErr_t ret = NO_ERRORS ;
	
	switch (input ) {
				case NO_EFFECT  :
					break;
				case CLEAR  :
					HW_32REG(MISC_ADDRESS) |= (input << MISC_BOR0MIS) &((1 << MISC_BOR0MIS)  ); // Set as define
					break;
				default :
					ret = INVALID_INPUT ;
					break;
	} // End of switch statement
		
	
	return ret ;

	
} // End of Function.

gMISC_StdErr_t	ClearVDDAMIS (gMISC_Input_t input) {
	
	// Clear  VDDA Power OK Masked Interrupt Status. 
	/**
	 ** @brief this function will Clear VDDA Power OK Masked Interrupt Status.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			A write of 0 has no effect on the state of this bit.
	 ** 	0x1			Writing a 1 to this bit clears it and also the VDDARIS bit in the RIS register
	 ** @param 		gMISC_Input_t
	 ** @return   	gMISC_StdErr_t
	 */
	
	gMISC_StdErr_t ret = NO_ERRORS ;
	
	switch (input ) {
				case NO_EFFECT  :
					break;
				case CLEAR  :
					HW_32REG(MISC_ADDRESS) |= (input << MISC_VDDAMIS) &((1 << MISC_VDDAMIS)  ); // Set as define
					break;
				default :
					ret = INVALID_INPUT ;
					break;
	} // End of switch statement
		
	
	return ret ;

	
} // End of Function.

gMISC_StdErr_t	ClearMOSCPUPMIS (gMISC_Input_t input) {
	
	// Clear  MOSC Power Up Masked Interrupt Status. 
	/**
	 ** @brief this function will Clear MOSC Power Up Masked Interrupt Status.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			A write of 0 has no effect on the state of this bit.
	 ** 	0x1			Writing a 1 to this bit clears it and also the MOSCPUPRIS bit in the RIS register.
	 ** @param 		gMISC_Input_t
	 ** @return   	gMISC_StdErr_t
	 */
	
	gMISC_StdErr_t ret = NO_ERRORS ;
	
	switch (input ) {
				case NO_EFFECT  :
					break;
				case CLEAR  :
					HW_32REG(MISC_ADDRESS) |= (input << MISC_MOSCPUPMIS) &((1 << MISC_MOSCPUPMIS)  ); // Set as define
					break;
				default :
					ret = INVALID_INPUT ;
					break;
	} // End of switch statement
		
	
	return ret ;

	
} // End of Function.

gMISC_StdErr_t	ClearUSBPLLLMIS (gMISC_Input_t input) {
	
	// Clear  USB PLL Lock Masked Interrupt Status. 
	/**
	 ** @brief this function will Clear USB PLL Lock Masked Interrupt Status.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			A write of 0 has no effect on the state of this bit.
	 ** 	0x1			Writing a 1 to this bit clears it and also the USBPLLLRIS bit in the RIS register.
	 ** @param 		gMISC_Input_t
	 ** @return   	gMISC_StdErr_t
	 */
	
	gMISC_StdErr_t ret = NO_ERRORS ;
	
	switch (input ) {
				case NO_EFFECT  :
					break;
				case CLEAR  :
					HW_32REG(MISC_ADDRESS) |= (input << MISC_USBPLLLMIS) &((1 << MISC_USBPLLLMIS)  ); // Set as define
					break;
				default :
					ret = INVALID_INPUT ;
					break;
	} // End of switch statement
		
	
	return ret ;

	
} // End of Function.

gMISC_StdErr_t	ClearPLLLMIS (gMISC_Input_t input) {
	
	// Clear  PLL Lock Masked Interrupt Status. 
	/**
	 ** @brief this function will Clear PLL Lock Masked Interrupt Status.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			A write of 0 has no effect on the state of this bit.
	 ** 	0x1			Writing a 1 to this bit clears it and also the PLLLRIS bit in the RIS register.
	 ** @param 		gMISC_Input_t
	 ** @return   	gMISC_StdErr_t
	 */
	
	gMISC_StdErr_t ret = NO_ERRORS ;
	
	switch (input ) {
				case NO_EFFECT  :
					break;
				case CLEAR  :
					HW_32REG(MISC_ADDRESS) |= (input << MISC_PLLLMIS) &((1 << MISC_PLLLMIS)  ); // Set as define
					break;
				default :
					ret = INVALID_INPUT ;
					break;
	} // End of switch statement
		
	
	return ret ;

	
} // End of Function.

gMISC_StdErr_t	ClearMOFMIS (gMISC_Input_t input) {
	
	// Clear Main Oscillator Failure Masked Interrupt Status . 
	/**
	 ** @brief this function will Clear Main Oscillator Failure Masked Interrupt Status.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			A write of 0 has no effect on the state of this bit.
	 ** 	0x1			Writing a 1 to this bit clears it and also the MOFRIS bit in the RIS register.
	 ** @param 		gMISC_Input_t
	 ** @return   	gMISC_StdErr_t
	 */
	
	gMISC_StdErr_t ret = NO_ERRORS ;
	
	switch (input ) {
				case NO_EFFECT  :
					break;
				case CLEAR  :
					HW_32REG(MISC_ADDRESS) |= (input << MISC_MOFMIS) &((1 << MISC_MOFMIS)  ); // Set as define
					break;
				default :
					ret = INVALID_INPUT ;
					break;
	} // End of switch statement
		
	
	return ret ;

	
} // End of Function.

gMISC_StdErr_t	ClearBOR1MIS (gMISC_Input_t input) {
	
	// Clear  VDD under BOR1 Masked Interrupt Status. 
	/**
	 ** @brief this function will Clear VDD under BOR1 Masked Interrupt Status.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			A write of 0 has no effect on the state of this bit.
	 ** 	0x1			Writing a 1 to this bit clears it and also the BOR1RIS bit in the RIS register.
	 ** @param 		gMISC_Input_t
	 ** @return   	gMISC_StdErr_t
	 */
	
	gMISC_StdErr_t ret = NO_ERRORS ;
	
	switch (input ) {
				case NO_EFFECT  :
					break;
				case CLEAR  :
					HW_32REG(MISC_ADDRESS) |= (input << MISC_BOR1MIS) &((1 << MISC_BOR1MIS)  ); // Set as define
					break;
				default :
					ret = INVALID_INPUT ;
					break;
	} // End of switch statement
		
	
	return ret ;

	
} // End of Function.








