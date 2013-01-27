#ifndef __PMJ__OPMESSAGE__HH__
#define __PMJ__OPMESSAGE__HH__

#include "cncpbase.hh"
#include "userMagicCookies.hh"
#include <string.h>

#define  MAX_MESSAGE_LEN 1024
#define  PMJ_MESSAGE_BASE      0x8000
#define  PMJ_INFO_TYPE_BASE    0x5000
#define  PMJ_IE_TYPE_BASE      0x10

#define PMJ_INITIAL_CONF_MESSAGE               PMJ_MESSAGE_BASE + 1   /*初始化配置消息*/
#define PMJ_DEVICE_ONOFF_MESSAGE	       PMJ_MESSAGE_BASE + 2   /*开关喷码机消息*/
#define PMJ_PRINT_MESSAGE                      PMJ_MESSAGE_BASE + 3   /*生产喷印消息*/
#define PMJ_INKCHANNEL_LOG_MESSAGE             PMJ_MESSAGE_BASE + 4   /*油墨管路日志消息*/
#define PMJ_USERLOG_MESSAGE                    PMJ_MESSAGE_BASE + 5   /*用户操作日志消息*/
#define PMJ_DEVICE_WARNNING_MESSAGE            PMJ_MESSAGE_BASE + 6   /*故障日志消息*/

#define PMJ_DEVICE_RUNSTATUS_GET_MESSAGE       PMJ_MESSAGE_BASE + 7   /*喷码机运行状态获取消息*/
#define PMJ_DEVICE_RUNSTATUS_RSP_MESSAGE       PMJ_MESSAGE_BASE + 8   /*喷码机运行状态响应消息*/
#define PMJ_GET_DEVICE_STATUS_MESSAGE          PMJ_MESSAGE_BASE + 9   /*获取设备运行状态消息*/
#define PMJ_INK_CHANNEL_PARA_MESSAGE           PMJ_MESSAGE_BASE + 10  /*油墨管路参数设置消息*/
#define PMJ_PRINT_PARA_MESSAGE                 PMJ_MESSAGE_BASE + 11  /*喷印参数设置消息*/
#define PMJ_CHARATER_STYLE_MESSAGE             PMJ_MESSAGE_BASE + 12  /*字形参数设置消息*/
#define PMJ_INFO_EDIT_SAVE_MESSAGE             PMJ_MESSAGE_BASE + 13  /*信息编辑数据保存消息*/
#define PMJ_INFO_CONTENT_GET_MESSAGE           PMJ_MESSAGE_BASE + 14  /*获取信息内容消息*/
#define PMJ_INFO_CONTENT_GET_RSP_MESSAGE       PMJ_MESSAGE_BASE + 15  /*信息内容获取响应消息*/
#define PMJ_INFO_NAME_LIST_GET_MESSAGE         PMJ_MESSAGE_BASE + 16  /*信息名称列表获取消息*/
#define PMJ_INFO_NAME_LIST_GET_RSP_MESSAGE     PMJ_MESSAGE_BASE + 17  /*信息名称列表获取响应消息*/
#define PMJ_DEVICE_MAINTAIN_MESSAGE            PMJ_MESSAGE_BASE + 18   /*日常维护消息*/
#define PMJ_DEVICE_IODevice_MESSAGE            PMJ_MESSAGE_BASE + 19  /*喷码机IO消息上报*/

#define PMJ_INKCHANNEL_LOG_RSP_MESSAGE         PMJ_MESSAGE_BASE + 20   /*油墨管路日志响应消息*/
#define PMJ_USERLOG_RSP_MESSAGE                PMJ_MESSAGE_BASE + 21   /*用户操作日志响应消息*/
#define PMJ_DEVICE_WARNNING_RSP_MESSAGE        PMJ_MESSAGE_BASE + 22   /*故障日志响应消息*/

/*信息类型定义*/

