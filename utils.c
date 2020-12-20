@@ -427,6 +427,7 @@
static int get filesystems(const char *filename, char ***filesystems, const char *pattern)
{
+ int rc = 0;
FILE *f;
char line[128];
@@ -436,7 +437,6 @@
while (fgets(line, sizeof(line), f)) {
char name[sizeof(line)];
- int rc;
if (*line == ’#’ || strncmp(line, "nodev", 5) == 0)
continue;
@@ -446,9 +446,11 @@
rc = add filesystem(filesystems, name);
if (rc)
- return rc;
+ break;
}
- return 0;
+ fclose(f);
+ return rc;
}
