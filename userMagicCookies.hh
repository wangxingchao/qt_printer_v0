#ifndef __userMagicCookies_hh__
#define __userMagicCookies_hh__

//////////////////////////////////////////////////////////////////////////////
//
// HEADER NAME:  userMagicCookies.hh
//
// DESCRIPTION:
//   This file contains the application magic cookie literals which identify
//   a message as a member of a particular message family.
//
// REVISION HISTORY:
// DATE         NAME                 REASON
// ---------------------------------------------------------------------------
// 07/28/01     Jinzhong Zhang       Initial definitions 
// 03/11/01     Jinzhong Zhang       revision 1.0 
//
//////////////////////////////////////////////////////////////////////////////

//
// Include files / Forward Class Declarations
//

//
// #defines / typedefs / constants
//

//#define CNCP_A  0x00		// Core Network Control Protocol 
//#define CNCP_B  0x01		// A_B stand for two different comm points involoved
// They are used as default if no overide in derived messages.
// In each message, magic number A is the source and magic number B is dest.


// Entities definitions
#define PMJ_GUI       0x10    // SRC Entity
#define PMJ_DAMEON    0x20    // DST ENtity



#endif
