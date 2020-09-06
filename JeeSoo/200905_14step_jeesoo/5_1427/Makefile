TARGET = 1427
OBJS = 1427.o 
CC = cc 
CFLAGS = -c

$(TARGET) : $(OBJS)
	$(CC) $(OBJS) -o  $(TARGET)
	
.c.o :
	$(CC) $(CFLAGS) $<

clean : 
	rm -f $(OBJS) $(TARGET)