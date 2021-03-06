#############################################################################
# Makefile for building: trader
# Generated by qmake (2.01a) (Qt 4.8.7) on: ?? 7? 20 16:20:22 2017
# Project:  trader.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt4/bin/qmake -o Makefile trader.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_XML_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtXml -I/usr/include/qt4 -I. -I.tmp
LINK          = g++
LFLAGS        = -m64 -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -lQtXml -lQtGui -lQtNetwork -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/x86_64-linux-gnu/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
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

OBJECTS_DIR   = .tmp/

####### Files

SOURCES       = main.cpp \
		mainwidget.cpp \
		util.cpp \
		stockinfo.cpp \
		parser.cpp \
		request.cpp .tmp/moc_mainwidget.cpp \
		.tmp/moc_util.cpp \
		.tmp/moc_stockinfo.cpp \
		.tmp/moc_parser.cpp \
		.tmp/moc_request.cpp
OBJECTS       = .tmp/main.o \
		.tmp/mainwidget.o \
		.tmp/util.o \
		.tmp/stockinfo.o \
		.tmp/parser.o \
		.tmp/request.o \
		.tmp/moc_mainwidget.o \
		.tmp/moc_util.o \
		.tmp/moc_stockinfo.o \
		.tmp/moc_parser.o \
		.tmp/moc_request.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		trader.pro
QMAKE_TARGET  = trader
DESTDIR       = 
TARGET        = trader

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

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: trader.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_phonon.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/lib/x86_64-linux-gnu/libQtXml.prl \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtNetwork.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -o Makefile trader.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_phonon.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/lib/x86_64-linux-gnu/libQtXml.prl:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtNetwork.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile trader.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/trader1.0.0 || $(MKDIR) .tmp/trader1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/trader1.0.0/ && $(COPY_FILE) --parents mainwidget.h util.h stockinfo.h parser.h request.h .tmp/trader1.0.0/ && $(COPY_FILE) --parents main.cpp mainwidget.cpp util.cpp stockinfo.cpp parser.cpp request.cpp .tmp/trader1.0.0/ && (cd `dirname .tmp/trader1.0.0` && $(TAR) trader1.0.0.tar trader1.0.0 && $(COMPRESS) trader1.0.0.tar) && $(MOVE) `dirname .tmp/trader1.0.0`/trader1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/trader1.0.0


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

compiler_moc_header_make_all: .tmp/moc_mainwidget.cpp .tmp/moc_util.cpp .tmp/moc_stockinfo.cpp .tmp/moc_parser.cpp .tmp/moc_request.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) .tmp/moc_mainwidget.cpp .tmp/moc_util.cpp .tmp/moc_stockinfo.cpp .tmp/moc_parser.cpp .tmp/moc_request.cpp
.tmp/moc_mainwidget.cpp: mainwidget.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) mainwidget.h -o .tmp/moc_mainwidget.cpp

.tmp/moc_util.cpp: stockinfo.h \
		util.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) util.h -o .tmp/moc_util.cpp

.tmp/moc_stockinfo.cpp: stockinfo.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) stockinfo.h -o .tmp/moc_stockinfo.cpp

.tmp/moc_parser.cpp: parser.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) parser.h -o .tmp/moc_parser.cpp

.tmp/moc_request.cpp: request.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) request.h -o .tmp/moc_request.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: .tmp/qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) .tmp/qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

.tmp/main.o: main.cpp mainwidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/main.o main.cpp

.tmp/mainwidget.o: mainwidget.cpp mainwidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/mainwidget.o mainwidget.cpp

.tmp/util.o: util.cpp util.h \
		stockinfo.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/util.o util.cpp

.tmp/stockinfo.o: stockinfo.cpp stockinfo.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/stockinfo.o stockinfo.cpp

.tmp/parser.o: parser.cpp parser.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/parser.o parser.cpp

.tmp/request.o: request.cpp request.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/request.o request.cpp

.tmp/moc_mainwidget.o: .tmp/moc_mainwidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/moc_mainwidget.o .tmp/moc_mainwidget.cpp

.tmp/moc_util.o: .tmp/moc_util.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/moc_util.o .tmp/moc_util.cpp

.tmp/moc_stockinfo.o: .tmp/moc_stockinfo.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/moc_stockinfo.o .tmp/moc_stockinfo.cpp

.tmp/moc_parser.o: .tmp/moc_parser.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/moc_parser.o .tmp/moc_parser.cpp

.tmp/moc_request.o: .tmp/moc_request.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .tmp/moc_request.o .tmp/moc_request.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

