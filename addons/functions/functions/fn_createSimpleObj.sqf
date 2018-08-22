#include "script_component.hpp"

params ["_type", "_pos", "_dir"];

private _object = _type createVehicleLocal _pos;
_object setDir _dir;
_object setPos _pos;

private _position = getPosASL _object;
private _vectorDirUp = [vectorDir _object, vectorUp _object];
deleteVehicle _object;

private _simpleObject = createSimpleObject [_type, _position];
_simpleObject setVectorDirAndUp _vectorDirUp;

_simpleObject;
