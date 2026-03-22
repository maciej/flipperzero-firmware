#pragma once

#include <stdbool.h>
#include <lib/subghz/devices/preset.h>

void subghz_on_system_start(void);
FuriHalSubGhzPreset subghz_cli_get_default_preset(void);
bool subghz_cli_parse_preset(const char* preset_name, FuriHalSubGhzPreset* preset);
const char* subghz_cli_get_preset_alias(FuriHalSubGhzPreset preset);
