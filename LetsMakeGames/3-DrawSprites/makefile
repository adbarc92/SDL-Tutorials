
OBJS=main.cpp
INCLUDES=Game.cpp
FLAGS=-O0 -g -Wall -w -std=c++11 -mwindows
LIBS= -mconsole -lmingw32 -lSDL2main -lSDL2 -lSDL2_image

CLEAN=rm -f $(OBJS) *.o *.a

all:
	g++ $(OBJS) $(FLAGS) $(INCLUDES) $(LIBS) -o $(OBJS:cpp=exe) 

run:
	./$(OBJS:cpp=exe)
	$(CLEAN)

clean:
	$(CLEAN)