TARGET = 10809
OBJS = 10809.o 
CC = cc 
CFLAGS = -c

$(TARGET) : $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

.c.o :
	$(CC) $(CFLAGS) $<

clean : 
	rm -f $(OBJS) $(TARGET)