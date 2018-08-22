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
   class Car {
      deleted = QUOTE(if (isServer) then {_this call FUNC(deleteTrack)});
   };
   class Tracked_APC {
      deleted = QUOTE(if (isServer) then {_this call FUNC(deleteTrack)});
   };
   class Wheeled_APC {
      deleted = QUOTE(if (isServer) then {_this call FUNC(deleteTrack)});
   };
   class Truck {
      deleted = QUOTE(if (isServer) then {_this call FUNC(deleteTrack)});
   };
   class Tank {
      deleted = QUOTE(if (isServer) then {_this call FUNC(deleteTrack)});
   };
};

class Extended_Engine_EventHandlers {
   class Car {
      engine = QUOTE(if (isServer) then {_this call FUNC(checkEngineState)});
   };
   class Tracked_APC {
      engine = QUOTE(if (isServer) then {_this call FUNC(checkEngineState)});
   };
   class Wheeled_APC {
      engine = QUOTE(if (isServer) then {_this call FUNC(checkEngineState)});
   };
   class Truck {
      engine = QUOTE(if (isServer) then {_this call FUNC(checkEngineState)});
   };
   class Tank {
      engine = QUOTE(if (isServer) then {_this call FUNC(checkEngineState)});
   };
};
