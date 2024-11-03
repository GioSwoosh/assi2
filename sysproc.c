//sysproc.c
int sys_cps(void) {
    return cps();
}

int sys_chpr(void) {
    int pid, pr;
    if (argint(0, &pid) < 0)
        return -1;
    if (argint(1, &pr) < 0)
        return -1;
    return chpr(pid, pr);
}