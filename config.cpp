class CfgPatches {
	class sGunplay_MMIO {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"Mass_Guns",
			"MassGuns_Optics",
			"MassGuns_Support",
			"MassGuns_Weapons_ACR",
			"MassGuns_Weapons_AK9",
			"MassGuns_Weapons_AN94",
			"MassGuns_Weapons_HK416",
			"MassGuns_Weapons_M19",
			"MassGuns_Weapons_M16",
			"MassGuns_Weapons_M417",
			"MassGuns_Weapons_PredatAR",
			"MassGuns_Weapons_RPK",
			"MassGuns_Weapons_Type81",
			"MassGuns_Weapons_WolfAR",
			"MassGuns_Weapons_PPSh",
			"MassGuns_Muzzles"
		};
	};
};

class CfgMods {
	class sGunplay_MMIO {
		dir = "MyMODS/sGunplay_MMIO";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "sGunplay_MMIO";
		credits = "simonvic";
		author = "simonvic";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";
		
		dependencies[] = {
			"World",
		};

		class defs {
			class worldScriptModule {
				value = "";
				files[] = {"MyMODS/sGunplay_MMIO/scripts/4_World"};
			};
		};
	};
};

class cfgWeapons {

	
	class Rifle_Base;
	class MassPPSH41_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class MassMP40_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.50;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class MassType81_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class MassM417_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.25;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class Mass_AN94_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class MassM19_Base : Rifle_Base {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class AKS74U;
	class Mass_AK9 : AKS74U {
		s_recoilControlStabilityX = 0.00;
		s_recoilControlStabilityY = 0.00;
		s_recoilControlMisalignmentX = 0.00;
		s_recoilControlMisalignmentY = 0.00;
		s_recoilControlKick = 0.00;
	};
	class AK74;
	class Mass_RPK74_Base : AK74 {
		s_recoilControlStabilityX = 0.15;
		s_recoilControlStabilityY = 0.20;
		s_recoilControlMisalignmentX = 0.00;
		s_recoilControlMisalignmentY = 0.00;
		s_recoilControlKick = 0.70;
	};
	class M16A2;
	class Mass_HK416_Base : M16A2 {
		s_recoilControlStabilityX = 0.25;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class M4A1;
	class MassAR15_Base : M4A1 {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class MassAR15DMR_Base : M4A1 {
		s_recoilControlStabilityX = 0.25;
		s_recoilControlStabilityY = 0.05;
		s_recoilControlMisalignmentX = 0.55;
		s_recoilControlMisalignmentY = 0.45;
	};
	class MassM16_Base : M4A1 {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
	class Mass_ACR_Base : M4A1 {
		s_recoilControlStabilityX = 0.65;
		s_recoilControlStabilityY = 0.65;
		s_recoilControlMisalignmentX = 0.70;
		s_recoilControlMisalignmentY = 0.70;
		s_recoilControlKick = 0.70;
	};
};

class cfgVehicles{
	class Inventory_Base;
	class MassSPAS12Stock : Inventory_Base {
		s_recoilControlStabilityX = 0.10;
		s_recoilControlStabilityY = 0.10;
		s_recoilControlMisalignmentX = 0.10;
		s_recoilControlMisalignmentY = 0.20;
		s_recoilControlKick = 0.60;
	};

	class ItemSuppressor;
	class MassMuzzle338 : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.45;
		s_recoilControlMisalignmentY = 0.05;
	};
	class MassMuzzle556 : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.45;
		s_recoilControlMisalignmentY = 0.05;
	};
	class MassMuzzle762 : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.45;
		s_recoilControlMisalignmentY = 0.05;
	};
	class MassMuzzleComp556 : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.45;
		s_recoilControlMisalignmentY = 0.05;
	};
	class MassMuzzlePistol : ItemSuppressor {
		s_recoilControlMisalignmentX = 0.45;
		s_recoilControlMisalignmentY = 0.05;
	};

	class ItemOptics_Base;
	class Mass1P69 : ItemOptics_Base {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		// no PIP for this :(
	};
	class MassPKA : ItemOptics_Base {
		s_pipRadius = 0.6;
		s_pipMagnification = 0.25;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.1;
	};
	class MassScope : ItemOptics_Base {
		s_pipRadius = 0.4;
		s_pipMagnification = 0.4;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.2;
	};
	class LongrangeOptic;
	class MassScoutLRS : LongrangeOptic {
		s_showEnterMisalignment = 1;
		s_isFullscreen = 1;
		s_pipMagnification = 0.2;
		s_pipRadius = 1.0;
		s_pipBlur = 0.01;
		s_pipChromAber = 0.4;
	};
};
