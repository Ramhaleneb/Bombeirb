#ifndef CONSTANT_H_
#define CONSTANT_H_

#define WINDOW_NAME "[PG110] Bombeirb 2016-2017"

// Size (# of pixels) of a cell of the map
#define SIZE_BLOC       40

// Size (# of pixels) of banner
#define LINE_HEIGHT	4
#define BANNER_HEIGHT	40

// Time management
#define DEFAULT_GAME_FPS 30

// map size
#define MAP_WIDTH 5
#define MAP_HEIGHT 5

enum direction {
	NORTH = 0,
	SOUTH, // 1
	WEST, // 2
	EAST //3
};

#define map1 "../Projet/maps/map1"
#define map2 "../Projet/maps/map2"
#define map3 "../Projet/maps/map3"
#define map4 "../Projet/maps/map4"
#define map5 "../Projet/maps/map5"
#define NIVEAUX 5

#endif /* CONSTANT */
