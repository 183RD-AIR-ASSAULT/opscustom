# About

Adds Shooting Range framework with a module to set it up. Supports different modes and can be applied to any composition.

### Authors

- [Jonpas](http://github.com/jonpas)

### Features

- Event `"op183_shootingrange_started"` event with parameters `[_controller, _name, _mode, _targets, _targetsInvalid]`
- Event `"op183_shootingrange_stopped"` event with parameters `[_controller, _name, _mode, _success, _scorePercentage, _timeElapsed]`
- Function `op183_shootingrange_fnc_configure` for run-time range configuration (description in function header)