#define  PMJ_MESSAGE_TYPE_DATE                   PMJ_INFO_TYPE_BASE + 1      /*日期*/              
#define  PMJ_MESSAGE_TYPE_TIME                   PMJ_INFO_TYPE_BASE + 2      /*时间*/ 
#define  PMJ_MESSAGE_TYPE_COUNTER                PMJ_INFO_TYPE_BASE + 3      /*计数器*/
#define  PMJ_MESSAGE_TYPE_USERDATA               PMJ_INFO_TYPE_BASE + 4      /*用户数据*/
#define  PMJ_MESSAGE_TYPE_FUTUREDATE             PMJ_INFO_TYPE_BASE + 5      /*未来日期*/
#define  PMJ_MESSAGE_TYPE_STRIPCODE              PMJ_INFO_TYPE_BASE + 6      /*条形码*/
#define  PMJ_MESSAGE_TYPE_FLIGHTS                PMJ_INFO_TYPE_BASE + 7      /*班次代码*/
#define  PMJ_MESSAGE_TYPE_EXTERNALVARIABLE       PMJ_INFO_TYPE_BASE + 8      /*外部变量*/
#define  PMJ_MESSAGE_TYPE_PICTURE                PMJ_INFO_TYPE_BASE + 9      /*图形*/


/*IE 类型定义*/
#define  IE_TYPE_CONF_PASSWORD                   PMJ_IE_TYPE_BASE + 1        /*初始密码配置*/
#define  IE_TYPE_CONF_LAN                        PMJ_IE_TYPE_BASE + 2        /*网口配置*/
#define  IE_TYPE_CONF_SERIAL                     PMJ_IE_TYPE_BASE + 3        /*串口配置*/
#define  IE_TYPE_CONF_OTHER                      PMJ_IE_TYPE_BASE + 4        /*其他配置*/
#define  IE_TYPE_CONF_OPTION_FUNCTION            PMJ_IE_TYPE_BASE + 5        /*可选项配置*/
#define  IE_TYPE_CONF_NOZZLE                     PMJ_IE_TYPE_BASE + 6        /*喷头配置*/
#define  IE_TYPE_CONF_RECYCLE                    PMJ_IE_TYPE_BASE + 7        /*回收检测配置*/
#define  IE_TYPE_CONF_SOLENOID                   PMJ_IE_TYPE_BASE + 8        /*电磁阀状态配置*/

#define CHECK(IELEN)    (((IELEN) <= MAX_MESSAGE_LEN)?0:1)  

typedef struct 
{
     char z_keyBordPassWord[32];
     char z_loginPassWord[32];
}structPassWordConf;

typedef struct 
{
     char z_lanIp[32];
     char z_lanPort[32];
}structLanConf;

typedef struct
{
     u16 u16BaudRate;
     u16 u16EvenOld;
     u16 u16StopBits;
     u16 u16Reserv;
}structSerialConf;

typedef struct
{
   u8  u8InfoIncrement:1;
   u8  u8PrintSpeedObStacle:1;
   u8  u8CablePrint:1;
   u8  u8FutureDate:1;
   u8  u8PrintOnce:1;
   u8  u8InkCompensation:1;
   u8  u8Reserv:2;
}structOptionFunction;

typedef struct
{
    u8 u8Language;
    u8 u8Distance;
}structOtherConf;

typedef struct
{
    u8 u8Onoff;
    char uNum[32];
    u16 u16ColNum;
}structNozzle;

typedef struct
{
    u8 u8PentougaiCheck;
    u8 u8RecycleCheck;
}structRecycle;

typedef struct
{
    u8 u8Niandu_JiFa;
    u8 u8Pentou_RongJifa;
    u8 u8NianduZhi;
    u8 u8Ref_Nianduzhi;
    u8 u8Pentou1_Rongjifa;
    u8 u8Pentou2_Rongjifa;

    u8 u8Nianduji_Yewei;
    u8 u8Nianduji_HighWei;
    u8 u8Nianduji_LowWei;
    u8 u8Ink_LowYewei;
    u8 u8Pentou1_Huishoufa;
    u8 u8Pentou2_Huishoufa;
}structSolenoid_1;

