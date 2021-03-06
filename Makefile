#############################################################################
# Makefile for building: pmj2
# Generated by qmake (2.01a) (Qt 4.7.1) on: ?? 3? 17 16:30:36 2013
# Project:  pmj2.pro
# Template: app
# Command: /opt/qt-4.7.1/bin/qmake -o Makefile pmj2.pro
#############################################################################

####### Compiler, tools and options

CC            = arm-none-linux-gnueabi-gcc -lts
CXX           = arm-none-linux-gnueabi-g++ -lts
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/opt/qt-4.7.1/mkspecs/qws/linux-arm-gnueabi-g++ -I. -I/opt/qt-4.7.1/include/QtCore -I/opt/qt-4.7.1/include/QtNetwork -I/opt/qt-4.7.1/include/QtGui -I/opt/qt-4.7.1/include -I. -I. -I.
LINK          = arm-none-linux-gnueabi-g++ -lts
LFLAGS        = -Wl,-O1 -Wl,-rpath,/opt/qt-4.7.1/lib
LIBS          = $(SUBLIBS)  -L/opt/qt-4.7.1/lib -lQtGui -L/usr/local/tslib/lib -L/opt/qt-4.7.1/lib -lQtNetwork -lQtCore -lpthread 
AR            = arm-none-linux-gnueabi-ar cqs
RANLIB        = 
QMAKE         = /opt/qt-4.7.1/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = arm-none-linux-gnueabi-strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = counter.cpp \
		guiPageInterface.cpp \
		initcfgwnd.cpp \
		jetstatus.cpp \
		lightstatuswnd.cpp \
		magnetic.cpp \
		main.cpp \
		maintainmanwnd.cpp \
		mainwindow.cpp \
		mainwnd.cpp \
		newinfownd.cpp \
		opensytleset.cpp \
		penyinparamwnd.cpp \
		printwnd.cpp \
		runlogwnd.cpp \
		shieldcheck.cpp \
		sysgenwnd.cpp moc_counter.cpp \
		moc_initcfgwnd.cpp \
		moc_jetstatus.cpp \
		moc_lightstatuswnd.cpp \
		moc_magnetic.cpp \
		moc_maintainmanwnd.cpp \
		moc_mainwindow.cpp \
		moc_mainwnd.cpp \
		moc_newinfownd.cpp \
		moc_opensytleSet.cpp \
		moc_penyinparamwnd.cpp \
		moc_printwnd.cpp \
		moc_runlogwnd.cpp \
		moc_shieldcheck.cpp \
		moc_sysgenwnd.cpp
OBJECTS       = counter.o \
		guiPageInterface.o \
		initcfgwnd.o \
		jetstatus.o \
		lightstatuswnd.o \
		magnetic.o \
		main.o \
		maintainmanwnd.o \
		mainwindow.o \
		mainwnd.o \
		newinfownd.o \
		opensytleset.o \
		penyinparamwnd.o \
		printwnd.o \
		runlogwnd.o \
		shieldcheck.o \
		sysgenwnd.o \
		moc_counter.o \
		moc_initcfgwnd.o \
		moc_jetstatus.o \
		moc_lightstatuswnd.o \
		moc_magnetic.o \
		moc_maintainmanwnd.o \
		moc_mainwindow.o \
		moc_mainwnd.o \
		moc_newinfownd.o \
		moc_opensytleSet.o \
		moc_penyinparamwnd.o \
		moc_printwnd.o \
		moc_runlogwnd.o \
		moc_shieldcheck.o \
		moc_sysgenwnd.o
