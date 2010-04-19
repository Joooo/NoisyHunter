#ifndef MAP_HPP_INCLUDED
#define MAP_HPP_INCLUDED
	
	struct vertex {
		float pos_x;
		float pos_y;
	};
	
	class map {
	private:
		unsigned int verticeCount;
		vertex* vertices[];
		
	public:
		map();
		~map();
	};
	
#endif
