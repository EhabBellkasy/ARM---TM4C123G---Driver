/*
 * DID0.cpp
 *
 *  Created on: 2019/03/04
 *      Author: Ehab Bellkasy
 */
 
#include "hw_types.h"
#include "DID0.hpp"


gDID0Version_t 			ReadDID0Version () {
	/// Read DID0 Version 
	/**
	 ** @brief this function will return back version number 
	 ** 	The value of the VER field is encoded as follows
	 ** 	Value		Description
	 ** 	0x1			Second version of the DID0 register format.
	 ** @param 		void
	 ** @return   	gDID0Version_t
	 */
	 
	 return (u16_t) READ_32BIT_FIELD(DID0_ADDRESS , DID0_VER2 , DID0_VER0) ;
	 
} // End of Function.

gDeviceClass_t 			ReadDeviceClass () {
	
	/// Read Device Class 
	/**
	 ** @brief this function will return internal design microcontrollers 
	 ** 	The value of the CLASS field is encoded as follows
	 ** 	Value		Description
	 ** 	0x05		Tiva™TM4C123x microcontrollers.
	 ** @param 		void
	 ** @return   	gDeviceClass_t
	 */
	 
	 return (u16_t) READ_32BIT_FIELD(DID0_ADDRESS , DID0_CLASS7 , DID0_CLASS0) ;
	 
} // End of Function.

gMajorDieRevision_t 	ReadMajorDieRevision () {
	
	/// Read Major Die Revision 
	/**
	 ** @brief this function will return major revision number of the microcontroller 
	 ** 	The value of this  field is encoded as follows
	 ** 	Value		Description
	 ** 	0x0			Revision A (initial device).
	 ** 	0x1			Revision B (first base layer revision).
	 ** 	0x2			Revision C (second base layer revision).
	 ** 	...			...
	 ** 	...			...
	 ** 	...			...
	 ** 	and so on.
	 ** @param 		void
	 ** @return   	gMajorDieRevision_t
	 */
	 
	 return (u16_t) READ_32BIT_FIELD(DID0_ADDRESS , DID0_MAJOR7 , DID0_MAJOR0) ;
	
} // End of Function.

gMinorDieRevision_t 	ReadMinorDieRevision () {
	
	/// Read Minor Die Revision 
	/**
	 ** @brief this function will return minor revision number of the microcontroller 
	 ** 	The value of this  field is encoded as follows
	 ** 	Value		Description
	 ** 	0x0			Initial device, or a major revision update..
	 ** 	0x1			First metal layer change.
	 ** 	0x2			Second metal layer change.
	 ** 	...			...
	 ** 	...			...
	 ** 	...			...
	 ** 	and so on.
	 ** @param 		void
	 ** @return   	gMinorDieRevision_t
	 */
	 
	 return (u16_t) READ_32BIT_FIELD(DID0_ADDRESS , DID0_MINOR7 , DID0_MINOR0) ;
	
	
} // End of Function.
 