typedef struct
{
    u8 u8Real_WorkPress;
    u8 u8Jiaqi;
    u8 u8Transfer_Qifa;
    u8 u8Qiya_Chuanshufa;
    u8 u8Niandu_Pinghengfa;
    u8 u8Tianjiaji_Fa;
    u8 u8Huanyagang_Yewei;
    u8 u8Nianduji_Yewei;
    u8 u8ZhenKongGang_Yewei;

    u8 u8Time;
    u8 u8Paiqifa;
    u8 u8PA_FA;
    u8 u8Ink_Chuanshufa;
    u8 u8Nianduji_Fa;
    u8 u8Ink_fa;
}structSolenoid_2;

typedef struct
{
    u8 u8InklineStatus;
    u8 u8InklineSpeed;
    u8 u8InkpointCheck;
    u8 u8Press;
    u8 u8MotorRotateSpeed;
    u8 u8Niandu_coef;
    u8 u8Niandu_Ref;
    u8 u8Temperature;
    u8 u8AddNums;
    u8 u8ChannelSysTemperature;
}structInkChannelParam;

typedef struct
{
    u8 u8Penyin_fangxiang;
    u8 u8Penyin_suanfa;
    u8 u8fanshi_penyin;
    u8 u8fanxiang_penyin;
    u8 u8xianlan_font;

    u8 u8zhengxiang_delay;
    u8 u8fanxiang_delay;
    u8 u8fenyin_space;
    u8 u8wuti_check_lvbo;
    u8 u8penyin_chufa;

    u8 u8chongfu_penyin;
    u8 u8penyin_speed;
    u8 u8penyin_speed_ceding;
    u8 u8penyin_fenbianlv;
}structPrintParam;

typedef struct
{
    u8 u8FontWidth;
    u8 u8FontSpace;
    char cFont[32];
}structWordStyleParam;

class PMJInitialConfMsg : public CNCPBaseMsg
{
public:
     u32 z_subIENum;
     u8 z_buf[MAX_MESSAGE_LEN];
     
public:
     PMJInitialConfMsg()
     {
         z_subIENum = 0;
         z_buf[0] = 0;
         setMsgType(PMJ_INITIAL_CONF_MESSAGE);
         setMsgLen(sizeof(CNCPBaseMsg) + 4);
    
         setSrcId(PMJ_GUI);
         setDstId(PMJ_DAMEON);
     }
     ~PMJInitialConfMsg()
     {
     }
     void AddSubIE(u8 IEType,u8 IELen,void * content)
     {
          u32  curMsgLen = getMsgLen() - sizeof(CNCPBaseMsg) - 4;
          if(CHECK((curMsgLen + IELen)))
          {
              return;
          }
          switch(IEType)
          {
              case IE_TYPE_CONF_PASSWORD:
              case IE_TYPE_CONF_LAN:
              case IE_TYPE_CONF_SERIAL:
              case IE_TYPE_CONF_OTHER:
              case IE_TYPE_CONF_OPTION_FUNCTION:
                   z_subIENum += 1;
                   z_buf[curMsgLen ++] = IEType;
                   z_buf[curMsgLen ++] = IELen;
                   memcpy(&z_buf[curMsgLen],content,IELen);
                   setMsgLen(curMsgLen + IELen);
              break;
              default:
              break;
              
          }
     }
     
     void network() 
     {
         z_subIENum = htonl(z_subIENum);
         CNCPBaseMsg::network();
     }
     void unnetwork()
     {   
         z_subIENum = ntohl(z_subIENum);
         CNCPBaseMsg::unnetwork();
     }
};


#define DEVICE_OP_TYPE_ON      0x09
#define DEVICE_OP_TYPE_OFF     0x0A
#define DEVICE_OP_TYPE_PAUSE   0x0B