DIST          = /opt/qt-4.7.1/mkspecs/common/g++.conf \
		/opt/qt-4.7.1/mkspecs/common/unix.conf \
		/opt/qt-4.7.1/mkspecs/common/linux.conf \
		/opt/qt-4.7.1/mkspecs/common/qws.conf \
		/opt/qt-4.7.1/mkspecs/qconfig.pri \
		/opt/qt-4.7.1/mkspecs/features/qt_functions.prf \
		/opt/qt-4.7.1/mkspecs/features/qt_config.prf \
		/opt/qt-4.7.1/mkspecs/features/exclusive_builds.prf \
		/opt/qt-4.7.1/mkspecs/features/default_pre.prf \
		/opt/qt-4.7.1/mkspecs/features/release.prf \
		/opt/qt-4.7.1/mkspecs/features/default_post.prf \
		/opt/qt-4.7.1/mkspecs/features/warn_on.prf \
		/opt/qt-4.7.1/mkspecs/features/qt.prf \
		/opt/qt-4.7.1/mkspecs/features/unix/thread.prf \
		/opt/qt-4.7.1/mkspecs/features/moc.prf \
		/opt/qt-4.7.1/mkspecs/features/resources.prf \
		/opt/qt-4.7.1/mkspecs/features/uic.prf \
		/opt/qt-4.7.1/mkspecs/features/yacc.prf \
		/opt/qt-4.7.1/mkspecs/features/lex.prf \
		/opt/qt-4.7.1/mkspecs/features/include_source_dir.prf \
		pmj2.pro
QMAKE_TARGET  = pmj2
DESTDIR       = 
TARGET        = pmj2

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_counter.h ui_initcfgwnd.h ui_jetstatus.h ui_lightstatuswnd.h ui_magnetic.h ui_maintainmanwnd.h ui_mainwindow.h ui_mainwnd.h ui_newinfownd.h ui_opensytleset.h ui_penyinparamwnd.h ui_printwnd.h ui_runlogwnd.h ui_shieldcheck.h ui_sysgenwnd.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: pmj2.pro  /opt/qt-4.7.1/mkspecs/qws/linux-arm-gnueabi-g++/qmake.conf /opt/qt-4.7.1/mkspecs/common/g++.conf \
		/opt/qt-4.7.1/mkspecs/common/unix.conf \
		/opt/qt-4.7.1/mkspecs/common/linux.conf \
		/opt/qt-4.7.1/mkspecs/common/qws.conf \
		/opt/qt-4.7.1/mkspecs/qconfig.pri \
		/opt/qt-4.7.1/mkspecs/features/qt_functions.prf \
		/opt/qt-4.7.1/mkspecs/features/qt_config.prf \
		/opt/qt-4.7.1/mkspecs/features/exclusive_builds.prf \
		/opt/qt-4.7.1/mkspecs/features/default_pre.prf \
		/opt/qt-4.7.1/mkspecs/features/release.prf \
		/opt/qt-4.7.1/mkspecs/features/default_post.prf \
		/opt/qt-4.7.1/mkspecs/features/warn_on.prf \
		/opt/qt-4.7.1/mkspecs/features/qt.prf \
		/opt/qt-4.7.1/mkspecs/features/unix/thread.prf \
		/opt/qt-4.7.1/mkspecs/features/moc.prf \
		/opt/qt-4.7.1/mkspecs/features/resources.prf \
		/opt/qt-4.7.1/mkspecs/features/uic.prf \
		/opt/qt-4.7.1/mkspecs/features/yacc.prf \
		/opt/qt-4.7.1/mkspecs/features/lex.prf \
		/opt/qt-4.7.1/mkspecs/features/include_source_dir.prf \
		/opt/qt-4.7.1/lib/libQtGui.prl \
		/opt/qt-4.7.1/lib/libQtNetwork.prl \
		/opt/qt-4.7.1/lib/libQtCore.prl
	$(QMAKE) -o Makefile pmj2.pro
