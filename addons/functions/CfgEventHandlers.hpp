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

class Extended_Init_EventHandlers {
   class Car {
      init = QUOTE((if (isServer) then {_this call FUNC(initTrack)});
   };
   class Tracked_APC {
      init = QUOTE((if (isServer) then {_this call FUNC(initTrack)});
   };
   class Wheeled_APC {
      init = QUOTE((if (isServer) then {_this call FUNC(initTrack)});
   };
   class Truck {
      init = QUOTE((if (isServer) then {_this call FUNC(initTrack)});
   };
   class Tank {
      init = QUOTE((if (isServer) then {_this call FUNC(initTrack)});
   };
};
