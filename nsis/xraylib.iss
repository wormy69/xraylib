; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#ifdef XRL64
#define MyAppName "xraylib 64-bit"
#define MyAppId "xraylib_64"
#define srcdir "C:\msys\1.0\" + abs_top_srcdir_win
#define builddir "C:\msys\1.0\" + abs_top_builddir_win
#else
#define MyAppName "xraylib 32-bit"
#define MyAppId "xraylib"
#define srcdir "C:\MinGW\msys\1.0\" + abs_top_srcdir_win
#define builddir "C:\MinGW\msys\1.0\" + abs_top_builddir_win
#endif
;#define MyAppVersion "2.17.0"
#define MyAppPublisher "Tom Schoonjans"
#define MyAppURL "http://github.com/tschoonj/xraylib"



[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
;AppId={{09253190-AB34-4A62-9A2A-930AE94FCF32}
AppName={#MyAppName}
AppId={#MyAppId}
AppVersion={#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={pf}\{#MyAppName}
DefaultGroupName={#MyAppName}
DisableProgramGroupPage=yes
LicenseFile={#srcdir}\nsis\License.rtf
OutputDir={#builddir}\nsis
#ifdef XRL64
OutputBaseFilename=xraylib-{#MyAppVersion}-win64
ArchitecturesInstallIn64BitMode=x64
ArchitecturesAllowed=x64
#else
OutputBaseFilename=xraylib-{#MyAppVersion}-win32
#endif
Compression=lzma
ChangesEnvironment=yes
SetupLogging=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Types]
Name: "minimal" ; Description: "Minimal installation"
Name: "full" ; Description: "Full installation"
Name: "custom" ; Description: "Custom installation" ; Flags: iscustom

[Components]
Name: "core" ; Description: "xraylib shared library and documentation" ; Flags: fixed ; Types: full minimal custom
Name: "sdk" ; Description: "SDK: headers and static libraries" ; Types: full 
Name: "dotnet" ; Description: ".NET/C# bindings" ; Types: full 
#ifndef XRL64
Name: "idl" ; Description: "IDL bindings" ; Types: full 
#endif
Name: "python" ; Description: "Python bindings" ; Types: full 
Name: "python/2_6" ; Description: "Python 2.6" ; Flags: exclusive
Name: "python/2_7" ; Description: "Python 2.7" ; Types: full ; Flags: exclusive 
Name: "python/3_1" ; Description: "Python 3.1" ; Flags: exclusive 
Name: "python/3_2" ; Description: "Python 3.2" ; Flags: exclusive 
Name: "python/3_3" ; Description: "Python 3.3" ; Flags: exclusive 

[Files]
Source: "{#builddir}\src\.libs\libxrl-{#LIB_CURRENT_MINUS_AGE}.dll"; DestDir: "{sys}" ; Flags: sharedfile ; Components: core
Source: "{#builddir}\nsis\README.txt" ; DestDir: "{app}" ; Flags: isreadme ; Components: core
Source: "{#builddir}\nsis\AUTHORS.txt" ; DestDir: "{app}" ; Components: core
Source: "{#builddir}\nsis\BUGS.txt" ; DestDir: "{app}" ; Components: core
Source: "{#builddir}\nsis\Changelog.txt" ; DestDir: "{app}" ; Components: core
Source: "{#builddir}\nsis\TODO.txt" ; DestDir: "{app}" ; Components: core
Source: "{#builddir}\nsis\xraybanner.txt" ; DestDir: "{app}\Doc" ; Components: core
Source: "{#builddir}\nsis\xraydoc.txt" ; DestDir: "{app}\Doc" ; Components: core
Source: "{#builddir}\nsis\xrayfunc.txt" ; DestDir: "{app}\Doc" ; Components: core
Source: "{#builddir}\nsis\xrayhelp.txt" ; DestDir: "{app}\Doc" ; Components: core

Source: "{#builddir}\nsis\libxrl-{#LIB_CURRENT_MINUS_AGE}.lib" ; DestDir: "{app}\Lib" ; Components: sdk
#ifndef XRL64
Source: "{#builddir}\nsis\libxrl-{#LIB_CURRENT_MINUS_AGE}-bcc.lib" ; DestDir: "{app}\Lib" ; Components: sdk
#endif
Source: "{#builddir}\nsis\libxrl-{#LIB_CURRENT_MINUS_AGE}.exp" ; DestDir: "{app}\Lib" ; Components: sdk
Source: "{#builddir}\src\.libs\libxrl.a" ; DestDir: "{app}\Lib" ; Components: sdk
Source: "{#builddir}\src\.libs\libxrl.dll.a" ; DestDir: "{app}\Lib" ; Components: sdk
Source: "{#builddir}\src\libxrl-{#LIB_CURRENT_MINUS_AGE}.def" ; DestDir: "{app}\Lib" ; Components: sdk
Source: "{#builddir}\nsis\README2.txt" ; DestDir: "{app}\Doc" ; DestName: "README.txt";Components: sdk
Source: "{#builddir}\nsis\xrlexample1.c" ; DestDir: "{app}\Example" ; Components: sdk
Source: "{#builddir}\nsis\xrlexample6.cpp" ; DestDir: "{app}\Example" ; Components: sdk
Source: "{#builddir}\nsis\xraylib.h" ; DestDir: "{app}\Include" ; Components: sdk
Source: "{#builddir}\nsis\xraylib-parser.h" ; DestDir: "{app}\Include" ; Components: sdk
Source: "{#builddir}\nsis\xraylib-lines.h" ; DestDir: "{app}\Include" ; Components: sdk
Source: "{#builddir}\nsis\xraylib-shells.h" ; DestDir: "{app}\Include" ; Components: sdk
Source: "{#builddir}\nsis\xraylib-auger.h" ; DestDir: "{app}\Include" ; Components: sdk
Source: "{#builddir}\nsis\xraylib-crystal-diffraction.h" ; DestDir: "{app}\Include" ; Components: sdk
Source: "{#builddir}\nsis\xraylib-defs.h" ; DestDir: "{app}\Include" ; Components: sdk
Source: "{#builddir}\nsis\xraylib-nist-compounds.h" ; DestDir: "{app}\Include" ; Components: sdk

#ifdef XRL64
Source: "{#srcdir}\nsis\dotNet64\XrayLib.NET.dll" ; DestDir: "{app}\Lib" ; Components: dotnet ; Flags: sharedfile
#else
Source: "{#srcdir}\nsis\dotNet32\XrayLib.NET.dll" ; DestDir: "{app}\Lib" ; Components: dotnet ; Flags: sharedfile
#endif
Source: "{#builddir}\nsis\xrlexample8.cs" ; DestDir: "{app}\Example" ; Components: dotnet
Source: "{#srcdir}\nsis\dotNet\XrayLibNET.chm" ; DestDir: "{app}\Doc" ; Components: dotnet

Source: "{#builddir}\nsis\xrlexample4.pro" ; DestDir: "{app}\Example" ; Components: idl
;Source: "{#builddir}\idl\.libs\libxrlidl.dll"; DestDir: "{app}\dlm" ; Flags: sharedfile ; Components: idl
Source: "{#builddir}\nsis\libxrlidl.dll"; DestDir: "{app}\dlm" ; Flags: sharedfile ; Components: idl
Source: "{#builddir}\nsis\libxrlidl.dlm"; DestDir: "{app}\dlm" ; Components: idl
Source: "{#builddir}\nsis\xraylib.pro"; DestDir: "{app}\pro" ; Components: idl
Source: "{#builddir}\nsis\xraylib_help.pro"; DestDir: "{app}\pro" ; Components: idl
Source: "{#builddir}\nsis\xraylib_lines.pro"; DestDir: "{app}\pro" ; Components: idl
Source: "{#builddir}\nsis\xraylib_shells.pro"; DestDir: "{app}\pro" ; Components: idl
Source: "{#builddir}\nsis\xraylib_auger.pro"; DestDir: "{app}\pro" ; Components: idl
Source: "{#builddir}\nsis\xraylib_nist_compounds.pro"; DestDir: "{app}\pro" ; Components: idl
Source: "{#srcdir}\nsis\msvcrt\vcredist_x86_100.exe" ; Flags: deleteafterinstall ; DestDir: "{tmp}" ; Components: idl
#endif

Source: "{#builddir}\nsis\xrlexample5.py" ; DestDir: "{app}\Example" ; Components: python
Source: "{#builddir}\nsis\xraylib.py" ; DestDir: "{app}\Python" ; Components: python
Source: "{#builddir}\nsis\xrayhelp.py" ; DestDir: "{app}\Python" ; Components: python
Source: "{#builddir}\nsis\xraymessages.py" ; DestDir: "{app}\Python" ; Components: python
Source: "{#builddir}\nsis\xraylib-cli.py" ; DestDir: "{app}\Bin" ; Components: python
Source: "{#builddir}\nsis\python\python2.6\_xraylib.pyd" ; DestDir: "{app}\Python" ; Components: "python/2_6"
Source: "{#builddir}\nsis\python\python2.7\_xraylib.pyd" ; DestDir: "{app}\Python" ; Components: "python/2_7"
Source: "{#builddir}\nsis\python\python3.1\_xraylib.pyd" ; DestDir: "{app}\Python" ; Components: "python/3_1"
Source: "{#builddir}\nsis\python\python3.2\_xraylib.pyd" ; DestDir: "{app}\Python" ; Components: "python/3_2"
Source: "{#builddir}\nsis\python\python3.3\_xraylib.pyd" ; DestDir: "{app}\Python" ; Components: "python/3_3"

[Icons]
Name: "{group}\{cm:UninstallProgram,{#MyAppName}}"; Filename: "{uninstallexe}"

#ifndef XRL64
[Run]
Filename: "{tmp}\vcredist_x86_100.exe" ; Parameters: "/q" ; StatusMsg: "Installing Visual Studio 2010 C++ CRT Libraries if required..." ; Components: idl   
#endif

[UninstallDelete]
Type: filesandordirs ; Name: "{app}\Python\__pycache__"
Type: files ; Name: "{app}\Python\*.pyc"
Type: files ; Name: "{app}\Python\*.pyo"
Type: dirifempty ; Name: "{app}\Python"
Type: dirifempty ; Name: "{app}"

[Registry]
Root: HKLM; Subkey: "Software\xraylib" ; ValueType: string ; ValueName: "" ; ValueData: "{app}" ; Flags: uninsdeletekey
#ifndef XRL64
Root: HKLM ; Subkey: "SYSTEM\CurrentControlSet\Control\Session Manager\Environment"; ValueType: expandsz; ValueName: "IDL_DLM_PATH"; ValueData: "<IDL_DEFAULT>" ; Flags: createvalueifdoesntexist ; Components: idl
Root: HKLM ; Subkey: "SYSTEM\CurrentControlSet\Control\Session Manager\Environment"; ValueType: expandsz; ValueName: "IDL_DLM_PATH"; ValueData: "{olddata};{app}\dlm" ; Components: idl
Root: HKLM ; Subkey: "SYSTEM\CurrentControlSet\Control\Session Manager\Environment"; ValueType: expandsz; ValueName: "IDL_PATH"; ValueData: "<IDL_DEFAULT>" ; Flags: createvalueifdoesntexist ; Components: idl
Root: HKLM ; Subkey: "SYSTEM\CurrentControlSet\Control\Session Manager\Environment"; ValueType: expandsz; ValueName: "IDL_PATH"; ValueData: "{olddata};{app}\pro" ; Components: idl
#endif

Root: HKLM ; Subkey: "SYSTEM\CurrentControlSet\Control\Session Manager\Environment"; ValueType: expandsz; ValueName: "PYTHONPATH"; ValueData: "{olddata};{app}\Python" ; Components: python 
Root: HKLM ; Subkey: "SYSTEM\CurrentControlSet\Control\Session Manager\Environment"; ValueType: expandsz; ValueName: "PATH"; ValueData: "{olddata};{app}\Bin" ; Components: python 

[Code]
/////////////////////////////////////////////////////////////////////
function GetUninstallString(): String;
var
  sUnInstPath: String;
  sUnInstallString: String;
begin
  sUnInstallString := '';
#ifdef XRL64
  sUnInstPath := ExpandConstant('Software\Microsoft\Windows\CurrentVersion\Uninstall\xraylib_64_is1');
#else
  sUnInstPath := ExpandConstant('Software\Microsoft\Windows\CurrentVersion\Uninstall\xraylib_is1');
#endif
  if not RegQueryStringValue(HKLM, sUnInstPath, 'UninstallString', sUnInstallString) then
    begin
    sUnInstPath := ExpandConstant('Software\Microsoft\Windows\CurrentVersion\Uninstall\xraylib');
    RegQueryStringValue(HKLM, sUnInstPath, 'QuietUninstallString', sUnInstallString);
  end
  else
  begin
	//innosetups QuietUninstallString is not as silent as I would like...
	sUnInstallString := sUnInstallString + ' /VERYSILENT';
  end;
  Log('QuietUninstallString: '+ sUnInstallString);
  Result := sUnInstallString;
end;


/////////////////////////////////////////////////////////////////////
function IsUpgrade(): Boolean;
begin
  Result := (GetUninstallString() <> '');
end;


/////////////////////////////////////////////////////////////////////
function UnInstallOldVersion(): Integer;
var
  sUnInstallString: String;
  iResultCode: Integer;
begin
// Return Values:
// 1 - uninstall string is empty
// 2 - error executing the UnInstallString
// 3 - successfully executed the UnInstallString

  // default return value
  Result := 0;

  // get the uninstall string of the old app
  sUnInstallString := GetUninstallString();
  if sUnInstallString <> '' then begin
    //sUnInstallString := RemoveQuotes(sUnInstallString);
    if Exec('>',sUnInstallString,'', SW_HIDE, ewWaitUntilTerminated, iResultCode) then
      Result := 3
    else
      Result := 2;
  end else
    Result := 1;
end;

function InitializeSetup(): Boolean;

begin
  Result := True;
  if (IsUpgrade()) then
  begin
    //launch dialog when not operating in silent mode
      if (WizardSilent()) then
      begin
        UnInstallOldVersion();
      end
      else
      begin
	//display msgbox
	if (MsgBox('A previously installed version of xraylib was found on the system. It has to be uninstalled before the installation can proceed.', mbConfirmation, MB_OKCANCEL)) = IDOK then
	begin
        	UnInstallOldVersion();
	end
	else
	begin
  		Result := False;
	end;
      end;
  end;
end;


procedure CurUninstallStepChanged(CurUninstallStep: TUninstallStep);
var
  BinDir, Path: String;
begin
  if (CurUninstallStep = usPostUninstall)
     and (RegQueryStringValue(HKEY_LOCAL_MACHINE, 'SYSTEM\CurrentControlSet\Control\Session Manager\Environment', 'PATH', Path)) then
  begin
    BinDir := ExpandConstant('{app}\Bin');
    if Pos(';' + LowerCase(BinDir), Lowercase(Path)) <> 0 then
    begin
      StringChange(Path, ';' + BinDir, '');
      RegWriteStringValue(HKEY_LOCAL_MACHINE, 'SYSTEM\CurrentControlSet\Control\Session Manager\Environment', 'PATH', Path);
    end;
  end;
  if (CurUninstallStep = usPostUninstall)
     and (RegQueryStringValue(HKEY_LOCAL_MACHINE, 'SYSTEM\CurrentControlSet\Control\Session Manager\Environment', 'PYTHONPATH', Path)) then
  begin
    BinDir := ExpandConstant('{app}\Python');
    if Pos(';' + LowerCase(BinDir), Lowercase(Path)) <> 0 then
    begin
      StringChange(Path, ';' + BinDir, '');
      if Length(Path) = 0 then
      begin
	RegDeleteValue(HKEY_LOCAL_MACHINE, 'SYSTEM\CurrentControlSet\Control\Session Manager\Environment', 'PYTHONPATH')
      end
      else
      begin
        RegWriteStringValue(HKEY_LOCAL_MACHINE, 'SYSTEM\CurrentControlSet\Control\Session Manager\Environment', 'PYTHONPATH', Path);
      end;
    end;
  end;
#ifndef XRL64
  if (CurUninstallStep = usPostUninstall)
     and (RegQueryStringValue(HKEY_LOCAL_MACHINE, 'SYSTEM\CurrentControlSet\Control\Session Manager\Environment', 'IDL_DLM_PATH', Path)) then
  begin
    BinDir := ExpandConstant('{app}\dlm');
    if Pos(';' + LowerCase(BinDir), Lowercase(Path)) <> 0 then
    begin
      StringChange(Path, ';' + BinDir, '');
      if CompareStr(Path,'<IDL_DEFAULT>') = 0 then
      begin
	RegDeleteValue(HKEY_LOCAL_MACHINE, 'SYSTEM\CurrentControlSet\Control\Session Manager\Environment', 'IDL_DLM_PATH')
      end
      else
      begin
        RegWriteStringValue(HKEY_LOCAL_MACHINE, 'SYSTEM\CurrentControlSet\Control\Session Manager\Environment', 'IDL_DLM_PATH', Path);
      end
    end;
  end;
  if (CurUninstallStep = usPostUninstall)
     and (RegQueryStringValue(HKEY_LOCAL_MACHINE, 'SYSTEM\CurrentControlSet\Control\Session Manager\Environment', 'IDL_PATH', Path)) then
  begin
    BinDir := ExpandConstant('{app}\pro');
    if Pos(';' + LowerCase(BinDir), Lowercase(Path)) <> 0 then
    begin
      StringChange(Path, ';' + BinDir, '');
      if CompareStr(Path,'<IDL_DEFAULT>') = 0 then
      begin
	RegDeleteValue(HKEY_LOCAL_MACHINE, 'SYSTEM\CurrentControlSet\Control\Session Manager\Environment', 'IDL_PATH')
      end
      else
      begin
        RegWriteStringValue(HKEY_LOCAL_MACHINE, 'SYSTEM\CurrentControlSet\Control\Session Manager\Environment', 'IDL_PATH', Path);
      end
    end;
  end;
#endif
end;

