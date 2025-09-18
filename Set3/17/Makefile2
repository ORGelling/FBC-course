CXX = g++
CXXFLAGS = -Wall -Werror --std=c++26
LDFLAGS = -s

SOURCES := $(wildcard *.cc)
OBJECTS := $(SOURCES:.cc=.o)
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ $^

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJECTS) $(TARGET)
