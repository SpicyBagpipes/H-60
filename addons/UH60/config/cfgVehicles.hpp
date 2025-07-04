class VehicleSystemsTemplateLeftPilot;
class VehicleSystemsTemplateRightPilot;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;


#include "MFD\MFDConfig.hpp"

class CfgVehicles {
    #include "crew.hpp"
    class Helicopter_Base_H;
    class Heli_Transport_01_base_F: Helicopter_Base_H {
        class Turrets
        {
            class MainTurret;
            class CopilotTurret;
        };
        class Attributes;
        class Eventhandlers;
        class Viewoptics;
        class ViewPilot;
        class RotorLibHelicopterProperties;
        class CargoTurret;
        class Components;
        class Sounds;
        class HitPoints;
        class UserActions;

    };

    class vtx_H60base: Heli_Transport_01_base_F {
      icon        = "z\vtx\addons\UH60\Data\UI\Map_vtx_UH60_CA.paa";	/// icon in map/editor
      picture     = "z\vtx\addons\UH60\Data\UI\vtx_UH60_CA.paa";	/// small picture in command menu
      model       = "\z\vtx\addons\UH60\vtx_UH60.p3d";
      displayName = "$STR_VTX_UH60_UHMBlackhawk";
      scope       = 0;
      mapSize     = 10;

      A3TI_ThermalSelections[] = {16, 17, 18};
      
      #include "cfgAnimationSources.hpp"
      #include "cfgUVAnimations.hpp"
      #include "CfgUserActions.hpp"
      #include "edenAttributes.hpp"
      #include "cfgVehiclesParts\RotorLibHelicopterProperties.hpp"
      #include "cfgVehiclesParts\sounds.hpp"
      #include "cfgVehiclesParts\slingload.hpp"
      #include "cfgVehiclesParts\UI.hpp"
      #include "cfgVehiclesParts\components.hpp"
      #include "cfgVehiclesParts\reflectors.hpp"
      #include "cfgVehiclesParts\fries.hpp"
      #include "cfgVehiclesParts\hitPoints.hpp"
      //#include "cfgVehiclesParts\vehicleCustomization.hpp"

      //Sensors Definition
      reportOwnPosition = 1;
      reportRemoteTargets = 1;
      receiveRemoteTargets = 1;

      /*lesh tow compatabilty (Research Later)
      LESH_canBeTowed         = 1;
      LESH_towFromFront       = 0;
      LESH_AxisOffsetTarget[] = {0,-9.2,-2};
      LESH_WheelOffset[]      = {0,2.5};*/

      //SFM+ Variables
      mainRotorSpeed = 1.0;
      backRotorSpeed = 1.5;
      altFullForce = 1500;	/// in what height do the engines still have full thrust
      altNoForce = 4000;		/// thrust of the engines interpolates to zero between altFullForce and altNoForce
      maxSpeed = 300;			/// what is the maximum speed of the vehicle
      maxFordingDepth = 2.0;	/// how deep could the vehicle be in water without getting some damage
      mainBladeRadius = 8.0;	/// describes the radius of main rotor - used for collision detection
      mainBladeCenter = "predni osa naklonu";
      tailBladeCenter = "light_collision_tail_upper";
      fuelConsumptionRate = 0;

      //multiplier of lift force
      liftForceCoef = 1.1;
      //multiplier of body friction
      bodyFrictionCoef = 0.7;
      //multiplier of bank force
      cyclicAsideForceCoef = 0.5;
      //multiplier of dive force
      cyclicForwardForceCoef = 0.6;
      //multiplier of back rotor force
      backRotorForceCoef = 0.8;
      //SFM+ Variables


      /*Helisim Variables
      startDuration          = 15;
      fuelCapacity           = 1423;
      fuelconsumptionrate    = 0.0;
      maxSpeed               = 298;
      altFullForce           = 1615;
      altNoForce             = 9000;
      liftForceCoef          = 0.00;
      bodyFrictionCoef       = 0.00;
      cyclicAsideForceCoef   = 0.00;
      cyclicForwardForceCoef = 0.00;
      backRotorForceCoef     = 0.00;
      //HeliSim Variables*/

