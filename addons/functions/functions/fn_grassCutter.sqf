#include "script_component.hpp"

params ["_track"];

private _grassCutter = createVehicle ["Land_ClutterCutter_small_F", [0, 0, 0], [], 0, "NONE"];
private _cutterPos = getPosASL _tracker;
_cutterPos set [2, getTerrainHeightASL _cutterPos];
_grassCutter setPosASL _cutterPos;
deleteVehicle _grassCutter;
