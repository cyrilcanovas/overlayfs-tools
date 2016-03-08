#ifndef OVERLAYFS_TOOLS_SH_H
#define OVERLAYFS_TOOLS_SH_H

#include <stdbool.h>

FILE* create_shell_script(char *tmp_path_buffer,bool create_tmp_file);

int command(FILE *output, const char *command_format, ...);

#endif //OVERLAYFS_TOOLS_SH_H
