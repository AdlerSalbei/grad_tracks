#include "script_component.hpp"

if !(QGVAR(enableTracking) || isServer) exitWith {};

GVAR(tracksList) = [];

[{!(GVAR(tracksList) isEqualTo [])},{
   [{
      if (GVAR(tracksList) isEqualTo []) exitWith {};

      {
          if ((serverTime - (_x select 1)) < QGVAR(maxTrackTime)) exitWith {};

          [{
             params ["_track", "_handle"];

             if (isNull _track) exitWith {
               [_handle] call CBA_fnc_removePerFrameHandler;
             };

             private _height = ((getPos _track) select 2);
             if (((_track getVariable [QGVAR(_height), _height]) - _height) >= 3) exitWith {
                deleteVehicle _track;
                [_handle] call CBA_fnc_removePerFrameHandler;
             };

             _track setPos ((getPos _track) vectorDiff [0,0,0.007]);

          },0,(_x select 0)] call CBA_fnc_addPerFrameHandler;

          GVAR(tracksList) deleteAt (GVAR(tracksList) find _x);
      } forEach GVAR(tracksList);
   },1,[]] call CBA_fnc_addPerFrameHandler;
},[]] call CBA_fnc_waitUntilAndExecute;
