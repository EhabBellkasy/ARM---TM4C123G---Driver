/*
 * IMC.cpp
 *
 *  Created on: 2019/03/04
 *      Author: Ehab Bellkasy
 */
 
#include "hw_types.h"
#include "IMC.hpp"



gIMC_Status_t	ReadBOR0IM () {
	
	// Read VDD under BOR0 Interrupt Mask. 
	/**
	 ** @brief this function will return back VDD under BOR0 Interrupt Mask.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			The BOR0RIS interrupt is suppressed and not sent to the interrupt controller.
	 ** 	0x1			An interrupt is sent to the interrupt controller when the BOR0RIS bit in the RIS register is set.
	 ** @param 		void
	 ** @return   	gIMC_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(IMC_ADDRESS) & (1<< IMC_BOR0IM) ) >> IMC_BOR0IM ) ;

	
} // End of Function.

gIMC_Status_t		 () {
	
	// Read VDDA Power OK Interrupt Mask. 
	/**
	 ** @brief this function will return back VDDA Power OK Interrupt Mask.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			The VDDARIS interrupt is suppressed and not sent to the interrupt controller.
	 ** 	0x1			An interrupt is sent to the interrupt controller when the VDDARIS bit in the RIS register is set.
	 ** @param 		void
	 ** @return   	gIMC_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(IMC_ADDRESS) & (1<< IMC_VDDAIM) ) >> IMC_VDDAIM ) ;

	
} // End of Function.

gIMC_Status_t	ReadMOSCPUPIM () {
	
	// Read MOSC Power Up Interrupt Mask. 
	/**
	 ** @brief this function will return back MOSC Power Up Interrupt Mask.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			The MOSCPUPRIS interrupt is suppressed and not sent to the interrupt controller.
	 ** 	0x1			An interrupt is sent to the interrupt controller when the MOSCPUPRIS bit in the RIS register is set.
	 ** @param 		void
	 ** @return   	gIMC_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(IMC_ADDRESS) & (1<< IMC_MOSCPUPIM) ) >> IMC_MOSCPUPIM ) ;

	
} // End of Function.

gIMC_Status_t	ReadUSBPLLLIM () {
	
	// Read USB PLL Lock Interrupt Mask. 
	/**
	 ** @brief this function will return back USB PLL Lock Interrupt Mask.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			The USBPLLLRIS interrupt is suppressed and not sent to the interrupt controller.
	 ** 	0x1			An interrupt is sent to the interrupt controller when the USBPLLLRIS bit in the RIS register is set.
	 ** @param 		void
	 ** @return   	gIMC_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(IMC_ADDRESS) & (1<< IMC_USBPLLLIM) ) >> IMC_USBPLLLIM ) ;

	
} // End of Function.

gIMC_Status_t	ReadPLLLIM () {
	
	// Read PLL Lock Interrupt Mask. 
	/**
	 ** @brief this function will return back PLL Lock Interrupt Mask.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			The PLLLRIS interrupt is suppressed and not sent to the interrupt controller.
	 ** 	0x1			An interrupt is sent to the interrupt controller when the PLLLRIS bit in the RIS register is set.
	 ** @param 		void
	 ** @return   	gIMC_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(IMC_ADDRESS) & (1<< IMC_PLLLIM) ) >> IMC_PLLLIM ) ;

	
} // End of Function.

gIMC_Status_t	ReadMOFIM () {
	
	// Read Main Oscillator Failure Interrupt Mask. 
	/**
	 ** @brief this function will return backMain Oscillator Failure Interrupt Mask .
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			The MOFRIS interrupt is suppressed and not sent to the interrupt controller.
	 ** 	0x1			An interrupt is sent to the interrupt controller when the MOFRIS bit in the RIS register is set.
	 ** @param 		void
	 ** @return   	gIMC_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(IMC_ADDRESS) & (1<< IMC_MOFIM) ) >> IMC_MOFIM ) ;

	
} // End of Function.

gIMC_Status_t	ReadBOR1IM () {
	
	// Read VDD under BOR1 Interrupt Mask. 
	/**
	 ** @brief this function will return back VDD under BOR1 Interrupt Mask.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			The BOR1RIS interrupt is suppressed and not sent to the interrupt controller.
	 ** 	0x1			An interrupt is sent to the interrupt controller when the BOR1RIS bit in the RIS register is set.
	 ** @param 		void
	 ** @return   	gIMC_Status_t
	 */
	
	return (u16_t) ( ( HW_32REG(IMC_ADDRESS) & (1<< IMC_BOR1IM) ) >> IMC_BOR1IM ) ;

	
} // End of Function.