#define DEVICE_PAUSE_SHORT     0x00
#define DEVICE_PAUSE_LONG      0x01
class PMJDeviceOnOffMsg : public CNCPBaseMsg
{
public:
    u8  u8DeviceOp;           
    u8  u8DevicePauseType;
public:
     PMJDeviceOnOffMsg()
     {
         u8DeviceOp = 0;
         u8DevicePauseType = 0;
         //setMsgType(PMJ_DEVICE_ONOFF);
         setMsgLen(sizeof(CNCPBaseMsg) + 2);
         setSrcId(PMJ_GUI);
         setDstId(PMJ_DAMEON);
     }
     ~PMJDeviceOnOffMsg()
     {
     }
   
};

class PMJPrintMsg : public CNCPBaseMsg
{
public:
     u8 u8NozzleNo;
     u8 u8ArrayInfoName[31];
     
public:
     PMJPrintMsg()
     {
         u8NozzleNo = 0;
         u8ArrayInfoName[0] = 0;
         setMsgType(PMJ_PRINT_MESSAGE);
         setMsgLen(sizeof(PMJPrintMsg));
         setSrcId(PMJ_GUI);
         setDstId(PMJ_DAMEON);
     }
     ~PMJPrintMsg()
     {
     }
};

class PMJInfoEditSaveMsg : public CNCPBaseMsg
{
public:
     u8 z_InfoType;
     u8 z_InfoName[32];
     u8 z_Infobuf[MAX_MESSAGE_LEN];
     
public:
     PMJInfoEditSaveMsg()
     {
         setMsgType(PMJ_INFO_EDIT_SAVE_MESSAGE);
         setMsgLen(sizeof(CNCPBaseMsg) + 4);
         setSrcId(PMJ_GUI);
         setDstId(PMJ_DAMEON);
     }
     ~PMJInfoEditSaveMsg()
     {
     }
     void AddInfoData(u8 u8InfoType,u8 InfoLen,u8 * infoName,u8 *InfoBuf)
     {
         if((0 == infoName) || (0 == InfoBuf) || (0 == InfoLen) || (strlen((char *)infoName) >= 32))
         {
             return;
         }
         z_InfoType = u8InfoType;
         strncpy((char*)z_InfoName,(char*)infoName,strlen((char *)infoName));
         z_InfoName[strlen((char *)infoName)] = 0;
         memcpy(z_Infobuf,InfoBuf,InfoLen);
         setMsgLen(sizeof(CNCPBaseMsg) + 33 + InfoLen);
     }
         
};

class PMJInfoContentGetMsg : public CNCPBaseMsg
{
public:
     u8 z_InfoName[32];
    
public:
     PMJInfoContentGetMsg()
     {
         setMsgType(PMJ_INFO_CONTENT_GET_MESSAGE);
         setMsgLen(sizeof(PMJInfoContentGetMsg));
         setSrcId(PMJ_GUI);
         setDstId(PMJ_DAMEON);
     }
     ~PMJInfoContentGetMsg()
     {
     }
     
     
};

class PMJInfoContentGetRspMsg : public CNCPBaseMsg
{
public:
     u8 z_InfoName[32];
     u8 z_InfoType;
     u8 z_Infobuf[MAX_MESSAGE_LEN];
     
public:
     PMJInfoContentGetRspMsg()
     {
         setMsgType(PMJ_INFO_CONTENT_GET_RSP_MESSAGE);
         setMsgLen(sizeof(CNCPBaseMsg) + 4);
         setSrcId(PMJ_DAMEON);
         setDstId(PMJ_GUI);
     }
     ~PMJInfoContentGetRspMsg()
     {
     }

