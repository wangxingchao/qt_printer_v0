#ifndef GUIPAGEDEF_H
#define GUIPAGEDEF_H

/***用户页面及页面子项类型定义***/

/***页面类型定义***/
#define PAGE_TYPE_BASE                         0x0050
#define PAGE_TYPE_USER_MANNUAL                 PAGE_TYPE_BASE + 1       //refer to usermanwnd.ui
#define PAGE_TYPE_SYS_INFO                     PAGE_TYPE_BASE + 2       //refer to sysgenwnd.ui
#define PAGE_TYPE_RUN_LOG                      PAGE_TYPE_BASE + 3       //refer to runlogwnd.ui
#define PAGE_TYPE_PRINT                        PAGE_TYPE_BASE + 4       //refer to printwdn.ui
#define PAGE_TYPE_PENYIN_PARA                  PAGE_TYPE_BASE + 5       //refer to penyinparamwnd.ui
#define PAGE_TYPE_OTHER_STATUS                 PAGE_TYPE_BASE + 6       //refer to otherstatusmwnd.ui
#define PAGE_TYPE_ONOFF_PMJ                    PAGE_TYPE_BASE + 7       //refer to opensytleset.ui
#define PAGE_TYPE_NEW_INFO                     PAGE_TYPE_BASE + 8       //refer to newinfownd.ui
#define PAGE_TYPE_MAIN                         PAGE_TYPE_BASE + 9       //refer to mainwnd.ui
#define PAGE_TYPE_MAIN_WINDOW                  PAGE_TYPE_BASE + 10      //refer to mainwindow.ui
#define PAGE_TYPE_MAINTAIN_MAN                 PAGE_TYPE_BASE + 11      //refer to maintainmanwnd.ui
#define PAGE_TYPE_LIGHT_STATUS                 PAGE_TYPE_BASE + 12      //refer to lightstatuswnd.ui
#define PAGE_TYPE_INK                          PAGE_TYPE_BASE + 13      //refer to inkwnd.ui
#define PAGE_TYPE_INITCFG                      PAGE_TYPE_BASE + 14      //refer to initcfgwnd.ui
#define PAGE_TYPE_FONT_PARAM                   PAGE_TYPE_BASE + 15      //refer to fontparamwnd.ui
#define PAGE_TYPE_EDIT_INFO                    PAGE_TYPE_BASE + 16      //refer to editinfownd.ui
#define PAGE_TYPE_DAY_MAINTAIN                 PAGE_TYPE_BASE + 17      //refer to daymaintainwnd.ui

/***页面子项定义***/
#define  PAGE_SUBITEM_BASE                     0x30
#define  INITCFG_SUBIE_WORKLANGUAGE            PAGE_SUBITEM_BASE + 1
#define  INITCFG_SUBIE_PASSWORD                PAGE_SUBITEM_BASE + 2
#define  INITCFG_SUBIE_LAN                     PAGE_SUBITEM_BASE + 3
#define  INITCFG_SUBIE_SERIAL                  PAGE_SUBITEM_BASE + 4
#define  INITCFG_SUBIE_OPTION                  PAGE_SUBITEM_BASE + 5

#define  RUNLOG_INKCHANNEL                     PAGE_SUBITEM_BASE + 1
#define  RUNLOG_USER                           PAGE_SUBITEM_BASE + 2
#define  RUNLOG_OBSTACLE                       PAGE_SUBITEM_BASE + 3

#define MAINTAIN_NOZZLE_DETECT                 PAGE_SUBITEM_BASE + 1
#define MAINTAIN_RECYCLE_DETECT                PAGE_SUBITEM_BASE + 2
#define MAINTAIN_SOLENOID_STATUS               PAGE_SUBITEM_BASE + 3
#define MAINTAIN_SOLENOID2_STATUS              PAGE_SUBITEM_BASE + 4
#endif // GUIPAGEDEF_H
