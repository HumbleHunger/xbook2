#ifndef _XBOOK_SYSCALL_H
#define _XBOOK_SYSCALL_H

#include <stdint.h>

typedef void * syscall_t;

enum syscall_num {
    SYS_EXIT,
    SYS_FORK,
    SYS_WAITPID,
    SYS_GETPID,
    SYS_GETPPID,
    SYS_SLEEP,
    SYS_THREAD_CREATE,
    SYS_THREAD_EXIT,
    SYS_THREAD_JOIN,
    SYS_THREAD_CANCEL,
    SYS_THREAD_DETACH,
    SYS_GETTID,
    SYS_THREAD_TESTCANCEL,
    SYS_THREAD_CANCELSTATE,
    SYS_THREAD_CANCELTYPE,
    SYS_SCHED_YIELD,
    SYS_MUTEX_QUEUE_CREATE,
    SYS_MUTEX_QUEUE_DESTROY,
    SYS_MUTEX_QUEUE_WAIT,
    SYS_MUTEX_QUEUE_WAKE,
    SYS_PROC_RESERVED = 30,             /* 预留30个接口给进程管理 */
    SYS_HEAP,
    SYS_MUNMAP,
    SYS_VMM_RESERVED = 40,              /* 预留10个接口给内存管理 */
    SYS_SCANDEV, 
    SYS_RES_RESERVED = 50,              /* 预留10个接口给资源管理 */
    SYS_ALARM,
    SYS_WALLTIME,
    SYS_GETTICKS,
    SYS_GETTIMEOFDAY,
    SYS_CLOCK_GETTIME,
    SYS_TIME_RESERVED = 60,             /* 预留10个接口给时间管理 */
    SYS_UNID,
    SYS_TSTATE,
    SYS_GETVER,
    SYS_MSTATE,
    SYS_USLEEP,
    SYS_OPEN,
    SYS_CLOSE,
    SYS_READ,
    SYS_WRITE,
    SYS_LSEEK,
    SYS_ACCESS,
    SYS_UNLINK,
    SYS_FTRUNCATE,
    SYS_FSYNC,
    SYS_IOCTL,
    SYS_FCNTL,
    SYS_TELL,
    SYS_MKDIR,
    SYS_RMDIR,
    SYS_RENAME,
    SYS_GETCWD,
    SYS_CHDIR,
    SYS_EXECVE,
    SYS_STAT,
    SYS_FSTAT,
    SYS_CHMOD,
    SYS_FCHMOD,
    SYS_OPENDIR,
    SYS_CLOSEDIR,
    SYS_READDIR,
    SYS_REWINDDIR,
    SYS_MKFS,
    SYS_MOUNT,
    SYS_UNMOUNT,
    SYS_DUP,
    SYS_DUP2,
    SYS_PIPE,
    SYS_SHMGET,
    SYS_SHMPUT,
    SYS_SHMMAP,
    SYS_SHMUNMAP,
    SYS_SEMGET,
    SYS_SEMPUT,
    SYS_SEMDOWN,
    SYS_SEMUP,
    SYS_MSGGET,
    SYS_MSGPUT,
    SYS_MSGSEND,
    SYS_MSGRECV,
    SYS_PROBEDEV,
    SYS_EXPSEND,
    SYS_EXPCATCH,
    SYS_EXPBLOCK,
    SYS_EXPRET,
    SYS_ACNTLOGIN,
    SYS_ACNTREGISTER,
    SYS_ACNTNAME,
    SYS_ACNTVERIFY,
    SYS_MMAP,
    SYS_CREATPROCESS,
    SYS_RESUMEPROCESS,
    SYS_BIND_PORT,
    SYS_UNBIND_PORT,
    SYS_RECEIVE_PORT,
    SYS_REPLY_PORT,
    SYS_REQUEST_PORT,
    SYS_FASTIO,
    SYS_FASTREAD,
    SYS_FASTWRITE,
    SYS_EXPMASK,
    SYS_EXPHANDLER,
    SYS_SYSCONF,
    SYS_TIMES,
    SYS_GETHOSTNAME,
    SYS_GETPGID,
    SYS_SETPGID,
    SYS_MKFIFO,
    SYS_SOCKCALL,
    SYSCALL_NR,
};

extern syscall_t syscalls[];

/* 属于检测点的系统调用有：
SYS_WAITPID，SYS_SLEEP，SYS_THREAD_JOIN，SYS_GETRES, SYS_PUTRES, SYS_READRES, 
SYS_WRITERES */

void syscall_init();
int syscall_error(uint32_t callno);

#endif   /*_XBOOK_SYSCALL_H*/