/opt/qt-4.7.1/mkspecs/common/g++.conf:
/opt/qt-4.7.1/mkspecs/common/unix.conf:
/opt/qt-4.7.1/mkspecs/common/linux.conf:
/opt/qt-4.7.1/mkspecs/common/qws.conf:
/opt/qt-4.7.1/mkspecs/qconfig.pri:
/opt/qt-4.7.1/mkspecs/features/qt_functions.prf:
/opt/qt-4.7.1/mkspecs/features/qt_config.prf:
/opt/qt-4.7.1/mkspecs/features/exclusive_builds.prf:
/opt/qt-4.7.1/mkspecs/features/default_pre.prf:
/opt/qt-4.7.1/mkspecs/features/release.prf:
/opt/qt-4.7.1/mkspecs/features/default_post.prf:
/opt/qt-4.7.1/mkspecs/features/warn_on.prf:
/opt/qt-4.7.1/mkspecs/features/qt.prf:
/opt/qt-4.7.1/mkspecs/features/unix/thread.prf:
/opt/qt-4.7.1/mkspecs/features/moc.prf:
/opt/qt-4.7.1/mkspecs/features/resources.prf:
/opt/qt-4.7.1/mkspecs/features/uic.prf:
/opt/qt-4.7.1/mkspecs/features/yacc.prf:
/opt/qt-4.7.1/mkspecs/features/lex.prf:
/opt/qt-4.7.1/mkspecs/features/include_source_dir.prf:
/opt/qt-4.7.1/lib/libQtGui.prl:
/opt/qt-4.7.1/lib/libQtNetwork.prl:
/opt/qt-4.7.1/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile pmj2.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/pmj21.0.0 || $(MKDIR) .tmp/pmj21.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/pmj21.0.0/ && $(COPY_FILE) --parents cncpbase.hh counter.h fpgadrv.h guiPageDef.h guiPageInterface.h initcfgwnd.h jetstatus.h lightstatuswnd.h magnetic.h maintainmanwnd.h mainwindow.h mainwnd.h myapp.hh newinfownd.h opensytleSet.h penyinparamwnd.h PMJOpMessage.hh printwnd.h runlogwnd.h shieldcheck.h sysgenwnd.h userMagicCookies.hh .tmp/pmj21.0.0/ && $(COPY_FILE) --parents counter.cpp guiPageInterface.cpp initcfgwnd.cpp jetstatus.cpp lightstatuswnd.cpp magnetic.cpp main.cpp maintainmanwnd.cpp mainwindow.cpp mainwnd.cpp newinfownd.cpp opensytleset.cpp penyinparamwnd.cpp printwnd.cpp runlogwnd.cpp shieldcheck.cpp sysgenwnd.cpp .tmp/pmj21.0.0/ && $(COPY_FILE) --parents counter.ui initcfgwnd.ui jetstatus.ui lightstatuswnd.ui magnetic.ui maintainmanwnd.ui mainwindow.ui mainwnd.ui newinfownd.ui opensytleset.ui penyinparamwnd.ui printwnd.ui runlogwnd.ui shieldcheck.ui sysgenwnd.ui .tmp/pmj21.0.0/ && (cd `dirname .tmp/pmj21.0.0` && $(TAR) pmj21.0.0.tar pmj21.0.0 && $(COMPRESS) pmj21.0.0.tar) && $(MOVE) `dirname .tmp/pmj21.0.0`/pmj21.0.0.tar.gz . && $(DEL_FILE) -r .tmp/pmj21.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_counter.cpp moc_initcfgwnd.cpp moc_jetstatus.cpp moc_lightstatuswnd.cpp moc_magnetic.cpp moc_maintainmanwnd.cpp moc_mainwindow.cpp moc_mainwnd.cpp moc_newinfownd.cpp moc_opensytleSet.cpp moc_penyinparamwnd.cpp moc_printwnd.cpp moc_runlogwnd.cpp moc_shieldcheck.cpp moc_sysgenwnd.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_counter.cpp moc_initcfgwnd.cpp moc_jetstatus.cpp moc_lightstatuswnd.cpp moc_magnetic.cpp moc_maintainmanwnd.cpp moc_mainwindow.cpp moc_mainwnd.cpp moc_newinfownd.cpp moc_opensytleSet.cpp moc_penyinparamwnd.cpp moc_printwnd.cpp moc_runlogwnd.cpp moc_shieldcheck.cpp moc_sysgenwnd.cpp
moc_counter.cpp: mainwindow.h \
		counter.h
	/opt/qt-4.7.1/bin/moc $(DEFINES) $(INCPATH) counter.h -o moc_counter.cpp

