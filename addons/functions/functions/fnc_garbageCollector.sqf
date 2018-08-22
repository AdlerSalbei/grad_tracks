#include "script_component.hpp"

GVAR(tracksList) = [];

[{!(GVAR(tracksList) isEqualTo [])},{
   [{
      if (GVAR(tracksList) isEqualTo []) exitWith {};

      {
          if ((serverTime - (_x select 1)) < QGVAR(maxTrackTime)) exitWith {};
          deleteVehicle (_x select 0);
          GVAR(tracksList) deleteAt (GVAR(tracksList) find _x);
      } forEach GVAR(tracksList);
   },1,[]] call CBA_fnc_addPerFrameHandler;
},[]] call CBA_fnc_waitUntilAndExecute;
