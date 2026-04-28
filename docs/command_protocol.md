# Command Protocol (rotctl-like subset)

This system implements a minimal subset of Hamlib rotctl-style commands.
This will be eventually meshed with a networking system for rotctl functionality.

## Supported Commands

### Set Position
P <azimuth> <elevation_optional>

Example:
P 180 0

### Get Position
p

Returns:
AZ <current_azimuth>

### Stop
S

Stops any pending switching operation.

## Responses

RPRT 0   → success
RPRT -1  → error

## Notes
- Azimuth is mapped to antenna sectors, not physical rotation.
- Elevation is currently ignored.