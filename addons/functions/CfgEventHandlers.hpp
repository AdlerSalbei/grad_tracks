class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};

class Extended_Deleted_EventHandlers {
  class grad_tracks_F {
    deleted = QUOTE(if (isServer) then {_target setVariable [QGVAR(rearpack),objNull,true];});
  };
};

class Extended_Init_EventHandlers {
    class grad_tracks_F {
        init = QUOTE(_this call FUNC(initApobs));
    };
    class grad_tracks_R {
        init = QUOTE(_this call FUNC(initApobs));
    };
};