     void AddInfoData(u8 u8InfoType,u8 InfoLen,u8 * infoName,u8 *InfoBuf)
     {
         if((0 == infoName) || (0 == InfoBuf) || (0 == InfoLen) || (strlen((char*)infoName) >= 32))
         {
             return;
         }
         z_InfoType = u8InfoType;
         strncpy((char*)z_InfoName,(char*)infoName,strlen((char*)infoName));
         z_InfoName[strlen((char*)infoName)] = 0;
         memcpy(z_Infobuf,InfoBuf,InfoLen);
         setMsgLen(sizeof(CNCPBaseMsg) + 33 + InfoLen);
     }
    
};

class PMJInfoNameListGetMsg : public CNCPBaseMsg
{
   
     
public:
     PMJInfoNameListGetMsg()
     {   
         setMsgType(PMJ_INFO_NAME_LIST_GET_MESSAGE);
         setMsgLen(sizeof(CNCPBaseMsg) );
         setSrcId(PMJ_GUI);
         setDstId(PMJ_DAMEON);
     }
     ~PMJInfoNameListGetMsg()
     {
     }
     
};

class PMJInfoNameListGetRspMsg : public CNCPBaseMsg
{
public:
     u32 z_InfoNameNum;
     u8  z_Infobuf[MAX_MESSAGE_LEN];
     
public:
     PMJInfoNameListGetRspMsg()
     {
         z_InfoNameNum = 0;
         setMsgType(PMJ_INFO_NAME_LIST_GET_RSP_MESSAGE);
         setMsgLen(sizeof(CNCPBaseMsg) + 4);
         setSrcId(PMJ_DAMEON);
         setDstId(PMJ_GUI);
     }
     ~PMJInfoNameListGetRspMsg()
     {
     }
     void network() 
     {
         z_InfoNameNum = htons(z_InfoNameNum);
         CNCPBaseMsg::network();
     }
     void unnetwork()
     {   
         z_InfoNameNum = ntohl(z_InfoNameNum);
         CNCPBaseMsg::unnetwork();
     }
     void AddInfoNameToList(char * name)
     {
          if((0 == name) || (z_InfoNameNum >= MAX_MESSAGE_LEN/32) || (strlen(name) >= 32))	
          {
              return;
          }
          strncpy((char*)z_Infobuf,name,strlen(name));
          name[strlen(name)] = 0;
     }
     
};

class PMJInkChannelLogReqMsg : public CNCPBaseMsg
{
public:
public:
    PMJInkChannelLogReqMsg()
    {
        setMsgType(PMJ_INKCHANNEL_LOG_MESSAGE);
        setMsgLen(sizeof(PMJInkChannelLogReqMsg));
        setSrcId(PMJ_GUI);
        setDstId(PMJ_DAMEON);
    }
    ~PMJInkChannelLogReqMsg()
    {
    }
};

class PMJInkChannelLogRspMsg : public CNCPBaseMsg
{
public:
      u32 z_RecordNum;
      u8 z_buf[MAX_MESSAGE_LEN];

public:
      PMJInkChannelLogRspMsg()
      {
         z_RecordNum = 0;
         z_buf[0] = 0;
         setMsgType(PMJ_INKCHANNEL_LOG_RSP_MESSAGE);
         setMsgLen(sizeof(CNCPBaseMsg) + 4);
         setSrcId(PMJ_DAMEON);
         setDstId(PMJ_GUI);
      }
      ~PMJInkChannelLogRspMsg()
     {
     }
      void network() 
     {
         z_RecordNum = htons(z_RecordNum);
         CNCPBaseMsg::network();
     }
     void unnetwork()
     {   
         z_RecordNum = ntohl(z_RecordNum);
         CNCPBaseMsg::unnetwork();
     }
};

class PMJUserLogReqMsg : public CNCPBaseMsg
{
public:
public:
    PMJUserLogReqMsg()
    {
        setMsgType(PMJ_USERLOG_MESSAGE);
        setMsgLen(sizeof(PMJUserLogReqMsg));
        setSrcId(PMJ_GUI);
        setDstId(PMJ_DAMEON);
    }
    ~PMJUserLogReqMsg()
    {
    }
};

