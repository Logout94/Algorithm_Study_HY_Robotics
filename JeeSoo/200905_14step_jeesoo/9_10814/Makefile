TARGET = 10814
OBJS = 10814.o 
CC = cc 
CFLAGS = -c

$(TARGET) : $(OBJS)
	$(CC) $(OBJS) -o  $(TARGET)
	
.c.o :
	$(CC) $(CFLAGS) $<

clean : 
	rm -f $(OBJS) $(TARGET)