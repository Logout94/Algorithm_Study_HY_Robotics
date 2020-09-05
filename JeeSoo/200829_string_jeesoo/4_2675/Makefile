TARGET = 2675
OBJS = 2675.o 
CC = cc 
CFLAGS = -c

$(TARGET) : $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

.c.o :
	$(CC) $(CFLAGS) $<

clean : 
	rm -f $(OBJS) $(TARGET)