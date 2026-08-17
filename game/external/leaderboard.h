#pragma once
#include "common/common_types.h"

void upload_scores(u32 username, u32 string_pointer);
void fill_leaderboard(int board, u32 string_pointer);
u64 get_points(int board, int index);
u64 get_lines(int board, int index);
u64 get_level(int board, int index);
u64 get_recent(int index);
u64 get_player(int index, u32 string_pointer);
u64 reload_settings(u64 block_game, u32 mode_pointer);