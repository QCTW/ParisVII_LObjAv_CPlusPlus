CXXFLAGS =	-O2 -g -Wall -fmessage-length=0
TARGET =	calculette
CXX = g++
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
