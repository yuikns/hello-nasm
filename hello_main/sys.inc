;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;
; sys definition of int 80h
; for more detail , see http://asm.sourceforge.net/syscall.html
;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

%define SYS_setup	0	; [sys_ni_syscall]
%define SYS_exit	1
%define SYS_fork	2
%define SYS_read	3
%define SYS_write	4
%define SYS_open	5
%define SYS_close	6
%define SYS_waitpid	7
%define SYS_creat	8
%define SYS_link	9
%define SYS_unlink	10
%define SYS_execve	11
%define SYS_chdir	12
%define SYS_time	13
%define SYS_mknod	14
%define SYS_chmod	15
%define SYS_lchown	16
%define SYS_break	17	;[sys_ni_syscall]
%define SYS_oldstat	18	;[sys_stat]
%define SYS_lseek	19
%define SYS_getpid	20
%define SYS_mount	21
%define SYS_umount	22;[sys_oldumount]
%define SYS_setuid	23
%define SYS_getuid	24
%define SYS_stime	25
%define SYS_ptrace	26
%define SYS_alarm	27
%define SYS_oldfstat	28	;[sys_fstat]
%define SYS_pause	29
%define SYS_utime	30
%define SYS_stty	31	;[sys_ni_syscall]
%define SYS_gtty	32	;[sys_ni_syscall]
%define SYS_access	33
%define SYS_nice	34
%define SYS_ftime	35	;[sys_ni_syscall]
%define SYS_sync	36
%define SYS_kill	37
%define SYS_rename	38
%define SYS_mkdir	39
%define SYS_rmdir	40
%define SYS_dup	41
%define SYS_pipe	42
%define SYS_times	43
%define SYS_prof	44	;[sys_ni_syscall]
%define SYS_brk	45
%define SYS_setgid	46
%define SYS_getgid	47
%define SYS_signal	48
%define SYS_geteuid	49
%define SYS_getegid	50
%define SYS_acct	51
%define SYS_umount2	52	;[sys_umount] (2.2+)
%define SYS_lock	53	;[sys_ni_syscall]
%define SYS_ioctl	54
%define SYS_fcntl	55
%define SYS_mpx	56	;[sys_ni_syscall]
%define SYS_setpgid	57
%define SYS_ulimit	58	;[sys_ni_syscall]
%define SYS_oldolduname	59
%define SYS_umask	60
%define SYS_chroot	61
%define SYS_ustat	62
%define SYS_dup2	63
%define SYS_getppid	64
%define SYS_getpgrp	65
%define SYS_setsid	66
%define SYS_sigaction	67
%define SYS_sgetmask	68
%define SYS_ssetmask	69
%define SYS_setreuid	70
%define SYS_setregid	71
%define SYS_sigsuspend	72
%define SYS_sigpending	73
%define SYS_sethostname	74
%define SYS_setrlimit	75
%define SYS_getrlimit	76
%define SYS_getrusage	77
%define SYS_gettimeofday	78
%define SYS_settimeofday	79
%define SYS_getgroups	80
%define SYS_setgroups	81
%define SYS_select	82	;[old_select]
%define SYS_symlink	83
%define SYS_oldlstat	84	;[sys_lstat]
%define SYS_readlink	85
%define SYS_uselib	86
%define SYS_swapon	87
%define SYS_reboot	88
%define SYS_readdir	89	;[old_readdir]
%define SYS_mmap	90	;[old_mmap]
%define SYS_munmap	91
%define SYS_truncate	92
%define SYS_ftruncate	93
%define SYS_fchmod	94
%define SYS_fchown	95
%define SYS_getpriority	96
%define SYS_setpriority	97
%define SYS_profil	98;[sys_ni_syscall]
%define SYS_statfs	99
%define SYS_fstatfs	100
%define SYS_ioperm	101
%define SYS_socketcall	102
%define SYS_syslog	103
%define SYS_setitimer	104
%define SYS_getitimer	105
%define SYS_stat	106	;[sys_newstat]
%define SYS_lstat	107	;[sys_newlstat]
%define SYS_fstat	108	;[sys_newfstat]
%define SYS_olduname	109	;[sys_uname]
%define SYS_iopl	110
%define SYS_vhangup	111
%define SYS_idle	112
%define SYS_vm86old	113
%define SYS_wait4	114
%define SYS_swapoff	115
%define SYS_sysinfo	116
%define SYS_ipc	117
%define SYS_fsync	118
%define SYS_sigreturn	119
%define SYS_clone	120
%define SYS_setdomainname	121
%define SYS_uname	122	;[sys_newuname]
%define SYS_modify_ldt	123
%define SYS_adjtimex	124
%define SYS_mprotect	125
%define SYS_sigprocmask	126
%define SYS_create_module	127
%define SYS_init_module	128
%define SYS_delete_module	129
%define SYS_get_kernel_syms	130
%define SYS_quotactl	131
%define SYS_getpgid	132
%define SYS_fchdir	133
%define SYS_bdflush	134
%define SYS_sysfs	135
%define SYS_personality	136
%define SYS_afs_syscall	137	;[sys_ni_syscall]
%define SYS_setfsuid	138
%define SYS_setfsgid	139
%define SYS__llseek	140	;[sys_lseek]
%define SYS_getdents	141
%define SYS__newselect	142	;[sys_select]
%define SYS_flock	143
%define SYS_msync	144
%define SYS_readv	145
%define SYS_writev	146
%define SYS_getsid	147
%define SYS_fdatasync	148
%define SYS__sysctl	149	;[sys_sysctl]
%define SYS_mlock	150
%define SYS_munlock	151
%define SYS_mlockall	152
%define SYS_munlockall	153
%define SYS_sched_setparam	154
%define SYS_sched_getparam	155
%define SYS_sched_setscheduler	156
%define SYS_sched_getscheduler	157
%define SYS_sched_yield	158
%define SYS_sched_get_priority_max	159
%define SYS_sched_get_priority_min	160
%define SYS_sched_rr_get_interval	161
%define SYS_nanosleep	162
%define SYS_mremap	163
%define SYS_setresuid	164	;(2.2+)
%define SYS_getresuid	165	;(2.2+)
%define SYS_vm86	166
%define SYS_query_module	167	;(2.2+)
%define SYS_poll	168	;(2.2+)
%define SYS_nfsservctl	169	;(2.2+)
%define SYS_setresgid	170	;(2.2+)
%define SYS_getresgid	171	;(2.2+)
%define SYS_prctl	172	;(2.2+)
%define SYS_rt_sigreturn	173	;(2.2+)
%define SYS_rt_sigaction	174	;(2.2+)
%define SYS_rt_sigprocmask	175	;(2.2+)
%define SYS_rt_sigpending	176	;(2.2+)
%define SYS_rt_sigtimedwait	177	;(2.2+)
%define SYS_rt_sigqueueinfo	178	;(2.2+)
%define SYS_rt_sigsuspend	179	;(2.2+)
%define SYS_pread	180	;(2.2+)
%define SYS_pwrite	181	;(2.2+)
%define SYS_chown	182	;L(2.2+)
%define SYS_getcwd	183	;(2.2+)
%define SYS_capget	184	;(2.2+)
%define SYS_capset	185	;(2.2+)
%define SYS_sigaltstack	186	;(2.2+)
%define SYS_sendfile	187	;(2.2+)
%define SYS_getpmsg	188	;[sys_ni_syscall]
%define SYS_putpmsg	189	;[sys_ni_syscall]
%define SYS_vfork	190	;(2.2+)

%define SYS_INT	80H

%define STDOUT 1



