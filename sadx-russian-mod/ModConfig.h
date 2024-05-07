#pragma once

class Config
{
public:
	static std::string TGS_Selectors;
	static std::string StageTitlesStyle;
	static std::string BossTitlesStyle;

	static bool EditedCutsceneTimings;
	static bool ForceJPVoice;
	
	static bool EnableExtraSubtitles;
	static bool DisableMenuExtraSubs;
	static bool DisplaySESubtitles;

	static std::string DreamcastChaoIcon;
	static std::string AltSonicTeamLogo;
	static bool AltGGHelp;

	static void Read(const char* path);
	static void Init(const char* path, const HelperFunctions& helperFunctions);
};