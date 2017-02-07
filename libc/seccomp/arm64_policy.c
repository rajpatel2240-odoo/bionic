// Autogenerated file - edit at your peril!!

#include <linux/filter.h>
#include <errno.h>

#include "seccomp_policy.h"
const struct sock_filter arm64_filter[] = {
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 5, 0, 35),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 140, 17, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 101, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 43, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 32, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 19, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 18, 30, 29), //setxattr|lsetxattr|fsetxattr|getxattr|lgetxattr|fgetxattr|listxattr|llistxattr|flistxattr|removexattr|lremovexattr|fremovexattr|getcwd
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 30, 29, 28), //eventfd2|epoll_create1|epoll_ctl|epoll_pwait|dup|dup3|fcntl|inotify_init1|inotify_add_watch|inotify_rm_watch|ioctl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 41, 28, 27), //flock|mknodat|mkdirat|unlinkat|symlinkat|linkat|renameat|umount2|mount
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 59, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 58, 26, 25), //statfs|fstatfs|truncate|ftruncate|fallocate|faccessat|chdir|fchdir|chroot|fchmod|fchmodat|fchownat|fchown|openat|close
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 98, 25, 24), //pipe2|quotactl|getdents64|lseek|read|write|readv|writev|pread64|pwrite64|preadv|pwritev|sendfile|pselect6|ppoll|signalfd4|vmsplice|splice|tee|readlinkat|newfstatat|fstat|sync|fsync|fdatasync|sync_file_range|timerfd_create|timerfd_settime|timerfd_gettime|utimensat|acct|capget|capset|personality|exit|exit_group|waitid|set_tid_address|unshare
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 129, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 105, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 104, 22, 21), //nanosleep|getitimer|setitimer
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 128, 21, 20), //init_module|delete_module|timer_create|timer_gettime|timer_getoverrun|timer_settime|timer_delete|clock_settime|clock_gettime|clock_getres|clock_nanosleep|syslog|ptrace|sched_setparam|sched_setscheduler|sched_getscheduler|sched_getparam|sched_setaffinity|sched_getaffinity|sched_yield|sched_get_priority_max|sched_get_priority_min|sched_rr_get_interval
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 131, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 130, 19, 18), //kill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 139, 18, 17), //tgkill|sigaltstack|rt_sigsuspend|rt_sigaction|rt_sigprocmask|rt_sigpending|rt_sigtimedwait|rt_sigqueueinfo
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 242, 9, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 203, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 198, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 179, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 178, 13, 12), //setpriority|getpriority|reboot|setregid|setgid|setreuid|setuid|setresuid|getresuid|setresgid|getresgid|setfsuid|setfsgid|times|setpgid|getpgid|getsid|setsid|getgroups|setgroups|uname|sethostname|setdomainname|getrlimit|setrlimit|getrusage|umask|prctl|getcpu|gettimeofday|settimeofday|adjtimex|getpid|getppid|getuid|geteuid|getgid|getegid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 180, 12, 11), //sysinfo
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 202, 11, 10), //socket|socketpair|bind|listen
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 221, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 217, 9, 8), //connect|getsockname|getpeername|sendto|recvfrom|setsockopt|getsockopt|shutdown|sendmsg|recvmsg|readahead|brk|munmap|mremap
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 234, 8, 7), //execve|mmap|fadvise64|swapon|swapoff|mprotect|msync|mlock|munlock|mlockall|munlockall|mincore|madvise
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 266, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 260, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 244, 5, 4), //accept4|recvmmsg
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 262, 4, 3), //wait4|prlimit64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 268, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 267, 2, 1), //clock_adjtime
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 272, 1, 0), //setns|sendmmsg|process_vm_readv|process_vm_writev
BPF_STMT(BPF_RET|BPF_K, SECCOMP_RET_ALLOW),
};

const size_t arm64_filter_size = sizeof(arm64_filter) / sizeof(struct sock_filter);