#pragma once
#include <array>

namespace Exports
{
	constexpr std::array<const char*, 181> ExportNames_winmm =
	{
		"CloseDriver",
		"DefDriverProc",
		"DriverCallback",
		"DrvGetModuleHandle",
		"GetDriverModuleHandle",
		"OpenDriver",
		"PlaySound",
		"PlaySoundA",
		"PlaySoundW",
		"SendDriverMessage",
		"WOWAppExit",
		"auxGetDevCapsA",
		"auxGetDevCapsW",
		"auxGetNumDevs",
		"auxGetVolume",
		"auxOutMessage",
		"auxSetVolume",
		"joyConfigChanged",
		"joyGetDevCapsA",
		"joyGetDevCapsW",
		"joyGetNumDevs",
		"joyGetPos",
		"joyGetPosEx",
		"joyGetThreshold",
		"joyReleaseCapture",
		"joySetCapture",
		"joySetThreshold",
		"mciDriverNotify",
		"mciDriverYield",
		"mciExecute",
		"mciFreeCommandResource",
		"mciGetCreatorTask",
		"mciGetDeviceIDA",
		"mciGetDeviceIDFromElementIDA",
		"mciGetDeviceIDFromElementIDW",
		"mciGetDeviceIDW",
		"mciGetDriverData",
		"mciGetErrorStringA",
		"mciGetErrorStringW",
		"mciGetYieldProc",
		"mciLoadCommandResource",
		"mciSendCommandA",
		"mciSendCommandW",
		"mciSendStringA",
		"mciSendStringW",
		"mciSetDriverData",
		"mciSetYieldProc",
		"midiConnect",
		"midiDisconnect",
		"midiInAddBuffer",
		"midiInClose",
		"midiInGetDevCapsA",
		"midiInGetDevCapsW",
		"midiInGetErrorTextA",
		"midiInGetErrorTextW",
		"midiInGetID",
		"midiInGetNumDevs",
		"midiInMessage",
		"midiInOpen",
		"midiInPrepareHeader",
		"midiInReset",
		"midiInStart",
		"midiInStop",
		"midiInUnprepareHeader",
		"midiOutCacheDrumPatches",
		"midiOutCachePatches",
		"midiOutClose",
		"midiOutGetDevCapsA",
		"midiOutGetDevCapsW",
		"midiOutGetErrorTextA",
		"midiOutGetErrorTextW",
		"midiOutGetID",
		"midiOutGetNumDevs",
		"midiOutGetVolume",
		"midiOutLongMsg",
		"midiOutMessage",
		"midiOutOpen",
		"midiOutPrepareHeader",
		"midiOutReset",
		"midiOutSetVolume",
		"midiOutShortMsg",
		"midiOutUnprepareHeader",
		"midiStreamClose",
		"midiStreamOpen",
		"midiStreamOut",
		"midiStreamPause",
		"midiStreamPosition",
		"midiStreamProperty",
		"midiStreamRestart",
		"midiStreamStop",
		"mixerClose",
		"mixerGetControlDetailsA",
		"mixerGetControlDetailsW",
		"mixerGetDevCapsA",
		"mixerGetDevCapsW",
		"mixerGetID",
		"mixerGetLineControlsA",
		"mixerGetLineControlsW",
		"mixerGetLineInfoA",
		"mixerGetLineInfoW",
		"mixerGetNumDevs",
		"mixerMessage",
		"mixerOpen",
		"mixerSetControlDetails",
		"mmDrvInstall",
		"mmGetCurrentTask",
		"mmTaskBlock",
		"mmTaskCreate",
		"mmTaskSignal",
		"mmTaskYield",
		"mmioAdvance",
		"mmioAscend",
		"mmioClose",
		"mmioCreateChunk",
		"mmioDescend",
		"mmioFlush",
		"mmioGetInfo",
		"mmioInstallIOProcA",
		"mmioInstallIOProcW",
		"mmioOpenA",
		"mmioOpenW",
		"mmioRead",
		"mmioRenameA",
		"mmioRenameW",
		"mmioSeek",
		"mmioSendMessage",
		"mmioSetBuffer",
		"mmioSetInfo",
		"mmioStringToFOURCCA",
		"mmioStringToFOURCCW",
		"mmioWrite",
		"mmsystemGetVersion",
		"sndPlaySoundA",
		"sndPlaySoundW",
		"timeBeginPeriod",
		"timeEndPeriod",
		"timeGetDevCaps",
		"timeGetSystemTime",
		"timeGetTime",
		"timeKillEvent",
		"timeSetEvent",
		"waveInAddBuffer",
		"waveInClose",
		"waveInGetDevCapsA",
		"waveInGetDevCapsW",
		"waveInGetErrorTextA",
		"waveInGetErrorTextW",
		"waveInGetID",
		"waveInGetNumDevs",
		"waveInGetPosition",
		"waveInMessage",
		"waveInOpen",
		"waveInPrepareHeader",
		"waveInReset",
		"waveInStart",
		"waveInStop",
		"waveInUnprepareHeader",
		"waveOutBreakLoop",
		"waveOutClose",
		"waveOutGetDevCapsA",
		"waveOutGetDevCapsW",
		"waveOutGetErrorTextA",
		"waveOutGetErrorTextW",
		"waveOutGetID",
		"waveOutGetNumDevs",
		"waveOutGetPitch",
		"waveOutGetPlaybackRate",
		"waveOutGetPosition",
		"waveOutGetVolume",
		"waveOutMessage",
		"waveOutOpen",
		"waveOutPause",
		"waveOutPrepareHeader",
		"waveOutReset",
		"waveOutRestart",
		"waveOutSetPitch",
		"waveOutSetPlaybackRate",
		"waveOutSetVolume",
		"waveOutUnprepareHeader",
		"waveOutWrite",
		"ExportByOrdinal2"
	};

