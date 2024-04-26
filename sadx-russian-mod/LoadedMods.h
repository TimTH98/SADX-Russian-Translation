#pragma once

class LoadedMods
{
public:
	static HMODULE DreamcastConversion;
	static HMODULE GoalRing;
	static HMODULE EmblemChallenge;
	static HMODULE TweakedCutscenes;
	static HMODULE Cream;
	static HMODULE Rouge;
	static HMODULE BetaRestores;
	static HMODULE SuperSonic;
	static HMODULE Multiplayer;

	static void Check();
};