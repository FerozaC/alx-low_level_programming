#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>

#define ELF_MAGIC "\x7F""ELF"

typedef struct {
unsigned char e_ident[EI_NIDENT];
uint16_t e_type;
uint16_t e_machine;
uint32_t e_version;
uint64_t e_entry;
uint64_t e_phoff;
uint64_t e_shoff;
uint32_t e_flags;
uint16_t e_ehsize;
uint16_t e_phentsize;
uint16_t e_phnum;
uint16_t e_shentsize;
uint16_t e_shnum;
uint16_t e_shstrndx;
} Elf64_Ehdr;

void check_elf(Elf64_Ehdr *hdr);
void print_magic(Elf64_Ehdr *hdr);
void print_class(Elf64_Ehdr *hdr);
void print_data(Elf64_Ehdr *hdr);
void print_version(Elf64_Ehdr *hdr);
void print_osabi(Elf64_Ehdr *hdr);
void print_type(Elf64_Ehdr *hdr);
void print_entry(Elf64_Ehdr *hdr);
void close_elf(int fd, void *map, size_t size);

int main(int argc, char *argv[]) {
if (argc != 2) {
fprintf(stderr, "Usage: %s <file>\n", argv[0]);
exit(EXIT_FAILURE);
}

const char *filename = argv[1];

int fd = open(filename, O_RDONLY);
if (fd == -1) {
fprintf(stderr, "Error: Cannot open %s: %s\n", filename, strerror(errno));
exit(EXIT_FAILURE);
}

struct stat st;
if (fstat(fd, &st) == -1) {
fprintf(stderr, "Error: Cannot stat %s: %s\n", filename, strerror(errno));
close(fd);
exit(EXIT_FAILURE);
}

void *map = mmap(NULL, st.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
if (map == MAP_FAILED) {
fprintf(stderr, "Error: Cannot map %s into memory: %s\n", filename, strerror(errno));
close(fd);
exit(EXIT_FAILURE);
}

Elf64_Ehdr *hdr = (Elf64_Ehdr *) map;

check_elf(hdr);
print_magic(hdr);
print_class(hdr);
print_data(hdr);
print_version(hdr);
print_osabi(hdr);
print_type(hdr);
print_entry(hdr);

close_elf(fd, map, st.st_size);

return EXIT_SUCCESS;
}

void check_elf(Elf64_Ehdr *hdr) {
if (memcmp(hdr->e_ident, ELF_MAGIC, strlen(ELF_MAGIC)) != 0) {
fprintf(stderr, "Error: Not an ELF file\n");
exit(EXIT_FAILURE);
}
}

void print_magic(Elf64_Ehdr *hdr) {
printf("  Magic:   ");
for (size_t i = 0; i < EI_NIDENT; i++) {
printf("%02x", hdr->e_ident[i]);
if (i == EI_NIDENT - 1) {
printf("\n");
} else {
printf(" ");
}
}
}

void print_class(Elf64_Ehdr *hdr) {
printf("  Class:                             ");
switch (hdr->e_ident[EI_CLASS]) {
case ELFCLASSNONE

