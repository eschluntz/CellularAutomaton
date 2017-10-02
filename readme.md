# 2D cellular automaton

### Erik Schluntz

![txt](http://erikschluntz.com/media/project_thumbs/ca.png)

This program simulates Conway's Game of Life, a well known rule for 2 dimensional Cellular Automata. Cellular Automata can produce incredibly complex patterns from extremely simple rules and interactions, and noted scientist Stephen Wolfram suggests that they can be used to model reality more effectively than mathematical equations in certain situations. 


This program is multithreaded to take full advantage of multiple CPUs in calculations, and the universe is stored in linked tiles supported by a hashmap. The tiled architecture allows the cells to spread infinitely in any direction, but limits computation to regions that are populated for maximum efficiency.