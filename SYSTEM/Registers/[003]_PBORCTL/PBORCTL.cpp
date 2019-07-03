/*
 * PBORCTL.cpp
 *
 *  Created on: 2019/03/09
 *      Author: Ehab Bellkasy
 */
 
#include "hw_types.h"
#include "PBORCTL.hpp"



gPBORCTL_EventAction_t 		ReadBOR0EventAction () {
	
	// Read VDD under BOR0 Event Action 
	/**
	 ** @brief this function will return back  VDD under BOR0 Event Action.
	 ** 	The VDD BOR0 trip value is 3.02V +/- 90mv.
	 ** 	Value		Description
	 ** 	0x0			A BOR0 event causes an interrupt to be generated in the interrupt controller.
	 ** 	0x1			A BOR0 event causes a reset of the microcontroller.	
	 ** @param 		void
	 ** @return   	gPBORCTL_EventAction_t
	 */
	
	return (u16_t) ( ( HW_32REG(PBORCTL_ADDRESS) & (1<< PBORCTL_BOR0) ) >> PBORCTL_BOR0 ) ;
	
} // End of Function.
gPBORCTL_EventAction_t 		ReadBOR1EventAction () {
		
	// Read VDD under BOR1 Event Action 
	/**
	 ** @brief this function will return back  VDD under BOR0 Event Action.
	 ** 	The VDD BOR1 trip value is 2.88V +/- 90mv.
	 ** 	Value		Description
	 ** 	0x0			A BOR0 event causes an interrupt to be generated in the interrupt controller.
	 ** 	0x1			A BOR0 event causes a reset of the microcontroller.	
	 ** @param 		void
	 ** @return   	gPBORCTL_EventAction_t
	 */
	
	return (u16_t) ( ( HW_32REG(PBORCTL_ADDRESS) & (1<< PBORCTL_BOR1) ) >> PBORCTL_BOR1 ) ;
	
} // End of Function.
gPBORCTL_StdErr_t 			SetBOR0EventAction (gPBORCTL_EventAction_t input) {
	
	// Set Event Action for VDD under BOR0  
	/**
	 ** @brief this function will Set Event Action for VDD under BOR0.
	 ** 	The VDD BOR0 trip value is 3.02V +/- 90mv.
	 ** 	Value		Description
	 ** 	0x0			A BOR0 event causes an interrupt to be generated in the interrupt controller.
	 ** 	0x1			A BOR0 event causes a reset of the microcontroller.	
	 ** @param 		gPBORCTL_EventAction_t
	 ** @return   	gPBORCTL_StdErr_t
	 */
	
	gPBORCTL_StdErr_t ret = NO_ERRORS ;
	
	switch (input ) {
				case INTERRUPT  :
				case RESET  :
					HW_32REG(PBORCTL_ADDRESS) &= ~((1 << PBORCTL_BOR0)   ); // clear all selected bits
					HW_32REG(PBORCTL_ADDRESS) |= (input << PBORCTL_BOR0) &((1 << PBORCTL_BOR0)  ); // Set as define
					break;
				default :
					ret = INVALID_INPUT ;
					break;
	} // End of switch statement
		
	
	return ret ;
	
} // End of Function.
gPBORCTL_StdErr_t 			SetBOR1EventAction (gPBORCTL_EventAction_t input) {
	
	// Set Event Action for VDD under BOR1  
	/**
	 ** @brief this function will Set Event Action for VDD under BOR1.
	 ** 	The VDD BOR0 trip value is 2.88V +/- 90mv.
	 ** 	Value		Description
	 ** 	0x0			A BOR0 event causes an interrupt to be generated in the interrupt controller.
	 ** 	0x1			A BOR0 event causes a reset of the microcontroller.	
	 ** @param 		gPBORCTL_EventAction_t
	 ** @return   	gPBORCTL_StdErr_t
	 */
	
	gPBORCTL_StdErr_t ret = NO_ERRORS ;
	
	switch (input ) {
				case INTERRUPT  :
				case RESET  :
					HW_32REG(PBORCTL_ADDRESS) &= ~((1 << PBORCTL_BOR1)   ); // clear all selected bits
					HW_32REG(PBORCTL_ADDRESS) |= (input << PBORCTL_BOR1) &((1 << PBORCTL_BOR1)  ); // Set as define
					break;
				default :
					ret = INVALID_INPUT ;
					break;
	} // End of switch statement
		
	
	return ret ;
	
} // End of Function.
