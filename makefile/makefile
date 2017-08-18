CXX=g++
CXXFLAGS=-I
OBJ=hola.o
DEPS=hola.h

%.o : %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)
mkfile.x: $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ mkfile.cpp  
