CC = gcc

SRCS = 20_1.c 20_2.c 20_3.c 20_4.c 20_5.c 20_6.c 20_7.c 20_8.c 20_9.c 20_10.c \
	   20_11.c 20_12.c 20_13.c 20_14.c 20_15.c 20_16.c 20_17.c 20_18.c

BUILDDIR = build

COBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.c=.o))

CFLAGS = -g

all: clean createdirs $(COBJS)

createdirs:
	$(shell mkdir ${BUILDDIR})

$(COBJS): $(BUILDDIR)/%.o : %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(BUILDDIR)


