/*
 * RESC.cpp
 *
 *  Created on: 2019/03/15
 *      Author: Ehab Bellkasy
 */
 
#include "hw_types.h"
#include "RESC.hpp"



gRESC_Output_t	RESCstatus (gRESC_Choice_t choice , gRESC_Input_t input) {
	
	// Read / Write Reset Cause status. 
	/**
	 ** @brief this function will Read / Write Reset Cause status .
	 ** 	choice MOSC Failure Reset: .
	 ** 	Value		Description
	 ** 	0x0			When read, this bit indicates that a MOSC failure has not generated a reset since the previous power-on reset.
	 **					Writing a 0 to this bit clears it.
	 ** 	0x1			When read, this bit indicates that the MOSC circuit was enabled for clock validation and failed while the MOSCIM bit in the MOSCCTL register is clear, generating a reset event.
	 **
	 **
	 ** 	choice Watchdog Timer 1 Reset: .
	 ** 	Value		Description
	 ** 	0x0			When read, this bit indicates that Watchdog Timer 1 has not generated a reset since the previous power-on reset.
	 **					Writing a 0 to this bit clears it.
	 ** 	0x1			When read, this bit indicates that Watchdog Timer 1 timed out and generated a reset.
	 **
	 **
	 ** 	choice Software Reset: .
	 ** 	Value		Description
	 ** 	0x0			When read, this bit indicates that a software reset has not generated a reset since the previous power-on reset.
	 **					Writing a 0 to this bit clears it.
	 ** 	0x1			When read, this bit indicates that a software reset has caused a reset event.
	 **
	 **
	 ** 	choice Watchdog Timer 0 Reset: .
	 ** 	Value		Description
	 ** 	0x0			When read, this bit indicates that Watchdog Timer 0 has not generated a reset since the previous power-on reset.
	 **					Writing a 0 to this bit clears it.
	 ** 	0x1			When read, this bit indicates that Watchdog Timer 0 timed out and generated a reset.
	 **
	 **
	 ** 	choice Brown-Out Reset: .
	 ** 	Value		Description
	 ** 	0x0			When read, this bit indicates that a brown-out (BOR0 or BOR1) reset has not generated a reset since the previous power-on reset.
	 **					Writing a 0 to this bit clears it.
	 ** 	0x1			When read, this bit indicates that a brown-out (BOR0 or BOR1) reset has caused a reset event.
	 **
	 **
	 ** 	choice Power-On Reset: .
	 ** 	Value		Description
	 ** 	0x0			When read, this bit indicates that a power-on reset has not generated a reset.
	 **					Writing a 0 to this bit clears it.
	 ** 	0x1			When read, this bit indicates that a power-on reset has caused a reset event.
	 **
	 **
	 ** 	choice External Reset: .
	 ** 	Value		Description
	 ** 	0x0			When read, this bit indicates that an external reset (RST assertion) has not caused a reset event since the previous power-on reset.
	 **					Writing a 0 to this bit clears it.
	 ** 	0x1			When read, this bit indicates that an external reset (RST assertion) has caused a reset event.
	 **
	 **
	 ** @param 		gRESC_Choice_t
     ** @param 		gRESC_Input_t
	 ** @return   	gRESC_Output_t
	 */
	
	gRESC_Output_t ret = NO_ERRORS ;
	
	switch (choice ) { // test if user enter right input
				case MOSC_FAILURE_RESET  :
				case WATCHDOG_TIMER_1_RESET  :
				case SOFTWARE_RESET  :
				case WATCHDOG_TIMER_0_RESET  :
				case BROWN_OUT_RESET  :
				case POWER_ON_RESET  :
				case EXTERNAL_RESET  :
					break;
				default :
					ret = INVALID_INPUT ;
					break;	
	} // End of switch statement
	if (ret == NO_ERRORS){
			switch (input ) {
						case READ  :
							if ( HW_32REG(RESC_ADDRESS) & (1<< choice)){
								ret = OCCURRED ;
							} else {
								ret = NOT_OCCURRED ;
							} // End of switch statement
							break;
						case SET:
							HW_32REG(RESC_ADDRESS) |= (1 << choice) ; // Set as define
							break;
						case CLEAR  :
							HW_32REG(RESC_ADDRESS) &= ~(1 << choice); // Clear as define
							break;
						default :
							ret = INVALID_INPUT ;
							break;
			} // End of switch statement
	} else {
		// Do Nothing Because Invalid input
	} // End of if statement
	
	return ret ;

	
} // End of Function.