	constexpr std::array<const char*, 65> ExportNames_winhttp =
	{
		"Private1",
		"SvchostPushServiceGlobals",
		"WinHttpAddRequestHeaders",
		"WinHttpAutoProxySvcMain",
		"WinHttpCheckPlatform",
		"WinHttpCloseHandle",
		"WinHttpConnect",
		"WinHttpConnectionDeletePolicyEntries",
		"WinHttpConnectionDeleteProxyInfo",
		"WinHttpConnectionFreeNameList",
		"WinHttpConnectionFreeProxyInfo",
		"WinHttpConnectionFreeProxyList",
		"WinHttpConnectionGetNameList",
		"WinHttpConnectionGetProxyInfo",
		"WinHttpConnectionGetProxyList",
		"WinHttpConnectionSetPolicyEntries",
		"WinHttpConnectionSetProxyInfo",
		"WinHttpConnectionUpdateIfIndexTable",
		"WinHttpCrackUrl",
		"WinHttpCreateProxyResolver",
		"WinHttpCreateUrl",
		"WinHttpDetectAutoProxyConfigUrl",
		"WinHttpFreeProxyResult",
		"WinHttpFreeProxyResultEx",
		"WinHttpFreeProxySettings",
		"WinHttpGetDefaultProxyConfiguration",
		"WinHttpGetIEProxyConfigForCurrentUser",
		"WinHttpGetProxyForUrl",
		"WinHttpGetProxyForUrlEx",
		"WinHttpGetProxyForUrlEx2",
		"WinHttpGetProxyForUrlHvsi",
		"WinHttpGetProxyResult",
		"WinHttpGetProxyResultEx",
		"WinHttpGetProxySettingsVersion",
		"WinHttpGetTunnelSocket",
		"WinHttpOpen",
		"WinHttpOpenRequest",
		"WinHttpPacJsWorkerMain",
		"WinHttpProbeConnectivity",
		"WinHttpQueryAuthSchemes",
		"WinHttpQueryDataAvailable",
		"WinHttpQueryHeaders",
		"WinHttpQueryOption",
		"WinHttpReadData",
		"WinHttpReadProxySettings",
		"WinHttpReadProxySettingsHvsi",
		"WinHttpReceiveResponse",
		"WinHttpResetAutoProxy",
		"WinHttpSaveProxyCredentials",
		"WinHttpSendRequest",
		"WinHttpSetCredentials",
		"WinHttpSetDefaultProxyConfiguration",
		"WinHttpSetOption",
		"WinHttpSetStatusCallback",
		"WinHttpSetTimeouts",
		"WinHttpTimeFromSystemTime",
		"WinHttpTimeToSystemTime",
		"WinHttpWebSocketClose",
		"WinHttpWebSocketCompleteUpgrade",
		"WinHttpWebSocketQueryCloseStatus",
		"WinHttpWebSocketReceive",
		"WinHttpWebSocketSend",
		"WinHttpWebSocketShutdown",
		"WinHttpWriteData",
		"WinHttpWriteProxySettings"
	};

	constexpr std::array<const char*, 17> ExportNames_version =
	{
		"GetFileVersionInfoA",
		"GetFileVersionInfoByHandle",
		"GetFileVersionInfoExA",
		"GetFileVersionInfoExW",
		"GetFileVersionInfoSizeA",
		"GetFileVersionInfoSizeExA",
		"GetFileVersionInfoSizeExW",
		"GetFileVersionInfoSizeW",
		"GetFileVersionInfoW",
		"VerFindFileA",
		"VerFindFileW",
		"VerInstallFileA",
		"VerInstallFileW",
		"VerLanguageNameA",
		"VerLanguageNameW",
		"VerQueryValueA",
		"VerQueryValueW"
	};

	constexpr std::array<const char*, 27> ExportNames_psapi =
	{
		"EmptyWorkingSet",
		"EnumDeviceDrivers",
		"EnumPageFilesA",
		"EnumPageFilesW",
		"EnumProcessModules",
		"EnumProcessModulesEx",
		"EnumProcesses",
		"GetDeviceDriverBaseNameA",
		"GetDeviceDriverBaseNameW",
		"GetDeviceDriverFileNameA",
		"GetDeviceDriverFileNameW",
		"GetMappedFileNameA",
		"GetMappedFileNameW",
		"GetModuleBaseNameA",
		"GetModuleBaseNameW",
		"GetModuleFileNameExA",
		"GetModuleFileNameExW",
		"GetModuleInformation",
		"GetPerformanceInfo",
		"GetProcessImageFileNameA",
		"GetProcessImageFileNameW",
		"GetProcessMemoryInfo",
		"GetWsChanges",
		"GetWsChangesEx",
		"InitializeProcessForWsWatch",
		"QueryWorkingSet",
		"QueryWorkingSetEx"
	};
}