#ifndef UTIL_H
#define UTIL_H
#include <gccore.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include "deviceHandler.h"

#define RECENT_ERR_ENT_MISSING 1
#define RECENT_ERR_DEV_MISSING 2

int endsWith(char *str, char *end);
bool canLoadFileType(char *filename);
bool checkExtension(char *filename);
char *getRelativeName(char *str);
void getParentPath(char *src, char *dst);
char *getDevicePath(char *str);
char *stripInvalidChars(char *str);
void load_auto_dol();
void print_gecko(const char* fmt, ...);
bool update_recent();
int load_existing_entry(char *entry);
bool deleteFileOrDir(file_handle* entry);
u16 padsButtonsHeld();
s8 padsStickX();
s8 padsStickY();

#endif 
