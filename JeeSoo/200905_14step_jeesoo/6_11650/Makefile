TARGET = 11650
OBJS = 11650.o 
CC = cc 
CFLAGS = -c

$(TARGET) : $(OBJS)
	$(CC) $(OBJS) -o  $(TARGET)
	
.c.o :
	$(CC) $(CFLAGS) $<

clean : 
	rm -f $(OBJS) $(TARGET)