class CfgPatches
{
	class bc036_Invisible_Vests
	{
		units[]={};
		weapons[]=
		{
			//Vanilla
			"bc036_invisible_carrier_gl",
			"bc036_invisible_carrier_lite",
			"bc036_invisible_carrier",
			"bc036_invisible_carrier_special",
			"bc036_invisible_chestrig",
			"bc036_invisible_lbv",
			"bc036_invisible_bandollier",
			"bc036_invisible_tacvest",
			"bc036_invisible_rebreather",
			//Jets
			"bc036_invisible_deckcrew"
		};
		author="bc036";
		icon="\bc036s_invisible_vests\Data\bc036.paa";
		requiredAddons[]=
		{
			"A3_Characters_F";
			"A3_Characters_F_Jets_Vests";
		};
		version = 1.1;
		requiredVersion=1.1;
	};
};
class cfgWeapons
{
#include "invisible_vests.hpp"
};