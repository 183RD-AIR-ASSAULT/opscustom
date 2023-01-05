/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\OP183_common\functions\diagnostics\fn_isDebug.sqf
 *	by Ojemineh
 *
 *	check if debug is enabled
 *
 *	Arguments:
 *	nothing
 *
 *	Return:
 *	<BOOLEAN>
 *
 *	Example:
 *	[] call OP183_common_fnc_isDebug;
 *
 */

// -------------------------------------------------------------------------------------------------

private _return = (missionNamespace getVariable ["OP183_debug_enabled", false]);

_return;
