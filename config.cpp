class CfgPatches {
	class sGunplay_MMIO {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"sGunplay",
			"Mass_Guns"
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

class cfgVehicles{
	
	class ItemOptics;
	class Mass1P69: ItemOptics{
		class OpticsInfo{
			PPMaskProperties[] = {0.0, 0.0, 0.6, 0.01};
			PPLensProperties[] = {0.2, 0.0, 0.0, 0.3};
		};
	};
	
	class MassPKA: ItemOptics{
		class OpticsInfo{
			PPMaskProperties[] = {0.0, 0.0, 0.6, 0.01};
			PPLensProperties[] = {0.2, 0.0, 0.0, 0.0};
			discretefov[] = {};
		};
	};
	
	
	class MassScope: ItemOptics{
		class OpticsInfo{
			PPMaskProperties[] = {0.0, 0.0, 0.35, 0.05};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.5};
		};
	};
	
	class LongrangeOptic: ItemOptics{
		class OpticsInfo{
			PPMaskProperties[] = {0.0, 0.0, 0.99, 0.05};
			PPLensProperties[] = {0.3, 0.0, 0.0, 0.3};
		};
	};
};
