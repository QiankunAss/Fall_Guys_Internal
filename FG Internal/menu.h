#pragma once
#include <Windows.h>

namespace FGInternal {
	namespace GENERAL {
		extern bool hide_corner_text;
	};

	namespace ESP {
		extern bool correct_doors_enabled;
		extern bool correct_path_enabled;
		extern bool non_jinxed_players_enabled;
		extern bool show_all_platforms_enabled;
		extern bool show_player_with_tail;
	};

	namespace MOVEMENT {
		extern bool fly_enabled;
		extern int fly_speed;

		extern bool speed_enabled;
		extern int speed_boost;

		extern bool dive_enabled;
		extern int dive_speed;

		extern bool gravity_enabled;
		extern int gravity_scale;
	};

	namespace COLLISIONS {
		extern bool stun_collision;
		extern bool object_collision;
	};

	namespace CARRY {
		extern bool carryDropForce;
		extern int carryNormalDropBoost;
		extern int carryDiveDropBoost;
	};
};

namespace FGInternalHelper {
	extern bool disable_correct_doors;
	extern bool disable_correct_path;
	extern bool disable_non_jinxed_players;
	extern bool disable_show_all_platforms;
	extern bool disable_show_player_with_tail;

	extern bool disable_fly;
	extern bool disable_speed;
	extern bool disable_dive;
	extern bool disable_gravity;

	extern bool disable_carryDropForce;
};

namespace menu { 
	void draw( );
	void update_keys( );
	void update_indicators( );
};