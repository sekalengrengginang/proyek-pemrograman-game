CFLAGS+=-O2 -Wall
LDFLAGS+=-lsigil 
INCLUDES+=-Ipath/usr/local/include/
LIBS+=-L/lib
SRC=src/rectangle.cpp
BIN=debug

all: $(SRC)	
	$(CXX) -o $(BIN) $(SRC) $(CFLAGS) $(INCLUDES) $(LIBS) $(LDFLAGS)

clean:
	-rm $(BIN)