gIMC_StdErr_t	SetBOR0IM (gIMC_Status_t input) {
	
	// Set VDD under BOR0 Interrupt Mask. 
	/**
	 ** @brief this function will Set VDD under BOR0 Interrupt Mask.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			The BOR0RIS interrupt is suppressed and not sent to the interrupt controller.
	 ** 	0x1			An interrupt is sent to the interrupt controller when the BOR0RIS bit in the RIS register is set.
	 ** @param 		gIMC_Status_t
	 ** @return   	gIMC_StdErr_t
	 */
	
	gIMC_StdErr_t ret = NO_ERRORS ;
	
	switch (input ) {
				case DISABLE  :
				case ENABLE  :
					HW_32REG(IMC_ADDRESS) &= ~((1 << IMC_BOR0IM)   ); // clear all selected bits
					HW_32REG(IMC_ADDRESS) |= (input << IMC_BOR0IM) &((1 << IMC_BOR0IM)  ); // Set as define
					break;
				default :
					ret = INVALID_INPUT ;
					break;
	} // End of switch statement
		
	
	return ret ;
	
	
} // End of Function.

gIMC_StdErr_t	SetVDDAIM (gIMC_Status_t input) {
	
	// Set VDDA Power OK Interrupt Mask. 
	/**
	 ** @brief this function will Set VDDA Power OK Interrupt Mask.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			The VDDARIS interrupt is suppressed and not sent to the interrupt controller.
	 ** 	0x1			An interrupt is sent to the interrupt controller when the VDDARIS bit in the RIS register is set.
	 ** @param 		gIMC_Status_t
	 ** @return   	gIMC_StdErr_t
	 */
	
	gIMC_StdErr_t ret = NO_ERRORS ;
	
	switch (input ) {
				case DISABLE  :
				case ENABLE  :
					HW_32REG(IMC_ADDRESS) &= ~((1 << IMC_VDDAIM)   ); // clear all selected bits
					HW_32REG(IMC_ADDRESS) |= (input << IMC_VDDAIM) &((1 << IMC_VDDAIM)  ); // Set as define
					break;
				default :
					ret = INVALID_INPUT ;
					break;
	} // End of switch statement
		
	
	return ret ;

	
} // End of Function.

gIMC_StdErr_t	SetMOSCPUPIM (gIMC_Status_t input) {
	
	// Set MOSC Power Up Interrupt Mask. 
	/**
	 ** @brief this function will Set MOSC Power Up Interrupt Mask.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			The MOSCPUPRIS interrupt is suppressed and not sent to the interrupt controller.
	 ** 	0x1			An interrupt is sent to the interrupt controller when the MOSCPUPRIS bit in the RIS register is set.
	 ** @param 		gIMC_Status_t
	 ** @return   	gIMC_StdErr_t
	 */
	
	gIMC_StdErr_t ret = NO_ERRORS ;
	
	switch (input ) {
				case DISABLE  :
				case ENABLE  :
					HW_32REG(IMC_ADDRESS) &= ~((1 << IMC_MOSCPUPIM)   ); // clear all selected bits
					HW_32REG(IMC_ADDRESS) |= (input << IMC_MOSCPUPIM) &((1 << IMC_MOSCPUPIM)  ); // Set as define
					break;
				default :
					ret = INVALID_INPUT ;
					break;
	} // End of switch statement
		
	
	return ret ;

	
} // End of Function.