moc_initcfgwnd.cpp: mainwindow.h \
		initcfgwnd.h
	/opt/qt-4.7.1/bin/moc $(DEFINES) $(INCPATH) initcfgwnd.h -o moc_initcfgwnd.cpp

moc_jetstatus.cpp: mainwindow.h \
		jetstatus.h
	/opt/qt-4.7.1/bin/moc $(DEFINES) $(INCPATH) jetstatus.h -o moc_jetstatus.cpp

moc_lightstatuswnd.cpp: mainwindow.h \
		lightstatuswnd.h
	/opt/qt-4.7.1/bin/moc $(DEFINES) $(INCPATH) lightstatuswnd.h -o moc_lightstatuswnd.cpp

moc_magnetic.cpp: mainwindow.h \
		magnetic.h
	/opt/qt-4.7.1/bin/moc $(DEFINES) $(INCPATH) magnetic.h -o moc_magnetic.cpp

moc_maintainmanwnd.cpp: mainwindow.h \
		maintainmanwnd.h
	/opt/qt-4.7.1/bin/moc $(DEFINES) $(INCPATH) maintainmanwnd.h -o moc_maintainmanwnd.cpp

moc_mainwindow.cpp: mainwindow.h
	/opt/qt-4.7.1/bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_mainwnd.cpp: mainwindow.h \
		mainwnd.h
	/opt/qt-4.7.1/bin/moc $(DEFINES) $(INCPATH) mainwnd.h -o moc_mainwnd.cpp

moc_newinfownd.cpp: mainwindow.h \
		newinfownd.h
	/opt/qt-4.7.1/bin/moc $(DEFINES) $(INCPATH) newinfownd.h -o moc_newinfownd.cpp

moc_opensytleSet.cpp: mainwindow.h \
		opensytleSet.h
	/opt/qt-4.7.1/bin/moc $(DEFINES) $(INCPATH) opensytleSet.h -o moc_opensytleSet.cpp

moc_penyinparamwnd.cpp: mainwindow.h \
		penyinparamwnd.h
	/opt/qt-4.7.1/bin/moc $(DEFINES) $(INCPATH) penyinparamwnd.h -o moc_penyinparamwnd.cpp

moc_printwnd.cpp: mainwindow.h \
		printwnd.h
	/opt/qt-4.7.1/bin/moc $(DEFINES) $(INCPATH) printwnd.h -o moc_printwnd.cpp

moc_runlogwnd.cpp: mainwindow.h \
		runlogwnd.h
	/opt/qt-4.7.1/bin/moc $(DEFINES) $(INCPATH) runlogwnd.h -o moc_runlogwnd.cpp

moc_shieldcheck.cpp: mainwindow.h \
		shieldcheck.h
	/opt/qt-4.7.1/bin/moc $(DEFINES) $(INCPATH) shieldcheck.h -o moc_shieldcheck.cpp

moc_sysgenwnd.cpp: mainwindow.h \
		sysgenwnd.h
	/opt/qt-4.7.1/bin/moc $(DEFINES) $(INCPATH) sysgenwnd.h -o moc_sysgenwnd.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_counter.h ui_initcfgwnd.h ui_jetstatus.h ui_lightstatuswnd.h ui_magnetic.h ui_maintainmanwnd.h ui_mainwindow.h ui_mainwnd.h ui_newinfownd.h ui_opensytleset.h ui_penyinparamwnd.h ui_printwnd.h ui_runlogwnd.h ui_shieldcheck.h ui_sysgenwnd.h
