################################################################################
### CUSTOMIZE BELOW HERE #######################################################

CC=g++ # define the compiler to use
TARGET=veicolo # define the name of the executable
SOURCES=main.cpp veicolo.cpp autoveicolo.cpp
CFLAGS=-O2
LFLAGS=-lm

################################################################################
### DO NOT EDIT THE FOLLOWING LINES ############################################

# define list of objects
OBJSC=$(SOURCES:.c=.o)
OBJS=$(OBJSC:.cpp=.o)

# the target is obtained linking all .o files
all: $(SOURCES) $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(TARGET)

purge: clean
	rm -f $(TARGET)

clean:
	rm -f *.o

################################################################################
################################################################################