      accuracy = 5;
      ace_vehicle_damage_canHaveFireRing          = 1;
      ace_vehicle_damage_detonationDuringFireProb = 0.2;
      ace_vehicle_damage_engineDetonationProb     = 0.1;
      ace_vehicle_damage_engineFireProb           = 0;
      ace_vehicle_damage_hullDetonationProb       = 0.1;
      ace_vehicle_damage_hullFireProb             = 0;
      ace_vehicle_damage_turretDetonationProb     = 0.2;
      ace_vehicle_damage_turretFireProb           = 0;

      allowTabLock = 0;
      armor = 600;
      armorStructural = 4;
      attenuationEffectType    = "HeliAttenuation";
      audible                  = 4;
      author                   = "Project Hatchet Studios";
      availableForSupportTypes[] = {"CAS_Heli", "Transport"};
      camshakecoef             = 0.3;
      canHideDriver = 0;
      cargoAction[]            = {"passenger_low01", "passenger_generic01_leanleft", "passenger_generic01_leanleft", "passenger_generic01_leanright", "passenger_generic01_foldhands", "passenger_mantisrear", "passenger_mantisrear", "passenger_generic01_foldhands"};
      cargoCanEject            = 1;
      cargoDoors[]             = {"cabindoor_L", "cabindoor_R"};
      cargoGetInAction         = ["GetInHeli_Transport_01Cargo"];
      cargoIsCoDriver[]        ={0,0};
      cargoGetOutAction        = ["GetOutLow"];
      crew                     = vtx_uh60_pilot;
      crewVulnerable           = 1;
      crewCrashProtection      = 0.25;
      ///damageResistance      = 0.002;
      driveOnComponent[]       = {"Wheels"};
      driverAction             = UH60_Pilot;
      driverCanEject           = 0;
      driverCanSee             = 1+2+4+8;
      driverDoor               = "Door_RF";
      driverInAction           = UH60_Pilot;
      driverLeftHandAnimName   = "Collective_right";
      driverLeftLegAnimName    = "Pedal_Left_P";
      driverRightHandAnimName  = "Cyclic_right"; 
      driverRightLegAnimName   = "Pedal_Right_P";
      editorSubcategory        = "vtx_h60";
      ejectDeadCargo           = false;
      ejectdeadgunner          = false;
      enableCopilot            = true;
      epeImpulseDamageCoef     = 0;
      explosionShielding       = 8;
      faction                  = "BLU_F";
      gunnerCanSee             = 1+2+4+8;
      gunnerAction             = UH60_Gunner;
      gunnerInAction           = UH60_Gunner;
      gunnerUsesPilotView      = false;
      hideProxyInCombat        = 0;
      incomingMissileDetectionSystem = 16;
      insideSoundCoef          = 0.5;
      irTargetSize             = 0.8;
      landingSoundInt0[]       = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open", 1.000000, 1.000000};
      landingSoundInt1[]       = {"A3\Sounds_F\vehicles\air\noises\landing_skids_int1_open", 1.000000, 1.000000};
      landingSoundInt[]        = {"landingSoundInt0", 0.500000, "landingSoundInt1", 0.500000};
      landingSoundOut0[]       = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1", 1.778279, 1.000000, 10};
      landingSoundOut1[]       = {"A3\Sounds_F\vehicles\air\noises\landing_skids_ext1", 1.778279, 1.000000, 10};
      landingSoundOut[]        = {"landingSoundOut0", 0.500000, "landingSoundOut1", 0.500000};
      lockdetectionsystem      = "8+4";
      magazines[]              = {"60Rnd_CMFlareMagazine"};
      mainBladeRadius          = 7.9;
      maxFordingDepth          = 0.55;
      memoryPointDriverOptics  = "slingcam";
      memoryPointsGetInDriver    = "pos Driver";
      memoryPointsGetInDriverDir = "pos Driver dir";
      memoryPointsGetInGunner[]  = {"pos Cargo L","pos Cargo R"};
      memoryPointsGetInGunnerDir[] = {"pos Cargo L dir","pos Cargo R dir"};
      memoryPointCM[]          = {"flare_launcher1","flare_launcher2","flare_launcher_3","flare_launcher_4"};
      memoryPointCMDir[]       = {"flare_launcher1_dir","flare_launcher2_dir","flare_launcher_3_dir","flare_launcher_4_dir"};
      nightVision              = 1;
      obstructSoundsWhenIn     = 0.316228;
      occludeSoundsWhenIn      = 0.562341;
      preciseGetInOut          = 0;
      radarTarget              = 1.2;
      radarTargetSize          = 0.7;
      selectionFireAnim        = "";
      selectionHRotorStill	   = "rotorBlades";
      selectionHRotorMove		   = "rotorBlurred";
      selectionVRotorStill	   = "VrotorBlades";
      selectionVRotorMove		   = "VrotorBlurred";
      side                     = 1;
      simulation               = helicopterRTD;
      tailDamage[]             = {"tailDamageInt", "tailDamageOut"};
      threat[]                 = {0.8,0.2,0.5};
      transportSoldier         = 11;
      type                     = VAir;
      typicalCargo[]           ={vtx_uh60_doorgunner,vtx_uh60_doorgunner,vtx_uh60_doorgunner};
      viewDriverInExternal     = 1;
      viewGunnerInExternal     = 1;
      visualTarget             = 1;
      visualTargetSize         = 1.0;
      weapons[]                = {"CMFlareLauncher"};




        
        class VTX_H60_HDTS_Copilot;
        #include "cfghct.hpp"
        
