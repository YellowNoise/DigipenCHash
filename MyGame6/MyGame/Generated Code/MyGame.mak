# Microsoft Developer Studio Generated NMAKE File, Based on MyGame.dsp
!IF "$(CFG)" == ""
CFG=MyGame - Win32 Release
!MESSAGE No configuration specified. Defaulting to MyGame - Win32 Release.
!ENDIF
!IF "$(CFG)" != "MyGame - Win32 Release"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE
!MESSAGE NMAKE /f "MyGame.mak" CFG="MyGame - Win32 Release"
!MESSAGE
!MESSAGE Possible choices for configuration are:
!MESSAGE
!MESSAGE "MyGame - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE
!ERROR An invalid configuration is specified.
!ENDIF

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF

!IF  "$(CFG)" == "MyGame - Win32 Release"

OUTDIR=..
INTDIR=.\Release
# Begin Custom Macros
OutDir=.
# End Custom Macros

ALL : "$(OUTDIR)\MyGame.exe"


"$(INTDIR)" :
	if not exist "$(INTDIR)/$(NULL)" mkdir "$(INTDIR)"
CPP=cl.exe
CPP_PROJ=/nologo /MT /W3 /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\ProjectFun" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\GUI" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Lua-5.1.2" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Engine" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Core" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Math" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Renderer" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\File3D" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\PAL" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Input" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\2DCollision" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\2DPhysics" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Sound" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Sound\OpenAL\Include" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Sound\Sound Formats\Wave\Include" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Sound\Sound Formats\Ogg\Include" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Network" /I "C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Pthread" /D "WIN32" /nologo /MT /W3 /D "NDEBUG" /D "_WINDOWS" /D "_MBCS" /FD /EHsc /GS /GR /Fo"Release/" /Fd"Release/vc70.pdb" /c /Wp64 /TP /O2 /Zc:forScope /Yc"MyGame_MainDeclarations.h" "MyGame_MainDeclarations.cpp" /Yu"MyGame_MainDeclarations.h" /Fp"MyGame_MainDeclarations.pch"

.c{$(INTDIR)}.obj::
	$(CPP) @<<
	$(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.obj::
	$(CPP) @<<
	$(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.obj::
	$(CPP) @<<
	$(CPP_PROJ) $< 
<<

.c{$(INTDIR)}.sbr::
	$(CPP) @<<
	$(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.sbr::
	$(CPP) @<<
	$(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.sbr::
	$(CPP) @<<
	$(CPP_PROJ) $< 
<<

RSC="c:\program files (x86)\microsoft sdks\windows\v7.0a\bin\rc.exe"
RSC_PROJ=/l 0x409 /fo"$(INTDIR)\MyGame.res" 


LINK32=link.exe
LINK32_FLAGS=kernel32.lib user32.lib gdi32.lib opengl32.lib shell32.lib glu32.lib winmm.lib Ws2_32.lib pthreadVC2_2010.lib OpenAL32.lib Vorbis.lib VorbisFile.lib VorbisEncoder.lib Ogg.lib PF.ProjectFun.lib PF.Core.lib PF.Engine.lib PF.PAL.lib PF.Main.lib PF.Renderer.lib PF.Math.lib PF.File3D.lib PF.Input.lib PF.2DCollision.lib PF.2DPhysics.lib PF.Sound.lib PF.Network.lib PF.GUI.lib PF.Lua.lib gdiplus.lib kernel32.lib /out:"$(OUTDIR)\MyGame.exe" /incremental:no /nologo /subsystem:windows /OPT:REF /OPT:ICF /machine:X86 /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\2DCollision" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\2DPhysics" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Core" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Engine" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\File3D" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Input" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Main" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Math" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Network" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\PAL" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Pthread" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Renderer" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Sound" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Sound\OpenAL\Lib" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Sound\Sound Formats\Ogg\Lib" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\ProjectFun" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\GUI" /libpath:"C:\Program Files (x86)\DigiPen\ProjectFUN2.0\ProjectFUNEngine\ProjectFUNEngine2010Express\Lua-5.1.2"
LINK32_OBJS= \
	"$(INTDIR)\MyGame_CollisionActors0.obj" \
	"$(INTDIR)\MyGame_Level0Objects.obj" \
	"$(INTDIR)\MyGame_LoadClass.obj" \
	"$(INTDIR)\MyGame_MainDeclarations.obj" \
	"$(INTDIR)\MyGame_MyGame.obj" \
	"$(INTDIR)\MyGame_MyLevelFactory.obj" \
	"$(INTDIR)\MyGame_MyLevelFactory_0_0.obj" \
	"$(INTDIR)\MyGame_MyLevelFactory_0_1.obj" \
	"$(INTDIR)\MyGame_MyLevelFactory_0_2.obj" \
	"$(INTDIR)\MyGame.res"


"$(OUTDIR)\MyGame.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
$(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 



!IF "$(CFG)" == "MyGame - Win32 Release"

SOURCE=.\MyGame.rc
"$(INTDIR)\MyGame.res" : $(SOURCE) "$(INTDIR)"
	$(RSC) $(RSC_PROJ) $(SOURCE)

SOURCE=.\MyGame_CollisionActors0.cpp

"$(INTDIR)\MyGame_CollisionActors0.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\MyGame_Level0Objects.cpp

"$(INTDIR)\MyGame_Level0Objects.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\MyGame_LoadClass.cpp

"$(INTDIR)\MyGame_LoadClass.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\MyGame_MainDeclarations.cpp

"$(INTDIR)\MyGame_MainDeclarations.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\MyGame_MyGame.cpp

"$(INTDIR)\MyGame_MyGame.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\MyGame_MyLevelFactory.cpp

"$(INTDIR)\MyGame_MyLevelFactory.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\MyGame_MyLevelFactory_0_0.cpp

"$(INTDIR)\MyGame_MyLevelFactory_0_0.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\MyGame_MyLevelFactory_0_1.cpp

"$(INTDIR)\MyGame_MyLevelFactory_0_1.obj" : $(SOURCE) "$(INTDIR)"

SOURCE=.\MyGame_MyLevelFactory_0_2.cpp

"$(INTDIR)\MyGame_MyLevelFactory_0_2.obj" : $(SOURCE) "$(INTDIR)"




!ENDIF
