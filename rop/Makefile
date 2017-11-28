CFLAGS = -fno-stack-protector

all: vulnerable

clean:
	rm -f vulnerable

disable-aslr:
	sudo tee /proc/sys/kernel/randomize_va_space <<< "0"

%: %.c
	$(CC) $(CFLAGS) -o $@ $<