        // driverWeaponsInfoType = "Rsc_vtx_MELB_Turret_UnitInfo";
        class vtx_templateFLIR {
            #include "turrets\pilotCamera.hpp"
        };
        
        hiddenSelections[] = {
          "emmisive_overhead",
          "emmisive_frontDash",
          "emmisive_pedestal",
          "emmisive_ralt",
          "emmisive_altp",
          "emmisive_alt",
          "emmisive_ias",
          "emmisive_hdg",
          "MAP_MFD1",
          "MAP_MFD2",
          "MAP_MFD3",
          "MAP_MFD4",
          "MAP_OVERLAY1",
          "MAP_OVERLAY2",
          "MAP_OVERLAY3",
          "MAP_OVERLAY4",
          "Exterrior_Hull",
          "Exterrior_Misc",
          "Exterrior_Tail",
          "markings",
          "left_num_1",
          "left_num_2",
          "right_num_1",
          "right_num_2",
          "Fuel_Probe",
          "Mlass",
          "emmisive_goarnd",
          "emmisive_hvr",
          "emmisive_fms",
          "emmisive_cpld",
          "emmisive_vs"
        };
        hiddenSelectionsTextures[] = {
          "","","","","","","","","","","","","","","","",
          "z\vtx\addons\UH60\Data\Exterior\Hull Main_co.paa",
          "z\vtx\addons\UH60\Data\Exterior\Misc_co.paa",
          "z\vtx\addons\UH60\Data\Exterior\Hull Tail_co.paa",
          "a3\ui_f\data\IGUI\Cfg\Targeting\Empty_ca.paa",
          "","","","", // Door Numbers "L1, L2, R1, R2",
          "z\vtx\addons\UH60\Data\FuelProbe\Fuel_probe_co.paa",
          "z\vtx\addons\UH60\Data\Exterior\Hull Main_co.paa"
        };
        hiddenSelectionsMaterials[] = {
          "","","","","","","","","","","","","","","","",
          "z\vtx\addons\UH60\data\exterior\hull main.rvmat",
          "z\vtx\addons\UH60\data\exterior\misc.rvmat",
          "z\vtx\addons\UH60\data\exterior\hull tail.rvmat",
          "z\vtx\addons\UH60\data\exterior\hull tail.rvmat"
        };
        