compiler_uic_clean:
	-$(DEL_FILE) ui_counter.h ui_initcfgwnd.h ui_jetstatus.h ui_lightstatuswnd.h ui_magnetic.h ui_maintainmanwnd.h ui_mainwindow.h ui_mainwnd.h ui_newinfownd.h ui_opensytleset.h ui_penyinparamwnd.h ui_printwnd.h ui_runlogwnd.h ui_shieldcheck.h ui_sysgenwnd.h
ui_counter.h: counter.ui
	/opt/qt-4.7.1/bin/uic counter.ui -o ui_counter.h

ui_initcfgwnd.h: initcfgwnd.ui
	/opt/qt-4.7.1/bin/uic initcfgwnd.ui -o ui_initcfgwnd.h

ui_jetstatus.h: jetstatus.ui
	/opt/qt-4.7.1/bin/uic jetstatus.ui -o ui_jetstatus.h

ui_lightstatuswnd.h: lightstatuswnd.ui
	/opt/qt-4.7.1/bin/uic lightstatuswnd.ui -o ui_lightstatuswnd.h

ui_magnetic.h: magnetic.ui
	/opt/qt-4.7.1/bin/uic magnetic.ui -o ui_magnetic.h

ui_maintainmanwnd.h: maintainmanwnd.ui
	/opt/qt-4.7.1/bin/uic maintainmanwnd.ui -o ui_maintainmanwnd.h

ui_mainwindow.h: mainwindow.ui
	/opt/qt-4.7.1/bin/uic mainwindow.ui -o ui_mainwindow.h

ui_mainwnd.h: mainwnd.ui
	/opt/qt-4.7.1/bin/uic mainwnd.ui -o ui_mainwnd.h

ui_newinfownd.h: newinfownd.ui
	/opt/qt-4.7.1/bin/uic newinfownd.ui -o ui_newinfownd.h

ui_opensytleset.h: opensytleset.ui
	/opt/qt-4.7.1/bin/uic opensytleset.ui -o ui_opensytleset.h

ui_penyinparamwnd.h: penyinparamwnd.ui
	/opt/qt-4.7.1/bin/uic penyinparamwnd.ui -o ui_penyinparamwnd.h

ui_printwnd.h: printwnd.ui
	/opt/qt-4.7.1/bin/uic printwnd.ui -o ui_printwnd.h

ui_runlogwnd.h: runlogwnd.ui
	/opt/qt-4.7.1/bin/uic runlogwnd.ui -o ui_runlogwnd.h

ui_shieldcheck.h: shieldcheck.ui
	/opt/qt-4.7.1/bin/uic shieldcheck.ui -o ui_shieldcheck.h

ui_sysgenwnd.h: sysgenwnd.ui
	/opt/qt-4.7.1/bin/uic sysgenwnd.ui -o ui_sysgenwnd.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

counter.o: counter.cpp counter.h \
		mainwindow.h \
		ui_counter.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o counter.o counter.cpp

guiPageInterface.o: guiPageInterface.cpp guiPageInterface.h \
		PMJOpMessage.hh \
		cncpbase.hh \
		userMagicCookies.hh \
		guiPageDef.h \
		mainwnd.h \
		mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o guiPageInterface.o guiPageInterface.cpp

initcfgwnd.o: initcfgwnd.cpp initcfgwnd.h \
		mainwindow.h \
		ui_initcfgwnd.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o initcfgwnd.o initcfgwnd.cpp

jetstatus.o: jetstatus.cpp jetstatus.h \
		mainwindow.h \
		ui_jetstatus.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o jetstatus.o jetstatus.cpp

lightstatuswnd.o: lightstatuswnd.cpp lightstatuswnd.h \
		mainwindow.h \
		ui_lightstatuswnd.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o lightstatuswnd.o lightstatuswnd.cpp

