#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

[QGVAR(enableTracking), "CHECKBOX", [localize LSTRING(enableTracking_displayName), localize LSTRING(enableTracking_tooltip)], localize LSTRING(settingCategory), true] call CBA_Settings_fnc_init;
[QGVAR(maxTrackTime), "SLIDER", localize LSTRING(maxTrackTime), localize LSTRING(settingCategory), [5, 1200, 120, 0]] call CBA_Settings_fnc_init;

ADDON = true;
