CC = gcc

SRCS = 

BUILDDIR = build

COBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.c=.o))

CFLAGS = 

all: clean createdirs build

createdirs:
	$(shell mkdir ${BUILDDIR})

build:$(COBJS)

$(COBJS): $(BUILDDIR)/%.o : %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(BUILDDIR)