        memoryPointsGetInCargo[] = {
          "pos Cargo L5",
          "pos Cargo L5",
          "pos Cargo R5",
          "pos Cargo R5",
          "pos Cargo R3",
          "pos Cargo R3",
          "pos Cargo L3",
          "pos Cargo L3",
          "pos Cargo L",
          "pos Cargo R",
          "pos Cargo R"
        };
        memoryPointsGetInCargoDir[] = {
          "pos Cargo L5 dir",
          "pos Cargo L5 dir",
          "pos Cargo R5 dir",
          "pos Cargo R5 dir",
          "pos Cargo R3 dir",
          "pos Cargo R3 dir",
          "pos Cargo L3 dir",
          "pos Cargo L3 dir",
          "pos Cargo L dir",
          "pos Cargo R dir",
          "pos Cargo R dir"
        };
        
        class MarkerLights {
          class CollisionRedTailLower {
            activeLight = 0;
            ambient[] = {100,0,0};
            blinking = 1;
            blinkingPattern[] = {0.2,1.3};
            blinkingPatternGuarantee = 0;
            color[] = {0.9,0.15,0.1};
            dayLight = 0;
            drawLight = 1;
            drawLightCenterSize = 0.08;
            drawLightSize = 0.5;
            intensity = 500;
            name = "light_collision_tail_lower";
            useFlare = 1;
          };
          class CollisionRedTailUpper {
            activeLight = 0;
            ambient[] = {100,0,0};
            blinking = 1;
            blinkingPattern[] = {0.2,1.3};
            blinkingPatternGuarantee = 0;
            color[] = {0.9,0.15,0.1};
            dayLight = 0;
            drawLight = 1;
            drawLightCenterSize = 0.08;
            drawLightSize = 0.5;
            intensity = 500;
            name = "light_collision_tail_upper";
            useFlare = 1;
          };
        };

        class ViewPilot: ViewPilot { // Describes what does the pilot see using bare eyes
          #include "turrets\ViewPilot.hpp"
        };

        LODDriverOpticsIn = 1100;

        class TransportBackpacks
        {
          class _xx_B_Parachute
          {
            backpack = "B_AssaultPack_rgr"; // For repairs
            count = 2;
          };
        };
        class TransportItems
        {
          class _xx_FirstAidKit
          {
            name = "FirstAidKit";
            count = 8;
          };
          class _xx_Toolkit
          {
            name = "Toolkit";
            count = 1;
          };
          class _xx_Medikit
          {
            name = "Medikit";
            count = 1;
          };
          class _xx_ItemGPS
          {
            name = "ACE_microDAGR"; // For wayopints
            count = 2;
          };
        };
        class TransportMagazines
        {
            mag_xx(SmokeShellGreen,2);
            mag_xx(SmokeShell,2);
            mag_xx(DemoCharge_Remote_Mag,1); // For destroying crashed heli
        };

        class TransportWeapons{};
        radarType = 4;

        class Damage
        {
            tex[]={};
            mat[]={
             // "z\vtx\addons\UH60\Data\uh60m_dust_filter.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_dust_filter.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_dust_filter_destruct.rvmat",

             // "z\vtx\addons\UH60\Data\uh60m_engine.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_engine.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_engine_destruct.rvmat",

             // "z\vtx\addons\UH60\Data\uh60m_fuselage.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_fuselage.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_fuselage_destruct.rvmat",

             //    "z\vtx\addons\UH60\Data\uh60m_interior.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_interior.rvmat",
             //    "z\vtx\addons\UH60\Data\uh60m_interior_destruct.rvmat",

             // "z\vtx\addons\UH60\Data\uh60m_navijak.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_navijak.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_navijak_destruct.rvmat",

             // "z\vtx\addons\UH60\Data\uh60m_glass.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_glass_damage.rvmat",
             // "z\vtx\addons\UH60\Data\uh60m_glass_damage.rvmat",

            };
        };
        class Turrets: Turrets
        {
            #include "turrets\copilot.hpp"
            #include "turrets\doorgunsTurnOut.hpp"
        };
        class Exhausts
        {
            class ExhaustEngineLeft
            {
                position = "exh_leng_pos";
                direction = "exh_leng_dir";
                effect = "ExhaustsEffectHeliMed";
            };
            class ExhaustEngineRight
            {
                position = "exh_reng_pos";
                direction = "exh_reng_dir";
                effect = "ExhaustsEffectHeliMed";
            };
        };
        
