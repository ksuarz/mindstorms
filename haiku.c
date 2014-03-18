#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "haiku.h"

struct haiku* generate(){
	
	struct haiku* yay = (struct haiku*)malloc(sizeof(struct haiku));
	
	int line1;
	int line2;
	int line3;
	
	char* five[35] = {"the rabbit went home", 
		"sweaters are fuzzy", 
		"dinosaurs died out", 
		"hot soup tastes yummy", 
		"pizza conquers all", 
		"the wind in the sky", 
		"time is eternal", 
		"horse ears are quite soft", 
		"the mountains afar", 
		"a blanket of snow", 
		"doors open quickly", 
		"pieces of cake rejected", 
		"the lenses like eyes", 
		"the ocean breeze", 
		"summer butterflies", 
		"a brand new crayon", 
		"sound echoes through space", 
		"geometrical", 
		"hippopotamus", 
		"congratulations", 
		"kaleidoscopic", 
		"accumulation", 
		"cannibalism",
		"with winter comes snow",
		"rockets to the moon",
		"a doubly linked list",
		"segmentation fault",
		"a cs student",
		"lego mindstorm rules",
		"pizza lunchables",
		"volcano princess"};
	
	char* seven[15] = { 
		"a null pointer exception", 
		"trees protect and nurture us", 
		"kittens often dream in space", 
		"the great big sun warms our earth", 
		"a great big leaf shades an ant", 
		"daylight savings save the day",
		"a null pointer exception",
		"pizza sauce kung fu fighter",
		"cranberries and strawberries",
		"grapefruit size of bowling ball",
		"the winter air makes me blush",
		"a hot air balloon in flight",
		"a seagull eating french fries",
		"swivel chairs rock me to sleep",
		"memory leaks? Use valgrind"};
	
	srand(time(NULL));
	line1 = rand() % 23;
	line2 = rand() % 6;
	line3 = rand() % 23;
	
	printf("%d, %d, %d\n", line1, line2, line3);
	
	while(line1 == line3){
		line3 = rand() % 23;
	
	}
	
	yay->line1 = five[line1];
	yay->line2 = seven[line2];
	yay->line3 = five[line3];
	
	
	return yay;
}

int main(){
	
	struct haiku* yay = generate();
	
	printf("%s\n%s\n%s\n", yay->line1, yay->line2, yay->line3);


	return 0;
}