class PMJUserLogRspMsg : public CNCPBaseMsg
{
public:
      u32 z_RecordNum;
      u8 z_buf[MAX_MESSAGE_LEN];

public:
      PMJUserLogRspMsg()
      {
         z_RecordNum = 0;
         z_buf[0] = 0;
         setMsgType(PMJ_USERLOG_RSP_MESSAGE);
         setMsgLen(sizeof(CNCPBaseMsg) + 4);
         setSrcId(PMJ_DAMEON);
         setDstId(PMJ_GUI);
      }
      ~PMJUserLogRspMsg()
     {
     }
      void network() 
     {
         z_RecordNum = htons(z_RecordNum);
         CNCPBaseMsg::network();
     }
     void unnetwork()
     {   
         z_RecordNum = ntohl(z_RecordNum);
         CNCPBaseMsg::unnetwork();
     }
};

class PMJObStacleLogReqMsg : public CNCPBaseMsg
{
public:
public:
    PMJObStacleLogReqMsg()
    {
        setMsgType(PMJ_DEVICE_WARNNING_MESSAGE);
        setMsgLen(sizeof(PMJObStacleLogReqMsg));
        setSrcId(PMJ_GUI);
        setDstId(PMJ_DAMEON);
    }
    ~PMJObStacleLogReqMsg()
    {
    }
};

class PMJObStacleLogRspMsg : public CNCPBaseMsg
{
public:
      u32 z_RecordNum;
      u8 z_buf[MAX_MESSAGE_LEN];

public:
      PMJObStacleLogRspMsg()
      {
         z_RecordNum= 0;
         z_buf[0] = 0;
         setMsgType(PMJ_DEVICE_WARNNING_RSP_MESSAGE);
         setMsgLen(sizeof(CNCPBaseMsg) + 4);
         setSrcId(PMJ_DAMEON);
         setDstId(PMJ_GUI);
      }
      ~PMJObStacleLogRspMsg()
     {
     }
      void network() 
     {
         z_RecordNum = htonl(z_RecordNum);
         CNCPBaseMsg::network();
     }
     void unnetwork()
     {   
         z_RecordNum = ntohl(z_RecordNum);
         CNCPBaseMsg::unnetwork();
     }
};

#define PMJ_MAINTAIN_NOZZLE_DETECT   0x07
#define PMJ_MAINTAIN_RECYCLE_DETECT  0x08
#define PMJ_MAINTAIN_SOLENOID_STATUS 0x09
#define PMJ_MAINTAIN_SOLENOID2_STATUS 0x0a

class PMJMainTainMsg : public CNCPBaseMsg
{
public:
      u32 z_subIENum;
      u8 z_buf[MAX_MESSAGE_LEN];

public:
      PMJMainTainMsg()
      {
         z_subIENum = 0;
         z_buf[0] = 0;
         setMsgType(PMJ_DEVICE_MAINTAIN_MESSAGE);
         setMsgLen(sizeof(CNCPBaseMsg) + 4);
         setSrcId(PMJ_GUI);
         setDstId(PMJ_DAMEON);
         
      }
      ~PMJMainTainMsg()
     {
     }
      void network() 
     {
         z_subIENum = htons(z_subIENum);
         CNCPBaseMsg::network();
     }
     void unnetwork()
     {   
         z_subIENum = ntohl(z_subIENum);
         CNCPBaseMsg::unnetwork();
     }
     void AddSubIE(u8 IEType,u8 IELen,void * content)
     {
          u32  curMsgLen = getMsgLen() - sizeof(CNCPBaseMsg) - 4;
          if(CHECK(curMsgLen + IELen))
          {
              return;
          }
          switch(IEType)
          {
              case PMJ_MAINTAIN_NOZZLE_DETECT:
              case PMJ_MAINTAIN_RECYCLE_DETECT:
              case PMJ_MAINTAIN_SOLENOID_STATUS:
              case PMJ_MAINTAIN_SOLENOID2_STATUS:
                   z_subIENum += 1;
                   z_buf[curMsgLen ++] = IEType;
                   z_buf[curMsgLen ++] = IELen;
                   memcpy(&z_buf[curMsgLen],content,IELen);
                   setMsgLen(curMsgLen + IELen);
              break;
              default:
              break;
              
          }
	 }
};

