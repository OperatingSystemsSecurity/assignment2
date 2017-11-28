CFLAGS = -fno-stack-protector

all: vulnerable

clean:
	rm -f vulnerable

%: %.c
	$(CC) $(CFLAGS) -o $@ $<
