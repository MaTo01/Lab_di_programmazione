##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Lab4
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/utente/Codelite_workspace_LdP
ProjectPath            :=C:/Users/utente/Codelite_workspace_LdP/Lab4
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/Lab4
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=utente
Date                   :=29/11/2022
CodeLitePath           :="C:/Program Files/CodeLite"
MakeDirCommand         :=mkdir
LinkerName             :=C:/msys64/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/msys64/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/utente/Codelite_workspace_LdP/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/msys64/mingw64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/msys64/mingw64/bin/ar.exe rcu
CXX      := C:/msys64/mingw64/bin/g++.exe
CC       := C:/msys64/mingw64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/msys64/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Es2.cpp$(ObjectSuffix) $(IntermediateDirectory)/Es1_2.cpp$(ObjectSuffix) $(IntermediateDirectory)/Es1_1.cpp$(ObjectSuffix) $(IntermediateDirectory)/Es1_3.cpp$(ObjectSuffix) $(IntermediateDirectory)/Link.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Es2.cpp$(ObjectSuffix): Es2.cpp $(IntermediateDirectory)/Es2.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/utente/Codelite_workspace_LdP/Lab4/Es2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Es2.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Es2.cpp$(DependSuffix): Es2.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Es2.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Es2.cpp$(DependSuffix) -MM Es2.cpp

$(IntermediateDirectory)/Es2.cpp$(PreprocessSuffix): Es2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Es2.cpp$(PreprocessSuffix) Es2.cpp

$(IntermediateDirectory)/Es1_2.cpp$(ObjectSuffix): Es1_2.cpp $(IntermediateDirectory)/Es1_2.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/utente/Codelite_workspace_LdP/Lab4/Es1_2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Es1_2.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Es1_2.cpp$(DependSuffix): Es1_2.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Es1_2.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Es1_2.cpp$(DependSuffix) -MM Es1_2.cpp

$(IntermediateDirectory)/Es1_2.cpp$(PreprocessSuffix): Es1_2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Es1_2.cpp$(PreprocessSuffix) Es1_2.cpp

$(IntermediateDirectory)/Es1_1.cpp$(ObjectSuffix): Es1_1.cpp $(IntermediateDirectory)/Es1_1.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/utente/Codelite_workspace_LdP/Lab4/Es1_1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Es1_1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Es1_1.cpp$(DependSuffix): Es1_1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Es1_1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Es1_1.cpp$(DependSuffix) -MM Es1_1.cpp

$(IntermediateDirectory)/Es1_1.cpp$(PreprocessSuffix): Es1_1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Es1_1.cpp$(PreprocessSuffix) Es1_1.cpp

$(IntermediateDirectory)/Es1_3.cpp$(ObjectSuffix): Es1_3.cpp $(IntermediateDirectory)/Es1_3.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/utente/Codelite_workspace_LdP/Lab4/Es1_3.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Es1_3.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Es1_3.cpp$(DependSuffix): Es1_3.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Es1_3.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Es1_3.cpp$(DependSuffix) -MM Es1_3.cpp

$(IntermediateDirectory)/Es1_3.cpp$(PreprocessSuffix): Es1_3.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Es1_3.cpp$(PreprocessSuffix) Es1_3.cpp

$(IntermediateDirectory)/Link.cpp$(ObjectSuffix): Link.cpp $(IntermediateDirectory)/Link.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/utente/Codelite_workspace_LdP/Lab4/Link.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Link.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Link.cpp$(DependSuffix): Link.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Link.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Link.cpp$(DependSuffix) -MM Link.cpp

$(IntermediateDirectory)/Link.cpp$(PreprocessSuffix): Link.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Link.cpp$(PreprocessSuffix) Link.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