class PMJInkChannelParaMsg : public CNCPBaseMsg
{
public:
	u8 z_buf[MAX_MESSAGE_LEN];

public:
	PMJInkChannelParaMsg()
	{
		z_buf[0] = 0;
		setMsgType(PMJ_INK_CHANNEL_PARA_MESSAGE);
		setMsgLen(sizeof(CNCPBaseMsg) );
		setSrcId(PMJ_GUI);
        setDstId(PMJ_DAMEON);
	}
	~PMJInkChannelParaMsg()
	{
	}

	void AddSubIE(u8 IEType,u8 IELen,void * content)
	{
		u32  curMsgLen = getMsgLen() - sizeof(CNCPBaseMsg) - 4;
		if(CHECK(curMsgLen + IELen))
		{
			return;
		}
		memcpy(z_buf,content,IELen);
	}
};

class PMJInkPrintParaMsg : public CNCPBaseMsg
{
public:

	u8 z_buf[MAX_MESSAGE_LEN];

public:
	PMJInkPrintParaMsg()
	{
		z_buf[0] = 0;
		setMsgType(PMJ_PRINT_PARA_MESSAGE);
		setMsgLen(sizeof(CNCPBaseMsg));
		setSrcId(PMJ_GUI);
        setDstId(PMJ_DAMEON);
	}
	~PMJInkPrintParaMsg()
	{
	}

	void AddSubIE(u8 IEType,u8 IELen,void * content)
	{
		u32  curMsgLen = getMsgLen() - sizeof(CNCPBaseMsg) - 4;
		if(CHECK(curMsgLen + IELen))
		{
			return;
		}
		memcpy(z_buf,content,IELen);
	}
};

class PMJWordStyleParaMsg : public CNCPBaseMsg
{
public:
	u32 z_RecordNum;
	u8 z_buf[MAX_MESSAGE_LEN];

public:
	PMJWordStyleParaMsg()
	{
		z_RecordNum = 0;
		z_buf[0] = 0;
		setMsgType(PMJ_CHARATER_STYLE_MESSAGE);
		setMsgLen(sizeof(CNCPBaseMsg) );
		setSrcId(PMJ_GUI);
        setDstId(PMJ_DAMEON);
	}
	~PMJWordStyleParaMsg()
	{
	}

	void AddSubIE(u8 IEType,u8 IELen,void * content)
	{
		u32  curMsgLen = getMsgLen() - sizeof(CNCPBaseMsg) - 4;
		if(CHECK(curMsgLen + IELen))
		{
			return;
		}
		memcpy(z_buf,content,IELen);
	}
};

class PMJRunStatusGetMsg : public CNCPBaseMsg
{

public:
	PMJRunStatusGetMsg()
	{
		setMsgType(PMJ_CHARATER_STYLE_MESSAGE);
		setMsgLen(sizeof(CNCPBaseMsg) );
		setSrcId(PMJ_GUI);
        setDstId(PMJ_DAMEON);
	}
	~PMJRunStatusGetMsg()
	{
	}

	
};

#define PMJ_RUNSTATUS_POWER_SET      0x01
#define PMJ_RUNSTATUS_NOZZLE_SET     0x02
#define PMJ_RUNSTATUS_WARNNING_SET   0x04
#define PMJ_RUNSTATUS_LIQUID_SET     0x08

