#ifndef _CNCPBaseMsg_hh
#define _CNCPBaseMsg_hh 1
#include <sys/types.h>
//#include <netinet/in.h>
#include <QtEndian>
//////////////////////////////////////////////////////////////////////////////
//
// HEADER NAME:  cncpbase.hh
//
// DESCRIPTION:
//   This file contains the definition of baseclass of CNCP Messages.
//
// REVISION HISTORY:
// DATE         NAME                 REASON
// ---------------------------------------------------------------------------
// 07/28/01     Jinzhong Zhang       Initial definitions 
// 03/11/01     Jinzhong Zhang       revision 1.0 
//
//////////////////////////////////////////////////////////////////////////////
//
//
// Include files / Forward Class Declarations
//
#define UNKNOWN_MESSAGE_TYPE		0x0000 // message type unknown
#define UNKNOWN_TRANSACTION_ID		0x0000 // transaction ID unknown


#define htons(a) qFromLittleEndian(a)
#define ntohs(a) qFromBigEndian(a)
#define htonl(a) qFromLittleEndian(a)
#define ntohl(a) qFromLittleEndian(a)

typedef unsigned int	u32;
typedef unsigned short	u16;
typedef unsigned char	u8;

class CNCPBaseMsg
{
protected:
  unsigned char  magicA;		// magic cookie A (defines message source)
  unsigned char  magicB;		// magic cookie B (defines message destination)
  unsigned short msgLen;		// total length of this message include magic #s and this field
  unsigned short msgType;		// message type
  unsigned short transId;		// transaction ID 

public:
  CNCPBaseMsg() {
    magicA = 0;		// default
    magicB = 0;		// default
    msgType = UNKNOWN_MESSAGE_TYPE;
    transId = UNKNOWN_TRANSACTION_ID;
    msgLen = sizeof(*this); 	// every message derived from this should overide this value
                                // by doing a sizeof(*this) in the constructor, here just a place holder
  }

  void network() {
    //magicA = htonl(magicA);
    //magicB = htonl(magicB);
    msgType = htons(msgType);
    msgLen = htons(msgLen);
    transId = htons(transId);
  }

  void unnetwork() {
    //magicA = ntohl(magicA);
    //magicB = ntohl(magicB);
    msgType = ntohs(msgType);
    msgLen = ntohs(msgLen);
    transId = ntohs(transId);
  }

  void setMsgType(unsigned short t, bool doHton = false) {
    if(doHton)
      msgType = htons(t);
    else
      msgType = t;
  }

  unsigned int getMsgType(bool doNtoh = false) {
    if(doNtoh)
      return ntohs(msgType);
    else
      return(msgType);
  }

  void setMsgLen(unsigned short t, bool doHton = false) {
    if(doHton)
      msgLen = htons(t);
    else
      msgLen = t;
  }

  unsigned short getMsgLen(bool doNtoh = false) {
    if(doNtoh)
      return ntohs(msgLen);
    else
      return (msgLen);
  }

  void setSrcId(unsigned int t, bool doHton = false) {
    if(doHton)
      magicA = (unsigned char)t;
    else
      magicA = (unsigned char)t;
  }

  unsigned int getSrcId(bool doNtoh = false) {
    if(doNtoh)
      return (magicA);
    else
      return (magicA);
  }

  void setDstId(unsigned int t, bool doHton = false) {
     if(doHton)
      magicB = (unsigned char)t;
    else
      magicB = (unsigned char)t;
  }

  unsigned int getDstId(bool doNtoh = false) {
    if(doNtoh)
      return (magicB);
    else
      return (magicB);
  }
  
  void setTransId(unsigned short id, bool doHton = false) {
    if(doHton)
      transId = htons(id);
    else
      transId = id;
  }

  unsigned short getTransId(bool doNtoh = false) {
    if(doNtoh)
      return ntohs(transId);
    else
      return (transId);
  }

  bool validMsg(unsigned char src, unsigned char dst) {
    return ((magicA == src) && (magicB == dst));
  }
};

#endif
