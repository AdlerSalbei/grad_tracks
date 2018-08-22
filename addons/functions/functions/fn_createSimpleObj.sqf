#include "script_component.hpp"

params ["_type", "_pos"];

private _object = _type createVehicleLocal _pos;
private _position = getPosASL _object;
private _vectorDirUp = [vectorDir _object, vectorUp _object];
deleteVehicle _object;

private _simpleObject = createSimpleObject [_type, _position];
_simpleObject setVectorDirAndUp _vectorDirUp;

_simpleObject;