class PMJRunStatusGetRspMsg : public CNCPBaseMsg
{
public:
     u32   z_RunStatus;
     
public:
	PMJRunStatusGetRspMsg()
	{
		z_RunStatus = 0;
	
		setMsgType(PMJ_CHARATER_STYLE_MESSAGE);
		setMsgLen(sizeof(CNCPBaseMsg) + 4);
		setSrcId(PMJ_DAMEON);
        setDstId(PMJ_GUI);
	}
	~PMJRunStatusGetRspMsg()
	{
	}
    void setPowerStatus(int status)
    {
        if(status)
        {
             z_RunStatus = z_RunStatus | PMJ_RUNSTATUS_POWER_SET;
        }
        else
        {
              z_RunStatus = z_RunStatus &(~PMJ_RUNSTATUS_POWER_SET);
        }
    }
    int getPowerStatus()
    {
        return  (z_RunStatus & PMJ_RUNSTATUS_POWER_SET);
    }
    void setNozzleStatus(int status)
    {
        if(status)
        {
             z_RunStatus = z_RunStatus | PMJ_RUNSTATUS_NOZZLE_SET;
        }
        else
        {
              z_RunStatus = z_RunStatus &(~PMJ_RUNSTATUS_NOZZLE_SET);
        }
    }
    int getNozzleStatus()
    {
         return  (z_RunStatus & PMJ_RUNSTATUS_NOZZLE_SET);
    }
    void setWarnningLightStatus(int status)
    {
        if(status)
        {
             z_RunStatus = z_RunStatus | PMJ_RUNSTATUS_WARNNING_SET;
        }
        else
        {
              z_RunStatus = z_RunStatus &(~PMJ_RUNSTATUS_WARNNING_SET);
        }
    }
    int getWarnnningLightStatus()
    {
    	return  (z_RunStatus & PMJ_RUNSTATUS_WARNNING_SET);
    }
    void setLiquidStatus(int status)
    {
        if(status)
        {
             z_RunStatus = z_RunStatus | PMJ_RUNSTATUS_LIQUID_SET;
        }
        else
        {
              z_RunStatus = z_RunStatus &(~PMJ_RUNSTATUS_LIQUID_SET);
        }
    }
    int getLiquidStatus()
    {
    return  (z_RunStatus & PMJ_RUNSTATUS_LIQUID_SET);
    }
	
};

class PMJOpReportMsg : public CNCPBaseMsg
{
public:
     u8  u8SrcMsgType;
     u8  u8IEType;
     u8  u8OpResult;
     u8  u8Reserv;

public:
	PMJOpReportMsg()
	{
		u8SrcMsgType = 0;
	    u8IEType = 0;
	    u8OpResult = 0;
		setMsgType(PMJ_CHARATER_STYLE_MESSAGE);
		setMsgLen(sizeof(CNCPBaseMsg) + 4 );
		setSrcId(PMJ_DAMEON);
        setDstId(PMJ_GUI);
	}
	~PMJOpReportMsg()
	{
	}

	
};


class PMJIoDeviceMsg : public CNCPBaseMsg
{
public:
    
     u16  u16IOFrom;  
     u16  u16IELen;
     u8  u8Msg[256];

public:
	PMJIoDeviceMsg()
	{
	
	    u16IOFrom = 0;
	    u16IELen = 0;
		setMsgType(PMJ_DEVICE_IODevice_MESSAGE);
		setMsgLen(sizeof(CNCPBaseMsg) + 4 );
		setSrcId(PMJ_GUI);
        setDstId(PMJ_DAMEON);
	}
	~PMJIoDeviceMsg()
	{
	}

	void setMsgContent(u16 msglen,u8 *pmsg)
	{
	    if((!pmsg) || (msglen <= 0) || (msglen >= 256))
	    {
	         return ;
	    }
	    u16IELen = msglen;
	    memcpy(u8Msg,pmsg, msglen);
	    setMsgLen(sizeof(CNCPBaseMsg) + 4 + msglen);
	}
};


#endif
