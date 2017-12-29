TARGET =	Test
CXX = clang++ -std=c++11 -stdlib=libc++ -Weverything
LIBS =
HEADERS_DIR = .
OBJS =		$(TARGET).o

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)
	
$(OBJS):	$(TARGET).cpp
	$(CXX) -g -Wall -c ./$(TARGET).cpp 

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
