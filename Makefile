CXX = c++

EXECUTABLE = BinaryTree_exe 

OBJS = main.o

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CXX) -o $@ $(OBJS)

%.o: %.cpp
	$(CXX) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXECUTABLE)
