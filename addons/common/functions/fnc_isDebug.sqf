/*
 *	ARMA EXTENDED ENVIRONMENT
 *	\common\functions\diagnostics\fn_isDebug.sqf
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
 *	[] call common_fnc_isDebug;
 *
 */

// -------------------------------------------------------------------------------------------------

private _return = (missionNamespace getVariable ["debug_enabled", false]);

_return;