#include "script_component.hpp"

params ["_vehicle"];

private _handle = _vehicle getVariable [QGVAR(handle), nil];
[_handle] call CBA_fnc_removePerFrameHandler;
