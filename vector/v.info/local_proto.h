#include <grass/vector.h>

/* level1.c */
int level_one_info(struct Map_info *);

/* parse.c */
void parse_args(int, char**,
		char **, char**,
		int *, int *, int *, int *, int *);

/* print.c */
void format_double(double, char *);
void print_region(const struct Map_info *);
void print_topo(const struct Map_info *);
void print_columns(const struct Map_info *, const char *, const char *);
void print_info(const struct Map_info *);
