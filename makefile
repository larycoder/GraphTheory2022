CC      = g++
CFLAGS  =
LDFLAGS = -I lib/header
SRC			= lib/src

ex1: ex1.cpp $(SRC)/List.cpp $(SRC)/Tool.cpp
	$(CC) $(CFLAGS) -o ex1.o ex1.cpp $(SRC)/List.cpp $(SRC)/Tool.cpp $(LDFLAGS)

ex2: ex2.cpp $(SRC)/List.cpp $(SRC)/Tool.cpp
	$(CC) $(CFLAGS) -o ex2.o ex2.cpp $(SRC)/List.cpp $(SRC)/Tool.cpp $(LDFLAGS)

ex3: ex3.cpp $(SRC)/List.cpp $(SRC)/Tool.cpp
	$(CC) $(CFLAGS) -o ex3.o ex3.cpp $(SRC)/List.cpp $(SRC)/Tool.cpp $(LDFLAGS)

ex4: ex4.cpp $(SRC)/List.cpp $(SRC)/Tool.cpp
	$(CC) $(CFLAGS) -o ex4.o ex4.cpp $(SRC)/List.cpp $(SRC)/Tool.cpp $(LDFLAGS)

ex5: ex5-Graph2Tree.cpp $(SRC)/List.cpp $(SRC)/Tool.cpp
	$(CC) $(CFLAGS) -o ex5-Graph2Tree.o ex5-Graph2Tree.cpp $(SRC)/List.cpp $(SRC)/Tool.cpp $(LDFLAGS)