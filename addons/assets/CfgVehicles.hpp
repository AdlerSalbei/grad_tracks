class CBA_Extended_EventHandlers;

class CfgVehicles {
  class Items_base_F;
  class grad_tracks_cover: Items_base_F
  {
    author="DerZade";
    displayName="APOBS Cover";
    scope=2;
    scopeCurator=2;
    model = QPATHTOF(data\models\cover.p3d);
    //picture = QPATHTOF(ui\gunbag_ca.paa);
    //icon = QPATHTOF(ui\gunbag_icon_ca.paa);
    //hiddenSelections[] = {"Camo"};
    //hiddenSelectionsTextures[] = {QPATHTOF(data\images\out_co.paa)};

  };
  class grad_tracks_base: grad_tracks_cover
  {
    displayName="APOBS Base";
    model = QPATHTOF(data\models\base.p3d);
  };
    class Bag_Base;
    class grad_tracks_F: Bag_Base {
       author = "DerZade [A] & Salbei";
       scope = 2;
       displayName = "APOBS Frontpack";
       model = QPATHTOF(data\models\backpack.p3d);
       //picture = QPATHTOF(ui\gunbag_ca.paa);
       //icon = QPATHTOF(ui\gunbag_icon_ca.paa);
       //hiddenSelections[] = {"Camo"};
       //hiddenSelectionsTextures[] = {QPATHTOF(data\images\out_co.paa)};
       maximumLoad = 0;
       mass = 27.2155;
   };
   class grad_tracks_R: grad_tracks_F{
       displayName = "APOBS Rearpack";
       //hiddenSelectionsTextures[] = {QPATHTOF(data\images\out_co.paa)};
   };
   class grad_tracks_Open_F: Bag_Base {
       author = "DerZade [A] & Salbei";
       scope = 1;
       displayName = "APOBS Frontpack Open";
       model = QPATHTOF(data\models\backpack.p3d);
       //picture = QPATHTOF(ui\gunbag_ca.paa);
       //icon = QPATHTOF(ui\gunbag_icon_ca.paa);
       //hiddenSelections[] = {"Camo"};
       //hiddenSelectionsTextures[] = {QPATHTOF(data\images\out_co.paa)};
       maximumLoad = 0;
       mass = 27.2155;
   };
   class grad_tracks_Open_R: Bag_Base {
       author = "DerZade [A] & Salbei";
       scope = 1;
       displayName = "APOBS Rearpack Open";
       model = QPATHTOF(data\models\backpack.p3d);
       //picture = QPATHTOF(ui\gunbag_ca.paa);
       //icon = QPATHTOF(ui\gunbag_icon_ca.paa);
       //hiddenSelections[] = {"Camo"};
       //hiddenSelectionsTextures[] = {QPATHTOF(data\images\out_co.paa)};
       maximumLoad = 0;
       mass = 27.2155;
   };
   /*
   class grad_tracks_Connector_F {
       author = "DerZade [A] & Salbei";
       scope = 1;
       displayName = "APOBS Connector";
       model = QPATHTOF(data\models\connector.p3d);
       //picture = QPATHTOF(ui\gunbag_ca.paa);
       //icon = QPATHTOF(ui\gunbag_icon_ca.paa);
       //hiddenSelections[] = {"Camo"};
       //hiddenSelectionsTextures[] = {QPATHTOF(data\images\out_co.paa)};
       mass = 1;
   };
   class grad_tracks_Rocket_F {
       author = "DerZade [A] & Salbei";
       scope = 1;
       displayName = "APOBS Rocket";
       model = QPATHTOF(data\models\rocket.p3d);
       //picture = QPATHTOF(ui\gunbag_ca.paa);
       //icon = QPATHTOF(ui\gunbag_icon_ca.paa);
       //hiddenSelections[] = {"Camo"};
       //hiddenSelectionsTextures[] = {QPATHTOF(data\images\out_co.paa)};
       mass = 1;
      };
   };
   class grad_tracks_Parachute_R {
       author = "DerZade [A] & Salbei";
       scope = 1;
       displayName = "APOBS Parachute";
       model = QPATHTOF(data\models\backpack.p3d);
       //picture = QPATHTOF(ui\gunbag_ca.paa);
       //icon = QPATHTOF(ui\gunbag_icon_ca.paa);
       //hiddenSelections[] = {"Camo"};
       //hiddenSelectionsTextures[] = {QPATHTOF(data\images\out_co.paa)};
       mass = 1;
   };
   */
};