gIMC_StdErr_t	SetUSBPLLLIM (gIMC_Status_t input) {
	
	// Set USB PLL Lock Interrupt Mask. 
	/**
	 ** @brief this function will Set USB PLL Lock Interrupt Mask.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			The USBPLLLRIS interrupt is suppressed and not sent to the interrupt controller.
	 ** 	0x1			An interrupt is sent to the interrupt controller when the USBPLLLRIS bit in the RIS register is set.
	 ** @param 		gIMC_Status_t
	 ** @return   	gIMC_StdErr_t
	 */
	
	gIMC_StdErr_t ret = NO_ERRORS ;
	
	switch (input ) {
				case DISABLE  :
				case ENABLE  :
					HW_32REG(IMC_ADDRESS) &= ~((1 << IMC_USBPLLLIM)   ); // clear all selected bits
					HW_32REG(IMC_ADDRESS) |= (input << IMC_USBPLLLIM) &((1 << IMC_USBPLLLIM)  ); // Set as define
					break;
				default :
					ret = INVALID_INPUT ;
					break;
	} // End of switch statement
		
	
	return ret ;

	
} // End of Function.

gIMC_StdErr_t	SetPLLLIM (gIMC_Status_t input) {
	
	// Set PLL Lock Interrupt Mask. 
	/**
	 ** @brief this function will Set PLL Lock Interrupt Mask.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			The PLLLRIS interrupt is suppressed and not sent to the interrupt controller.
	 ** 	0x1			An interrupt is sent to the interrupt controller when the PLLLRIS bit in the RIS register is set.
	 ** @param 		gIMC_Status_t
	 ** @return   	gIMC_StdErr_t
	 */
	
	gIMC_StdErr_t ret = NO_ERRORS ;
	
	switch (input ) {
				case DISABLE  :
				case ENABLE  :
					HW_32REG(IMC_ADDRESS) &= ~((1 << IMC_PLLLIM)   ); // clear all selected bits
					HW_32REG(IMC_ADDRESS) |= (input << IMC_PLLLIM) &((1 << IMC_PLLLIM)  ); // Set as define
					break;
				default :
					ret = INVALID_INPUT ;
					break;
	} // End of switch statement
		
	
	return ret ;

	
} // End of Function.

gIMC_StdErr_t	SetMOFIM (gIMC_Status_t input) {
	
	// Set Main Oscillator Failure Interrupt Mask. 
	/**
	 ** @brief this function will Set Main Oscillator Failure Interrupt Mask.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			The MOFRIS interrupt is suppressed and not sent to the interrupt controller.
	 ** 	0x1			An interrupt is sent to the interrupt controller when the MOFRIS bit in the RIS register is set.
	 ** @param 		gIMC_Status_t
	 ** @return   	gIMC_StdErr_t
	 */
	
	gIMC_StdErr_t ret = NO_ERRORS ;
	
	switch (input ) {
				case DISABLE  :
				case ENABLE  :
					HW_32REG(IMC_ADDRESS) &= ~((1 << IMC_MOFIM)   ); // clear all selected bits
					HW_32REG(IMC_ADDRESS) |= (input << IMC_MOFIM) &((1 << IMC_MOFIM)  ); // Set as define
					break;
				default :
					ret = INVALID_INPUT ;
					break;
	} // End of switch statement
		
	
	return ret ;

	
} // End of Function.

gIMC_StdErr_t	SetBOR1IM (gIMC_Status_t input) {
	
	// Set VDD under BOR1 Interrupt Mask. 
	/**
	 ** @brief this function will Set VDD under BOR1 Interrupt Mask.
	 ** 	Note : .
	 ** 	Value		Description
	 ** 	0x0			The BOR1RIS interrupt is suppressed and not sent to the interrupt controller.
	 ** 	0x1			An interrupt is sent to the interrupt controller when the BOR1RIS bit in the RIS register is set.
	 ** @param 		gIMC_Status_t
	 ** @return   	gIMC_StdErr_t
	 */
	
	gIMC_StdErr_t ret = NO_ERRORS ;
	
	switch (input ) {
				case DISABLE  :
				case ENABLE  :
					HW_32REG(IMC_ADDRESS) &= ~((1 << IMC_BOR1IM)   ); // clear all selected bits
					HW_32REG(IMC_ADDRESS) |= (input << IMC_BOR1IM) &((1 << IMC_BOR1IM)  ); // Set as define
					break;
				default :
					ret = INVALID_INPUT ;
					break;
	} // End of switch statement
		
	
	return ret ;

	
} // End of Function.