        gearRetracting		= 0;
        gearMinAlt			= 999999;

        turnCoef			= 4; // Rolling Friction, higher stops more quickly
        terrainCoef 		= 1;
        damperSize 			= 1;
        damperForce 		= 10;
        damperDamping 		= 100;
        wheelWeight 		= 30;
        minOmega	= 0;
        maxOmega=2000;
        class Wheels
        {
            class Wheel_1
            {
                steering					= false;
                side						= "left";
                boneName					= "wheel_1_1";
                suspForceAppPointOffset		= "wheel_1_1_center";
                tireForceAppPointOffset		= "wheel_1_1_center";
                center						= "wheel_1_1_center";
                boundary					= "wheel_1_1_rim";
                width						= 0.3;
                mass						= 15;
                MOI							= 30;

                dampingRate					= 0.1;
                dampingRateDamaged			= 1.0;
                dampingRateDestroyed		= 1000.0;
                suspTravelDirection[]		= {0, -1, 0};

                maxBrakeTorque				= 8000;
                maxHandBrakeTorque			= 8000;

                maxCompression				= 0.15;
                maxDroop					= 0.2;

                #define SUSPENSION_SPRUNG_MASS 4300
                sprungMass					= SUSPENSION_SPRUNG_MASS;
                springStrength				= SUSPENSION_SPRUNG_MASS * 25;
                springDamperRate			= SUSPENSION_SPRUNG_MASS * 4;

                longitudinalStiffnessPerUnitGravity	= 10000;
                latStiffX					= 2.5;
                latStiffY					= 18.0;
                frictionVsSlipGraph[]=
                {
                    {0,1},
                    {0.5,1},
                    {1,1}
                };
            };
            class Wheel_2: Wheel_1
            {
                boneName					= "wheel_1_2";
                suspForceAppPointOffset		= "wheel_1_2_center";
                tireForceAppPointOffset		= "wheel_1_2_center";
                center						= "wheel_1_2_center";
                boundary					= "wheel_1_2_rim";
            };
            class Wheel_3: Wheel_2
            {
                steering					= true;
                side						= "right";
                boneName					= "wheel_2_1";
                suspForceAppPointOffset		= "wheel_2_1_center";
                tireForceAppPointOffset		= "wheel_2_1_center";
                center						= "wheel_2_1_center";
                boundary					= "wheel_2_1_rim";

                width						= 0.12;
                maxCompression				= 0.2;
                maxDroop					= 0.05;
                maxBrakeTorque				= 8000;
                suspTravelDirection[]		= {0, -1.0, 0.0};

                #undef SUSPENSION_SPRUNG_MASS
                #define SUSPENSION_SPRUNG_MASS 400
                sprungMass					= SUSPENSION_SPRUNG_MASS;
                springStrength				= SUSPENSION_SPRUNG_MASS * 25;
                springDamperRate			= SUSPENSION_SPRUNG_MASS * 4;
            };
        }; // Wheels
    }; // vtx_H60_base

    class vtx_UH60M : vtx_H60_base {
        scope = 2;
        editorPreview = "z\vtx\addons\UH60\Data\Preview\vtx_UH60M.jpg";
        hiddenSelectionsTextures[] = {
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "z\vtx\addons\UH60\Data\Exterior\Hull Main_co.paa",
            "z\vtx\addons\UH60\Data\Exterior\Misc_co.paa",
            "z\vtx\addons\UH60\Data\Exterior\Hull Tail_co.paa",
            "z\vtx\addons\UH60\Data\Exterior\Markings\Markings_ca.paa",
            "", // "left_num_1",
            "", // "left_num_2",
            "", // "right_num_1",
            "", // "right_num_2",
            "z\vtx\addons\UH60\Data\FuelProbe\Fuel_probe_co.paa"
        };
         class AnimationSources: AnimationSources
        {
            ANIM_INIT(FuelProbe_show,0);
            ANIM_INIT(Minigun_Sight_L_hide,1);
            ANIM_INIT(Minigun_Sight_R_hide,1);
        };
    };

