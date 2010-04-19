#include "map.hpp"

map::map() {
	verticeCount=0;
}
map::~map() {
	if (verticeCount)
		delete[] vertices;
}
