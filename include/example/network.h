#pragma once
#include <hooker/hook.h>
#include "position.h"
#include "cpp_string.h"

inline uintptr_t create_packet(int type);
inline void send_network_packet(struct player *player, uintptr_t pkt);

void send_play_sound_packet(struct player *player, const char *sound_name,
			 				struct vec3 pos, float volume, float pitch);