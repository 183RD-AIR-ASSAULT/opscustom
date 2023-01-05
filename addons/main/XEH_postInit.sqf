#include "script_component.hpp"

#include "XEH_PREP.hpp"


if (isServer) then
{
   private _group = group player;
   private _leader = leader _group;
   private _data = [nil, "Awesome Group", false]; // [<Insignia>, <Group Name>, <Private>]
   ["RegisterGroup", [_group, _leader, _data]] call BIS_fnc_dynamicGroups;
};