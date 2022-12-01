##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Lab3
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/utente/Codelite_workspace_LdP
ProjectPath            :=C:/Users/utente/Codelite_workspace_LdP/Lab3
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/Lab3
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=utente
Date                   :=30/11/2022
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
Objects0=$(IntermediateDirectory)/Es2.cpp$(ObjectSuffix) $(IntermediateDirectory)/Es3.cpp$(ObjectSuffix) $(IntermediateDirectory)/Es1.cpp$(ObjectSuffix) $(IntermediateDirectory)/Es4.cpp$(ObjectSuffix) $(IntermediateDirectory)/MyVector.cpp$(ObjectSuffix) 



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
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/utente/Codelite_workspace_LdP/Lab3/Es2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Es2.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Es2.cpp$(DependSuffix): Es2.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Es2.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Es2.cpp$(DependSuffix) -MM Es2.cpp

$(IntermediateDirectory)/Es2.cpp$(PreprocessSuffix): Es2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Es2.cpp$(PreprocessSuffix) Es2.cpp

$(IntermediateDirectory)/Es3.cpp$(ObjectSuffix): Es3.cpp $(IntermediateDirectory)/Es3.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/utente/Codelite_workspace_LdP/Lab3/Es3.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Es3.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Es3.cpp$(DependSuffix): Es3.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Es3.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Es3.cpp$(DependSuffix) -MM Es3.cpp

$(IntermediateDirectory)/Es3.cpp$(PreprocessSuffix): Es3.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Es3.cpp$(PreprocessSuffix) Es3.cpp

$(IntermediateDirectory)/Es1.cpp$(ObjectSuffix): Es1.cpp $(IntermediateDirectory)/Es1.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/utente/Codelite_workspace_LdP/Lab3/Es1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Es1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Es1.cpp$(DependSuffix): Es1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Es1.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Es1.cpp$(DependSuffix) -MM Es1.cpp

$(IntermediateDirectory)/Es1.cpp$(PreprocessSuffix): Es1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Es1.cpp$(PreprocessSuffix) Es1.cpp

$(IntermediateDirectory)/Es4.cpp$(ObjectSuffix): Es4.cpp $(IntermediateDirectory)/Es4.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/utente/Codelite_workspace_LdP/Lab3/Es4.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Es4.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Es4.cpp$(DependSuffix): Es4.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Es4.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Es4.cpp$(DependSuffix) -MM Es4.cpp

$(IntermediateDirectory)/Es4.cpp$(PreprocessSuffix): Es4.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Es4.cpp$(PreprocessSuffix) Es4.cpp

$(IntermediateDirectory)/MyVector.cpp$(ObjectSuffix): MyVector.cpp $(IntermediateDirectory)/MyVector.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/utente/Codelite_workspace_LdP/Lab3/MyVector.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MyVector.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MyVector.cpp$(DependSuffix): MyVector.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MyVector.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MyVector.cpp$(DependSuffix) -MM MyVector.cpp

$(IntermediateDirectory)/MyVector.cpp$(PreprocessSuffix): MyVector.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MyVector.cpp$(PreprocessSuffix) MyVector.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