    class vtx_HH60 : vtx_H60_base {
        scope = 2;
        forceInGarage = 1;
        editorPreview = "z\vtx\addons\UH60\Data\Preview\vtx_HH60.jpg";
        displayName = "$STR_VTX_UH60_HHGMPavehawk";
        memoryPointDriverOptics = "pilotcamera_flir_pos";

        hiddenSelectionsTextures[] = {
          "","","","","","","","","","","","","","","","",
          "z\vtx\addons\UH60\Data\HH60\Hull_Main_co.paa",
          "z\vtx\addons\UH60\Data\HH60\Misc_co.paa",
          "z\vtx\addons\UH60\Data\HH60\Hull_Tail_co.paa",
          "a3\ui_f\data\IGUI\Cfg\Targeting\Empty_ca.paa", // "markings",
          "", // "left_num_1",
          "", // "left_num_2",
          "", // "right_num_1",
          "", // "right_num_2",
          "z\vtx\addons\UH60\Data\HH60\Fuel_probe_co.paa"
        };
        
        class pilotCamera: vtx_templateFLIR {};
        weapons[]={"CMFlareLauncher", "Laserdesignator_pilotcamera"};
        magazines[]={"60Rnd_CMFlareMagazine", "Laserbatteries"};
        driverWeaponsInfoType = "Rsc_vtx_MELB_Turret_UnitInfo";
        class Turrets: Turrets
        {
            class CopilotTurret: CopilotTurret {};
            class MainTurret: MainTurret {};
            class RightDoorGun: RightDoorGun {};
            #include "turrets\cargoTurrets.hpp"
            #include "\z\vtx\addons\MH60M\config\turrets\troopCommander.hpp"
        };

        transportSoldier=0;
        cargoProxyIndexes[] = {12, 13, 14, 15, 16, 17, 20, 21, 22, 23};
        ace_medical_treatment_patientSeats[] = {4, 5, 7, 8};
        cargoAction[] = {};
        class AnimationSources: AnimationSources
        {
            ANIM_INIT(FuelProbe_show,1);
            ANIM_INIT(CabinSeats_Hide,1);
            ANIM_INIT(HH60Flares_show,1);
            ANIM_INIT(HH60GRadar_show,1);
            ANIM_INIT(HH60GFlir_show,1);
            ANIM_INIT(MAWS_Tubes_Show,1);
            ANIM_INIT(ERFS_show,1);
            ANIM_INIT(Minigun_Sight_L_hide,1);
            ANIM_INIT(Minigun_Sight_R_hide,1);
        };
        #include "vehicleTransport.hpp"
    }; // vtx_HH60

    class vtx_UH60M_SLICK : vtx_H60_base {
      scope = 2;
      forceInGarage = 1;
      displayName = "UH-60M Slick";
      transportSoldier=0;
      cargoProxyIndexes[] = {};
      cargoAction[] = {};
      typicalCargo[] = {"vtx_uh60_doorgunner"};

      class AnimationSources: AnimationSources {
        ANIM_INIT(CabinSeats_Hide,1);
        ANIM_INIT(Hoist_hide,1);
        ANIM_INIT(GunnerSeats_Hide,1);
        ANIM_INIT(Minigun_L_hide,1);
        ANIM_INIT(Minigun_R_hide,1);
        ANIM_INIT(Minigun_Mount_L_hide,1);
        ANIM_INIT(Minigun_Mount_R_hide,1);
        ANIM_INIT(Minigun_Sight_L_hide,1);
        ANIM_INIT(Minigun_Sight_R_hide,1);
      };
      class Turrets: Turrets {
        class CopilotTurret: CopilotTurret {};
        class MainTurret: MainTurret {};
        class RightDoorGun: RightDoorGun {};
        #include "turrets\cargoTurretsDoor.hpp"
      };
      #include "vehicleTransportSlick.hpp"
    }; // vtx_UH60M_SLICK
};

class cfgNonAIVehicles{
  class ProxyRetex;
  class Fuel_Probe: ProxyRetex{
    hiddenSelections[] ={"Fuel_Probe"};
    model = "\z\vtx\addons\UH60\Data\FuelProbe\Fuel_Probe.p3d";
  };
};