magnetic.o: magnetic.cpp magnetic.h \
		mainwindow.h \
		ui_magnetic.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o magnetic.o magnetic.cpp

main.o: main.cpp mainwindow.h \
		runlogwnd.h \
		initcfgwnd.h \
		printwnd.h \
		lightstatuswnd.h \
		penyinparamwnd.h \
		newinfownd.h \
		sysgenwnd.h \
		maintainmanwnd.h \
		mainwnd.h \
		jetstatus.h \
		opensytleSet.h \
		magnetic.h \
		shieldcheck.h \
		counter.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

maintainmanwnd.o: maintainmanwnd.cpp maintainmanwnd.h \
		mainwindow.h \
		ui_maintainmanwnd.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o maintainmanwnd.o maintainmanwnd.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

mainwnd.o: mainwnd.cpp mainwnd.h \
		mainwindow.h \
		ui_mainwnd.h \
		cncpbase.hh \
		PMJOpMessage.hh \
		userMagicCookies.hh
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwnd.o mainwnd.cpp

newinfownd.o: newinfownd.cpp newinfownd.h \
		mainwindow.h \
		ui_newinfownd.h \
		fpgadrv.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o newinfownd.o newinfownd.cpp

opensytleset.o: opensytleset.cpp opensytleset.h \
		mainwindow.h \
		ui_opensytleset.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o opensytleset.o opensytleset.cpp

penyinparamwnd.o: penyinparamwnd.cpp penyinparamwnd.h \
		mainwindow.h \
		ui_penyinparamwnd.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o penyinparamwnd.o penyinparamwnd.cpp

printwnd.o: printwnd.cpp printwnd.h \
		mainwindow.h \
		ui_printwnd.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o printwnd.o printwnd.cpp

runlogwnd.o: runlogwnd.cpp runlogwnd.h \
		mainwindow.h \
		ui_runlogwnd.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o runlogwnd.o runlogwnd.cpp

shieldcheck.o: shieldcheck.cpp shieldcheck.h \
		mainwindow.h \
		ui_shieldcheck.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o shieldcheck.o shieldcheck.cpp

sysgenwnd.o: sysgenwnd.cpp sysgenwnd.h \
		mainwindow.h \
		ui_sysgenwnd.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o sysgenwnd.o sysgenwnd.cpp

moc_counter.o: moc_counter.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_counter.o moc_counter.cpp

moc_initcfgwnd.o: moc_initcfgwnd.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_initcfgwnd.o moc_initcfgwnd.cpp

moc_jetstatus.o: moc_jetstatus.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_jetstatus.o moc_jetstatus.cpp

moc_lightstatuswnd.o: moc_lightstatuswnd.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_lightstatuswnd.o moc_lightstatuswnd.cpp

moc_magnetic.o: moc_magnetic.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_magnetic.o moc_magnetic.cpp

moc_maintainmanwnd.o: moc_maintainmanwnd.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_maintainmanwnd.o moc_maintainmanwnd.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_mainwnd.o: moc_mainwnd.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwnd.o moc_mainwnd.cpp

moc_newinfownd.o: moc_newinfownd.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_newinfownd.o moc_newinfownd.cpp

moc_opensytleSet.o: moc_opensytleSet.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_opensytleSet.o moc_opensytleSet.cpp

moc_penyinparamwnd.o: moc_penyinparamwnd.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_penyinparamwnd.o moc_penyinparamwnd.cpp

moc_printwnd.o: moc_printwnd.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_printwnd.o moc_printwnd.cpp

moc_runlogwnd.o: moc_runlogwnd.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_runlogwnd.o moc_runlogwnd.cpp

moc_shieldcheck.o: moc_shieldcheck.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_shieldcheck.o moc_shieldcheck.cpp

moc_sysgenwnd.o: moc_sysgenwnd.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_sysgenwnd.o moc_sysgenwnd.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

