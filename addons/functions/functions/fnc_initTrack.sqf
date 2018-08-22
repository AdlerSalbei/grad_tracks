#include "script_component.hpp"

params ["_vehicle"];

if !(QGVAR(enableTracking) || isServer) exitWith {};

[_vehicle] call FUNC(vehicleTrackingLoop);
