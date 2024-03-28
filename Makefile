CXX := g++
CXXFLAGS := -Wall -Wextra -pedantic -Wno-unused-variable -Wno-unused-parameter

EXEC_PROJECT := Worked-Time

all : $(EXEC_PROJECT)

$(EXEC_PROJECT) : worked-time.o useful/tools-methods.o useful/files-ordery.o
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $^
