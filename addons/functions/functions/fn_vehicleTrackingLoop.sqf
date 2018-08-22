#include "script_component.hpp"

if !(isServer) exitWith {};

params ["_vehicle"];

private _trackInfo = switch (configName (inheritsFrom (configFile >> "CfgVehicles" >> (typeOf _vehicle)))) do {
   case "Tank" : {["GRAD_Tracks_TankTracks","trackL_"]};
};

[{
   params ["_args", "_handle"];
   _args params ["_vehicle", "_trackInfo"];
   _trackInfo params ["_trackType","_trackPrefix"];

   if (isNull _vehicle || _vehicle getVariable [QGVAR(loop), false]) exitWith {
      [_handle] call CBA_fnc_removePerFrameHandler;
   };

   private _lastPos = _vehicle getVariable [QGVAR(lastPos),[0,0,0]];
   private _pos = getPos _vehicle;
   private _dir = getDir _vehicle;

   if (
         (_lastPos != _pos) && (
         ((abs((_lastPos select 0) - (_pos select 0))) > 1) ||
         ((abs((_lastPos select 1) - (_pos select 1))) > 1))
      ) then {
         _vehicle setVariable [QGVAR(lastPos), _pos, false];

         if (!isClass (configFile >> "CfgTexturesBlacklist" >> (surfaceType (position _vehicle))) then {
            private _wheelAmount = (getNumber(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "numberPhysicalWheels"))/2;
            private _wheel1Pos = _vehicle selectionPosition [(_trackPrefix + _wheelAmount + "_1"), "Geometry"];
            private _wheel2Pos = _vehicle selectionPosition [(_trackPrefix + _wheelAmount + "_2"), "Geometry"];

            private _pos1 = _vehicle modelToWorld _wheel1Pos;
            private _pos2 = _vehicle modelToWorld _wheel2Pos;

            private _track1 = [_trackType, _pos1] call FUNC(createSimpleObj);
            _track1 setObjectTexture [0, ([_track1] call FUNC(getSurfaceTexturePath))];
            [_track1] call FUNC(grassCutter);

            private _track2 = [_trackType, _pos2] call FUNC(createSimpleObj);
            _track2 setObjectTexture [0, ([_track2] call FUNC(getSurfaceTexturePath))];
            [_track2] call FUNC(grassCutter);

            GVAR(tracksList) pushBack [_track1, serverTime];
            GVAR(tracksList) pushBack [_track2, serverTime];
         };
   };
},0.1,[_vehicle, _trackInfo]] call CBA_fnc_addPerFrameHandler;
