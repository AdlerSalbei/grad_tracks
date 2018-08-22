#include "script_component.hpp"

if !(QGVAR(enableTracking) || isServer) exitWith {};

params ["_vehicle", "_state"];

if (isNull _vehicle || _vehicle getVariable [QGVAR(disableTracking), false]) exitWith {};

if (_state) then {
   [_vehicle] call FUNC(vehicleTrackingLoop);
}else{
   [_vehicle] call FUNC(deleteTrack);
};
