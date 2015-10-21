#define nx_struct struct
#define nx_union union
# 37 "/usr/include/stdint.h"
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;









typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;









typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;








typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 120 "/usr/include/stdint.h" 3
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
#line 135
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 35 "/usr/include/inttypes.h"
typedef int __gwchar_t;
#line 283
#line 279
typedef struct __nesc_unnamed4242 {

  long int quot;
  long int rem;
} imaxdiv_t;
# 385 "/usr/local/lib/ncc/nesc_nx.h"
typedef struct { char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 211 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stddef.h" 3
typedef long unsigned int size_t;
# 44 "/usr/include/string.h"
extern void *memcpy(void *__restrict __dest, 
const void *__restrict __src, size_t __n) 
__attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 65
extern void *memset(void *__s, int __c, size_t __n) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
# 131 "/usr/include/string.h" 3
extern char *strncpy(char *__restrict __dest, 
const char *__restrict __src, size_t __n) 
__attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;









extern int strcmp(const char *__s1, const char *__s2) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;

extern int strncmp(const char *__s1, const char *__s2, size_t __n) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
# 40 "/usr/include/xlocale.h"
#line 28
typedef struct __locale_struct {


  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 348 "/usr/include/string.h" 3
extern char *strtok(char *__restrict __s, const char *__restrict __delim) 
__attribute((__nothrow__)) __attribute((__nonnull__(2))) ;
#line 413
extern char *strerror(int __errnum) __attribute((__nothrow__)) ;
#line 459
extern void bzero(void *__s, size_t __n) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
# 323 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stddef.h" 3
typedef int wchar_t;
# 67 "/usr/include/bits/waitstatus.h"
union wait {

  int w_status;
  struct __nesc_unnamed4243 {


    unsigned int __w_termsig : 7;
    unsigned int __w_coredump : 1;
    unsigned int __w_retcode : 8;
    unsigned int  : 16;
  } 






  __wait_terminated;
  struct __nesc_unnamed4244 {


    unsigned int __w_stopval : 8;
    unsigned int __w_stopsig : 8;
    unsigned int  : 16;
  } 





  __wait_stopped;
};
# 72 "/usr/include/stdlib.h"
#line 68
typedef union __nesc_unnamed4245 {

  union wait *__uptr;
  int *__iptr;
} __WAIT_STATUS __attribute((__transparent_union__)) ;
# 102 "/usr/include/stdlib.h" 3
#line 98
typedef struct __nesc_unnamed4246 {

  int quot;
  int rem;
} div_t;







#line 106
typedef struct __nesc_unnamed4247 {

  long int quot;
  long int rem;
} ldiv_t;







__extension__ 



#line 118
typedef struct __nesc_unnamed4248 {

  long long int quot;
  long long int rem;
} lldiv_t;
#line 145
extern double atof(const char *__nptr) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;

extern int atoi(const char *__nptr) 
__attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;








__extension__ 
#line 195
__extension__ 




__extension__ 








__extension__ 




__extension__ 
# 31 "/usr/include/bits/types.h"
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#line 134
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct __nesc_unnamed4249 {
#line 144
  int __val[2];
} 
#line 144
__fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void *__timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 34 "/usr/include/sys/types.h"
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
#line 61
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
#line 99
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 60 "/usr/include/time.h"
typedef __clock_t clock_t;
#line 76
typedef __time_t time_t;
#line 92
typedef __clockid_t clockid_t;
#line 104
typedef __timer_t timer_t;
# 151 "/usr/include/sys/types.h"
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 201 "/usr/include/sys/types.h" 3
typedef unsigned int u_int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int u_int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int u_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int u_int64_t __attribute((__mode__(__DI__))) ;

typedef int register_t __attribute((__mode__(__word__))) ;
# 24 "/usr/include/bits/sigset.h"
typedef int __sig_atomic_t;







#line 29
typedef struct __nesc_unnamed4250 {

  unsigned long int __val[1024 / (8 * sizeof(unsigned long int ))];
} __sigset_t;
# 38 "/usr/include/sys/select.h"
typedef __sigset_t sigset_t;
# 120 "/usr/include/time.h"
struct timespec {

  __time_t tv_sec;
  long int tv_nsec;
};
# 75 "/usr/include/bits/time.h"
struct timeval {

  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 49 "/usr/include/sys/select.h"
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#line 78
#line 67
typedef struct __nesc_unnamed4251 {







  __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))];
} 

fd_set;






typedef __fd_mask fd_mask;
# 30 "/usr/include/sys/sysmacros.h"
__extension__ 


__extension__ 


__extension__ 
# 229 "/usr/include/sys/types.h"
typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 50 "/usr/include/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;






#line 53
typedef union __nesc_unnamed4252 {

  char __size[56];
  long int __align;
} pthread_attr_t;







#line 61
typedef struct __pthread_internal_list {

  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
#line 104
#line 76
typedef union __nesc_unnamed4253 {

  struct __pthread_mutex_s {

    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
  } 








  __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;





#line 106
typedef union __nesc_unnamed4254 {

  char __size[4];
  int __align;
} pthread_mutexattr_t;
#line 130
#line 115
typedef union __nesc_unnamed4255 {

  struct __nesc_unnamed4256 {

    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





#line 132
typedef union __nesc_unnamed4257 {

  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;
#line 189
#line 150
typedef union __nesc_unnamed4258 {


  struct __nesc_unnamed4259 {

    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } __data;
#line 187
  char __size[56];
  long int __align;
} pthread_rwlock_t;





#line 191
typedef union __nesc_unnamed4260 {

  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;








#line 206
typedef union __nesc_unnamed4261 {

  char __size[32];
  long int __align;
} pthread_barrier_t;





#line 212
typedef union __nesc_unnamed4262 {

  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 349 "/usr/include/stdlib.h"
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 380
extern int rand(void ) __attribute((__nothrow__)) ;

extern void srand(unsigned int __seed) __attribute((__nothrow__)) ;
#line 418
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  unsigned long long int __a;
};
#line 471
extern void *malloc(size_t __size) __attribute((__nothrow__)) __attribute((__malloc__)) ;

extern void *calloc(size_t __nmemb, size_t __size) 
__attribute((__nothrow__)) __attribute((__malloc__)) ;
#line 488
extern void free(void *__ptr) __attribute((__nothrow__)) ;
# 544 "/usr/include/stdlib.h" 3
extern void exit(int __status) __attribute((__nothrow__)) __attribute((__noreturn__)) ;
#line 567
extern char *getenv(const char *__name) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 742
typedef int (*__compar_fn_t)(const void *, const void *);
#line 776
__extension__ 
#line 793
__extension__ 
# 31 "/usr/include/bits/mathdef.h"
typedef float float_t;
typedef double double_t;
# 198 "/usr/include/math.h"
enum __nesc_unnamed4263 {

  FP_NAN, 

  FP_INFINITE, 

  FP_ZERO, 

  FP_SUBNORMAL, 

  FP_NORMAL
};
#line 298
#line 291
typedef enum __nesc_unnamed4264 {

  _IEEE_ = -1, 
  _SVID_, 
  _XOPEN_, 
  _POSIX_, 
  _ISOC_
} _LIB_VERSION_TYPE;
#line 316
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 149 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stddef.h" 3
typedef long int ptrdiff_t;
# 48 "/usr/include/ctype.h"
enum __nesc_unnamed4265 {

  _ISupper = 0 < 8 ? (1 << 0) << 8 : (1 << 0) >> 8, 
  _ISlower = 1 < 8 ? (1 << 1) << 8 : (1 << 1) >> 8, 
  _ISalpha = 2 < 8 ? (1 << 2) << 8 : (1 << 2) >> 8, 
  _ISdigit = 3 < 8 ? (1 << 3) << 8 : (1 << 3) >> 8, 
  _ISxdigit = 4 < 8 ? (1 << 4) << 8 : (1 << 4) >> 8, 
  _ISspace = 5 < 8 ? (1 << 5) << 8 : (1 << 5) >> 8, 
  _ISprint = 6 < 8 ? (1 << 6) << 8 : (1 << 6) >> 8, 
  _ISgraph = 7 < 8 ? (1 << 7) << 8 : (1 << 7) >> 8, 
  _ISblank = 8 < 8 ? (1 << 8) << 8 : (1 << 8) >> 8, 
  _IScntrl = 9 < 8 ? (1 << 9) << 8 : (1 << 9) >> 8, 
  _ISpunct = 10 < 8 ? (1 << 10) << 8 : (1 << 10) >> 8, 
  _ISalnum = 11 < 8 ? (1 << 11) << 8 : (1 << 11) >> 8
};
# 91 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/tos.h"
typedef unsigned char bool;






enum __nesc_unnamed4266 {
  FALSE = 0, 
  TRUE = 1
};

uint16_t TOS_LOCAL_ADDRESS = 1;

enum __nesc_unnamed4267 {
  FAIL = 0, 
  SUCCESS = 1
};


static inline uint8_t rcombine(uint8_t r1, uint8_t r2);
typedef uint8_t result_t  ;







static inline result_t rcombine(result_t r1, result_t r2);







static inline result_t rcombine3(result_t r1, result_t r2, result_t r3);




static inline result_t rcombine4(result_t r1, result_t r2, result_t r3, 
result_t r4);





enum __nesc_unnamed4268 {
  NULL = 0x0
};
# 45 "/usr/include/stdio.h"
struct _IO_FILE;



typedef struct _IO_FILE FILE;
#line 65
typedef struct _IO_FILE __FILE;
# 95 "/usr/include/wchar.h" 3
#line 83
typedef struct __nesc_unnamed4269 {

  int __count;
  union __nesc_unnamed4270 {


    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 26 "/usr/include/_G_config.h"
#line 22
typedef struct __nesc_unnamed4271 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;




#line 27
typedef struct __nesc_unnamed4272 {

  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3
typedef int _G_int16_t __attribute((__mode__(__HI__))) ;
typedef int _G_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int _G_uint16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int _G_uint32_t __attribute((__mode__(__SI__))) ;
# 40 "/usr/lib/gcc/x86_64-redhat-linux/4.4.7/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t;
#line 170
struct _IO_FILE;









typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};
#line 206
enum __codecvt_result {

  __codecvt_ok, 
  __codecvt_partial, 
  __codecvt_error, 
  __codecvt_noconv
};
#line 271
struct _IO_FILE {
  int _flags;




  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;








  __off64_t _offset;








  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof(int ) - 4 * sizeof(void *) - sizeof(size_t )];
};



typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

struct _IO_FILE_plus;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
#line 364
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, 
size_t __n);







typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn(void *__cookie);
#line 460
extern int _IO_getc(_IO_FILE *__fp);
# 80 "/usr/include/stdio.h"
typedef __gnuc_va_list va_list;
# 111 "/usr/include/stdio.h" 3
typedef _G_fpos_t fpos_t;
# 165 "/usr/include/stdio.h"
struct _IO_FILE;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
# 236 "/usr/include/stdio.h" 3
extern int fclose(FILE *__stream);
#line 271
extern FILE *fopen(const char *__restrict __filename, 
const char *__restrict __modes);
#line 305
extern FILE *fdopen(int __fd, const char *__modes) __attribute((__nothrow__)) ;
#line 355
extern int fprintf(FILE *__restrict __stream, 
const char *__restrict __format, ...);




extern int printf(const char *__restrict __format, ...);








extern int vfprintf(FILE *__restrict __s, const char *__restrict __format, 
__gnuc_va_list __arg);
#line 385
extern int snprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, ...) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 4))) ;

extern int vsnprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, __gnuc_va_list __arg) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 0))) ;
#line 429
extern int fscanf(FILE *__restrict __stream, 
const char *__restrict __format, ...);
#line 447
extern int fscanf(FILE *__restrict __stream, const char *__restrict __format, ...) __asm ("""__isoc99_fscanf");
# 41 "/usr/include/signal.h"
typedef __sig_atomic_t sig_atomic_t;
# 37 "/usr/include/bits/siginfo.h"
#line 33
typedef union sigval {

  int sival_int;
  void *sival_ptr;
} sigval_t;
#line 108
#line 51
typedef struct siginfo {

  int si_signo;
  int si_errno;

  int si_code;

  union __nesc_unnamed4273 {

    int _pad[128 / sizeof(int ) - 4];


    struct __nesc_unnamed4274 {

      __pid_t si_pid;
      __uid_t si_uid;
    } _kill;


    struct __nesc_unnamed4275 {

      int si_tid;
      int si_overrun;
      sigval_t si_sigval;
    } _timer;


    struct __nesc_unnamed4276 {

      __pid_t si_pid;
      __uid_t si_uid;
      sigval_t si_sigval;
    } _rt;


    struct __nesc_unnamed4277 {

      __pid_t si_pid;
      __uid_t si_uid;
      int si_status;
      __clock_t si_utime;
      __clock_t si_stime;
    } _sigchld;


    struct __nesc_unnamed4278 {

      void *si_addr;
    } _sigfault;


    struct __nesc_unnamed4279 {

      long int si_band;
      int si_fd;
    } _sigpoll;
  } _sifields;
} siginfo_t;
#line 129
enum __nesc_unnamed4280 {

  SI_ASYNCNL = -60, 

  SI_TKILL = -6, 

  SI_SIGIO, 

  SI_ASYNCIO, 

  SI_MESGQ, 

  SI_TIMER, 

  SI_QUEUE, 

  SI_USER, 

  SI_KERNEL = 0x80
};




enum __nesc_unnamed4281 {

  ILL_ILLOPC = 1, 

  ILL_ILLOPN, 

  ILL_ILLADR, 

  ILL_ILLTRP, 

  ILL_PRVOPC, 

  ILL_PRVREG, 

  ILL_COPROC, 

  ILL_BADSTK
};



enum __nesc_unnamed4282 {

  FPE_INTDIV = 1, 

  FPE_INTOVF, 

  FPE_FLTDIV, 

  FPE_FLTOVF, 

  FPE_FLTUND, 

  FPE_FLTRES, 

  FPE_FLTINV, 

  FPE_FLTSUB
};



enum __nesc_unnamed4283 {

  SEGV_MAPERR = 1, 

  SEGV_ACCERR
};



enum __nesc_unnamed4284 {

  BUS_ADRALN = 1, 

  BUS_ADRERR, 

  BUS_OBJERR
};



enum __nesc_unnamed4285 {

  TRAP_BRKPT = 1, 

  TRAP_TRACE
};



enum __nesc_unnamed4286 {

  CLD_EXITED = 1, 

  CLD_KILLED, 

  CLD_DUMPED, 

  CLD_TRAPPED, 

  CLD_STOPPED, 

  CLD_CONTINUED
};



enum __nesc_unnamed4287 {

  POLL_IN = 1, 

  POLL_OUT, 

  POLL_MSG, 

  POLL_ERR, 

  POLL_PRI, 

  POLL_HUP
};
#line 293
#line 273
typedef struct sigevent {

  sigval_t sigev_value;
  int sigev_signo;
  int sigev_notify;

  union __nesc_unnamed4288 {

    int _pad[64 / sizeof(int ) - 4];



    __pid_t _tid;

    struct __nesc_unnamed4289 {

      void (*_function)(sigval_t );
      void *_attribute;
    } _sigev_thread;
  } _sigev_un;
} sigevent_t;






enum __nesc_unnamed4290 {

  SIGEV_SIGNAL = 0, 

  SIGEV_NONE, 

  SIGEV_THREAD, 


  SIGEV_THREAD_ID = 4
};
# 84 "/usr/include/signal.h"
typedef void (*__sighandler_t)(int );
#line 101
extern __sighandler_t signal(int __sig, __sighandler_t __handler) 
__attribute((__nothrow__)) ;
# 216 "/usr/include/signal.h" 3
typedef __sighandler_t sig_t;





extern int sigemptyset(sigset_t *__set) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
# 25 "/usr/include/bits/sigaction.h"
struct sigaction {



  union __nesc_unnamed4291 {


    __sighandler_t sa_handler;

    void (*sa_sigaction)(int , siginfo_t *, void *);
  } 
  __sigaction_handler;







  __sigset_t sa_mask;


  int sa_flags;


  void (*sa_restorer)(void );
};
# 266 "/usr/include/signal.h"
extern int sigaction(int __sig, const struct sigaction *__restrict __act, 
struct sigaction *__restrict __oact) __attribute((__nothrow__)) ;
#line 314
struct sigvec {

  __sighandler_t sv_handler;
  int sv_mask;

  int sv_flags;
};
# 28 "/usr/include/bits/sigcontext.h"
struct _fpreg {

  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg {

  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg {

  __uint32_t element[4];
};
# 109 "/usr/include/bits/sigcontext.h" 3
struct _fpstate {


  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t padding[24];
};

struct sigcontext {

  unsigned long r8;
  unsigned long r9;
  unsigned long r10;
  unsigned long r11;
  unsigned long r12;
  unsigned long r13;
  unsigned long r14;
  unsigned long r15;
  unsigned long rdi;
  unsigned long rsi;
  unsigned long rbp;
  unsigned long rbx;
  unsigned long rdx;
  unsigned long rax;
  unsigned long rcx;
  unsigned long rsp;
  unsigned long rip;
  unsigned long eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  unsigned long err;
  unsigned long trapno;
  unsigned long oldmask;
  unsigned long cr2;
  struct _fpstate *fpstate;
  unsigned long __reserved1[8];
};
# 26 "/usr/include/bits/sigstack.h"
struct sigstack {

  void *ss_sp;
  int ss_onstack;
};



enum __nesc_unnamed4292 {

  SS_ONSTACK = 1, 

  SS_DISABLE
};
#line 55
#line 50
typedef struct sigaltstack {

  void *ss_sp;
  int ss_flags;
  size_t ss_size;
} stack_t;
# 33 "/usr/include/sys/ucontext.h"
typedef long int greg_t;





typedef greg_t gregset_t[23];
# 94 "/usr/include/sys/ucontext.h" 3
struct _libc_fpxreg {

  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int padding[3];
};

struct _libc_xmmreg {

  __uint32_t element[4];
};

struct _libc_fpstate {


  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t padding[24];
};


typedef struct _libc_fpstate *fpregset_t;








#line 126
typedef struct __nesc_unnamed4293 {

  gregset_t gregs;

  fpregset_t fpregs;
  unsigned long __reserved1[8];
} mcontext_t;










#line 135
typedef struct ucontext {

  unsigned long int uc_flags;
  struct ucontext *uc_link;
  stack_t uc_stack;
  mcontext_t uc_mcontext;
  __sigset_t uc_sigmask;
  struct _libc_fpstate __fpregs_mem;
} ucontext_t;
# 62 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/nido.h"
enum __nesc_unnamed4294 {
  TOSNODES = 1000, 
  DEFAULT_EEPROM_SIZE = 512 * 1024
};

enum __nesc_unnamed4295 {
  TOSSIM_RADIO_MODEL_SIMPLE = 0, 
  TOSSIM_RADIO_MODEL_LOSSY = 1, 
  TOSSIM_RADIO_MODEL_PACKET = 2
};
# 55 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/heap_array.h"
#line 51
typedef struct __nesc_unnamed4296 {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long *key);
static inline void heap_insert(heap_t *heap, void *data, long long key);
# 64 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/event_queue.h"
struct TOS_state;







#line 66
typedef struct event_queue {
  int pause;
  heap_t heap;


  void *lock;
} event_queue_t;
#line 84
#line 74
typedef struct event {
  long long time;
  int mote;
  int pause;
  int force;

  void *data;

  void (*handle)(struct event *, struct TOS_state *);
  void (*cleanup)(struct event *);
} event_t;


static inline void queue_init(event_queue_t *queue, int fpause);
static void queue_insert_event(event_queue_t *queue, event_t *event);
static inline event_t *queue_pop_event(event_queue_t *queue);
static inline void queue_handle_next_event(event_queue_t *queue);
static int queue_is_empty(event_queue_t *queue);
static long long queue_peek_event_time(event_queue_t *queue);
# 62 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/adjacency_list.h"
enum __nesc_unnamed4297 {
  NUM_NODES_ALLOC = 200
};









#line 67
typedef struct link {
  int mote;
  double data;
  double neg;
  double pos;
  char bit;
  struct link *next_link;
} link_t;


link_t *free_list;
int num_free_links;

static link_t *allocate_link(int mote);

static int adjacency_list_init(void);
# 69 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/rfm_model.h"
#line 62
typedef struct __nesc_unnamed4298 {
  void (*init)(void);
  void (*transmit)(int , char );
  void (*stop_transmit)(int );
  char (*hears)(int );
  bool (*connected)(int , int );
  link_t *(*neighbors)(int );
} rfm_model;


static inline rfm_model *create_simple_model(void);





static inline rfm_model *create_lossy_model(char *file);

static void static_one_cell_init(void);



static inline void set_link_prob_value(uint16_t moteID1, uint16_t moteID2, double prob);



extern link_t *radio_connectivity[TOSNODES];
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/adc_model.h"
#line 59
typedef struct __nesc_unnamed4299 {
  void (*init)(void);

  uint16_t (*read)(int , uint8_t , long long );
} adc_model;

static inline adc_model *create_random_adc_model(void);
static inline adc_model *create_generic_adc_model(void);
static inline void set_adc_value(int moteID, uint8_t port, uint16_t value);
# 62 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/spatial_model.h"
#line 58
typedef struct __nesc_unnamed4300 {
  double xCoordinate;
  double yCoordinate;
  double zCoordinate;
} point3D;






#line 64
typedef struct __nesc_unnamed4301 {
  void (*init)(void);
  void (*get_position)(int , long long , point3D *);
} 

spatial_model;



static inline spatial_model *create_simple_spatial_model(void);
# 64 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/nido_eeprom.h"
static inline int anonymousEEPROM(int numMotes, int eepromSize);
static inline int namedEEPROM(char *name, int numMotes, int eepromSize);
# 60 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/events.h"
#line 55
typedef struct __nesc_unnamed4302 {
  int interval;
  int mote;
  int valid;
  int disabled;
} clock_tick_data_t;




#line 62
typedef struct __nesc_unnamed4303 {
  int valid;
  char port;
} adc_tick_data_t;





#line 67
typedef struct __nesc_unnamed4304 {
  int interval;
  int mote;
  int valid;
} radio_tick_data_t;





#line 73
typedef struct __nesc_unnamed4305 {
  int interval;
  int mote;
  int valid;
} channel_mon_data_t;







#line 79
typedef struct __nesc_unnamed4306 {
  int interval;
  int mote;
  int valid;
  int count;
  int ending;
} spi_byte_data_t;





#line 87
typedef struct __nesc_unnamed4307 {
  int interval;
  int mote;
  int valid;
} radio_timing_data_t;





static inline void event_default_cleanup(event_t *event);

static void event_total_cleanup(event_t *event);

static void event_clocktick_create(event_t *event, 
int mote, 
long long eventTime, 
int interval);

static inline void event_clocktick_handle(event_t *event, 
struct TOS_state *state);

static inline void event_clocktick_invalidate(event_t *event);
#line 134
void event_spi_byte_create(event_t *event, int mote, long long ftime, int interval, int count);
#line 146
static inline void event_cleanup(event_t *fevent);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/types/AM.h"
enum __nesc_unnamed4308 {
  TOS_BCAST_ADDR = 0xffff, 
  TOS_UART_ADDR = 0x007e
};





enum __nesc_unnamed4309 {
  TOS_DEFAULT_AM_GROUP = 0x7d
};

uint8_t TOS_AM_GROUP = TOS_DEFAULT_AM_GROUP;
#line 105
#line 84
typedef struct TOS_Msg {


  uint16_t addr;
  uint8_t type;
  uint8_t group;
  uint8_t length;
  int8_t data[29];
  uint16_t crc;







  uint16_t strength;
  uint8_t ack;
  uint16_t time;
  uint8_t sendSecurityMode;
  uint8_t receiveSecurityMode;
} TOS_Msg;
#line 129
#line 107
typedef struct TOS_Msg_TinySecCompat {


  uint16_t addr;
  uint8_t type;

  uint8_t length;
  uint8_t group;
  int8_t data[29];
  uint16_t crc;







  uint16_t strength;
  uint8_t ack;
  uint16_t time;
  uint8_t sendSecurityMode;
  uint8_t receiveSecurityMode;
} TOS_Msg_TinySecCompat;
#line 150
#line 131
typedef struct TinySec_Msg {

  uint16_t addr;
  uint8_t type;
  uint8_t length;

  uint8_t iv[4];

  uint8_t enc[29];

  uint8_t mac[4];


  uint8_t calc_mac[4];
  uint8_t ack_byte;
  bool cryptoDone;
  bool receiveDone;

  bool MACcomputed;
} __attribute((packed))  TinySec_Msg;



enum __nesc_unnamed4310 {
  MSG_DATA_SIZE = (unsigned long )& ((struct TOS_Msg *)0)->crc + sizeof(uint16_t ), 
  TINYSEC_MSG_DATA_SIZE = (unsigned long )& ((struct TinySec_Msg *)0)->mac + 4, 
  DATA_LENGTH = 29, 
  LENGTH_BYTE_NUMBER = (unsigned long )& ((struct TOS_Msg *)0)->length + 1, 
  TINYSEC_NODE_ID_SIZE = sizeof(uint16_t )
};

enum __nesc_unnamed4311 {
  TINYSEC_AUTH_ONLY = 1, 
  TINYSEC_ENCRYPT_AND_AUTH = 2, 
  TINYSEC_DISABLED = 3, 
  TINYSEC_RECEIVE_AUTHENTICATED = 4, 
  TINYSEC_RECEIVE_CRC = 5, 
  TINYSEC_RECEIVE_ANY = 6, 
  TINYSEC_ENABLED_BIT = 128, 
  TINYSEC_ENCRYPT_ENABLED_BIT = 64
} __attribute((packed)) ;


typedef TOS_Msg *TOS_MsgPtr;
# 57 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/packet_sim.h"
static inline void packet_sim_init(char *cFile);

void packet_sim_transmit_done(TOS_MsgPtr msg)   ;
TOS_MsgPtr packet_sim_receive_msg(TOS_MsgPtr msg)   ;
# 57 "/usr/include/sys/time.h" 3
struct timezone {

  int tz_minuteswest;
  int tz_dsttime;
};

typedef struct timezone *__restrict __timezone_ptr_t;









extern int gettimeofday(struct timeval *__restrict __tv, 
__timezone_ptr_t __tz) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 93
enum __itimer_which {


  ITIMER_REAL = 0, 


  ITIMER_VIRTUAL = 1, 



  ITIMER_PROF = 2
};




struct itimerval {


  struct timeval it_interval;

  struct timeval it_value;
};






typedef int __itimer_which_t;
# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/nido.h"
#line 83
typedef struct TOS_node_state {
  long long time;
  int pot_setting;
} TOS_node_state_t;
#line 111
#line 88
typedef struct TOS_state {
  long long tos_time;
  int radio_kb_rate;
  short num_nodes;
  short current_node;
  TOS_node_state_t node_state[TOSNODES];
  event_queue_t queue;
  uint8_t radioModel;
  rfm_model *rfm;
  adc_model *adc;
  spatial_model *space;
  bool moteOn[TOSNODES];
  bool cancelBoot[TOSNODES];


  bool paused;



  void *pause_lock;
} 


TOS_state_t;






extern TOS_state_t tos_state;




void set_sim_rate(uint32_t );
uint32_t get_sim_rate(void);
static void __nesc_nido_initialise(int mote);
# 54 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/types/dbg_modes.h"
typedef long long TOS_dbg_mode;



enum __nesc_unnamed4312 {
  DBG_ALL = ~0ULL, 


  DBG_BOOT = 1ULL << 0, 
  DBG_CLOCK = 1ULL << 1, 
  DBG_TASK = 1ULL << 2, 
  DBG_SCHED = 1ULL << 3, 
  DBG_SENSOR = 1ULL << 4, 
  DBG_LED = 1ULL << 5, 
  DBG_CRYPTO = 1ULL << 6, 


  DBG_ROUTE = 1ULL << 7, 
  DBG_AM = 1ULL << 8, 
  DBG_CRC = 1ULL << 9, 
  DBG_PACKET = 1ULL << 10, 
  DBG_ENCODE = 1ULL << 11, 
  DBG_RADIO = 1ULL << 12, 


  DBG_LOG = 1ULL << 13, 
  DBG_ADC = 1ULL << 14, 
  DBG_I2C = 1ULL << 15, 
  DBG_UART = 1ULL << 16, 
  DBG_PROG = 1ULL << 17, 
  DBG_SOUNDER = 1ULL << 18, 
  DBG_TIME = 1ULL << 19, 
  DBG_POWER = 1ULL << 20, 



  DBG_SIM = 1ULL << 21, 
  DBG_QUEUE = 1ULL << 22, 
  DBG_SIMRADIO = 1ULL << 23, 
  DBG_HARD = 1ULL << 24, 
  DBG_MEM = 1ULL << 25, 



  DBG_USR1 = 1ULL << 27, 
  DBG_USR2 = 1ULL << 28, 
  DBG_USR3 = 1ULL << 29, 
  DBG_TEMP = 1ULL << 30, 

  DBG_ERROR = 1ULL << 31, 
  DBG_NONE = 0, 

  DBG_DEFAULT = DBG_ALL
};
# 132 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/nido.h"
static inline void tos_state_model_init(void );
#line 145
void ptII_cleanup(void);
extern void ptII_updateLeds(int moteID, short red, short green, short yellow);
extern void ptII_send_packet(TOS_MsgPtr msg);


extern void ptII_MonitorNotify(void *monitorObject);
extern void ptII_MonitorWait(void *monitorObject);
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.nido.h"
static inline void init_hardware(void);
#line 219
enum __nesc_unnamed4313 {
  TOSH_period16 = 0x00, 
  TOSH_period32 = 0x01, 
  TOSH_period64 = 0x02, 
  TOSH_period128 = 0x03, 
  TOSH_period256 = 0x04, 
  TOSH_period512 = 0x05, 
  TOSH_period1024 = 0x06, 
  TOSH_period2048 = 0x07
};



enum __nesc_unnamed4314 {

  TOSH_ACTUAL_CC_RSSI_PORT = 0, 
  TOSH_ACTUAL_VOLTAGE_PORT = 7, 
  TOSH_ACTUAL_BANDGAP_PORT = 30, 
  TOSH_ACTUAL_GND_PORT = 31
};

enum __nesc_unnamed4315 {

  TOS_ADC_CC_RSSI_PORT = 0, 
  TOS_ADC_VOLTAGE_PORT = 7, 
  TOS_ADC_BANDGAP_PORT = 10, 
  TOS_ADC_GND_PORT = 11
};
# 44 "/usr/include/bits/uio.h"
struct iovec {

  void *iov_base;
  size_t iov_len;
};
# 35 "/usr/include/bits/socket.h"
typedef __socklen_t socklen_t;




enum __socket_type {

  SOCK_STREAM = 1, 


  SOCK_DGRAM = 2, 


  SOCK_RAW = 3, 

  SOCK_RDM = 4, 

  SOCK_SEQPACKET = 5, 


  SOCK_DCCP = 6, 

  SOCK_PACKET = 10, 







  SOCK_CLOEXEC = 02000000, 


  SOCK_NONBLOCK = 04000
};
# 29 "/usr/include/bits/sockaddr.h"
typedef unsigned short int sa_family_t;
# 174 "/usr/include/bits/socket.h"
struct sockaddr {

  sa_family_t sa_family;
  char sa_data[14];
};








struct sockaddr_storage {

  sa_family_t ss_family;
  unsigned long int __ss_align;
  char __ss_padding[128 - 2 * sizeof(unsigned long int )];
};



enum __nesc_unnamed4316 {

  MSG_OOB = 0x01, 

  MSG_PEEK = 0x02, 

  MSG_DONTROUTE = 0x04, 






  MSG_CTRUNC = 0x08, 

  MSG_PROXY = 0x10, 

  MSG_TRUNC = 0x20, 

  MSG_DONTWAIT = 0x40, 

  MSG_EOR = 0x80, 

  MSG_WAITALL = 0x100, 

  MSG_FIN = 0x200, 

  MSG_SYN = 0x400, 

  MSG_CONFIRM = 0x800, 

  MSG_RST = 0x1000, 

  MSG_ERRQUEUE = 0x2000, 

  MSG_NOSIGNAL = 0x4000, 

  MSG_MORE = 0x8000, 

  MSG_WAITFORONE = 0x10000, 


  MSG_CMSG_CLOEXEC = 0x40000000
};







struct msghdr {

  void *msg_name;
  socklen_t msg_namelen;

  struct iovec *msg_iov;
  size_t msg_iovlen;

  void *msg_control;
  size_t msg_controllen;




  int msg_flags;
};
# 274 "/usr/include/bits/socket.h" 3
struct cmsghdr {

  size_t cmsg_len;




  int cmsg_level;
  int cmsg_type;

  __extension__ unsigned char __cmsg_data[];
};
#line 304
struct cmsghdr;
#line 331
enum __nesc_unnamed4317 {

  SCM_RIGHTS = 0x01
};
#line 411
struct linger {

  int l_onoff;
  int l_linger;
};
# 45 "/usr/include/sys/socket.h"
struct osockaddr {

  unsigned short int sa_family;
  unsigned char sa_data[14];
};




enum __nesc_unnamed4318 {

  SHUT_RD = 0, 

  SHUT_WR, 

  SHUT_RDWR
};
# 32 "/usr/include/netinet/in.h"
typedef uint32_t in_addr_t;
struct in_addr {

  in_addr_t s_addr;
};
# 111 "/usr/include/bits/in.h"
struct ip_opts {

  struct in_addr ip_dst;
  char ip_opts[40];
};


struct ip_mreqn {

  struct in_addr imr_multiaddr;
  struct in_addr imr_address;
  int imr_ifindex;
};


struct in_pktinfo {

  int ipi_ifindex;
  struct in_addr ipi_spec_dst;
  struct in_addr ipi_addr;
};
# 42 "/usr/include/netinet/in.h"
enum __nesc_unnamed4319 {

  IPPROTO_IP = 0, 

  IPPROTO_ICMP = 1, 

  IPPROTO_IGMP = 2, 

  IPPROTO_IPIP = 4, 

  IPPROTO_TCP = 6, 

  IPPROTO_EGP = 8, 

  IPPROTO_PUP = 12, 

  IPPROTO_UDP = 17, 

  IPPROTO_IDP = 22, 

  IPPROTO_TP = 29, 

  IPPROTO_DCCP = 33, 

  IPPROTO_IPV6 = 41, 

  IPPROTO_RSVP = 46, 

  IPPROTO_GRE = 47, 

  IPPROTO_ESP = 50, 

  IPPROTO_AH = 51, 

  IPPROTO_MTP = 92, 

  IPPROTO_BEETPH = 94, 

  IPPROTO_ENCAP = 98, 

  IPPROTO_PIM = 103, 

  IPPROTO_COMP = 108, 

  IPPROTO_SCTP = 132, 

  IPPROTO_UDPLITE = 136, 

  IPPROTO_RAW = 255, 

  IPPROTO_MAX
};





enum __nesc_unnamed4320 {

  IPPROTO_HOPOPTS = 0, 

  IPPROTO_ROUTING = 43, 

  IPPROTO_FRAGMENT = 44, 

  IPPROTO_ICMPV6 = 58, 

  IPPROTO_NONE = 59, 

  IPPROTO_DSTOPTS = 60, 

  IPPROTO_MH = 135
};




typedef uint16_t in_port_t;


enum __nesc_unnamed4321 {

  IPPORT_ECHO = 7, 
  IPPORT_DISCARD = 9, 
  IPPORT_SYSTAT = 11, 
  IPPORT_DAYTIME = 13, 
  IPPORT_NETSTAT = 15, 
  IPPORT_FTP = 21, 
  IPPORT_TELNET = 23, 
  IPPORT_SMTP = 25, 
  IPPORT_TIMESERVER = 37, 
  IPPORT_NAMESERVER = 42, 
  IPPORT_WHOIS = 43, 
  IPPORT_MTP = 57, 

  IPPORT_TFTP = 69, 
  IPPORT_RJE = 77, 
  IPPORT_FINGER = 79, 
  IPPORT_TTYLINK = 87, 
  IPPORT_SUPDUP = 95, 


  IPPORT_EXECSERVER = 512, 
  IPPORT_LOGINSERVER = 513, 
  IPPORT_CMDSERVER = 514, 
  IPPORT_EFSSERVER = 520, 


  IPPORT_BIFFUDP = 512, 
  IPPORT_WHOSERVER = 513, 
  IPPORT_ROUTESERVER = 520, 


  IPPORT_RESERVED = 1024, 


  IPPORT_USERRESERVED = 5000
};
#line 211
struct in6_addr {

  union __nesc_unnamed4322 {

    uint8_t __u6_addr8[16];

    uint16_t __u6_addr16[8];
    uint32_t __u6_addr32[4];
  } 
  __in6_u;
};







struct in6_addr;
struct in6_addr;








struct sockaddr_in {

  sa_family_t sin_family;
  in_port_t sin_port;
  struct in_addr sin_addr;


  unsigned char sin_zero

  [
#line 246
  sizeof(struct sockaddr ) - 
  sizeof(unsigned short int ) - 
  sizeof(in_port_t ) - 
  sizeof(struct in_addr )];
};



struct sockaddr_in6 {

  sa_family_t sin6_family;
  in_port_t sin6_port;
  uint32_t sin6_flowinfo;
  struct in6_addr sin6_addr;
  uint32_t sin6_scope_id;
};




struct ip_mreq {


  struct in_addr imr_multiaddr;


  struct in_addr imr_interface;
};

struct ip_mreq_source {


  struct in_addr imr_multiaddr;


  struct in_addr imr_interface;


  struct in_addr imr_sourceaddr;
};




struct ipv6_mreq {


  struct in6_addr ipv6mr_multiaddr;


  unsigned int ipv6mr_interface;
};




struct group_req {


  uint32_t gr_interface;


  struct sockaddr_storage gr_group;
};

struct group_source_req {


  uint32_t gsr_interface;


  struct sockaddr_storage gsr_group;


  struct sockaddr_storage gsr_source;
};



struct ip_msfilter {


  struct in_addr imsf_multiaddr;


  struct in_addr imsf_interface;


  uint32_t imsf_fmode;


  uint32_t imsf_numsrc;

  struct in_addr imsf_slist[1];
};





struct group_filter {


  uint32_t gf_interface;


  struct sockaddr_storage gf_group;


  uint32_t gf_fmode;


  uint32_t gf_numsrc;

  struct sockaddr_storage gf_slist[1];
};
#line 377
extern uint16_t ntohs(uint16_t __netshort) 
__attribute((__nothrow__)) __attribute((const)) ;


extern uint16_t htons(uint16_t __hostshort) 
__attribute((__nothrow__)) __attribute((const)) ;
# 256 "/usr/include/unistd.h" 3
typedef __useconds_t useconds_t;
#line 331
extern __off_t lseek(int __fd, __off_t __offset, int __whence) __attribute((__nothrow__)) ;
#line 363
extern ssize_t write(int __fd, const void *__buf, size_t __n);
#line 441
extern unsigned int sleep(unsigned int __seconds);
#line 457
extern int usleep(__useconds_t __useconds);
# 26 "/usr/include/bits/confname.h"
enum __nesc_unnamed4323 {

  _PC_LINK_MAX, 

  _PC_MAX_CANON, 

  _PC_MAX_INPUT, 

  _PC_NAME_MAX, 

  _PC_PATH_MAX, 

  _PC_PIPE_BUF, 

  _PC_CHOWN_RESTRICTED, 

  _PC_NO_TRUNC, 

  _PC_VDISABLE, 

  _PC_SYNC_IO, 

  _PC_ASYNC_IO, 

  _PC_PRIO_IO, 

  _PC_SOCK_MAXBUF, 

  _PC_FILESIZEBITS, 

  _PC_REC_INCR_XFER_SIZE, 

  _PC_REC_MAX_XFER_SIZE, 

  _PC_REC_MIN_XFER_SIZE, 

  _PC_REC_XFER_ALIGN, 

  _PC_ALLOC_SIZE_MIN, 

  _PC_SYMLINK_MAX, 

  _PC_2_SYMLINKS
};



enum __nesc_unnamed4324 {

  _SC_ARG_MAX, 

  _SC_CHILD_MAX, 

  _SC_CLK_TCK, 

  _SC_NGROUPS_MAX, 

  _SC_OPEN_MAX, 

  _SC_STREAM_MAX, 

  _SC_TZNAME_MAX, 

  _SC_JOB_CONTROL, 

  _SC_SAVED_IDS, 

  _SC_REALTIME_SIGNALS, 

  _SC_PRIORITY_SCHEDULING, 

  _SC_TIMERS, 

  _SC_ASYNCHRONOUS_IO, 

  _SC_PRIORITIZED_IO, 

  _SC_SYNCHRONIZED_IO, 

  _SC_FSYNC, 

  _SC_MAPPED_FILES, 

  _SC_MEMLOCK, 

  _SC_MEMLOCK_RANGE, 

  _SC_MEMORY_PROTECTION, 

  _SC_MESSAGE_PASSING, 

  _SC_SEMAPHORES, 

  _SC_SHARED_MEMORY_OBJECTS, 

  _SC_AIO_LISTIO_MAX, 

  _SC_AIO_MAX, 

  _SC_AIO_PRIO_DELTA_MAX, 

  _SC_DELAYTIMER_MAX, 

  _SC_MQ_OPEN_MAX, 

  _SC_MQ_PRIO_MAX, 

  _SC_VERSION, 

  _SC_PAGESIZE, 


  _SC_RTSIG_MAX, 

  _SC_SEM_NSEMS_MAX, 

  _SC_SEM_VALUE_MAX, 

  _SC_SIGQUEUE_MAX, 

  _SC_TIMER_MAX, 




  _SC_BC_BASE_MAX, 

  _SC_BC_DIM_MAX, 

  _SC_BC_SCALE_MAX, 

  _SC_BC_STRING_MAX, 

  _SC_COLL_WEIGHTS_MAX, 

  _SC_EQUIV_CLASS_MAX, 

  _SC_EXPR_NEST_MAX, 

  _SC_LINE_MAX, 

  _SC_RE_DUP_MAX, 

  _SC_CHARCLASS_NAME_MAX, 


  _SC_2_VERSION, 

  _SC_2_C_BIND, 

  _SC_2_C_DEV, 

  _SC_2_FORT_DEV, 

  _SC_2_FORT_RUN, 

  _SC_2_SW_DEV, 

  _SC_2_LOCALEDEF, 


  _SC_PII, 

  _SC_PII_XTI, 

  _SC_PII_SOCKET, 

  _SC_PII_INTERNET, 

  _SC_PII_OSI, 

  _SC_POLL, 

  _SC_SELECT, 

  _SC_UIO_MAXIOV, 

  _SC_IOV_MAX = _SC_UIO_MAXIOV, 

  _SC_PII_INTERNET_STREAM, 

  _SC_PII_INTERNET_DGRAM, 

  _SC_PII_OSI_COTS, 

  _SC_PII_OSI_CLTS, 

  _SC_PII_OSI_M, 

  _SC_T_IOV_MAX, 



  _SC_THREADS, 

  _SC_THREAD_SAFE_FUNCTIONS, 

  _SC_GETGR_R_SIZE_MAX, 

  _SC_GETPW_R_SIZE_MAX, 

  _SC_LOGIN_NAME_MAX, 

  _SC_TTY_NAME_MAX, 

  _SC_THREAD_DESTRUCTOR_ITERATIONS, 

  _SC_THREAD_KEYS_MAX, 

  _SC_THREAD_STACK_MIN, 

  _SC_THREAD_THREADS_MAX, 

  _SC_THREAD_ATTR_STACKADDR, 

  _SC_THREAD_ATTR_STACKSIZE, 

  _SC_THREAD_PRIORITY_SCHEDULING, 

  _SC_THREAD_PRIO_INHERIT, 

  _SC_THREAD_PRIO_PROTECT, 

  _SC_THREAD_PROCESS_SHARED, 


  _SC_NPROCESSORS_CONF, 

  _SC_NPROCESSORS_ONLN, 

  _SC_PHYS_PAGES, 

  _SC_AVPHYS_PAGES, 

  _SC_ATEXIT_MAX, 

  _SC_PASS_MAX, 


  _SC_XOPEN_VERSION, 

  _SC_XOPEN_XCU_VERSION, 

  _SC_XOPEN_UNIX, 

  _SC_XOPEN_CRYPT, 

  _SC_XOPEN_ENH_I18N, 

  _SC_XOPEN_SHM, 


  _SC_2_CHAR_TERM, 

  _SC_2_C_VERSION, 

  _SC_2_UPE, 


  _SC_XOPEN_XPG2, 

  _SC_XOPEN_XPG3, 

  _SC_XOPEN_XPG4, 


  _SC_CHAR_BIT, 

  _SC_CHAR_MAX, 

  _SC_CHAR_MIN, 

  _SC_INT_MAX, 

  _SC_INT_MIN, 

  _SC_LONG_BIT, 

  _SC_WORD_BIT, 

  _SC_MB_LEN_MAX, 

  _SC_NZERO, 

  _SC_SSIZE_MAX, 

  _SC_SCHAR_MAX, 

  _SC_SCHAR_MIN, 

  _SC_SHRT_MAX, 

  _SC_SHRT_MIN, 

  _SC_UCHAR_MAX, 

  _SC_UINT_MAX, 

  _SC_ULONG_MAX, 

  _SC_USHRT_MAX, 


  _SC_NL_ARGMAX, 

  _SC_NL_LANGMAX, 

  _SC_NL_MSGMAX, 

  _SC_NL_NMAX, 

  _SC_NL_SETMAX, 

  _SC_NL_TEXTMAX, 


  _SC_XBS5_ILP32_OFF32, 

  _SC_XBS5_ILP32_OFFBIG, 

  _SC_XBS5_LP64_OFF64, 

  _SC_XBS5_LPBIG_OFFBIG, 


  _SC_XOPEN_LEGACY, 

  _SC_XOPEN_REALTIME, 

  _SC_XOPEN_REALTIME_THREADS, 


  _SC_ADVISORY_INFO, 

  _SC_BARRIERS, 

  _SC_BASE, 

  _SC_C_LANG_SUPPORT, 

  _SC_C_LANG_SUPPORT_R, 

  _SC_CLOCK_SELECTION, 

  _SC_CPUTIME, 

  _SC_THREAD_CPUTIME, 

  _SC_DEVICE_IO, 

  _SC_DEVICE_SPECIFIC, 

  _SC_DEVICE_SPECIFIC_R, 

  _SC_FD_MGMT, 

  _SC_FIFO, 

  _SC_PIPE, 

  _SC_FILE_ATTRIBUTES, 

  _SC_FILE_LOCKING, 

  _SC_FILE_SYSTEM, 

  _SC_MONOTONIC_CLOCK, 

  _SC_MULTI_PROCESS, 

  _SC_SINGLE_PROCESS, 

  _SC_NETWORKING, 

  _SC_READER_WRITER_LOCKS, 

  _SC_SPIN_LOCKS, 

  _SC_REGEXP, 

  _SC_REGEX_VERSION, 

  _SC_SHELL, 

  _SC_SIGNALS, 

  _SC_SPAWN, 

  _SC_SPORADIC_SERVER, 

  _SC_THREAD_SPORADIC_SERVER, 

  _SC_SYSTEM_DATABASE, 

  _SC_SYSTEM_DATABASE_R, 

  _SC_TIMEOUTS, 

  _SC_TYPED_MEMORY_OBJECTS, 

  _SC_USER_GROUPS, 

  _SC_USER_GROUPS_R, 

  _SC_2_PBS, 

  _SC_2_PBS_ACCOUNTING, 

  _SC_2_PBS_LOCATE, 

  _SC_2_PBS_MESSAGE, 

  _SC_2_PBS_TRACK, 

  _SC_SYMLOOP_MAX, 

  _SC_STREAMS, 

  _SC_2_PBS_CHECKPOINT, 


  _SC_V6_ILP32_OFF32, 

  _SC_V6_ILP32_OFFBIG, 

  _SC_V6_LP64_OFF64, 

  _SC_V6_LPBIG_OFFBIG, 


  _SC_HOST_NAME_MAX, 

  _SC_TRACE, 

  _SC_TRACE_EVENT_FILTER, 

  _SC_TRACE_INHERIT, 

  _SC_TRACE_LOG, 


  _SC_LEVEL1_ICACHE_SIZE, 

  _SC_LEVEL1_ICACHE_ASSOC, 

  _SC_LEVEL1_ICACHE_LINESIZE, 

  _SC_LEVEL1_DCACHE_SIZE, 

  _SC_LEVEL1_DCACHE_ASSOC, 

  _SC_LEVEL1_DCACHE_LINESIZE, 

  _SC_LEVEL2_CACHE_SIZE, 

  _SC_LEVEL2_CACHE_ASSOC, 

  _SC_LEVEL2_CACHE_LINESIZE, 

  _SC_LEVEL3_CACHE_SIZE, 

  _SC_LEVEL3_CACHE_ASSOC, 

  _SC_LEVEL3_CACHE_LINESIZE, 

  _SC_LEVEL4_CACHE_SIZE, 

  _SC_LEVEL4_CACHE_ASSOC, 

  _SC_LEVEL4_CACHE_LINESIZE, 



  _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50, 

  _SC_RAW_SOCKETS, 


  _SC_V7_ILP32_OFF32, 

  _SC_V7_ILP32_OFFBIG, 

  _SC_V7_LP64_OFF64, 

  _SC_V7_LPBIG_OFFBIG, 


  _SC_SS_REPL_MAX, 


  _SC_TRACE_EVENT_NAME_MAX, 

  _SC_TRACE_NAME_MAX, 

  _SC_TRACE_SYS_MAX, 

  _SC_TRACE_USER_EVENT_MAX, 


  _SC_XOPEN_STREAMS, 


  _SC_THREAD_ROBUST_PRIO_INHERIT, 

  _SC_THREAD_ROBUST_PRIO_PROTECT
};



enum __nesc_unnamed4325 {

  _CS_PATH, 


  _CS_V6_WIDTH_RESTRICTED_ENVS, 



  _CS_GNU_LIBC_VERSION, 

  _CS_GNU_LIBPTHREAD_VERSION, 


  _CS_V5_WIDTH_RESTRICTED_ENVS, 



  _CS_V7_WIDTH_RESTRICTED_ENVS, 



  _CS_LFS_CFLAGS = 1000, 

  _CS_LFS_LDFLAGS, 

  _CS_LFS_LIBS, 

  _CS_LFS_LINTFLAGS, 

  _CS_LFS64_CFLAGS, 

  _CS_LFS64_LDFLAGS, 

  _CS_LFS64_LIBS, 

  _CS_LFS64_LINTFLAGS, 


  _CS_XBS5_ILP32_OFF32_CFLAGS = 1100, 

  _CS_XBS5_ILP32_OFF32_LDFLAGS, 

  _CS_XBS5_ILP32_OFF32_LIBS, 

  _CS_XBS5_ILP32_OFF32_LINTFLAGS, 

  _CS_XBS5_ILP32_OFFBIG_CFLAGS, 

  _CS_XBS5_ILP32_OFFBIG_LDFLAGS, 

  _CS_XBS5_ILP32_OFFBIG_LIBS, 

  _CS_XBS5_ILP32_OFFBIG_LINTFLAGS, 

  _CS_XBS5_LP64_OFF64_CFLAGS, 

  _CS_XBS5_LP64_OFF64_LDFLAGS, 

  _CS_XBS5_LP64_OFF64_LIBS, 

  _CS_XBS5_LP64_OFF64_LINTFLAGS, 

  _CS_XBS5_LPBIG_OFFBIG_CFLAGS, 

  _CS_XBS5_LPBIG_OFFBIG_LDFLAGS, 

  _CS_XBS5_LPBIG_OFFBIG_LIBS, 

  _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS, 


  _CS_POSIX_V6_ILP32_OFF32_CFLAGS, 

  _CS_POSIX_V6_ILP32_OFF32_LDFLAGS, 

  _CS_POSIX_V6_ILP32_OFF32_LIBS, 

  _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS, 

  _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS, 

  _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS, 

  _CS_POSIX_V6_ILP32_OFFBIG_LIBS, 

  _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS, 

  _CS_POSIX_V6_LP64_OFF64_CFLAGS, 

  _CS_POSIX_V6_LP64_OFF64_LDFLAGS, 

  _CS_POSIX_V6_LP64_OFF64_LIBS, 

  _CS_POSIX_V6_LP64_OFF64_LINTFLAGS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_LIBS, 

  _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS, 


  _CS_POSIX_V7_ILP32_OFF32_CFLAGS, 

  _CS_POSIX_V7_ILP32_OFF32_LDFLAGS, 

  _CS_POSIX_V7_ILP32_OFF32_LIBS, 

  _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS, 

  _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS, 

  _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS, 

  _CS_POSIX_V7_ILP32_OFFBIG_LIBS, 

  _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS, 

  _CS_POSIX_V7_LP64_OFF64_CFLAGS, 

  _CS_POSIX_V7_LP64_OFF64_LDFLAGS, 

  _CS_POSIX_V7_LP64_OFF64_LIBS, 

  _CS_POSIX_V7_LP64_OFF64_LINTFLAGS, 

  _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS, 

  _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS, 

  _CS_POSIX_V7_LPBIG_OFFBIG_LIBS, 

  _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS, 


  _CS_V6_ENV, 

  _CS_V7_ENV
};
# 845 "/usr/include/unistd.h" 3
extern int unlink(const char *__name) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
# 47 "/usr/include/bits/errno.h" 3
extern int *__errno_location(void ) __attribute((__nothrow__)) __attribute((const)) ;
# 47 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.h"
 static int socketsInitialized = 0;
static inline void initializeSockets(void);


static inline int readTossimCommand(void *socketChannel, int clidx);
static void buildTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data, 
unsigned char **msgp, int *lenp);
static void sendTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data);



static int writeTossimEvent(void *data, int datalen, void *socketChannel);




static char *currentTime(void);
static inline int printTime(char *buf, int len);
static int printOtherTime(char *buf, int len, long long int ftime);


extern void ptII_startThreads(void);
extern int ptII_joinThreads(void);
# 58 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/GuiMsg.h"
enum __nesc_unnamed4326 {

  AM_DEBUGMSGEVENT = 1, 
  AM_RADIOMSGSENTEVENT = 1 << 1, 
  AM_UARTMSGSENTEVENT = 1 << 2, 
  AM_ADCDATAREADYEVENT = 1 << 3, 
  AM_TOSSIMINITEVENT = 1 << 4, 
  AM_INTERRUPTEVENT = 1 << 5, 
  AM_LEDEVENT = 1 << 6, 






  AM_TURNONMOTECOMMAND = 1 << 12, 
  AM_TURNOFFMOTECOMMAND, 
  AM_RADIOMSGSENDCOMMAND, 
  AM_UARTMSGSENDCOMMAND, 
  AM_SETLINKPROBCOMMAND, 
  AM_SETADCPORTVALUECOMMAND, 
  AM_INTERRUPTCOMMAND, 
  AM_SETRATECOMMAND, 
  AM_SETDBGCOMMAND, 
  AM_VARIABLERESOLVECOMMAND, 
  AM_VARIABLERESOLVERESPONSE, 
  AM_VARIABLEREQUESTCOMMAND, 
  AM_VARIABLEREQUESTRESPONSE, 
  AM_GETMOTECOUNTCOMMAND, 
  AM_GETMOTECOUNTRESPONSE, 
  AM_SETEVENTMASKCOMMAND, 
  AM_BEGINBATCHCOMMAND, 
  AM_ENDBATCHCOMMAND
};
#line 104
#line 99
typedef struct GuiMsg {
  uint16_t msgType;
  uint16_t moteID;
  long long time;
  uint16_t payLoadLen;
} GuiMsg;








#line 111
typedef struct DebugMsgEvent {
  char debugMessage[512];
} DebugMsgEvent;




#line 116
typedef struct RadioMsgSentEvent {
  TOS_Msg message;
} RadioMsgSentEvent;




#line 121
typedef struct UARTMsgSentEvent {
  TOS_Msg message;
} UARTMsgSentEvent;





#line 126
typedef struct ADCDataReadyEvent {
  uint8_t port;
  uint16_t data;
} ADCDataReadyEvent;





#line 132
typedef struct VariableResolveResponse {
  uint32_t addr;
  uint32_t length;
} VariableResolveResponse;





#line 138
typedef struct VariableRequestResponse {
  uint32_t length;
  char value[256];
} VariableRequestResponse;






#line 144
typedef struct TossimInitEvent {
  int numMotes;
  uint8_t radioModel;
  uint32_t rate;
} __attribute((packed))  TossimInitEvent;




#line 151
typedef struct InterruptEvent {
  uint32_t id;
} InterruptEvent;



#line 156
typedef struct TurnOnMoteCommand {
} TurnOnMoteCommand;



#line 160
typedef struct TurnOffMoteCommand {
} TurnOffMoteCommand;




#line 164
typedef struct RadioMsgSendCommand {
  TOS_Msg message;
} RadioMsgSendCommand;




#line 169
typedef struct UARTMsgSendCommand {
  TOS_Msg message;
} UARTMsgSendCommand;





#line 174
typedef struct SetLinkProbCommand {
  uint16_t moteReceiver;
  uint32_t scaledProb;
} SetLinkProbCommand;





#line 180
typedef struct SetADCPortValueCommand {
  uint8_t port;
  uint16_t value;
} SetADCPortValueCommand;




#line 186
typedef struct VariableResolveCommand {
  char name[256];
} VariableResolveCommand;





#line 191
typedef struct VariableRequestCommand {
  uint32_t addr;
  uint8_t length;
} VariableRequestCommand;



#line 196
typedef struct InterruptCommand {
  uint32_t id;
} InterruptCommand;



#line 200
typedef struct SetRateCommand {
  uint32_t rate;
} SetRateCommand;





#line 204
typedef struct LedEvent {
  uint8_t red : 1;
  uint8_t green : 1;
  uint8_t yellow : 1;
} LedEvent;



#line 210
typedef struct SetDBGCommand {
  long long dbg;
} SetDBGCommand;



#line 214
typedef struct GetMoteCountCommand {
  uint8_t placeholder;
} GetMoteCountCommand;




#line 218
typedef struct GetMoteCountResponse {
  uint16_t totalMotes;
  uint8_t bitmask[(TOSNODES + 7) / 8];
} GetMoteCountResponse;



#line 223
typedef struct SetEventMaskCommand {
  uint16_t mask;
} SetEventMaskCommand;


#line 227
typedef struct BeginBatchCommand {
} BeginBatchCommand;


#line 230
typedef struct EndBatchCommand {
} EndBatchCommand;
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/types/dbg.h"
#line 72
typedef struct dbg_mode {
  char *d_name;
  unsigned long long d_mode;
} TOS_dbg_mode_names;

TOS_dbg_mode dbg_modes = 0;
 bool dbg_suppress_stdout = 0;

inline static bool dbg_active(TOS_dbg_mode mode);




inline static void dbg_add_mode(const char *mode);
inline static void dbg_add_modes(const char *modes);
inline static void dbg_init(void );
inline static void dbg_help(void );

inline static void dbg_set(TOS_dbg_mode );


extern void ptII_dbg(long long mode, char *msg, short nodenum, int useNodenum);



void dbg(TOS_dbg_mode mode, const char *format, ...)   ;
#line 140
void dbg_clear(TOS_dbg_mode mode, const char *format, ...)   ;
# 66 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.h"
extern  TOS_dbg_mode dbg_modes;


 TOS_state_t tos_state;









static inline void __nesc_atomic_sleep(void);






typedef uint8_t __nesc_atomic_t;

__inline __nesc_atomic_t __nesc_atomic_start(void )  ;




__inline void __nesc_atomic_end(__nesc_atomic_t oldSreg)  ;



static __inline void __nesc_enable_interrupt(void);



enum __nesc_unnamed4327 {
  TOSH_ADC_PORTMAPSIZE = 255
};
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/heap_array.c"
const int STARTING_SIZE = 511;






#line 52
typedef struct node {
  void *data;
  long long key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);








static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long heap_get_min_key(heap_t *heap);
#line 104
static void *heap_pop_min_data(heap_t *heap, long long *key);
#line 120
static inline void expand_heap(heap_t *heap);
#line 134
static inline void heap_insert(heap_t *heap, void *data, long long key);
#line 148
static void swap(node_t *first, node_t *second);
#line 161
static void down_heap(heap_t *heap, int findex);
#line 187
static void up_heap(heap_t *heap, int findex);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.c"
 
#line 41
struct __nesc_unnamed4328 {
  char status_register;
  char register_A;
  char register_B;
  char register_C;
  char register_D;
  char register_E;
  char register_default;
} TOSH_pc_hardware;

static inline void init_hardware(void);
# 133 "/usr/include/time.h" 3
struct tm {

  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;
};
#line 161
struct itimerspec {

  struct timespec it_interval;
  struct timespec it_value;
};


struct sigevent;
#line 233
struct tm;



struct tm;





struct tm;




struct tm;
# 47 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/event_queue.c"
extern void *ptII_createMonitorObject(void);
extern int ptII_MonitorEnter(void *monitorObject);
extern int ptII_MonitorExit(void *monitorObject);


struct timespec;



static inline void queue_init(event_queue_t *queue, int fpause);









extern void ptII_queue_insert_event(long long eventTime);

static void queue_insert_event(event_queue_t *queue, event_t *event);
#line 81
static inline event_t *queue_pop_event(event_queue_t *queue);
#line 112
static int queue_is_empty(event_queue_t *queue);
#line 127
static long long queue_peek_event_time(event_queue_t *queue);
#line 148
static inline void queue_handle_next_event(event_queue_t *queue);
# 43 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/events.c"
static inline void event_default_cleanup(event_t *event);




static void event_total_cleanup(event_t *event);







static inline void event_cleanup(event_t *fevent);
# 11 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/powermod.h"
 double *cycles;
 int power_init;
 int prof_on;
 int cpu_prof_on;
# 39 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hpl.c"
static int clockScales[8] = { -1, 122, 976, 3906, 7812, 15625, 31250, 125000 };

 static event_t *clockEvents[TOSNODES];
 static uint8_t intervals[TOSNODES];
 static uint8_t scales[TOSNODES];
 static long long setTime[TOSNODES];
 static uint8_t interruptPending[TOSNODES];

static inline void SIG_OUTPUT_COMPARE2_interrupt(void )  ;






static void TOSH_clock_set_interval(uint8_t interval);
#line 86
static void TOSH_clock_set_rate(char interval, char scale);
#line 115
static inline uint8_t TOSH_get_clock_interval(void);








static uint8_t TOSH_get_clock0_counter(void);
#line 154
struct timeval;

static inline void event_clocktick_handle(event_t *event, 
struct TOS_state *state);
#line 197
static void event_clocktick_create(event_t *event, int mote, long long eventTime, int interval);
#line 217
static inline void event_clocktick_invalidate(event_t *event);










enum __nesc_unnamed4329 {
  ADC_LATENCY = 200
};
#line 351
enum __nesc_unnamed4330 {
  NOT_WAITING = 0, 
  WAITING_FOR_ONE_TO_PASS = 1, 
  WAITING_FOR_ONE_TO_CAPTURE = 2
};
#line 476
void event_spi_byte_create(event_t *fevent, int mote, long long ftime, int interval, int count)   ;
# 46 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/dbg.c"
static TOS_dbg_mode_names dbg_nametab[34] = { 
{ "all", DBG_ALL }, { "boot", DBG_BOOT | DBG_ERROR }, { "clock", DBG_CLOCK | DBG_ERROR }, { "task", DBG_TASK | DBG_ERROR }, { "sched", DBG_SCHED | DBG_ERROR }, { "sensor", DBG_SENSOR | DBG_ERROR }, { "led", DBG_LED | DBG_ERROR }, { "crypto", DBG_CRYPTO | DBG_ERROR }, { "route", DBG_ROUTE | DBG_ERROR }, { "am", DBG_AM | DBG_ERROR }, { "crc", DBG_CRC | DBG_ERROR }, { "packet", DBG_PACKET | DBG_ERROR }, { "encode", DBG_ENCODE | DBG_ERROR }, { "radio", DBG_RADIO | DBG_ERROR }, { "logger", DBG_LOG | DBG_ERROR }, { "adc", DBG_ADC | DBG_ERROR }, { "i2c", DBG_I2C | DBG_ERROR }, { "uart", DBG_UART | DBG_ERROR }, { "prog", DBG_PROG | DBG_ERROR }, { "sounder", DBG_SOUNDER | DBG_ERROR }, { "time", DBG_TIME | DBG_ERROR }, { "power", DBG_POWER | DBG_ERROR }, { "sim", DBG_SIM | DBG_ERROR }, { "queue", DBG_QUEUE | DBG_ERROR }, { "simradio", DBG_SIMRADIO | DBG_ERROR }, { "hardware", DBG_HARD | DBG_ERROR }, { "simmem", DBG_MEM | DBG_ERROR }, { "usr1", DBG_USR1 | DBG_ERROR }, { "usr2", DBG_USR2 | DBG_ERROR }, { "usr3", DBG_USR3 | DBG_ERROR }, { "temp", DBG_TEMP | DBG_ERROR }, { "error", DBG_ERROR }, { "none", DBG_NONE }, { (void *)0, DBG_ERROR } };






inline void dbg_set(TOS_dbg_mode modes);



inline void dbg_add_mode(const char *name);
#line 84
inline void dbg_add_modes(const char *modes);








inline void dbg_init(void );
#line 107
inline void dbg_help(void );
# 87 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
void *commandServerSocket = (void *)0;

void *eventServerSocket = (void *)0;


void *commandClients[4];
uint8_t batchState[4];


 void *eventClients[4];
 uint16_t eventMask;


extern void *ptII_serverSocketCreate(short port);
extern void ptII_serverSocketClose(void *serverSocket);
extern void *ptII_selectorCreate(void *serverSocket, bool opAccept, bool opConnect, bool opRead, bool opWrite);
extern void ptII_selectorRegister(void *selector, void *socketChannel, bool opAccept, bool opConnect, bool opRead, bool opWrite);
extern void ptII_selectorClose(void *selector);
extern void *ptII_selectSocket(void *selector, char *selectorIsClosing, bool opAccept, bool opConnect, bool opRead, bool opWrite);
extern void *ptII_acceptConnection(void *serverSocketChannel);
extern void ptII_socketChannelClose(void *socketChannel);
extern int ptII_socketChannelWrite(void *socketChannel, void *data, int datalen);
extern int ptII_socketChannelRead(void *socketChannel, void *data, int datalen);



void *selectorEventAcceptThread = (void *)0;
void *selectorCommandReadThread = (void *)0;



extern void *ptII_createMonitorObject(void);
extern int ptII_MonitorEnter(void *monitorObject);
extern int ptII_MonitorExit(void *monitorObject);
extern void ptII_MonitorNotifyAll(void *monitorObject);
extern void ptII_MonitorWait(void *monitorObject);





 void *eventClientsLock;



TOS_Msg external_comm_msgs_[TOSNODES];
TOS_MsgPtr external_comm_buffers_[TOSNODES];
 static int GUI_enabled;


void *eventAcceptThreadFunc(void *arg);
void *commandReadThreadFunc(void *arg);



static int __nesc_nido_resolve(int __nesc_mote, 
char *varname, 
uintptr_t *addr, size_t *size);
#line 161
static inline void initializeSockets(void);
#line 208
static void *acceptConnection(void *serverSocketChannel);
#line 276
void shutdownSockets(void)   ;
#line 357
static inline void waitForGuiConnection(void);
#line 387
static int printOtherTime(char *buf, int len, long long int ftime);
#line 404
static inline int printTime(char *buf, int len);



static char *currentTime(void);






static void addClient2(void *clientSockets[], void *socketChannel);
#line 446
static inline void sendInitEvent(void *socketChannel);
#line 466
void *eventAcceptThreadFunc(void *arg)   ;
#line 550
#line 547
typedef struct __nesc_unnamed4331 {
  GuiMsg *msg;
  char *payLoad;
} incoming_command_data_t;



void nido_start_mote(uint16_t moteID);
void nido_stop_mote(uint16_t moteID);
TOS_MsgPtr NIDO_received_radio(TOS_MsgPtr packet);
TOS_MsgPtr NIDO_received_uart(TOS_MsgPtr packet);
static inline void set_link_prob_value(uint16_t moteID1, uint16_t moteID2, double prob);

static inline void event_command_cleanup(event_t *event);





static inline void event_command_in_handle(event_t *event, 
struct TOS_state *state);
static inline void event_command_in_create(event_t *event, 
GuiMsg *msg, 
char *payLoad);
#line 592
static inline int processCommand(void *socketChannel, int clidx, GuiMsg *msg, char *payLoad, 
unsigned char **replyMsg, int *replyLen);
#line 722
static inline void event_command_in_handle(event_t *event, 
struct TOS_state *state);
#line 795
static inline int readTossimCommand(void *socketChannel, int clidx);
#line 911
void *commandReadThreadFunc(void *arg)   ;
#line 1036
static int writeTossimEvent(void *data, int datalen, void *socketChannel);
#line 1080
static void buildTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data, 
unsigned char **msgp, int *lenp);
#line 1140
static void sendTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data);
# 32 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/tos.c"
int signaled = 0;

long long rate_checkpoint_time;
double rate_value;

struct timeval startTime;
struct timeval thisTime;

void handle_signal(int sig)   ;
#line 52
static inline void init_signals(void );
#line 72
static inline double get_rate_value(void);



static inline void set_rate_value(double rate);



static inline void rate_checkpoint(void);





static inline void rate_based_wait(void);
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/sensorboard.h"
enum __nesc_unnamed4332 {
  TOSH_ACTUAL_PHOTO_PORT = 1, 
  TOSH_ACTUAL_TEMP_PORT = 1, 
  TOSH_ACTUAL_MIC_PORT = 2, 
  TOSH_ACTUAL_ACCEL_X_PORT = 3, 
  TOSH_ACTUAL_ACCEL_Y_PORT = 4, 
  TOSH_ACTUAL_MAG_X_PORT = 6, 
  TOSH_ACTUAL_MAG_Y_PORT = 5
};

enum __nesc_unnamed4333 {
  TOS_ADC_PHOTO_PORT = 1, 
  TOS_ADC_TEMP_PORT = 2, 
  TOS_ADC_MIC_PORT = 3, 
  TOS_ADC_ACCEL_X_PORT = 4, 
  TOS_ADC_ACCEL_Y_PORT = 5, 
  TOS_ADC_MAG_X_PORT = 6, 

  TOS_ADC_MAG_Y_PORT = 8
};

enum __nesc_unnamed4334 {
  TOS_MAG_POT_ADDR = 0, 
  TOS_MIC_POT_ADDR = 1
};
# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/adc_model.c"
extern void *ptII_createMonitorObject(void);
extern int ptII_MonitorEnter(void *monitorObject);
extern int ptII_MonitorExit(void *monitorObject);




static inline void random_adc_init(void);

static inline uint16_t random_adc_read(int moteID, uint8_t port, long long ftime);



static inline adc_model *create_random_adc_model(void);










enum __nesc_unnamed4335 {
  ADC_NUM_PORTS_PER_NODE = 256
};

uint16_t adcValues[TOSNODES][ADC_NUM_PORTS_PER_NODE];


void *adcValuesLock;

static inline void generic_adc_init(void);
#line 94
extern uint16_t ptII_get_adc_value(char *portname);

static inline uint16_t generic_adc_read(int moteID, uint8_t port, long long ftime);
#line 142
static inline adc_model *create_generic_adc_model(void);






static inline void set_adc_value(int moteID, uint8_t port, uint16_t value);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/spatial_model.c"
point3D *points;

static inline void simple_spatial_init(void);
#line 63
static inline void simple_spatial_get_position(int moteID, long long ftime, point3D *point);






static inline spatial_model *create_simple_spatial_model(void);
# 46 "/usr/include/bits/stat.h" 3
struct stat {

  __dev_t st_dev;




  __ino_t st_ino;







  __nlink_t st_nlink;
  __mode_t st_mode;

  __uid_t st_uid;
  __gid_t st_gid;

  int __pad0;

  __dev_t st_rdev;




  __off_t st_size;



  __blksize_t st_blksize;

  __blkcnt_t st_blocks;










  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
#line 106
  long int __unused[3];
};
# 165 "/usr/include/bits/fcntl.h" 3
struct flock {

  short int l_type;
  short int l_whence;

  __off_t l_start;
  __off_t l_len;




  __pid_t l_pid;
};
# 131 "/usr/include/fcntl.h" 3
extern int open(const char *__file, int __oflag, ...) __attribute((__nonnull__(1))) ;
# 52 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/eeprom.c"
static char *local_filename;
static int numMotes = 0;
static int moteSize = 0;
static int initialized = 0;
static int local_fd = -1;

static int createEEPROM(char *file, int motes, int eempromBytes);
#line 91
static inline int anonymousEEPROM(int fnumMotes, int eepromSize);
#line 104
static inline int namedEEPROM(char *name, int fnumMotes, int eepromSize);
# 61 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/sched.c"
#line 59
typedef struct __nesc_unnamed4336 {
  void (*tp)(void);
} TOSH_sched_entry_T;

enum __nesc_unnamed4337 {






  TOSH_MAX_TASKS = 8, 

  TOSH_TASK_BITMASK = TOSH_MAX_TASKS - 1
};

volatile TOSH_sched_entry_T TOSH_queue[TOSH_MAX_TASKS];
uint8_t TOSH_sched_full;
volatile uint8_t TOSH_sched_free;










bool TOS_post(void (*tp)(void));
#line 102
bool TOS_post(void (*tp)(void))  ;
#line 136
static bool TOSH_run_next_task(void);
# 149 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/tos.h"
static void *nmemcpy(void *to, const void *from, size_t n);
# 28 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/Ident.h"
enum __nesc_unnamed4338 {

  IDENT_MAX_PROGRAM_NAME_LENGTH = 16
};






#line 33
typedef struct __nesc_unnamed4339 {

  uint32_t unix_time;
  uint32_t user_hash;
  char program_name[IDENT_MAX_PROGRAM_NAME_LENGTH];
} Ident_t;
# 36 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PCRadio.h"
#line 33
typedef struct __nesc_unnamed4340 {
  TOS_MsgPtr msg;
  int success;
} uart_send_done_data_t;

enum __nesc_unnamed4341 {
  UART_SEND_DELAY = 1600
};



void NIDO_uart_send_done(TOS_MsgPtr fmsg, result_t fsuccess);
# 47 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/adjacency_list.c"
static link_t *allocate_link(int mote);
#line 78
static int adjacency_list_init(void);
# 61 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/rfm_model.c"
extern void *ptII_createMonitorObject(void);
extern int ptII_MonitorEnter(void *monitorObject);
extern int ptII_MonitorExit(void *monitorObject);


char transmitting[TOSNODES];
int radio_active[TOSNODES];
link_t *radio_connectivity[TOSNODES];


void *radioConnectivityLock;





short radio_heard[TOSNODES];

bool radio_idle_state[TOSNODES];
double noise_prob = 0;

short IDLE_STATE_MASK = 0xffff;
char *lossyFileName = "lossy.nss";

static inline bool simple_connected(int moteID1, int moteID2);



static inline void simple_init(void);
#line 103
static inline void simple_transmit(int moteID, char bit);








static inline void simple_stops_transmit(int moteID);










static inline char simple_hears(int moteID);
#line 135
static inline link_t *simple_neighbors(int moteID);
#line 150
static inline rfm_model *create_simple_model(void);
#line 212
static void static_one_cell_init(void);
#line 369
static inline bool lossy_connected(int moteID1, int moteID2);
#line 402
static inline void lossy_transmit(int moteID, char bit);
#line 428
static inline void lossy_stop_transmit(int moteID);
#line 447
static inline char lossy_hears(int moteID);
#line 468
static inline int read_lossy_entry(FILE *file, int *mote_one, int *mote_two, double *loss);
#line 547
static inline void lossy_init(void);
#line 596
static inline link_t *lossy_neighbors(int moteID);
#line 611
static inline rfm_model *create_lossy_model(char *file);
#line 650
static inline void set_link_prob_value(uint16_t moteID1, uint16_t moteID2, double prob);
# 58 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/packet_sim.c"
int byteTransmitTime = 8 * 104 * 2;


int backoffLow = 1 * (8 * 104);
int backoffHigh = 16 * (8 * 104);
int txChangeLatency = 1000;
int preambleLength = 6;
int headerLength = 7;

struct IncomingMsg;





#line 69
typedef struct IncomingMsg {
  TOS_Msg msg;
  int fromID;
  struct IncomingMsg *next;
} IncomingMsg;







#line 75
typedef enum __nesc_unnamed4342 {
  RADIO_TX_IDLE, 
  RADIO_TX_BACK, 
  RADIO_TX_TRANS, 
  RADIO_RX_IDLE, 
  RADIO_RX_RECV
} PacketRadioState;

TOS_MsgPtr packet_transmitting[TOSNODES];

IncomingMsg *incoming[TOSNODES];
IncomingMsg *lastIncoming[TOSNODES];

TOS_Msg packet_sim_bufs[TOSNODES];
TOS_MsgPtr current_ptr[TOSNODES];

uint8_t rxState[TOSNODES];
uint8_t txState[TOSNODES];

link_t *packet_connectivity[TOSNODES];

static inline void connectivity_init(char *cFile);

static inline void event_backoff_create(event_t *event, int node, long long eventTime);
void event_backoff_handle(event_t *event, struct TOS_state *state)   ;

void event_start_transmit_handle(event_t *event, struct TOS_state *state)   ;
static inline void event_start_transmit_create(event_t *event, int node, long long eventTime);

void event_receive_packet_create(event_t *event, int node, long long eventTime, IncomingMsg *msg, bool noise)   ;
void event_receive_packet_handle(event_t *event, struct TOS_state *state)   ;
void event_receive_packet_noise_handle(event_t *event, struct TOS_state *state)   ;

void event_send_packet_done_create(event_t *event, int node, long long eventTime)   ;
void event_send_packet_done_handle(event_t *event, struct TOS_state *state)   ;

static bool removeIncomingEntry(int moteID, IncomingMsg *entry);
#line 160
static void addIncomingEntry(int moteID, IncomingMsg *entry);
#line 174
static inline void packet_sim_init(char *cFile);
#line 216
static inline void event_backoff_create(event_t *event, int node, long long eventTime);










void event_backoff_handle(event_t *event, struct TOS_state *state)   ;
#line 248
static inline void event_start_transmit_create(event_t *event, int node, long long eventTime);









static void corruptPacket(IncomingMsg *msg, int src, int dest);









void event_start_transmit_handle(event_t *event, struct TOS_state *state)   ;
#line 350
void event_receive_packet_create(event_t *event, int node, long long eventTime, IncomingMsg *msg, bool deliver)   ;
#line 366
void event_receive_packet_noise_handle(event_t *event, struct TOS_state *state)   ;
#line 379
void event_receive_packet_handle(event_t *event, struct TOS_state *state)   ;
#line 398
void event_send_packet_done_create(event_t *event, int node, long long eventTime)   ;










void event_send_packet_done_handle(event_t *event, struct TOS_state *state)   ;
#line 429
static int read_int(FILE *file);
#line 459
static double read_double(FILE *file);
#line 490
static inline int read_packet_entry(FILE *file, int *mote_one, int *mote_two, double *packet_loss, double *falsePos, double *falseNeg);
#line 503
static inline void connectivity_init(char *cFile);
#line 526
void ptII_insert_packet_event(long long ptolemyTime, TOS_MsgPtr msg)   ;
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Counters/IntMsg.h"
#line 46
typedef struct IntMsg {
  uint16_t val;
  uint16_t src;
} IntMsg;

enum __nesc_unnamed4343 {
  AM_INTMSG = 4
};
# 39 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.h"
enum __nesc_unnamed4344 {
  TIMER_REPEAT = 0, 
  TIMER_ONE_SHOT = 1, 
  NUM_TIMERS = 1U
};
# 34 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.h"
enum __nesc_unnamed4345 {
  TOS_I1024PS = 0, TOS_S1024PS = 3, 
  TOS_I512PS = 1, TOS_S512PS = 3, 
  TOS_I256PS = 3, TOS_S256PS = 3, 
  TOS_I128PS = 7, TOS_S128PS = 3, 
  TOS_I64PS = 15, TOS_S64PS = 3, 
  TOS_I32PS = 31, TOS_S32PS = 3, 
  TOS_I16PS = 63, TOS_S16PS = 3, 
  TOS_I8PS = 127, TOS_S8PS = 3, 
  TOS_I4PS = 255, TOS_S4PS = 3, 
  TOS_I2PS = 15, TOS_S2PS = 7, 
  TOS_I1PS = 31, TOS_S1PS = 7, 
  TOS_I0PS = 0, TOS_S0PS = 0
};
enum __nesc_unnamed4346 {
  DEFAULT_SCALE = 3, DEFAULT_INTERVAL = 255
};
# 22 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
static   void PowerStateM$PowerState$CPUCycleCheckpoint(void);
#line 41
static   void PowerStateM$PowerState$yellowOff(void);
#line 40
static   void PowerStateM$PowerState$yellowOn(void);
#line 39
static   void PowerStateM$PowerState$greenOff(void);
#line 14
static   result_t PowerStateM$PowerState$init(int arg_0x7fac34fdb6f8, int arg_0x7fac34fdb9b0);
#line 37
static   void PowerStateM$PowerState$redOff(void);
#line 36
static   void PowerStateM$PowerState$redOn(void);
#line 18
static   result_t PowerStateM$PowerState$stop(void);
#line 9
static   double PowerStateM$PowerState$get_mote_cycles(int arg_0x7fac34fdce38);
#line 38
static   void PowerStateM$PowerState$greenOn(void);
# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/IntOutput.nc"
static  result_t IntToLedsM$IntOutput$output(uint16_t arg_0x7fac34e89bd8);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t IntToLedsM$StdControl$init(void);






static  result_t IntToLedsM$StdControl$start(void);







static  result_t IntToLedsM$StdControl$stop(void);
# 122 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Leds.nc"
static   result_t LedsM$Leds$yellowOff(void);
#line 114
static   result_t LedsM$Leds$yellowOn(void);
#line 56
static   result_t LedsM$Leds$init(void);
#line 97
static   result_t LedsM$Leds$greenOff(void);
#line 72
static   result_t LedsM$Leds$redOff(void);
#line 64
static   result_t LedsM$Leds$redOn(void);
#line 89
static   result_t LedsM$Leds$greenOn(void);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr RfmToIntM$ReceiveIntMsg$receive(TOS_MsgPtr arg_0x7fac34fe9be8);
# 65 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/IntOutput.nc"
static  result_t RfmToIntM$IntOutput$outputComplete(result_t arg_0x7fac34e885d8);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t RfmToIntM$StdControl$init(void);






static  result_t RfmToIntM$StdControl$start(void);







static  result_t RfmToIntM$StdControl$stop(void);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr AMStandard$ReceiveMsg$default$receive(
# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
uint8_t arg_0x7fac34e121d0, 
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr arg_0x7fac34fe9be8);
# 73 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t AMStandard$ActivityTimer$fired(void);
# 67 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t AMStandard$UARTSend$sendDone(TOS_MsgPtr arg_0x7fac34fe50c8, result_t arg_0x7fac34fe5388);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr AMStandard$RadioReceive$receive(TOS_MsgPtr arg_0x7fac34fe9be8);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t AMStandard$Control$init(void);






static  result_t AMStandard$Control$start(void);







static  result_t AMStandard$Control$stop(void);
# 65 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
static  result_t AMStandard$default$sendDone(void);
# 67 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t AMStandard$RadioSend$sendDone(TOS_MsgPtr arg_0x7fac34fe50c8, result_t arg_0x7fac34fe5388);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t AMStandard$SendMsg$default$sendDone(
# 55 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
uint8_t arg_0x7fac34e13568, 
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
TOS_MsgPtr arg_0x7fac34e19360, result_t arg_0x7fac34e19620);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr AMStandard$UARTReceive$receive(TOS_MsgPtr arg_0x7fac34fe9be8);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t TossimPacketM$Control$init(void);






static  result_t TossimPacketM$Control$start(void);







static  result_t TossimPacketM$Control$stop(void);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr TossimPacketM$ReceiveMain$receive(TOS_MsgPtr arg_0x7fac34fe9be8);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t UARTNoCRCPacketM$Control$init(void);






static  result_t UARTNoCRCPacketM$Control$start(void);







static  result_t UARTNoCRCPacketM$Control$stop(void);
# 180 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
static   result_t TimerM$Clock$fire(void);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t TimerM$StdControl$init(void);






static  result_t TimerM$StdControl$start(void);
# 73 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t TimerM$Timer$default$fired(
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0x7fac34d87b98);
# 59 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t TimerM$Timer$start(
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0x7fac34d87b98, 
# 59 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
char arg_0x7fac34e081c8, uint32_t arg_0x7fac34e08490);








static  result_t TimerM$Timer$stop(
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0x7fac34d87b98);
# 105 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
static   void HPLClock$Clock$setInterval(uint8_t arg_0x7fac34d80bf0);
#line 153
static   uint8_t HPLClock$Clock$readCounter(void);
#line 96
static   result_t HPLClock$Clock$setRate(char arg_0x7fac34d76798, char arg_0x7fac34d76a48);
#line 121
static   uint8_t HPLClock$Clock$getInterval(void);
# 41 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/PowerManagement.nc"
static   uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr Nido$UARTReceiveMsg$receive(TOS_MsgPtr arg_0x7fac34fe9be8);
# 22 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
static   void Nido$PowerState$CPUCycleCheckpoint(void);
#line 14
static   result_t Nido$PowerState$init(int arg_0x7fac34fdb6f8, int arg_0x7fac34fdb9b0);



static   result_t Nido$PowerState$stop(void);
# 67 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t Nido$RadioSendMsg$sendDone(TOS_MsgPtr arg_0x7fac34fe50c8, result_t arg_0x7fac34fe5388);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr Nido$RadioReceiveMsg$receive(TOS_MsgPtr arg_0x7fac34fe9be8);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t Nido$StdControl$init(void);






static  result_t Nido$StdControl$start(void);







static  result_t Nido$StdControl$stop(void);
# 74 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
static inline void Nido$usage(char *progname);




static void Nido$help(char *progname);
#line 108
void event_boot_handle(event_t *fevent, 
struct TOS_state *fstate)   ;
#line 124
long long Nido$last_power_time[1000];

int Nido$power_profiling[1000];
int Nido$cpu_profiling[1000];
int Nido$num_nodes_total[1000];

unsigned long long Nido$max_run_time[1000];

int main(int argc, char **argv)   ;
#line 371
void ptII_fire(long long ptolemyTime)   ;
#line 449
void ptII_cleanup(void)   ;








void nido_start_mote(uint16_t moteID)   ;
#line 477
void nido_stop_mote(uint16_t moteID)   ;
#line 496
TOS_MsgPtr NIDO_received_radio(TOS_MsgPtr packet)   ;









TOS_MsgPtr NIDO_received_uart(TOS_MsgPtr packet)   ;
#line 526
void packet_sim_transmit_done(TOS_MsgPtr msg)   ;




TOS_MsgPtr packet_sim_receive_msg(TOS_MsgPtr msg)   ;








void set_sim_rate(uint32_t rate)   ;







uint32_t get_sim_rate(void)   ;
# 20 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline int PowerStateM$num_bbs(void);
static inline void PowerStateM$dump_power_details(void);

static inline   result_t PowerStateM$PowerState$init(int prof, int cpu_prof);
#line 54
static inline   result_t PowerStateM$PowerState$stop(void);
#line 130
static inline   void PowerStateM$PowerState$redOn(void);





static inline   void PowerStateM$PowerState$redOff(void);





static inline   void PowerStateM$PowerState$greenOn(void);





static inline   void PowerStateM$PowerState$greenOff(void);





static inline   void PowerStateM$PowerState$yellowOn(void);





static inline   void PowerStateM$PowerState$yellowOff(void);
#line 311
static inline int PowerStateM$num_bbs(void);





static inline int PowerStateM$bb_exec_count(int mote, int bb);




static   double PowerStateM$PowerState$get_mote_cycles(int mote);
#line 339
static inline void PowerStateM$print_power_info(void);
#line 361
static inline void PowerStateM$dump_power_details(void);
#line 389
static inline   void PowerStateM$PowerState$CPUCycleCheckpoint(void);
# 65 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/IntOutput.nc"
static  result_t IntToLedsM$IntOutput$outputComplete(result_t arg_0x7fac34e885d8);
# 122 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Leds.nc"
static   result_t IntToLedsM$Leds$yellowOff(void);
#line 114
static   result_t IntToLedsM$Leds$yellowOn(void);
#line 56
static   result_t IntToLedsM$Leds$init(void);
#line 97
static   result_t IntToLedsM$Leds$greenOff(void);
#line 72
static   result_t IntToLedsM$Leds$redOff(void);
#line 64
static   result_t IntToLedsM$Leds$redOn(void);
#line 89
static   result_t IntToLedsM$Leds$greenOn(void);
# 53 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Counters/IntToLedsM.nc"
static inline  result_t IntToLedsM$StdControl$init(void);








static inline  result_t IntToLedsM$StdControl$start(void);



static inline  result_t IntToLedsM$StdControl$stop(void);




static inline  void IntToLedsM$outputDone(void);




static inline  result_t IntToLedsM$IntOutput$output(uint16_t value);
# 41 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
static   void LedsM$PowerState$yellowOff(void);
#line 40
static   void LedsM$PowerState$yellowOn(void);
#line 39
static   void LedsM$PowerState$greenOff(void);
#line 37
static   void LedsM$PowerState$redOff(void);
#line 36
static   void LedsM$PowerState$redOn(void);

static   void LedsM$PowerState$greenOn(void);
# 51 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/LedsM.nc"
uint8_t LedsM$ledsOn[1000];

enum LedsM$__nesc_unnamed4347 {
  LedsM$RED_BIT = 1, 
  LedsM$GREEN_BIT = 2, 
  LedsM$YELLOW_BIT = 4
};


static void LedsM$updateLeds(void);
#line 72
static inline   result_t LedsM$Leds$init(void);








static inline   result_t LedsM$Leds$redOn(void);
#line 94
static   result_t LedsM$Leds$redOff(void);
#line 117
static inline   result_t LedsM$Leds$greenOn(void);
#line 129
static   result_t LedsM$Leds$greenOff(void);
#line 152
static inline   result_t LedsM$Leds$yellowOn(void);
#line 164
static   result_t LedsM$Leds$yellowOff(void);
# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/IntOutput.nc"
static  result_t RfmToIntM$IntOutput$output(uint16_t arg_0x7fac34e89bd8);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t RfmToIntM$CommControl$init(void);






static  result_t RfmToIntM$CommControl$start(void);







static  result_t RfmToIntM$CommControl$stop(void);
# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Counters/RfmToIntM.nc"
static inline  result_t RfmToIntM$StdControl$init(void);



static inline  result_t RfmToIntM$StdControl$start(void);



static inline  result_t RfmToIntM$StdControl$stop(void);



static inline  TOS_MsgPtr RfmToIntM$ReceiveIntMsg$receive(TOS_MsgPtr m);






static inline  result_t RfmToIntM$IntOutput$outputComplete(result_t success);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr AMStandard$ReceiveMsg$receive(
# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
uint8_t arg_0x7fac34e121d0, 
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr arg_0x7fac34fe9be8);
# 59 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t AMStandard$ActivityTimer$start(char arg_0x7fac34e081c8, uint32_t arg_0x7fac34e08490);








static  result_t AMStandard$ActivityTimer$stop(void);
# 41 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/PowerManagement.nc"
static   uint8_t AMStandard$PowerManagement$adjustPower(void);
# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
static  result_t AMStandard$RadioControl$init(void);






static  result_t AMStandard$RadioControl$start(void);







static  result_t AMStandard$RadioControl$stop(void);
#line 63
static  result_t AMStandard$TimerControl$init(void);






static  result_t AMStandard$TimerControl$start(void);
#line 63
static  result_t AMStandard$UARTControl$init(void);






static  result_t AMStandard$UARTControl$start(void);







static  result_t AMStandard$UARTControl$stop(void);
# 65 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
static  result_t AMStandard$sendDone(void);
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
static  result_t AMStandard$SendMsg$sendDone(
# 55 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
uint8_t arg_0x7fac34e13568, 
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
TOS_MsgPtr arg_0x7fac34e19360, result_t arg_0x7fac34e19620);
# 81 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
bool AMStandard$state[1000];

uint16_t AMStandard$lastCount[1000];
uint16_t AMStandard$counter[1000];


static inline  bool AMStandard$Control$init(void);
#line 103
static inline  bool AMStandard$Control$start(void);
#line 119
static inline  bool AMStandard$Control$stop(void);
#line 132
static inline void AMStandard$dbgPacket(TOS_MsgPtr data);










static result_t AMStandard$reportSendDone(TOS_MsgPtr msg, result_t success);







static inline  result_t AMStandard$ActivityTimer$fired(void);





static inline   result_t AMStandard$SendMsg$default$sendDone(uint8_t id, TOS_MsgPtr msg, result_t success);


static inline   result_t AMStandard$default$sendDone(void);
#line 207
static inline  result_t AMStandard$UARTSend$sendDone(TOS_MsgPtr msg, result_t success);


static inline  result_t AMStandard$RadioSend$sendDone(TOS_MsgPtr msg, result_t success);




TOS_MsgPtr received(TOS_MsgPtr packet)   ;
#line 242
static inline   TOS_MsgPtr AMStandard$ReceiveMsg$default$receive(uint8_t id, TOS_MsgPtr msg);



static inline  TOS_MsgPtr AMStandard$UARTReceive$receive(TOS_MsgPtr packet);





static inline  TOS_MsgPtr AMStandard$RadioReceive$receive(TOS_MsgPtr packet);
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
static  TOS_MsgPtr TossimPacketM$Receive$receive(TOS_MsgPtr arg_0x7fac34fe9be8);
# 61 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/TossimPacketM.nc"
TOS_Msg TossimPacketM$buffer[1000];
TOS_MsgPtr TossimPacketM$bufferPtr[1000];

static inline  result_t TossimPacketM$Control$init(void);





static inline  result_t TossimPacketM$Control$start(void);



static inline  result_t TossimPacketM$Control$stop(void);




static  TOS_MsgPtr TossimPacketM$ReceiveMain$receive(TOS_MsgPtr msg);
# 67 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
static  result_t UARTNoCRCPacketM$Send$sendDone(TOS_MsgPtr arg_0x7fac34fe50c8, result_t arg_0x7fac34fe5388);
# 55 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/UARTNoCRCPacketM.nc"
static inline  result_t UARTNoCRCPacketM$Control$init(void);




static inline  result_t UARTNoCRCPacketM$Control$start(void);




static inline  result_t UARTNoCRCPacketM$Control$stop(void);
#line 82
void NIDO_uart_send_done(TOS_MsgPtr fmsg, result_t fsuccess)   ;
# 41 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/PowerManagement.nc"
static   uint8_t TimerM$PowerManagement$adjustPower(void);
# 105 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
static   void TimerM$Clock$setInterval(uint8_t arg_0x7fac34d80bf0);
#line 153
static   uint8_t TimerM$Clock$readCounter(void);
#line 96
static   result_t TimerM$Clock$setRate(char arg_0x7fac34d76798, char arg_0x7fac34d76a48);
#line 121
static   uint8_t TimerM$Clock$getInterval(void);
# 73 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
static  result_t TimerM$Timer$fired(
# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0x7fac34d87b98);









uint32_t TimerM$mState[1000];
uint8_t TimerM$setIntervalFlag[1000];
uint8_t TimerM$mScale[1000];
#line 61
uint8_t TimerM$mInterval[1000];
int8_t TimerM$queue_head[1000];
int8_t TimerM$queue_tail[1000];
uint8_t TimerM$queue_size[1000];
uint8_t TimerM$queue[1000][NUM_TIMERS];
volatile uint16_t TimerM$interval_outstanding[1000];





#line 68
struct TimerM$timer_s {
  uint8_t type;
  int32_t ticks;
  int32_t ticksLeft;
} TimerM$mTimerList[1000][NUM_TIMERS];

enum TimerM$__nesc_unnamed4348 {
  TimerM$maxTimerInterval = 230
};
static inline  result_t TimerM$StdControl$init(void);









static inline  result_t TimerM$StdControl$start(void);










static inline  result_t TimerM$Timer$start(uint8_t id, char type, 
uint32_t interval);
#line 129
inline static void TimerM$adjustInterval(void);
#line 168
static inline  result_t TimerM$Timer$stop(uint8_t id);
#line 182
static inline   result_t TimerM$Timer$default$fired(uint8_t id);



static inline void TimerM$enqueue(uint8_t value);







static inline uint8_t TimerM$dequeue(void);









static inline  void TimerM$signalOneTimer(void);





static inline  void TimerM$HandleFire(void);
#line 253
static inline   result_t TimerM$Clock$fire(void);
# 180 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
static   result_t HPLClock$Clock$fire(void);
# 60 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLClock.nc"
char HPLClock$set_flag[1000];
 unsigned char HPLClock$mscale[1000];
#line 61
 unsigned char HPLClock$nextScale[1000];
#line 61
 unsigned char HPLClock$minterval[1000];
#line 82
static inline   void HPLClock$Clock$setInterval(uint8_t value);








static inline   uint8_t HPLClock$Clock$getInterval(void);
#line 113
static inline   uint8_t HPLClock$Clock$readCounter(void);
#line 128
static inline   result_t HPLClock$Clock$setRate(char interval, char scale);







static inline void SIG_OUTPUT_COMPARE2_interrupt(void)  ;
# 50 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLPowerManagementM.nc"
enum HPLPowerManagementM$__nesc_unnamed4349 {
  HPLPowerManagementM$IDLE = 0
};

static inline   uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void);
# 210 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
static inline  result_t AMStandard$RadioSend$sendDone(TOS_MsgPtr msg, result_t success)
#line 210
{
  return AMStandard$reportSendDone(msg, success);
}

# 67 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t Nido$RadioSendMsg$sendDone(TOS_MsgPtr arg_0x7fac34fe50c8, result_t arg_0x7fac34fe5388){
#line 67
  unsigned char result;
#line 67

#line 67
  result = AMStandard$RadioSend$sendDone(arg_0x7fac34fe50c8, arg_0x7fac34fe5388);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 157 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
static inline   result_t AMStandard$SendMsg$default$sendDone(uint8_t id, TOS_MsgPtr msg, result_t success)
#line 157
{
  return SUCCESS;
}

# 49 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t AMStandard$SendMsg$sendDone(uint8_t arg_0x7fac34e13568, TOS_MsgPtr arg_0x7fac34e19360, result_t arg_0x7fac34e19620){
#line 49
  unsigned char result;
#line 49

#line 49
    result = AMStandard$SendMsg$default$sendDone(arg_0x7fac34e13568, arg_0x7fac34e19360, arg_0x7fac34e19620);
#line 49

#line 49
  return result;
#line 49
}
#line 49
# 160 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
static inline   result_t AMStandard$default$sendDone(void)
#line 160
{
  return SUCCESS;
}

#line 65
inline static  result_t AMStandard$sendDone(void){
#line 65
  unsigned char result;
#line 65

#line 65
  result = AMStandard$default$sendDone();
#line 65

#line 65
  return result;
#line 65
}
#line 65
# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr Nido$RadioReceiveMsg$receive(TOS_MsgPtr arg_0x7fac34fe9be8){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = TossimPacketM$ReceiveMain$receive(arg_0x7fac34fe9be8);
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 252 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
static inline  TOS_MsgPtr AMStandard$RadioReceive$receive(TOS_MsgPtr packet)
#line 252
{
  return received(packet);
}

# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr TossimPacketM$Receive$receive(TOS_MsgPtr arg_0x7fac34fe9be8){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = AMStandard$RadioReceive$receive(arg_0x7fac34fe9be8);
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 132 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
static inline void AMStandard$dbgPacket(TOS_MsgPtr data)
#line 132
{
  uint8_t i;

  for (i = 0; i < sizeof(TOS_Msg ); i++) 
    {
      dbg_clear(DBG_AM, "%02hhx ", ((uint8_t *)data)[i]);
    }
  dbg_clear(DBG_AM, "\n");
}

# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Counters/RfmToIntM.nc"
static inline  result_t RfmToIntM$IntOutput$outputComplete(result_t success)
#line 75
{
  return SUCCESS;
}

# 65 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/IntOutput.nc"
inline static  result_t IntToLedsM$IntOutput$outputComplete(result_t arg_0x7fac34e885d8){
#line 65
  unsigned char result;
#line 65

#line 65
  result = RfmToIntM$IntOutput$outputComplete(arg_0x7fac34e885d8);
#line 65

#line 65
  return result;
#line 65
}
#line 65
# 71 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Counters/IntToLedsM.nc"
static inline  void IntToLedsM$outputDone(void)
{
  IntToLedsM$IntOutput$outputComplete(1);
}

# 122 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t IntToLedsM$Leds$yellowOff(void){
#line 122
  unsigned char result;
#line 122

#line 122
  result = LedsM$Leds$yellowOff();
#line 122

#line 122
  return result;
#line 122
}
#line 122
# 154 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline   void PowerStateM$PowerState$yellowOn(void)
#line 154
{
  if (!prof_on) {
#line 155
    return;
    }
#line 156
  dbg(DBG_POWER, "POWER: Mote %d LED_STATE YELLOW_ON at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 40 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   void LedsM$PowerState$yellowOn(void){
#line 40
  PowerStateM$PowerState$yellowOn();
#line 40
}
#line 40
# 152 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/LedsM.nc"
static inline   result_t LedsM$Leds$yellowOn(void)
#line 152
{
  dbg(DBG_LED, "LEDS: Yellow on.\n");
  LedsM$PowerState$yellowOn();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 155
    {
      if (!(LedsM$ledsOn[tos_state.current_node] & LedsM$YELLOW_BIT)) {
          LedsM$ledsOn[tos_state.current_node] |= LedsM$YELLOW_BIT;
          LedsM$updateLeds();
        }
    }
#line 160
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 114 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t IntToLedsM$Leds$yellowOn(void){
#line 114
  unsigned char result;
#line 114

#line 114
  result = LedsM$Leds$yellowOn();
#line 114

#line 114
  return result;
#line 114
}
#line 114
#line 97
inline static   result_t IntToLedsM$Leds$greenOff(void){
#line 97
  unsigned char result;
#line 97

#line 97
  result = LedsM$Leds$greenOff();
#line 97

#line 97
  return result;
#line 97
}
#line 97
# 142 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline   void PowerStateM$PowerState$greenOn(void)
#line 142
{
  if (!prof_on) {
#line 143
    return;
    }
#line 144
  dbg(DBG_POWER, "POWER: Mote %d LED_STATE GREEN_ON at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 38 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   void LedsM$PowerState$greenOn(void){
#line 38
  PowerStateM$PowerState$greenOn();
#line 38
}
#line 38
# 117 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/LedsM.nc"
static inline   result_t LedsM$Leds$greenOn(void)
#line 117
{
  dbg(DBG_LED, "LEDS: Green on.\n");
  LedsM$PowerState$greenOn();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 120
    {
      if (!(LedsM$ledsOn[tos_state.current_node] & LedsM$GREEN_BIT)) {
          LedsM$ledsOn[tos_state.current_node] |= LedsM$GREEN_BIT;
          LedsM$updateLeds();
        }
    }
#line 125
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 89 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t IntToLedsM$Leds$greenOn(void){
#line 89
  unsigned char result;
#line 89

#line 89
  result = LedsM$Leds$greenOn();
#line 89

#line 89
  return result;
#line 89
}
#line 89
#line 72
inline static   result_t IntToLedsM$Leds$redOff(void){
#line 72
  unsigned char result;
#line 72

#line 72
  result = LedsM$Leds$redOff();
#line 72

#line 72
  return result;
#line 72
}
#line 72
# 130 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline   void PowerStateM$PowerState$redOn(void)
#line 130
{
  if (!prof_on) {
#line 131
    return;
    }
#line 132
  dbg(DBG_POWER, "POWER: Mote %d LED_STATE RED_ON at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 36 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   void LedsM$PowerState$redOn(void){
#line 36
  PowerStateM$PowerState$redOn();
#line 36
}
#line 36
# 81 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/LedsM.nc"
static inline   result_t LedsM$Leds$redOn(void)
#line 81
{
  dbg(DBG_LED, "LEDS: Red on.\n");
  LedsM$PowerState$redOn();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 84
    {
      if (!(LedsM$ledsOn[tos_state.current_node] & LedsM$RED_BIT)) {
          LedsM$ledsOn[tos_state.current_node] |= LedsM$RED_BIT;
          LedsM$updateLeds();
        }
    }
#line 89
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

# 64 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t IntToLedsM$Leds$redOn(void){
#line 64
  unsigned char result;
#line 64

#line 64
  result = LedsM$Leds$redOn();
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 76 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Counters/IntToLedsM.nc"
static inline  result_t IntToLedsM$IntOutput$output(uint16_t value)
{
  if (value & 1) {
#line 78
    IntToLedsM$Leds$redOn();
    }
  else {
#line 79
    IntToLedsM$Leds$redOff();
    }
#line 80
  if (value & 2) {
#line 80
    IntToLedsM$Leds$greenOn();
    }
  else {
#line 81
    IntToLedsM$Leds$greenOff();
    }
#line 82
  if (value & 4) {
#line 82
    IntToLedsM$Leds$yellowOn();
    }
  else {
#line 83
    IntToLedsM$Leds$yellowOff();
    }
  TOS_post(IntToLedsM$outputDone);

  return SUCCESS;
}

# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/IntOutput.nc"
inline static  result_t RfmToIntM$IntOutput$output(uint16_t arg_0x7fac34e89bd8){
#line 56
  unsigned char result;
#line 56

#line 56
  result = IntToLedsM$IntOutput$output(arg_0x7fac34e89bd8);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 68 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Counters/RfmToIntM.nc"
static inline  TOS_MsgPtr RfmToIntM$ReceiveIntMsg$receive(TOS_MsgPtr m)
#line 68
{
  IntMsg *message = (IntMsg *)m->data;

#line 70
  RfmToIntM$IntOutput$output(message->val);

  return m;
}

# 242 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
static inline   TOS_MsgPtr AMStandard$ReceiveMsg$default$receive(uint8_t id, TOS_MsgPtr msg)
#line 242
{
  return msg;
}

# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr AMStandard$ReceiveMsg$receive(uint8_t arg_0x7fac34e121d0, TOS_MsgPtr arg_0x7fac34fe9be8){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  switch (arg_0x7fac34e121d0) {
#line 75
    case AM_INTMSG:
#line 75
      result = RfmToIntM$ReceiveIntMsg$receive(arg_0x7fac34fe9be8);
#line 75
      break;
#line 75
    default:
#line 75
      result = AMStandard$ReceiveMsg$default$receive(arg_0x7fac34e121d0, arg_0x7fac34fe9be8);
#line 75
      break;
#line 75
    }
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 136 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline   void PowerStateM$PowerState$redOff(void)
#line 136
{
  if (!prof_on) {
#line 137
    return;
    }
#line 138
  dbg(DBG_POWER, "POWER: Mote %d LED_STATE RED_OFF at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 37 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   void LedsM$PowerState$redOff(void){
#line 37
  PowerStateM$PowerState$redOff();
#line 37
}
#line 37
# 148 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline   void PowerStateM$PowerState$greenOff(void)
#line 148
{
  if (!prof_on) {
#line 149
    return;
    }
#line 150
  dbg(DBG_POWER, "POWER: Mote %d LED_STATE GREEN_OFF at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 39 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   void LedsM$PowerState$greenOff(void){
#line 39
  PowerStateM$PowerState$greenOff();
#line 39
}
#line 39
# 160 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline   void PowerStateM$PowerState$yellowOff(void)
#line 160
{
  if (!prof_on) {
#line 161
    return;
    }
#line 162
  dbg(DBG_POWER, "POWER: Mote %d LED_STATE YELLOW_OFF at %lld\n", tos_state.current_node, 
  tos_state.tos_time);
}

# 41 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   void LedsM$PowerState$yellowOff(void){
#line 41
  PowerStateM$PowerState$yellowOff();
#line 41
}
#line 41
# 88 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.h"
 __inline __nesc_atomic_t __nesc_atomic_start(void )
{
  return 0;
}

 __inline void __nesc_atomic_end(__nesc_atomic_t oldSreg)
{
}

# 446 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static inline void sendInitEvent(void *socketChannel)
#line 446
{
  TossimInitEvent initEv;
  unsigned char *msg;
  int total_size;

  memset((char *)&initEv, 0, sizeof(TossimInitEvent ));
  initEv.numMotes = tos_state.num_nodes;
  initEv.radioModel = tos_state.radioModel;
  initEv.rate = get_sim_rate();
  buildTossimEvent(0, AM_TOSSIMINITEVENT, 
  tos_state.tos_time, &initEv, &msg, &total_size);

  writeTossimEvent(msg, total_size, socketChannel);
  free(msg);
}

# 72 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/tos.c"
static inline double get_rate_value(void)
#line 72
{
  return rate_value;
}

# 560 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static inline void event_command_cleanup(event_t *event)
#line 560
{
  incoming_command_data_t *cmdData = (incoming_command_data_t *)event->data;

#line 562
  free(cmdData->msg);
  free(cmdData->payLoad);
  event_total_cleanup(event);
}

# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/events.c"
static inline void event_cleanup(event_t *fevent)
{
  dbg(DBG_MEM, "event_cleanup: freeing event: 0x%x\n", (unsigned int )fevent);
  fevent->cleanup(fevent);
}

# 722 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static inline void event_command_in_handle(event_t *event, 
struct TOS_state *state)
#line 723
{
  incoming_command_data_t *cmdData = (incoming_command_data_t *)event->data;
  GuiMsg *msg = cmdData->msg;

#line 726
  dbg_clear(DBG_SIM, "SIM: Handling incoming command type %d for mote %d\n", msg->msgType, msg->moteID);

  switch (msg->msgType) {

      case AM_TURNONMOTECOMMAND: 
        dbg_clear(DBG_SIM, "SIM: Turning on mote %d\n", msg->moteID);
      nido_start_mote(msg->moteID);
      break;

      case AM_TURNOFFMOTECOMMAND: 
        dbg_clear(DBG_SIM, "SIM: Turning off mote %d\n", msg->moteID);
      nido_stop_mote(msg->moteID);
      break;

      case AM_RADIOMSGSENDCOMMAND: 
        {
          RadioMsgSendCommand *rmsg = (RadioMsgSendCommand *)cmdData->payLoad;
          TOS_MsgPtr buffer;

          dbg_clear(DBG_SIM, "SIM: Enqueueing radio message for mote %d (payloadlen %d)\n", msg->moteID, msg->payLoadLen);
          if (external_comm_buffers_[msg->moteID] == (void *)0) {
            external_comm_buffers_[msg->moteID] = &external_comm_msgs_[msg->moteID];
            }
#line 748
          buffer = external_comm_buffers_[msg->moteID];
          memcpy(buffer, & rmsg->message, msg->payLoadLen);
          buffer->group = TOS_AM_GROUP;
          external_comm_buffers_[msg->moteID] = NIDO_received_radio(buffer);
        }
      break;

      case AM_UARTMSGSENDCOMMAND: 
        {
          UARTMsgSendCommand *umsg = (UARTMsgSendCommand *)cmdData->payLoad;
          TOS_MsgPtr buffer;
          int len = msg->payLoadLen > sizeof(TOS_Msg ) ? sizeof(TOS_Msg ) : msg->payLoadLen;

          dbg_clear(DBG_SIM, "SIM: Enqueueing UART message for mote %d (payloadlen %d)\n", msg->moteID, msg->payLoadLen);
          if (external_comm_buffers_[msg->moteID] == (void *)0) {
            external_comm_buffers_[msg->moteID] = &external_comm_msgs_[msg->moteID];
            }
#line 764
          buffer = external_comm_buffers_[msg->moteID];

          memcpy(buffer, & umsg->message, len);
          buffer->group = TOS_AM_GROUP;
          external_comm_buffers_[msg->moteID] = NIDO_received_uart(buffer);
        }
      break;

      case AM_INTERRUPTCOMMAND: 
        {
          InterruptEvent interruptEvent;
          InterruptCommand *pcmd = (InterruptCommand *)cmdData->payLoad;

#line 776
          interruptEvent.id = pcmd->id;
          dbg_clear(DBG_TEMP, "\nSIM: Interrupt command, id: %i.\n\n", pcmd->id);
          sendTossimEvent(TOS_BCAST_ADDR, AM_INTERRUPTEVENT, 
          tos_state.tos_time, &interruptEvent);
          break;
        }

      default: 
        dbg_clear(DBG_SIM, "SIM: Unrecognizable command type received from TinyViz %i\n", msg->msgType);
      break;
    }

  event_cleanup(event);
}

#line 568
static inline void event_command_in_create(event_t *event, 
GuiMsg *msg, 
char *payLoad)
#line 570
{
  incoming_command_data_t *data = (incoming_command_data_t *)malloc(sizeof(incoming_command_data_t ));

#line 572
  data->msg = msg;
  data->payLoad = payLoad;

  event->mote = (int )(msg->moteID & 0xffff);
  if (event->mote < TOSNODES && 
  event->mote >= 0) {
      event->force = 1;
    }
  event->pause = 1;
  event->data = data;
  event->time = msg->time;
  event->handle = event_command_in_handle;
  event->cleanup = event_command_cleanup;
}

# 54 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/dbg.c"
inline void dbg_set(TOS_dbg_mode modes)
#line 54
{
  dbg_modes = modes;
}

# 149 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/adc_model.c"
static inline void set_adc_value(int moteID, uint8_t port, uint16_t value)
#line 149
{
  if (moteID >= TOSNODES || moteID < 0) {
      dbg(DBG_ERROR, "GENERIC_ADC_MODEL: trying to set value with invalid parameters: [moteID = %d] [port = %d]", moteID, port);
      return;
    }


  ptII_MonitorEnter(adcValuesLock);


  adcValues[moteID][(int )port] = value;


  ptII_MonitorExit(adcValuesLock);
}

# 650 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/rfm_model.c"
static inline void set_link_prob_value(uint16_t moteID1, uint16_t moteID2, double prob)
#line 650
{
  link_t *current_link;
  link_t *new_link;


  ptII_MonitorEnter(radioConnectivityLock);


  current_link = radio_connectivity[moteID1];
  dbg(DBG_SIM, "RFM: MDW: Setting loss prob %d->%d to %0.3f\n", moteID1, moteID2, prob);
  while (current_link) {
      if (current_link->mote == moteID2) {
          current_link->data = prob;



          ptII_MonitorExit(radioConnectivityLock);

          return;
        }
      current_link = current_link->next_link;
    }
  new_link = allocate_link(moteID2);
  new_link->next_link = radio_connectivity[moteID1];
  new_link->data = prob;
  radio_connectivity[moteID1] = new_link;


  ptII_MonitorExit(radioConnectivityLock);
}

# 592 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static inline int processCommand(void *socketChannel, int clidx, GuiMsg *msg, char *payLoad, 
unsigned char **replyMsg, int *replyLen)
#line 593
{
  int ret = 0;

#line 595
  switch (msg->msgType) {

      case AM_SETLINKPROBCOMMAND: 
        {
          SetLinkProbCommand *linkmsg = (SetLinkProbCommand *)payLoad;
          double prob = (double )linkmsg->scaledProb / 10000;

#line 601
          set_link_prob_value(msg->moteID, linkmsg->moteReceiver, prob);
          break;
        }
      case AM_SETADCPORTVALUECOMMAND: 
        {
          SetADCPortValueCommand *adcmsg = (SetADCPortValueCommand *)payLoad;

#line 607
          set_adc_value(msg->moteID, adcmsg->port, adcmsg->value);
          break;
        }
      case AM_SETRATECOMMAND: 
        {
          SetRateCommand *ratemsg = (SetRateCommand *)payLoad;

#line 613
          set_sim_rate(ratemsg->rate);
          break;
        }
      case AM_VARIABLERESOLVECOMMAND: 
        {
          VariableResolveResponse varResult;
          VariableResolveCommand *rmsg = (VariableResolveCommand *)payLoad;







          if (
#line 625
          __nesc_nido_resolve(msg->moteID, (char *)rmsg->name, 
          (uintptr_t *)& varResult.addr, 
          (size_t *)& varResult.length) != 0) 
            {
              varResult.addr = 0;
              varResult.length = -1;
            }

          dbg_clear(DBG_SIM, "SIM: Resolving variable %s for mote %d: 0x%x %d\n", 
          rmsg->name, msg->moteID, varResult.addr, varResult.length);

          buildTossimEvent(TOS_BCAST_ADDR, AM_VARIABLERESOLVERESPONSE, 
          tos_state.tos_time, &varResult, replyMsg, replyLen);
          ret = 1;
          break;
        }
      case AM_VARIABLEREQUESTCOMMAND: 
        {
          VariableRequestResponse varResult;
          VariableRequestCommand *rmsg = (VariableRequestCommand *)payLoad;
          uint8_t *ptr = (uint8_t *)rmsg->addr;

#line 646
          varResult.length = rmsg->length;

          if (varResult.length == 0) {
            varResult.length = 256;
            }
          memcpy(varResult.value, ptr, varResult.length);

          buildTossimEvent(TOS_BCAST_ADDR, AM_VARIABLEREQUESTRESPONSE, 
          tos_state.tos_time, &varResult, replyMsg, replyLen);
          ret = 1;
          break;
        }

      case AM_GETMOTECOUNTCOMMAND: 
        {
          int i;
          GetMoteCountResponse countResponse;

          countResponse.totalMotes = tos_state.num_nodes;
          bzero(& countResponse.bitmask, sizeof  countResponse.bitmask);

          for (i = 0; i < TOSNODES; i++) {
              countResponse.bitmask[i / 8] |= 1 << (7 - i % 8);
            }

          buildTossimEvent(TOS_BCAST_ADDR, AM_GETMOTECOUNTRESPONSE, 
          tos_state.tos_time, &countResponse, replyMsg, replyLen);
          ret = 1;
          break;
        }
      case AM_SETDBGCOMMAND: 
        {
          SetDBGCommand *cmd = (SetDBGCommand *)payLoad;

#line 679
          dbg_set(cmd->dbg);
          break;
        }
      case AM_SETEVENTMASKCOMMAND: 
        {
          SetEventMaskCommand *setMaskCommand = (SetEventMaskCommand *)payLoad;

#line 685
          eventMask = setMaskCommand->mask;
          break;
        }
      case AM_BEGINBATCHCOMMAND: 
        {
          if (batchState[clidx] != 0) {
              dbg(DBG_SIM | DBG_ERROR, "SIM: duplicate begin batch");
            }
          dbg(DBG_SIM, "SIM: begin batch");
          batchState[clidx] = 1;
          break;
        }
      case AM_ENDBATCHCOMMAND: 
        {
          if (batchState[clidx] == 0) {
              dbg(DBG_SIM | DBG_ERROR, "SIM: end batch without begin");
            }
          dbg(DBG_SIM, "SIM: end batch");
          batchState[clidx] = 0;
          break;
        }

      default: 
        {


          event_t *event = (event_t *)malloc(sizeof(event_t ));

#line 712
          event_command_in_create(event, msg, payLoad);
          dbg(DBG_SIM, "SIM: Enqueuing command event 0x%lx\n", (unsigned long )event);
          queue_insert_event(& tos_state.queue, event);
#line 714
          ;
        }
    }

  return ret;
}

#line 795
static inline int readTossimCommand(void *socketChannel, int clidx)
#line 795
{
  GuiMsg *msg;
  unsigned char *header;
  char *payLoad = (void *)0;
  int curlen = 0;
  int rval;
  unsigned char ack;
  int reply;
  unsigned char *replyMsg = 0;
  int replyLen = 0;



  dbg_clear(DBG_SIM, "SIM: Reading command from client fd %p\n", socketChannel);

  header = (unsigned char *)malloc(14);
  msg = (GuiMsg *)malloc(sizeof(GuiMsg ));

  curlen = 0;
  while (curlen < 14) {
      dbg_clear(DBG_SIM, "SIM: Reading in GuiMsg header of size %d with length %d\n", 14, curlen);


      rval = ptII_socketChannelRead(socketChannel, header + curlen, 14 - curlen);
      if (rval <= 0) {


          dbg_clear(DBG_SIM, "SIM: Closing client socket %p.\n", socketChannel);
          free(msg);


          ptII_socketChannelClose(socketChannel);
          goto done;
        }
      else 
#line 828
        {
          curlen += rval;
        }
    }


  msg->msgType = ntohs(* (unsigned short *)&header[0]);
  msg->moteID = ntohs(* (unsigned short *)&header[2]);
  msg->time = __extension__ ({
#line 836
    register unsigned long __v;
#line 836
    register unsigned long __x = * (long long *)&header[4];

#line 836
    if (__builtin_constant_p(__x)) {
#line 836
      __v = ((((((((__x & 0xff00000000000000ull) >> 56) | ((__x & 0x00ff000000000000ull) >> 40)) | ((__x & 0x0000ff0000000000ull) >> 24)) | ((__x & 0x000000ff00000000ull) >> 8)) | ((__x & 0x00000000ff000000ull) << 8)) | ((__x & 0x0000000000ff0000ull) << 24)) | ((__x & 0x000000000000ff00ull) << 40)) | ((__x & 0x00000000000000ffull) << 56);
      }
    else {
#line 836
       __asm ("bswap %q0" : "=r"(__v) : "0"(__x));
      }
#line 836
    __v;
  }
  );
#line 837
  msg->payLoadLen = ntohs(* (unsigned short *)&header[12]);
  dbg_clear(DBG_SIM, "SIM: Command type %d mote %d time 0x%lx payloadlen %d\n", msg->msgType, msg->moteID, msg->time, msg->payLoadLen);
  if (msg->time < tos_state.tos_time) {
      msg->time = tos_state.tos_time;
    }


  if (msg->payLoadLen > 0) {
      payLoad = (char *)malloc(msg->payLoadLen);
      curlen = 0;
      while (curlen < msg->payLoadLen) {
          dbg(DBG_SIM, "SIM: Reading in GuiMsg payload of size %d with length %d\n", msg->payLoadLen, curlen);


          rval = ptII_socketChannelRead(socketChannel, payLoad + curlen, msg->payLoadLen - curlen);
          if (rval <= 0) {


              dbg(DBG_SIM, "SIM: Closing client socket %p.\n", socketChannel);
              free(msg);
              free(payLoad);
              goto done;
            }
          else 
#line 859
            {
              curlen += rval;
              dbg(DBG_SIM, "SIM: Read from command port, total: %d, need %d\n", curlen, msg->payLoadLen - curlen);
            }
        }
    }

  if (msg->moteID < tos_state.num_nodes) {


      reply = processCommand(socketChannel, clidx, msg, payLoad, &replyMsg, &replyLen);
    }
  else {
      dbg(DBG_SIM | DBG_ERROR, "SIM: Received command for invalid mote: %i\n", (int )msg->moteID);
    }


  if (batchState[clidx] != 0) {
      if (reply) {
          dbg(DBG_SIM | DBG_ERROR, "SIM: unexpected command response in batch!!\n");
        }
      return 0;
    }

  do {


      rval = ptII_socketChannelWrite(socketChannel, &ack, 1);
      if (rval < 0) {


          dbg(DBG_SIM, "SIM: Closing client socket %p.\n", socketChannel);
          goto done;
        }
    }
  while (
#line 893
  rval != 1);

  if (reply) {
      dbg(DBG_SIM, "SIM: Sending %d byte reply.\n", replyLen);


      writeTossimEvent(replyMsg, replyLen, socketChannel);
      free(replyMsg);
    }

  done: 
    return 0;
}

# 76 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/tos.c"
static inline void set_rate_value(double rate)
#line 76
{
  rate_value = rate;
}

static inline void rate_checkpoint(void)
#line 80
{
  rate_checkpoint_time = tos_state.tos_time;
  gettimeofday(&startTime, (void *)0);
}

# 120 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/tos.h"
static inline result_t rcombine(result_t r1, result_t r2)



{
  return r1 == FAIL ? FAIL : r2;
}

# 64 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/TossimPacketM.nc"
static inline  result_t TossimPacketM$Control$init(void)
#line 64
{
  TossimPacketM$bufferPtr[tos_state.current_node] = &TossimPacketM$buffer[tos_state.current_node];

  return SUCCESS;
}

# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$RadioControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = TossimPacketM$Control$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 55 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/UARTNoCRCPacketM.nc"
static inline  result_t UARTNoCRCPacketM$Control$init(void)
#line 55
{
  dbg(DBG_BOOT, "UART initialized.\n");
  return SUCCESS;
}

# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$UARTControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = UARTNoCRCPacketM$Control$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 128 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLClock.nc"
static inline   result_t HPLClock$Clock$setRate(char interval, char scale)
#line 128
{
  HPLClock$mscale[tos_state.current_node] = scale;
  HPLClock$minterval[tos_state.current_node] = interval;
  TOSH_clock_set_rate(interval, scale);
  return SUCCESS;
}

# 96 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   result_t TimerM$Clock$setRate(char arg_0x7fac34d76798, char arg_0x7fac34d76a48){
#line 96
  unsigned char result;
#line 96

#line 96
  result = HPLClock$Clock$setRate(arg_0x7fac34d76798, arg_0x7fac34d76a48);
#line 96

#line 96
  return result;
#line 96
}
#line 96
# 77 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
static inline  result_t TimerM$StdControl$init(void)
#line 77
{
  TimerM$mState[tos_state.current_node] = 0;
  TimerM$setIntervalFlag[tos_state.current_node] = 0;
  TimerM$queue_head[tos_state.current_node] = TimerM$queue_tail[tos_state.current_node] = -1;
  TimerM$queue_size[tos_state.current_node] = 0;
  TimerM$mScale[tos_state.current_node] = 3;
  TimerM$mInterval[tos_state.current_node] = TimerM$maxTimerInterval;
  return TimerM$Clock$setRate(TimerM$mInterval[tos_state.current_node], TimerM$mScale[tos_state.current_node]);
}

# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$TimerControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = TimerM$StdControl$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 87 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
static inline  bool AMStandard$Control$init(void)
#line 87
{
  result_t ok1;
#line 88
  result_t ok2;

  AMStandard$TimerControl$init();
  ok1 = AMStandard$UARTControl$init();
  ok2 = AMStandard$RadioControl$init();

  AMStandard$state[tos_state.current_node] = FALSE;
  AMStandard$lastCount[tos_state.current_node] = 0;
  AMStandard$counter[tos_state.current_node] = 0;
  dbg(DBG_BOOT, "AM Module initialized\n");

  return rcombine(ok1, ok2);
}

# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t RfmToIntM$CommControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = AMStandard$Control$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Counters/RfmToIntM.nc"
static inline  result_t RfmToIntM$StdControl$init(void)
#line 56
{
  return RfmToIntM$CommControl$init();
}

# 72 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/LedsM.nc"
static inline   result_t LedsM$Leds$init(void)
#line 72
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      LedsM$ledsOn[tos_state.current_node] = 0;
      dbg(DBG_BOOT, "LEDS: initialized.\n");
      LedsM$updateLeds();
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t IntToLedsM$Leds$init(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = LedsM$Leds$init();
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 53 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Counters/IntToLedsM.nc"
static inline  result_t IntToLedsM$StdControl$init(void)
{
  IntToLedsM$Leds$init();
  IntToLedsM$Leds$redOff();
  IntToLedsM$Leds$yellowOff();
  IntToLedsM$Leds$greenOff();
  return SUCCESS;
}

# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t Nido$StdControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = IntToLedsM$StdControl$init();
#line 63
  result = rcombine(result, RfmToIntM$StdControl$init());
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 217 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hpl.c"
static inline void event_clocktick_invalidate(event_t *event)
#line 217
{
  clock_tick_data_t *data = event->data;

#line 219
  data->valid = 0;
}

#line 115
static inline uint8_t TOSH_get_clock_interval(void)
#line 115
{
  return intervals[tos_state.current_node] - 1;
}

# 91 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLClock.nc"
static inline   uint8_t HPLClock$Clock$getInterval(void)
#line 91
{
  return TOSH_get_clock_interval();
}

# 121 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   uint8_t TimerM$Clock$getInterval(void){
#line 121
  unsigned char result;
#line 121

#line 121
  result = HPLClock$Clock$getInterval();
#line 121

#line 121
  return result;
#line 121
}
#line 121
# 54 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLPowerManagementM.nc"
static inline   uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void)
#line 54
{
  return HPLPowerManagementM$IDLE;
}

# 41 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/PowerManagement.nc"
inline static   uint8_t TimerM$PowerManagement$adjustPower(void){
#line 41
  unsigned char result;
#line 41

#line 41
  result = HPLPowerManagementM$PowerManagement$adjustPower();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 82 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLClock.nc"
static inline   void HPLClock$Clock$setInterval(uint8_t value)
#line 82
{
  TOSH_clock_set_interval(value);
}

# 105 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   void TimerM$Clock$setInterval(uint8_t arg_0x7fac34d80bf0){
#line 105
  HPLClock$Clock$setInterval(arg_0x7fac34d80bf0);
#line 105
}
#line 105
# 113 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLClock.nc"
static inline   uint8_t HPLClock$Clock$readCounter(void)
#line 113
{
  return TOSH_get_clock0_counter();
}

# 153 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   uint8_t TimerM$Clock$readCounter(void){
#line 153
  unsigned char result;
#line 153

#line 153
  result = HPLClock$Clock$readCounter();
#line 153

#line 153
  return result;
#line 153
}
#line 153
# 129 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
inline static void TimerM$adjustInterval(void)
#line 129
{
  uint8_t i;
#line 130
  uint8_t val = TimerM$maxTimerInterval;

#line 131
  if (TimerM$mState[tos_state.current_node]) {
      for (i = 0; i < NUM_TIMERS; i++) {
          if (TimerM$mState[tos_state.current_node] & (0x1L << i) && TimerM$mTimerList[tos_state.current_node][i].ticksLeft < val) {
              val = TimerM$mTimerList[tos_state.current_node][i].ticksLeft;
            }
        }
#line 148
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 148
        {
          i = TimerM$Clock$readCounter() + 3;
          if (val < i) {
              val = i;
            }
          TimerM$mInterval[tos_state.current_node] = val;
          TimerM$Clock$setInterval(TimerM$mInterval[tos_state.current_node]);
          TimerM$setIntervalFlag[tos_state.current_node] = 0;
        }
#line 156
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 159
        {
          TimerM$mInterval[tos_state.current_node] = TimerM$maxTimerInterval;
          TimerM$Clock$setInterval(TimerM$mInterval[tos_state.current_node]);
          TimerM$setIntervalFlag[tos_state.current_node] = 0;
        }
#line 163
        __nesc_atomic_end(__nesc_atomic); }
    }
  TimerM$PowerManagement$adjustPower();
}

#line 186
static inline void TimerM$enqueue(uint8_t value)
#line 186
{
  if (TimerM$queue_tail[tos_state.current_node] == NUM_TIMERS - 1) {
    TimerM$queue_tail[tos_state.current_node] = -1;
    }
#line 189
  TimerM$queue_tail[tos_state.current_node]++;
  TimerM$queue_size[tos_state.current_node]++;
  TimerM$queue[tos_state.current_node][(uint8_t )TimerM$queue_tail[tos_state.current_node]] = value;
}

# 151 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
static inline  result_t AMStandard$ActivityTimer$fired(void)
#line 151
{
  AMStandard$lastCount[tos_state.current_node] = AMStandard$counter[tos_state.current_node];
  AMStandard$counter[tos_state.current_node] = 0;
  return SUCCESS;
}

# 182 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
static inline   result_t TimerM$Timer$default$fired(uint8_t id)
#line 182
{
  return SUCCESS;
}

# 73 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t TimerM$Timer$fired(uint8_t arg_0x7fac34d87b98){
#line 73
  unsigned char result;
#line 73

#line 73
  switch (arg_0x7fac34d87b98) {
#line 73
    case 0U:
#line 73
      result = AMStandard$ActivityTimer$fired();
#line 73
      break;
#line 73
    default:
#line 73
      result = TimerM$Timer$default$fired(arg_0x7fac34d87b98);
#line 73
      break;
#line 73
    }
#line 73

#line 73
  return result;
#line 73
}
#line 73
# 194 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
static inline uint8_t TimerM$dequeue(void)
#line 194
{
  if (TimerM$queue_size[tos_state.current_node] == 0) {
    return NUM_TIMERS;
    }
#line 197
  if (TimerM$queue_head[tos_state.current_node] == NUM_TIMERS - 1) {
    TimerM$queue_head[tos_state.current_node] = -1;
    }
#line 199
  TimerM$queue_head[tos_state.current_node]++;
  TimerM$queue_size[tos_state.current_node]--;
  return TimerM$queue[tos_state.current_node][(uint8_t )TimerM$queue_head[tos_state.current_node]];
}

static inline  void TimerM$signalOneTimer(void)
#line 204
{
  uint8_t itimer = TimerM$dequeue();

#line 206
  if (itimer < NUM_TIMERS) {
    TimerM$Timer$fired(itimer);
    }
}

#line 210
static inline  void TimerM$HandleFire(void)
#line 210
{
  uint8_t i;
  uint16_t int_out;

#line 213
  TimerM$setIntervalFlag[tos_state.current_node] = 1;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 216
    {
      int_out = TimerM$interval_outstanding[tos_state.current_node];
      TimerM$interval_outstanding[tos_state.current_node] = 0;
    }
#line 219
    __nesc_atomic_end(__nesc_atomic); }
  if (TimerM$mState[tos_state.current_node]) {
      for (i = 0; i < NUM_TIMERS; i++) {
          if (TimerM$mState[tos_state.current_node] & (0x1L << i)) {
              TimerM$mTimerList[tos_state.current_node][i].ticksLeft -= int_out;
              if (TimerM$mTimerList[tos_state.current_node][i].ticksLeft <= 2) {


                  if (TOS_post(TimerM$signalOneTimer)) {
                      if (TimerM$mTimerList[tos_state.current_node][i].type == TIMER_REPEAT) {
                          TimerM$mTimerList[tos_state.current_node][i].ticksLeft += TimerM$mTimerList[tos_state.current_node][i].ticks;
                        }
                      else 
#line 230
                        {
                          TimerM$mState[tos_state.current_node] &= ~(0x1L << i);
                        }
                      TimerM$enqueue(i);
                    }
                  else {
                      dbg(DBG_ERROR, "TimerM: Have to wait another timer interval.\n");


                      TimerM$mTimerList[tos_state.current_node][i].ticksLeft = TimerM$mInterval[tos_state.current_node];
                    }
                }
            }
        }
    }


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 247
    int_out = TimerM$interval_outstanding[tos_state.current_node];
#line 247
    __nesc_atomic_end(__nesc_atomic); }
  if (int_out == 0) {
    TimerM$adjustInterval();
    }
}

static inline   result_t TimerM$Clock$fire(void)
#line 253
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 254
    {



      if (TimerM$interval_outstanding[tos_state.current_node] == 0) {
        TOS_post(TimerM$HandleFire);
        }
      else {
#line 261
        dbg(DBG_ERROR, "Don't post handle fire, we're not ready\n");
        }
      TimerM$interval_outstanding[tos_state.current_node] += TimerM$Clock$getInterval() + 1;
    }
#line 264
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 180 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   result_t HPLClock$Clock$fire(void){
#line 180
  unsigned char result;
#line 180

#line 180
  result = TimerM$Clock$fire();
#line 180

#line 180
  return result;
#line 180
}
#line 180
# 136 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/HPLClock.nc"
static inline  void SIG_OUTPUT_COMPARE2_interrupt(void)
#line 136
{
  if (HPLClock$set_flag[tos_state.current_node]) {
      HPLClock$mscale[tos_state.current_node] = HPLClock$nextScale[tos_state.current_node];
      HPLClock$nextScale[tos_state.current_node] |= 0x8;
      TOSH_clock_set_rate(HPLClock$minterval[tos_state.current_node], HPLClock$nextScale[tos_state.current_node]);
      HPLClock$set_flag[tos_state.current_node] = 0;
    }
  HPLClock$Clock$fire();
}

# 404 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static inline int printTime(char *buf, int len)
#line 404
{
  return printOtherTime(buf, len, tos_state.tos_time);
}

# 80 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/types/dbg.h"
inline static bool dbg_active(TOS_dbg_mode mode)
{
  return (dbg_modes & mode) != 0;
}

# 156 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hpl.c"
static inline void event_clocktick_handle(event_t *event, 
struct TOS_state *state)
#line 157
{

  event_queue_t *queue = & state->queue;
  clock_tick_data_t *data = (clock_tick_data_t *)event->data;




  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 165
    TOS_LOCAL_ADDRESS = (short )(1 & 0xffff);
#line 165
    __nesc_atomic_end(__nesc_atomic); }







  if (data->valid) {
      if (dbg_active(DBG_CLOCK)) {
          char buf[1024];

#line 176
          printTime(buf, 1024);
          dbg(DBG_CLOCK, "CLOCK: event handled for mote %i at %s (%i ticks).\n", event->mote, buf, data->interval);
        }

      setTime[tos_state.current_node] = tos_state.tos_time;
      event->time = event->time + data->interval;
      queue_insert_event(queue, event);
      if (! data->disabled) {
          SIG_OUTPUT_COMPARE2_interrupt();
        }
      else {
          interruptPending[tos_state.current_node] = 1;
        }
    }
  else {


      event_cleanup(event);
    }
}

# 120 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/heap_array.c"
static inline void expand_heap(heap_t *heap)
#line 120
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);

  dbg(DBG_SIM, "Resized heap from %i to %i.\n", heap->private_size, new_size);

  memcpy(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long key)
#line 134
{
  int findex = heap->size;

#line 136
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

# 133 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/tos.h"
static inline result_t rcombine4(result_t r1, result_t r2, result_t r3, 
result_t r4)
{
  return rcombine(r1, rcombine(r2, rcombine(r3, r4)));
}

# 41 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/PowerManagement.nc"
inline static   uint8_t AMStandard$PowerManagement$adjustPower(void){
#line 41
  unsigned char result;
#line 41

#line 41
  result = HPLPowerManagementM$PowerManagement$adjustPower();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 98 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
static inline  result_t TimerM$Timer$start(uint8_t id, char type, 
uint32_t interval)
#line 99
{
  uint8_t diff;

#line 101
  if (id >= NUM_TIMERS) {
#line 101
    return FAIL;
    }
#line 102
  if (type > TIMER_ONE_SHOT) {
#line 102
    return FAIL;
    }





  if (type == TIMER_REPEAT && interval <= 2) {
#line 109
    return FAIL;
    }
  TimerM$mTimerList[tos_state.current_node][id].ticks = interval;
  TimerM$mTimerList[tos_state.current_node][id].type = type;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 114
    {
      diff = TimerM$Clock$readCounter();
      interval += diff;
      TimerM$mTimerList[tos_state.current_node][id].ticksLeft = interval;
      TimerM$mState[tos_state.current_node] |= 0x1L << id;
      if (interval < TimerM$mInterval[tos_state.current_node]) {
          TimerM$mInterval[tos_state.current_node] = interval;
          TimerM$Clock$setInterval(TimerM$mInterval[tos_state.current_node]);
          TimerM$setIntervalFlag[tos_state.current_node] = 0;
          TimerM$PowerManagement$adjustPower();
        }
    }
#line 125
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 59 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t AMStandard$ActivityTimer$start(char arg_0x7fac34e081c8, uint32_t arg_0x7fac34e08490){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(0U, arg_0x7fac34e081c8, arg_0x7fac34e08490);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/TossimPacketM.nc"
static inline  result_t TossimPacketM$Control$start(void)
#line 70
{

  return SUCCESS;
}

# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$RadioControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = TossimPacketM$Control$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 60 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/UARTNoCRCPacketM.nc"
static inline  result_t UARTNoCRCPacketM$Control$start(void)
#line 60
{
  dbg(DBG_BOOT, "UART started.\n");
  return SUCCESS;
}

# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$UARTControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = UARTNoCRCPacketM$Control$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 87 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
static inline  result_t TimerM$StdControl$start(void)
#line 87
{
  return SUCCESS;
}

# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$TimerControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = TimerM$StdControl$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 103 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
static inline  bool AMStandard$Control$start(void)
#line 103
{
  result_t ok0 = AMStandard$TimerControl$start();
  result_t ok1 = AMStandard$UARTControl$start();
  result_t ok2 = AMStandard$RadioControl$start();
  result_t ok3 = AMStandard$ActivityTimer$start(TIMER_REPEAT, 1000);



  AMStandard$state[tos_state.current_node] = FALSE;

  AMStandard$PowerManagement$adjustPower();

  return rcombine4(ok0, ok1, ok2, ok3);
}

# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t RfmToIntM$CommControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = AMStandard$Control$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 60 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Counters/RfmToIntM.nc"
static inline  result_t RfmToIntM$StdControl$start(void)
#line 60
{
  return RfmToIntM$CommControl$start();
}

# 62 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Counters/IntToLedsM.nc"
static inline  result_t IntToLedsM$StdControl$start(void)
#line 62
{
  return SUCCESS;
}

# 70 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t Nido$StdControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = IntToLedsM$StdControl$start();
#line 70
  result = rcombine(result, RfmToIntM$StdControl$start());
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 79 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.h"
static inline void __nesc_atomic_sleep(void)
{
}

# 128 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/tos.h"
static inline result_t rcombine3(result_t r1, result_t r2, result_t r3)
{
  return rcombine(r1, rcombine(r2, r3));
}

# 168 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/TimerM.nc"
static inline  result_t TimerM$Timer$stop(uint8_t id)
#line 168
{

  if (id >= NUM_TIMERS) {
#line 170
    return FAIL;
    }
#line 171
  if (TimerM$mState[tos_state.current_node] & (0x1L << id)) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
        TimerM$mState[tos_state.current_node] &= ~(0x1L << id);
#line 172
        __nesc_atomic_end(__nesc_atomic); }
      if (!TimerM$mState[tos_state.current_node]) {
          TimerM$setIntervalFlag[tos_state.current_node] = 1;
        }
      return SUCCESS;
    }
  return FAIL;
}

# 68 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t AMStandard$ActivityTimer$stop(void){
#line 68
  unsigned char result;
#line 68

#line 68
  result = TimerM$Timer$stop(0U);
#line 68

#line 68
  return result;
#line 68
}
#line 68
# 74 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/TossimPacketM.nc"
static inline  result_t TossimPacketM$Control$stop(void)
#line 74
{

  return SUCCESS;
}

# 78 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$RadioControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = TossimPacketM$Control$stop();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 65 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/UARTNoCRCPacketM.nc"
static inline  result_t UARTNoCRCPacketM$Control$stop(void)
#line 65
{
  dbg(DBG_BOOT, "UART stopped.\n");
  return SUCCESS;
}

# 78 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$UARTControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = UARTNoCRCPacketM$Control$stop();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 119 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
static inline  bool AMStandard$Control$stop(void)
#line 119
{
  result_t ok1 = AMStandard$UARTControl$stop();
  result_t ok2 = AMStandard$RadioControl$stop();
  result_t ok3 = AMStandard$ActivityTimer$stop();

  AMStandard$PowerManagement$adjustPower();
  return rcombine3(ok1, ok2, ok3);
}

# 78 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t RfmToIntM$CommControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = AMStandard$Control$stop();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 64 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Counters/RfmToIntM.nc"
static inline  result_t RfmToIntM$StdControl$stop(void)
#line 64
{
  return RfmToIntM$CommControl$stop();
}

# 66 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/lib/Counters/IntToLedsM.nc"
static inline  result_t IntToLedsM$StdControl$stop(void)
#line 66
{
  return SUCCESS;
}

# 78 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t Nido$StdControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = IntToLedsM$StdControl$stop();
#line 78
  result = rcombine(result, RfmToIntM$StdControl$stop());
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 246 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
static inline  TOS_MsgPtr AMStandard$UARTReceive$receive(TOS_MsgPtr packet)
#line 246
{


  packet->group = TOS_AM_GROUP;
  return received(packet);
}

# 75 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr Nido$UARTReceiveMsg$receive(TOS_MsgPtr arg_0x7fac34fe9be8){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = AMStandard$UARTReceive$receive(arg_0x7fac34fe9be8);
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 216 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/packet_sim.c"
static inline void event_backoff_create(event_t *event, int node, long long eventTime)
#line 216
{
  event->mote = node;
  event->force = 0;
  event->pause = 0;
  event->data = (void *)0;
  event->time = eventTime;
  event->handle = event_backoff_handle;
  event->cleanup = event_total_cleanup;
}

#line 248
static inline void event_start_transmit_create(event_t *event, int node, long long eventTime)
#line 248
{
  event->mote = node;
  event->force = 0;
  event->pause = 0;
  event->data = (void *)0;
  event->time = eventTime;
  event->handle = event_start_transmit_handle;
  event->cleanup = event_total_cleanup;
}

# 107 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/dbg.c"
inline void dbg_help(void )
#line 107
{
  int i = 0;

#line 109
  printf("Known dbg modes: ");

  while (dbg_nametab[i].d_name != (void *)0) {
      printf("%s", dbg_nametab[i].d_name);
      if (dbg_nametab[i + 1].d_name != (void *)0) {
          printf(", ");
        }
      i++;
    }

  printf("\n");
}

# 74 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
static inline void Nido$usage(char *progname)
#line 74
{
  fprintf(stderr, "Usage: %s [-h|--help] [options] num_nodes_total\n", progname);
  exit(-1);
}

# 58 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/dbg.c"
inline void dbg_add_mode(const char *name)
#line 58
{
  int cancel;
  TOS_dbg_mode_names *mode;

  if (*name == '-') {
      cancel = 1;
      name++;
    }
  else {
    cancel = 0;
    }
  for (mode = dbg_nametab; mode->d_name != (void *)0; mode++) 
    if (strcmp(name, mode->d_name) == 0) {
      break;
      }
#line 72
  if (mode->d_name == (void *)0) {
      fprintf(stderr, "Warning: Unknown debug option: "
      "\"%s\"\n", name);
      return;
    }

  if (cancel) {
    dbg_modes &= ~ mode->d_mode;
    }
  else {
#line 81
    dbg_modes |= mode->d_mode;
    }
}

#line 84
inline void dbg_add_modes(const char *modes)
#line 84
{
  char env[256];
  char *name;

  strncpy(env, modes, sizeof env);
  for (name = strtok(env, ","); name; name = strtok((void *)0, ",")) 
    dbg_add_mode(name);
}

inline void dbg_init(void )
#line 93
{
  const char *dbg_env;

  dbg_modes = DBG_NONE;

  dbg_env = getenv("DBG");
  if (!dbg_env) {
      dbg_modes = DBG_DEFAULT;
      return;
    }

  dbg_add_modes(dbg_env);
}

# 311 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline int PowerStateM$num_bbs(void)
#line 311
{

  int POWERPROF_NUM_BBS;

#line 314
  return POWERPROF_NUM_BBS;
}

#line 23
static inline   result_t PowerStateM$PowerState$init(int prof, int cpu_prof)
#line 23
{
  FILE *cycle_file;
  char cycle_map[13] = "bb_cycle_map";
  int bb;
  double bbcyc;

#line 28
  if (power_init == 1) {
      fprintf(stderr, "PowerState.init() called twice...\n");
      return SUCCESS;
    }
  power_init = 1;
  prof_on = prof;
  cpu_prof_on = cpu_prof;

  if (cpu_prof_on) {
      cycle_file = fopen(cycle_map, "r");
      if (!cycle_file) {
          fprintf(stderr, "Couldn't open '%s', exiting\n", cycle_map);
          exit(-1);
        }

      cycles = calloc(PowerStateM$num_bbs(), sizeof(double ));

      while (-1 != fscanf(cycle_file, " %d %lf", &bb, &bbcyc)) {
          cycles[bb] = bbcyc;
        }
      fclose(cycle_file);
    }
  return SUCCESS;
}

# 14 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   result_t Nido$PowerState$init(int arg_0x7fac34fdb6f8, int arg_0x7fac34fdb9b0){
#line 14
  unsigned char result;
#line 14

#line 14
  result = PowerStateM$PowerState$init(arg_0x7fac34fdb6f8, arg_0x7fac34fdb9b0);
#line 14

#line 14
  return result;
#line 14
}
#line 14
# 52 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/tos.c"
static inline void init_signals(void )
#line 52
{
  struct sigaction action;

#line 54
  action.__sigaction_handler.sa_handler = handle_signal;
  sigemptyset(& action.sa_mask);
  action.sa_flags = 0;
  sigaction(2, &action, (void *)0);
  signal(13, (__sighandler_t )1);
}

# 135 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/rfm_model.c"
static inline link_t *simple_neighbors(int moteID)
#line 135
{
  link_t *thelink;


  ptII_MonitorEnter(radioConnectivityLock);


  thelink = radio_connectivity[moteID];


  ptII_MonitorExit(radioConnectivityLock);

  return thelink;
}

#line 85
static inline bool simple_connected(int moteID1, int moteID2)
#line 85
{
  return TRUE;
}

#line 123
static inline char simple_hears(int moteID)
#line 123
{







  return radio_active[moteID] > 0 ? 1 : 0;
}

#line 112
static inline void simple_stops_transmit(int moteID)
#line 112
{
  int i;

  if (transmitting[moteID]) {
      transmitting[moteID] = 0;
      for (i = 0; i < tos_state.num_nodes; i++) {
          radio_active[i]--;
        }
    }
}

#line 103
static inline void simple_transmit(int moteID, char bit)
#line 103
{
  int i;

  transmitting[moteID] = bit;
  for (i = 0; i < tos_state.num_nodes; i++) {
      radio_active[i] += bit;
    }
}

#line 89
static inline void simple_init(void)
#line 89
{
  int i;


  radioConnectivityLock = ptII_createMonitorObject();


  adjacency_list_init();
  static_one_cell_init();
  for (i = 0; i < tos_state.num_nodes; i++) {
      radio_active[i] = 0;
    }
}

#line 150
static inline rfm_model *create_simple_model(void)
#line 150
{
  rfm_model *model = (rfm_model *)malloc(sizeof(rfm_model ));

#line 152
  model->init = simple_init;
  model->transmit = simple_transmit;
  model->stop_transmit = simple_stops_transmit;
  model->hears = simple_hears;
  model->connected = simple_connected;
  model->neighbors = simple_neighbors;
  return model;
}

#line 596
static inline link_t *lossy_neighbors(int moteID)
#line 596
{
  link_t *thelink;


  ptII_MonitorEnter(radioConnectivityLock);


  thelink = radio_connectivity[moteID];


  ptII_MonitorExit(radioConnectivityLock);

  return thelink;
}

#line 369
static inline bool lossy_connected(int moteID1, int moteID2)
#line 369
{




  link_t *current_link;


  ptII_MonitorEnter(radioConnectivityLock);


  current_link = radio_connectivity[moteID1];
  dbg(DBG_TEMP, "connections for %i\n", moteID1);
  while (current_link) {
      if (current_link->mote == moteID2 && 
      current_link->data < 1.0) {
          dbg(DBG_TEMP, "connected to %i\n", moteID2);



          ptII_MonitorExit(radioConnectivityLock);

          return TRUE;
        }
      current_link = current_link->next_link;
    }


  ptII_MonitorExit(radioConnectivityLock);

  return FALSE;
}

#line 447
static inline char lossy_hears(int moteID)
#line 447
{
  char bit_heard = radio_active[moteID] > 0 ? 1 : 0;

#line 449
  if (radio_idle_state[moteID]) {
      int r = rand() % 100000;
      double prob = (double )r / 100000.0;

#line 452
      if (prob < noise_prob) {
          bit_heard = bit_heard ? 0 : 1;
        }
    }
  else {
      short temp_heard = radio_heard[moteID];

#line 458
      temp_heard <<= 1;
      temp_heard |= bit_heard;
      radio_heard[moteID] = temp_heard;
      if ((radio_heard[moteID] & IDLE_STATE_MASK) == 0) {
          radio_idle_state[moteID] = 1;
        }
    }
  return bit_heard;
}

#line 428
static inline void lossy_stop_transmit(int moteID)
#line 428
{
  link_t *current_link;


  ptII_MonitorEnter(radioConnectivityLock);


  current_link = radio_connectivity[moteID];
  transmitting[moteID] = 0;
  while (current_link) {
      radio_active[current_link->mote] -= current_link->bit;
      current_link->bit = 0;
      current_link = current_link->next_link;
    }


  ptII_MonitorExit(radioConnectivityLock);
}

#line 402
static inline void lossy_transmit(int moteID, char bit)
#line 402
{
  link_t *current_link;


  ptII_MonitorEnter(radioConnectivityLock);


  current_link = radio_connectivity[moteID];
  transmitting[moteID] = bit;
  while (current_link) {
      int r = rand() % 100000;
      double prob = (double )r / 100000.0;
      int tmp_bit = bit;

#line 415
      if (prob < current_link->data) {
          tmp_bit = tmp_bit ? 0 : 1;
        }
      radio_active[current_link->mote] += tmp_bit;
      radio_idle_state[current_link->mote] = 0;
      current_link->bit = tmp_bit;
      current_link = current_link->next_link;
    }


  ptII_MonitorExit(radioConnectivityLock);
}

#line 468
static inline int read_lossy_entry(FILE *file, int *mote_one, int *mote_two, double *loss)
#line 468
{
  char buf[128];
  int findex = 0;
  int ch;


  while (1) {
      ch = _IO_getc(file);
      if (ch == -1) {
#line 476
          return 0;
        }
      else {
#line 477
        if (ch >= '0' && ch <= '9') {
            buf[findex] = (char )ch;
            findex++;
          }
        else {
#line 481
          if (ch == ':') {
              buf[findex] = 0;
              break;
            }
          else {
#line 485
            if ((ch == '\n' || ch == ' ') || ch == '\t') {
                if (findex > 0) {
#line 486
                    return 0;
                  }
              }
            else 
#line 488
              {
                return 0;
              }
            }
          }
        }
    }
#line 493
  *mote_one = atoi(buf);
  findex = 0;

  while (1) {
      ch = _IO_getc(file);
      if (ch == -1) {
#line 498
          return 0;
        }
      else {
#line 499
        if (ch >= '0' && ch <= '9') {
            buf[findex] = (char )ch;
            findex++;
          }
        else {
#line 503
          if (ch == ':') {
              buf[findex] = 0;
              break;
            }
          else {
#line 507
            if ((ch == '\n' || ch == ' ') || ch == '\t') {
                if (findex == 0) {
#line 508
                    return 0;
                  }
                else 
#line 509
                  {
                    buf[findex] = 0;
                    break;
                  }
              }
            else {
                return 0;
              }
            }
          }
        }
    }
#line 519
  *mote_two = atoi(buf);

  findex = 0;

  while (1) {
      ch = _IO_getc(file);
      if (ch == -1) {
#line 525
          return 0;
        }
      else {
#line 527
        if (((((
#line 526
        ch >= '0' && ch <= '9') || ch == '.') || ch == '-') || ch == 'E')
         || ch == 'e') {
            buf[findex] = (char )ch;
            findex++;
          }
        else {
#line 531
          if ((ch == '\n' || ch == ' ') || ch == '\t') {
              if (findex == 0) {
#line 532
                  return 0;
                }
              else 
#line 533
                {
                  buf[findex] = 0;
                  break;
                }
            }
          else {
              return 0;
            }
          }
        }
    }
#line 542
  *loss = atof(buf);

  return 1;
}

static inline void lossy_init(void)
#line 547
{
  int sfd = open(lossyFileName, 00);
  int i;
  FILE *file = fdopen(sfd, "r");
  link_t *new_link;

  dbg_clear(DBG_SIM, "Initializing lossy model from %s.\n", lossyFileName);






  radioConnectivityLock = ptII_createMonitorObject();


  adjacency_list_init();

  if (sfd < 0) {
      dbg(DBG_SIM, "Cannot open %s - assuming single radio cell\n", lossyFileName);
      static_one_cell_init();
      return;
    }

  for (i = 0; i < TOSNODES; i++) {
      radio_connectivity[i] = (void *)0;
      radio_idle_state[i] = 0;
      radio_heard[i] = 0;
    }
  while (1) {
      int mote_one;
      int mote_two;
      double loss;

#line 580
      if (read_lossy_entry(file, &mote_one, &mote_two, &loss)) {
          if (mote_one != mote_two) {
              new_link = allocate_link(mote_two);
              new_link->data = loss;
              new_link->next_link = radio_connectivity[mote_one];
              radio_connectivity[mote_one] = new_link;
            }
        }
      else {
          break;
        }
    }
  dbg(DBG_BOOT, "RFM connectivity graph constructed.\n");
}

#line 611
static inline rfm_model *create_lossy_model(char *file)
#line 611
{
  rfm_model *model = (rfm_model *)malloc(sizeof(rfm_model ));

#line 613
  if (file != (void *)0) {
      lossyFileName = file;
    }
  model->init = lossy_init;
  model->transmit = lossy_transmit;
  model->stop_transmit = lossy_stop_transmit;
  model->hears = lossy_hears;
  model->connected = lossy_connected;
  model->neighbors = lossy_neighbors;
  return model;
}

# 96 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/adc_model.c"
static inline uint16_t generic_adc_read(int moteID, uint8_t port, long long ftime)
#line 96
{
  uint16_t value;


  if (moteID >= TOSNODES || moteID < 0) {
      dbg(DBG_ERROR, "GENERIC_ADC_MODEL: trying to read value with invalid parameters: [moteID = %d] [port = %d]", moteID, port);
      return -1;
    }


  ptII_MonitorEnter(adcValuesLock);


  value = adcValues[moteID][(int )port];


  ptII_MonitorExit(adcValuesLock);

  if (value == 0xffff) {
      char *portname = (void *)0;

#line 116
      switch (port) {
          case TOS_ADC_PHOTO_PORT: portname = "photo";
          break;
          case TOS_ADC_TEMP_PORT: portname = "temperature";
          break;
          case TOS_ADC_MIC_PORT: portname = "microphone";
          break;
          case TOS_ADC_ACCEL_X_PORT: portname = "accelerometerX";
          break;
          case TOS_ADC_ACCEL_Y_PORT: portname = "accelerometerY";
          break;
          case TOS_ADC_MAG_X_PORT: portname = "magnetometerX";
          break;
          case TOS_ADC_MAG_Y_PORT: portname = "magnetometerY";
          break;
          default: ;
        }
      if (portname != (void *)0) {
          return ptII_get_adc_value(portname) & 0x3ff;
        }
      else 
#line 135
        {
          return (short )(rand() & 0x3ff);
        }
    }
  else {
#line 139
    return value;
    }
}

#line 81
static inline void generic_adc_init(void)
#line 81
{
  int i;
#line 82
  int j;

#line 83
  for (i = 0; i < TOSNODES; i++) {
      for (j = 0; j < ADC_NUM_PORTS_PER_NODE; j++) {
          adcValues[i][j] = 0xffff;
        }
    }


  adcValuesLock = ptII_createMonitorObject();
}

#line 142
static inline adc_model *create_generic_adc_model(void)
#line 142
{
  adc_model *model = (adc_model *)malloc(sizeof(adc_model ));

#line 144
  model->init = generic_adc_init;
  model->read = generic_adc_read;
  return model;
}

#line 57
static inline uint16_t random_adc_read(int moteID, uint8_t port, long long ftime)
#line 57
{
  return (uint16_t )(rand() & 0x3ff);
}

#line 55
static inline void random_adc_init(void)
#line 55
{
}




static inline adc_model *create_random_adc_model(void)
#line 61
{
  adc_model *model = (adc_model *)malloc(sizeof(adc_model ));

#line 63
  model->init = random_adc_init;
  model->read = random_adc_read;
  return model;
}

# 104 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/eeprom.c"
static inline int namedEEPROM(char *name, int fnumMotes, int eepromSize)
#line 104
{
  int filedes = createEEPROM(name, fnumMotes, eepromSize);

#line 106
  if (filedes >= 0) {
      return 0;
    }
  else {
      dbg(DBG_ERROR, "ERROR: Unable to create named EEPROM region: %s.\n", name);
      return -1;
    }
}

#line 91
static inline int anonymousEEPROM(int fnumMotes, int eepromSize)
#line 91
{
  int filedes;

#line 93
  filedes = createEEPROM("/tmp/anonymous", fnumMotes, eepromSize);
  if (filedes >= 0) {
      unlink("/tmp/anonymous");
      return 0;
    }
  else {
      dbg(DBG_ERROR, "ERROR: Unable to create anonymous EEPROM region.\n");
      return -1;
    }
}

# 63 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/spatial_model.c"
static inline void simple_spatial_get_position(int moteID, long long ftime, point3D *point)
#line 63
{
  point->xCoordinate = points[moteID].xCoordinate;
  point->yCoordinate = points[moteID].yCoordinate;
  point->zCoordinate = points[moteID].zCoordinate;
}

#line 51
static inline void simple_spatial_init(void)
#line 51
{
  int i;

#line 53
  points = (point3D *)malloc(sizeof(point3D ) * TOSNODES);

  for (i = 0; i < TOSNODES; i++) {
      points[i].xCoordinate = (double )(rand() % 1000);
      points[i].yCoordinate = (double )(rand() % 1000);
      points[i].zCoordinate = (double )(rand() % 1000);
    }
}









static inline spatial_model *create_simple_spatial_model(void)
#line 70
{
  spatial_model *model = (spatial_model *)malloc(sizeof(spatial_model ));

#line 72
  model->init = simple_spatial_init;
  model->get_position = simple_spatial_get_position;

  return model;
}

# 132 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/nido.h"
static inline void tos_state_model_init(void )
{

  tos_state.space->init();


  tos_state.rfm->init();


  tos_state.adc->init();
}

# 490 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/packet_sim.c"
static inline int read_packet_entry(FILE *file, int *mote_one, int *mote_two, double *packet_loss, double *falsePos, double *falseNeg)
#line 490
{
  bool okFormat = TRUE;

#line 492
  if ((*mote_one = read_int(file)) < 0) {
#line 492
      okFormat = FALSE;
    }
  else {
#line 493
    if ((*mote_two = read_int(file)) < 0) {
#line 493
        okFormat = FALSE;
      }
    else {
#line 494
      if ((*packet_loss = read_double(file)) < 0) {
#line 494
          okFormat = FALSE;
        }
      else {
#line 495
        if ((*falsePos = read_double(file)) < 0) {
#line 495
            okFormat = FALSE;
          }
        else {
#line 496
          if ((*falseNeg = read_double(file)) < 0) {
#line 496
              okFormat = FALSE;
            }
          else 
#line 497
            {
              dbg_clear(DBG_SIM, "SIM: Read in packet entry %i->%i, packet loss: %lf, ack false pos: %lf, neg: %lf\n", *mote_one, *mote_two, *packet_loss, *falsePos, *falseNeg);
            }
          }
        }
      }
    }
#line 500
  return okFormat == TRUE;
}

static inline void connectivity_init(char *cFile)
#line 503
{
  int mote_one;
#line 504
  int mote_two;
  double packet;
#line 505
  double positive;
#line 505
  double negative;
  FILE *f = fopen(cFile, "r");

#line 507
  if (f == (void *)0) {
      fprintf(stderr, "SIM: Could not load packet configuration file %s\n", cFile);
      return;
    }
  while (read_packet_entry(f, &mote_one, &mote_two, &packet, &positive, &negative)) {
      link_t *new_link;

#line 513
      new_link = allocate_link(mote_two);
      new_link->data = packet;
      new_link->neg = negative;
      new_link->pos = positive;
      new_link->next_link = packet_connectivity[mote_one];
      packet_connectivity[mote_one] = new_link;
    }
}

#line 174
static inline void packet_sim_init(char *cFile)
#line 174
{
  int i;

#line 176
  for (i = 0; i < TOSNODES; i++) {
      packet_transmitting[i] = (void *)0;
      incoming[i] = (void *)0;
      lastIncoming[i] = (void *)0;
      packet_connectivity[i] = (void *)0;
      rxState[i] = RADIO_RX_IDLE;
      txState[i] = RADIO_TX_IDLE;
      current_ptr[i] = &packet_sim_bufs[i];
    }

  if (cFile != (void *)0) {
      connectivity_init(cFile);
    }
}

# 51 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.c"
static inline void init_hardware(void)
#line 51
{
  int i;

#line 53
  for (i = 0; i < tos_state.num_nodes; i++) {
      tos_state.current_node = i;
      TOSH_pc_hardware.status_register = 0xff;
    }
}

# 68 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/heap_array.c"
static inline void init_heap(heap_t *heap)
#line 68
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

# 56 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/event_queue.c"
static inline void queue_init(event_queue_t *queue, int fpause)
#line 56
{
  init_heap(& queue->heap);
  queue->pause = fpause;



  queue->lock = ptII_createMonitorObject();
}

# 161 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static inline void initializeSockets(void)
#line 161
{
  int i;

  dbg_clear(DBG_SIM, "SIM: Initializing sockets for mote %i\n", 1);


  tos_state.pause_lock = ptII_createMonitorObject();






  for (i = 0; i < 4; i++) {


      commandClients[i] = (void *)0;

      eventClients[i] = (void *)0;
      batchState[i] = 0;
    }
  eventMask = 0xffff;


  commandServerSocket = ptII_serverSocketCreate(10584);

  eventServerSocket = ptII_serverSocketCreate(10585);


  eventClientsLock = ptII_createMonitorObject();






  ptII_startThreads();

  socketsInitialized = 1;
}

#line 357
static inline void waitForGuiConnection(void)
#line 357
{
  int numclients = 0;
  int n;

  dbg_clear(DBG_SIM, "SIM: Waiting for connection from GUI...for mote %i\n", 1);


  ptII_MonitorEnter(eventClientsLock);


  while (numclients == 0) {
      for (n = 0; n < 4; n++) {

          if (eventClients[n] != (void *)0) {


              dbg_clear(DBG_SIM, "SIM: Got client connection fd %p for mote %i\n", eventClients[n], 1);
              numclients++;
            }
        }
      if (numclients == 0) {

          ptII_MonitorWait(eventClientsLock);
        }
    }


  ptII_MonitorExit(eventClientsLock);
}

# 43 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/events.c"
static inline void event_default_cleanup(event_t *event)
#line 43
{
  free(event->data);
  dbg(DBG_MEM, "event_default_cleanup: freeing event: 0x%x\n", (unsigned int )event);
}

# 78 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/heap_array.c"
static inline int is_empty(heap_t *heap)
#line 78
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 82
{
  return is_empty(heap);
}

static inline long long heap_get_min_key(heap_t *heap)
#line 86
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 317 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline int PowerStateM$bb_exec_count(int mote, int bb)
#line 317
{
  int POWERPROF_BB_EXEC_COUNT;

#line 319
  return POWERPROF_BB_EXEC_COUNT;
}

#line 361
static inline void PowerStateM$dump_power_details(void)
#line 361
{
  char exec_cnts[12] = "bb_exec_cnt";
  FILE *f;
  int mote;
#line 364
  int bb;

  if (!cpu_prof_on) {
      fprintf(stderr, "dump_power_details() called when cpu prof is off!  Shouldn't happen!\n");
      exit(-1);
    }

  f = fopen(exec_cnts, "w");
  if (!f) {
      fprintf(stderr, "Couldn't open '%s', exiting\n", exec_cnts);
      exit(-1);
    }
  for (mote = 0; mote < tos_state.num_nodes; mote++) {
      fprintf(f, "mote %d total cycles: %.1lf\n", mote, PowerStateM$PowerState$get_mote_cycles(mote));
      dbg(DBG_POWER, "POWER: Mote %d CPU_CYCLES %.1lf at %lld\n", mote, PowerStateM$PowerState$get_mote_cycles(mote), tos_state.tos_time);

      for (bb = 1; bb < PowerStateM$num_bbs(); bb++) {
          fprintf(f, "%6d %6d %8d\n", mote, bb, PowerStateM$bb_exec_count(mote, bb));
        }
    }

  fclose(f);
}

#line 54
static inline   result_t PowerStateM$PowerState$stop(void)
#line 54
{
  if (cpu_prof_on) {
    PowerStateM$dump_power_details();
    }
#line 57
  return SUCCESS;
}

# 18 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   result_t Nido$PowerState$stop(void){
#line 18
  unsigned char result;
#line 18

#line 18
  result = PowerStateM$PowerState$stop();
#line 18

#line 18
  return result;
#line 18
}
#line 18
# 81 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/event_queue.c"
static inline event_t *queue_pop_event(event_queue_t *queue)
#line 81
{
  long long ftime;
  event_t *event;


  ptII_MonitorEnter(queue->lock);


  event = (event_t *)heap_pop_min_data(& queue->heap, &ftime);


  ptII_MonitorExit(queue->lock);

  if (dbg_active(DBG_QUEUE)) {
      char timeStr[128];

#line 96
      timeStr[0] = 0;
      printOtherTime(timeStr, 128, ftime);



      dbg(DBG_QUEUE, "Popping event for mote %i with time %s.\n", 1, timeStr);
    }

  if (queue->pause > 0 && event->pause) {
      sleep(queue->pause);
    }


  return event;
}

#line 148
static inline void queue_handle_next_event(event_queue_t *queue)
#line 148
{
  event_t *event = queue_pop_event(queue);

#line 150
  if (event != (void *)0) {
      if (tos_state.moteOn[event->mote] || event->force) {
          tos_state.current_node = event->mote;




          dbg(DBG_QUEUE, "Setting TOS_LOCAL_ADDRESS to %hi\n", (short )(1 & 0xffff));

          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 159
            TOS_LOCAL_ADDRESS = (short )(1 & 0xffff);
#line 159
            __nesc_atomic_end(__nesc_atomic); }

          event->handle(event, &tos_state);
        }
    }
}

# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/tos.c"
static inline void rate_based_wait(void)
#line 86
{
  long long rtElapsed;
  long long diffVal;
  long long secondVal;

#line 90
  gettimeofday(&thisTime, (void *)0);
  rtElapsed = thisTime.tv_usec - startTime.tv_usec;
  secondVal = thisTime.tv_sec - startTime.tv_sec;
  secondVal *= (long long )1000000;
  rtElapsed += secondVal;
  rtElapsed *= (long long )4;
  rtElapsed = (long long )((double )rtElapsed * rate_value);
  if (rtElapsed + 10000 < tos_state.tos_time - rate_checkpoint_time) {
      diffVal = tos_state.tos_time - rate_checkpoint_time - rtElapsed;
      diffVal /= 4;
      usleep(diffVal);
    }
}

# 339 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static inline void PowerStateM$print_power_info(void)
#line 339
{
  int mote;

#line 341
  if (!cpu_prof_on) {
      fprintf(stderr, "print_power_info() called when cpu prof is off!  Shouldn't happen!\n");
      exit(-1);
    }


  if (!power_init) {
      fprintf(stderr, "print_power_info() called before init_power_info()! Should never happen!\n");
      exit(-1);
    }

  for (mote = 0; mote < tos_state.num_nodes; mote++) {

      dbg(DBG_POWER, "POWER: Mote %d CPU_CYCLES %.1lf at %lld\n", mote, 
      PowerStateM$PowerState$get_mote_cycles(mote), 
      tos_state.tos_time);
    }
}

#line 389
static inline   void PowerStateM$PowerState$CPUCycleCheckpoint(void)
#line 389
{
  if (!cpu_prof_on) {
      fprintf(stderr, "CPUCycleCheckpoint() called when cpu prof is off!  Shouldn't happen!\n");
      exit(-1);
    }


  PowerStateM$print_power_info();
}

# 22 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerState.nc"
inline static   void Nido$PowerState$CPUCycleCheckpoint(void){
#line 22
  PowerStateM$PowerState$CPUCycleCheckpoint();
#line 22
}
#line 22
# 207 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
static inline  result_t AMStandard$UARTSend$sendDone(TOS_MsgPtr msg, result_t success)
#line 207
{
  return AMStandard$reportSendDone(msg, success);
}

# 67 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t UARTNoCRCPacketM$Send$sendDone(TOS_MsgPtr arg_0x7fac34fe50c8, result_t arg_0x7fac34fe5388){
#line 67
  unsigned char result;
#line 67

#line 67
  result = AMStandard$UARTSend$sendDone(arg_0x7fac34fe50c8, arg_0x7fac34fe5388);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 97 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hardware.h"
static __inline void __nesc_enable_interrupt(void)
{
}

# 526 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  void packet_sim_transmit_done(TOS_MsgPtr msg)
#line 526
{
  dbg(DBG_PACKET, "TossimPacketMica2M: Send done.\n");
  Nido$RadioSendMsg$sendDone(msg, SUCCESS);
}

# 97 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/types/dbg.h"
  void dbg(TOS_dbg_mode mode, const char *format, ...)
{
  DebugMsgEvent ev;

  if (dbg_active(mode)) {
      va_list args;

      __builtin_va_start(args, format);
      if (!(mode & DBG_SIM)) {
          vsnprintf(ev.debugMessage, sizeof  ev.debugMessage, format, args);
          sendTossimEvent(tos_state.current_node, AM_DEBUGMSGEVENT, tos_state.tos_time, &ev);
        }
      if (!dbg_suppress_stdout) {




          fprintf(stdout, "%i: ", 1);
          vfprintf(stdout, format, args);
        }



      __builtin_va_end(args);

      {

        DebugMsgEvent ptII_ev;

#line 125
        __builtin_va_start(args, format);
        vsnprintf(ptII_ev.debugMessage, sizeof  ptII_ev.debugMessage, 
        format, args);
        __builtin_va_end(args);





        ptII_dbg(mode, ptII_ev.debugMessage, 1, TRUE);
      }
    }
}

# 1140 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static void sendTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data)
#line 1140
{
  unsigned char *msg;
  int total_size;
  int n;
  int numclients = 0;


  void *clients[4];

  if (!socketsInitialized) {
#line 1149
    return;
    }

  ptII_MonitorEnter(eventClientsLock);


  while (numclients == 0) {
      for (n = 0; n < 4; n++) {

          clients[n] = (void *)0;

          if (eventClients[n] != (void *)0) {
              clients[n] = eventClients[n];
              numclients++;
            }
        }

      if (numclients == 0 && GUI_enabled) {
          fprintf(stderr, "sendTossimEvent waiting for connection\n");


          ptII_MonitorWait(eventClientsLock);

          fprintf(stderr, "sendTossimEvent woke up\n");
        }
      else {
#line 1173
        if (numclients == 0) {



            ptII_MonitorExit(eventClientsLock);

            return;
          }
        }
    }

  ptII_MonitorExit(eventClientsLock);


  fprintf(stderr, "sendTossimEvent: msgType %d (0x%02x) moteID %d (0x%02x)\n", type, type, moteID, moteID);

  buildTossimEvent(moteID, type, ftime, data, &msg, &total_size);

  for (n = 0; n < 4; n++) {

      if (clients[n] != (void *)0 && (type & eventMask) != 0) {
          if (writeTossimEvent(msg, total_size, clients[n]) < 0) {



              ptII_MonitorEnter(eventClientsLock);



              eventClients[n] = (void *)0;


              ptII_MonitorExit(eventClientsLock);
            }
        }
    }
  fprintf(stderr, "Sent.\n");
  free(msg);
}

#line 1080
static void buildTossimEvent(uint16_t moteID, uint16_t type, long long ftime, void *data, 
unsigned char **msgp, int *lenp)
#line 1081
{
  unsigned char *msg;
  int payload_size;
#line 1083
  int total_size;



  switch (type) {
      case AM_DEBUGMSGEVENT: 
        payload_size = sizeof(DebugMsgEvent );
      break;
      case AM_RADIOMSGSENTEVENT: 
        payload_size = sizeof(RadioMsgSentEvent );
      break;
      case AM_UARTMSGSENTEVENT: 
        payload_size = sizeof(RadioMsgSentEvent );
      break;
      case AM_ADCDATAREADYEVENT: 
        payload_size = sizeof(ADCDataReadyEvent );
      break;
      case AM_TOSSIMINITEVENT: 
        payload_size = sizeof(TossimInitEvent );
      break;
      case AM_VARIABLERESOLVERESPONSE: 
        payload_size = sizeof(VariableResolveResponse );
      break;
      case AM_VARIABLEREQUESTRESPONSE: 
        payload_size = sizeof(VariableRequestResponse );
      break;
      case AM_INTERRUPTEVENT: 
        payload_size = sizeof(InterruptEvent );
      dbg(DBG_TEMP, "SIM: Sending InterruptEvent, payload is %i\n", (int )payload_size);
      break;
      case AM_LEDEVENT: 
        payload_size = sizeof(LedEvent );
      break;
      default: 
        fprintf(stderr, "buildTossimEvent for invalid type: %d", type);
      return;
    }

  total_size = 14 + payload_size;
  msg = (unsigned char *)malloc(total_size);

  * (unsigned short *)&msg[0] = htons(type);
  * (unsigned short *)&msg[2] = htons(moteID);
  * (long long *)&msg[4] = __extension__ ({
#line 1126
    register unsigned long __v;
#line 1126
    register unsigned long __x = ftime;

#line 1126
    if (__builtin_constant_p(__x)) {
#line 1126
      __v = ((((((((__x & 0xff00000000000000ull) >> 56) | ((__x & 0x00ff000000000000ull) >> 40)) | ((__x & 0x0000ff0000000000ull) >> 24)) | ((__x & 0x000000ff00000000ull) >> 8)) | ((__x & 0x00000000ff000000ull) << 8)) | ((__x & 0x0000000000ff0000ull) << 24)) | ((__x & 0x000000000000ff00ull) << 40)) | ((__x & 0x00000000000000ffull) << 56);
      }
    else {
#line 1126
       __asm ("bswap %q0" : "=r"(__v) : "0"(__x));
      }
#line 1126
    __v;
  }
  );
#line 1127
  * (unsigned short *)&msg[12] = htons(payload_size);
  memcpy((unsigned char *)msg + 14, data, payload_size);

  fprintf(stderr, "buildTossimEvent: msgType %d (0x%02x) moteID %d (0x%02x) payload size %d total size %d\n", type, type, moteID, moteID, payload_size, total_size);


  *msgp = msg;
  *lenp = total_size;
}

#line 1036
static int writeTossimEvent(void *data, int datalen, void *socketChannel)
#line 1036
{
  unsigned char ack;
  int i;
#line 1038
  int j;










  fprintf(stderr, "writeTossimEvent: socketChannel %p datalen %d (0x%2x)\n", socketChannel, datalen, datalen);
  j = 0;





  i = ptII_socketChannelWrite(socketChannel, data, datalen);

  fprintf(stderr, "writeTossimEvent: waiting for ack...\n");


  if (i >= 0) {
      j = ptII_socketChannelRead(socketChannel, &ack, 1);
    }

  fprintf(stderr, "writeTossimEvent: ack received...\n");
  if (i < 0 || j < 0) {
      fprintf(stderr, "writeTossimEvent: Socket closed: %s\n", strerror(*__errno_location()));


      ptII_socketChannelClose(socketChannel);

      return -1;
    }


  fprintf(stderr, "writeTossimEvent: done\n");
  return 0;
}

# 143 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
static result_t AMStandard$reportSendDone(TOS_MsgPtr msg, result_t success)
#line 143
{
  AMStandard$state[tos_state.current_node] = FALSE;
  AMStandard$SendMsg$sendDone(msg->type, msg, success);
  AMStandard$sendDone();

  return SUCCESS;
}

# 531 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  TOS_MsgPtr packet_sim_receive_msg(TOS_MsgPtr msg)
#line 531
{
  if (msg->crc) {
      return Nido$RadioReceiveMsg$receive(msg);
    }
  else {
      return msg;
    }
}

# 79 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/TossimPacketM.nc"
static  TOS_MsgPtr TossimPacketM$ReceiveMain$receive(TOS_MsgPtr msg)
#line 79
{
  nmemcpy(TossimPacketM$bufferPtr[tos_state.current_node], msg, sizeof(TOS_Msg ));
  TossimPacketM$bufferPtr[tos_state.current_node] = TossimPacketM$Receive$receive(TossimPacketM$bufferPtr[tos_state.current_node]);
  return msg;
}

# 149 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/tos.h"
static void *nmemcpy(void *to, const void *from, size_t n)
{
  char *cto = to;
  const char *cfrom = from;

  while (n--) * cto++ = * cfrom++;

  return to;
}

# 215 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/AMStandard.nc"
  TOS_MsgPtr received(TOS_MsgPtr packet)
#line 215
{
  uint16_t addr = TOS_LOCAL_ADDRESS;

#line 217
  AMStandard$counter[tos_state.current_node]++;
  dbg(DBG_AM, "AM_address = %hx, %hhx; counter:%i\n", packet->addr, packet->type, (int )AMStandard$counter[tos_state.current_node]);


  if (
#line 220
  packet->crc == 1 && 
  packet->group == TOS_AM_GROUP && (
  packet->addr == TOS_BCAST_ADDR || 
  packet->addr == addr)) 
    {

      uint8_t type = packet->type;
      TOS_MsgPtr tmp;

      dbg(DBG_AM, "Received message:\n\t");
      AMStandard$dbgPacket(packet);
      dbg(DBG_AM, "AM_type = %d\n", type);


      tmp = AMStandard$ReceiveMsg$receive(type, packet);
      if (tmp) {
        packet = tmp;
        }
    }
#line 238
  return packet;
}

# 140 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/types/dbg.h"
  void dbg_clear(TOS_dbg_mode mode, const char *format, ...)
{
  DebugMsgEvent ev;

#line 143
  if (dbg_active(mode)) {
      va_list args;

#line 145
      __builtin_va_start(args, format);
      if (!(mode & DBG_SIM)) {
          vsnprintf(ev.debugMessage, sizeof  ev.debugMessage, format, args);
          sendTossimEvent(tos_state.current_node, AM_DEBUGMSGEVENT, tos_state.tos_time, &ev);
        }
      if (!dbg_suppress_stdout) {

          vfprintf(stdout, format, args);
        }



      __builtin_va_end(args);

      {

        DebugMsgEvent ptII_ev;

#line 162
        __builtin_va_start(args, format);
        vsnprintf(ptII_ev.debugMessage, sizeof  ptII_ev.debugMessage, 
        format, args);
        __builtin_va_end(args);


        ptII_dbg(mode, ptII_ev.debugMessage, 0, FALSE);
      }
    }
}

# 60 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/LedsM.nc"
static void LedsM$updateLeds(void)
#line 60
{
  LedEvent e;

#line 62
  e.red = (LedsM$ledsOn[tos_state.current_node] & LedsM$RED_BIT) > 0;
  e.green = (LedsM$ledsOn[tos_state.current_node] & LedsM$GREEN_BIT) > 0;
  e.yellow = (LedsM$ledsOn[tos_state.current_node] & LedsM$YELLOW_BIT) > 0;
  sendTossimEvent(tos_state.current_node, AM_LEDEVENT, tos_state.tos_time, &e);


  ptII_updateLeds(tos_state.current_node, (short )e.red, (short )e.green, (short )e.yellow);
}

#line 94
static   result_t LedsM$Leds$redOff(void)
#line 94
{
  dbg(DBG_LED, "LEDS: Red off.\n");
  LedsM$PowerState$redOff();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    {
      if (LedsM$ledsOn[tos_state.current_node] & LedsM$RED_BIT) {
          LedsM$ledsOn[tos_state.current_node] &= ~LedsM$RED_BIT;
          LedsM$updateLeds();
        }
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 129
static   result_t LedsM$Leds$greenOff(void)
#line 129
{
  dbg(DBG_LED, "LEDS: Green off.\n");
  LedsM$PowerState$greenOff();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 132
    {
      if (LedsM$ledsOn[tos_state.current_node] & LedsM$GREEN_BIT) {
          LedsM$ledsOn[tos_state.current_node] &= ~LedsM$GREEN_BIT;
          LedsM$updateLeds();
        }
    }
#line 137
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 164
static   result_t LedsM$Leds$yellowOff(void)
#line 164
{
  dbg(DBG_LED, "LEDS: Yellow off.\n");
  LedsM$PowerState$yellowOff();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 167
    {
      if (LedsM$ledsOn[tos_state.current_node] & LedsM$YELLOW_BIT) {
          LedsM$ledsOn[tos_state.current_node] &= ~LedsM$YELLOW_BIT;
          LedsM$updateLeds();
        }
    }
#line 172
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 276 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
  void shutdownSockets(void)
#line 276
{



  socketsInitialized = 0;
#line 293
  ptII_selectorClose(selectorCommandReadThread);
  dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Shut down command server selector for mote %i.\n", 1);
  ptII_serverSocketClose(commandServerSocket);
  dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Closed command server socket for mote %i.\n", 1);
#line 309
  ptII_selectorClose(selectorEventAcceptThread);
  dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Shut down event server selector for mote %i.\n", 1);
  ptII_serverSocketClose(eventServerSocket);
  dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Closed event server socket for mote %i.\n", 1);

  if (ptII_joinThreads()) {
      dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Joined commandReadThread for mote %i.\n", 1);
      dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Joined eventAcceptThread for mote %i.\n", 1);
    }
  else 
#line 317
    {
      dbg_clear(DBG_SIM | DBG_ERROR, "SIM: Could not join commandReadThread and/or eventAcceptThread for mote %i.\n", 1);
    }
}

#line 466
  void *eventAcceptThreadFunc(void *arg)
#line 466
{






  void *serverSocketChannel;
  void *socketChannel;
  char selectorIsClosing = 0;

  dbg_clear(DBG_SIM, "SIM: eventAcceptThread running for mote %i.\n", 1);


  selectorEventAcceptThread = ptII_selectorCreate(eventServerSocket, TRUE, FALSE, FALSE, FALSE);

  if (selectorEventAcceptThread == (void *)0) {
      fprintf(stderr, "SIM: eventAcceptThread: selectorCreate returned NULL %i.\n", 1);
      return 0;
    }

  while (1) {



      fprintf(stderr, "SIM: eventAcceptThread: calling select for mote %i\n", 1);



      serverSocketChannel = ptII_selectSocket(selectorEventAcceptThread, &selectorIsClosing, TRUE, FALSE, FALSE, FALSE);
      fprintf(stderr, "SIM: eventAcceptThread: returned from select for mote %i\n", 1);
      if (serverSocketChannel == (void *)0) {
          if (selectorIsClosing) {
              fprintf(stderr, "SIM: eventAcceptThreadFunc: selector is closing for mote %i.\n", 1);
              return 0;
            }
          else 
#line 501
            {

              fprintf(stderr, "SIM: eventAcceptThreadFunc: error in select for mote %i\n", 1);
              return 0;
            }
        }
      fprintf(stderr, "SIM: eventAcceptThread: select returned for mote %i\n", 1);


      if (serverSocketChannel != (void *)0) {
          fprintf(stderr, "SIM: eventAcceptThread: Checking for event connection for mote %i\n", 1);

          socketChannel = acceptConnection(serverSocketChannel);
          fprintf(stderr, "SIM: eventAcceptThread: Returned from acceptConnection for mote %i\n", 1);


          if (socketChannel == (void *)0) {
              fprintf(stderr, "SIM: eventAcceptThread: acceptConnection failed for mote %i\n", 1);
              return 0;
            }

          fprintf(stderr, "SIM: eventAcceptThread: Got event connection %p for mote %i\n", socketChannel, 1);


          ptII_MonitorEnter(eventClientsLock);



          addClient2(eventClients, socketChannel);

          sendInitEvent(socketChannel);

          ptII_MonitorNotifyAll(eventClientsLock);


          ptII_MonitorExit(eventClientsLock);
        }
    }
  return 0;
}

#line 208
static void *acceptConnection(void *serverSocketChannel)
#line 208
{



  void *socketChannel;


  dbg_clear(DBG_SIM, "SIM: Waiting for connection on serverSocketChannel %p for mote %i\n", serverSocketChannel, 1);


  socketChannel = ptII_acceptConnection(serverSocketChannel);


  if (socketChannel == (void *)0) {

      dbg_clear(DBG_SIM, "SIM: Could not accept socket for mote %i.\n", 1);





      return (void *)0;
    }

  dbg_clear(DBG_SIM, "SIM: Accepted client socket: fd %p for mote %i\n", socketChannel, 1);


  return socketChannel;
}

#line 415
static void addClient2(void *clientSockets[], void *socketChannel)
#line 415
{
  int i;

  for (i = 0; i < 4; i++) {
      if (clientSockets[i] == (void *)0) {
          clientSockets[i] = socketChannel;
          return;
        }
    }



  ptII_socketChannelClose(socketChannel);
}

# 548 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  uint32_t get_sim_rate(void)
#line 548
{
  return (uint32_t )(1000.0 * get_rate_value());
}

# 911 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
  void *commandReadThreadFunc(void *arg)
#line 911
{
  int i;



  int numclients;


  void *selectableChannel;
  void *socketChannel;
  char selectorIsClosing = 0;

  dbg_clear(DBG_SIM, "SIM: commandReadThread running.\n");


  while (1) {

      selectorCommandReadThread = ptII_selectorCreate(commandServerSocket, TRUE, FALSE, FALSE, FALSE);

      if (selectorCommandReadThread == (void *)0) {
          fprintf(stderr, "SIM: commandReadThread: selectorCreate returned NULL for mote %i.\n", 1);
          return 0;
        }








      numclients = 0;

      for (i = 0; i < 4; i++) {

          if (commandClients[i] != (void *)0) {





              ptII_selectorRegister(selectorCommandReadThread, commandClients[i], FALSE, FALSE, TRUE, FALSE);
              numclients++;
            }
        }



      fprintf(stderr, "SIM: commandReadThread: Doing select for mote %i\n", 1);




      selectableChannel = ptII_selectSocket(selectorCommandReadThread, &selectorIsClosing, FALSE, FALSE, TRUE, FALSE);
      if (selectableChannel == (void *)0) {
          if (selectorIsClosing) {
              dbg_clear(DBG_SIM, "SIM: commandReadThreadFunc: selector is closing for mote %i.\n", 1);
              return 0;
            }
          else 
#line 969
            {

              dbg_clear(DBG_SIM, "SIM: commandReadThreadFunc: error in select for mote %i\n", 1);
              return 0;
            }
        }
      fprintf(stderr, "SIM: commandReadThread: Returned from select for mote %i\n", 1);



      for (i = 0; i < 4; i++) {







          if (commandClients[i] != (void *)0 && commandClients[i] == selectableChannel) {
              if (readTossimCommand(commandClients[i], i) < 0) {

                  ptII_socketChannelClose(commandClients[i]);

                  commandClients[i] = (void *)0;
                }
            }







          ptII_selectorClose(selectorCommandReadThread);
        }




      if (commandServerSocket == selectableChannel) {

          fprintf(stderr, "SIM: commandReadThread: accepting command connection for mote %i\n", 1);

          socketChannel = acceptConnection(commandServerSocket);


          if (socketChannel == (void *)0) {
              fprintf(stderr, "SIM: commandReadThread: acceptConnection failed for mote %i\n", 1);
              return 0;
            }

          fprintf(stderr, "SIM: commandReadThread: Got command connection %p for mote %i\n", socketChannel, 1);

          addClient2(commandClients, socketChannel);
        }
    }
  return 0;
}

# 47 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/adjacency_list.c"
static link_t *allocate_link(int mote)
#line 47
{
  link_t *alloc_link;
  int i;

#line 50
  if (0 == num_free_links) {
      alloc_link = (link_t *)malloc(sizeof(link_t ) * NUM_NODES_ALLOC);
      for (i = 0; i < NUM_NODES_ALLOC - 1; i++) {
          alloc_link[i].next_link = &alloc_link[i + 1];
        }
      alloc_link[NUM_NODES_ALLOC - 1].next_link = free_list;
      free_list = alloc_link;
      num_free_links += NUM_NODES_ALLOC;
    }
  else {
      alloc_link = free_list;
    }

  free_list = free_list->next_link;
  alloc_link->mote = mote;
  alloc_link->next_link = (void *)0;
  num_free_links--;
  return alloc_link;
}

# 540 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  void set_sim_rate(uint32_t rate)
#line 540
{
  double realRate = (double )rate;

#line 542
  realRate /= 1000.0;
  dbg_clear(DBG_SIM, "SIM: Setting rate to %lf\n", realRate);
  set_rate_value(realRate);
  rate_checkpoint();
}

#line 458
  void nido_start_mote(uint16_t moteID)
#line 458
{
  if (!tos_state.moteOn[moteID] && moteID < tos_state.num_nodes) {
      __nesc_nido_initialise(moteID);
      tos_state.moteOn[moteID] = 1;
      tos_state.current_node = moteID;




      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 467
        TOS_LOCAL_ADDRESS = 1;
#line 467
        __nesc_atomic_end(__nesc_atomic); }

      tos_state.node_state[moteID].time = tos_state.tos_time;
      Nido$StdControl$init();
      Nido$StdControl$start();
      tos_state.node_state[moteID].pot_setting = 73;
      while (TOSH_run_next_task()) {
        }
    }
}

# 86 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hpl.c"
static void TOSH_clock_set_rate(char interval, char scale)
{
  long long ticks;
  event_t *event = (void *)0;

#line 90
  interval = interval + 1;

  dbg(DBG_CLOCK, "CLOCK: Setting clock rate to interval %u, scale %u\n", (unsigned int )(interval & 0xff), (unsigned int )(scale & 0xff));
  if (clockEvents[tos_state.current_node] != (void *)0) {
      event_clocktick_invalidate(clockEvents[tos_state.current_node]);
    }

  ticks = clockScales[(int )(scale & 0xff)] * (int )(interval & 0xff);

  if (ticks > 0) {
      ticks = clockScales[(int )(scale & 0xff)] * (int )(interval & 0xff);


      event = (event_t *)malloc(sizeof(event_t ));

      event_clocktick_create(event, tos_state.current_node, tos_state.tos_time, ticks);
      queue_insert_event(& tos_state.queue, event);
#line 106
      ;
    }
  intervals[tos_state.current_node] = interval;
  scales[tos_state.current_node] = scale;
  clockEvents[tos_state.current_node] = event;
  setTime[tos_state.current_node] = tos_state.tos_time;
  return;
}

#line 197
static void event_clocktick_create(event_t *event, int mote, long long eventTime, int interval)
#line 197
{


  clock_tick_data_t *data = malloc(sizeof(clock_tick_data_t ));

#line 201
  dbg(DBG_MEM, "malloc data entry for clock event: 0x%x\n", (int )data);
  data->interval = interval;
  data->mote = mote;
  data->valid = 1;
  data->disabled = 0;

  event->mote = mote;
  event->force = 0;
  event->pause = 1;
  event->data = data;
  event->time = eventTime + interval;
  event->handle = event_clocktick_handle;
  event->cleanup = event_total_cleanup;
}

# 387 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static int printOtherTime(char *buf, int len, long long int ftime)
#line 387
{
  int hours;
  int minutes;
  int seconds;
  int secondBillionths;

  secondBillionths = (int )(ftime % (long long )4000000);
  seconds = (int )(ftime / (long long )4000000);
  minutes = seconds / 60;
  hours = minutes / 60;
  secondBillionths *= (long long )25;
  seconds %= 60;
  minutes %= 60;

  return snprintf(buf, len, "%i:%i:%i.%08i", hours, minutes, seconds, secondBillionths);
}

# 68 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/event_queue.c"
static void queue_insert_event(event_queue_t *queue, event_t *event)
#line 68
{
  ptII_queue_insert_event(event->time);


  ptII_MonitorEnter(queue->lock);


  heap_insert(& queue->heap, event, event->time);


  ptII_MonitorExit(queue->lock);
}

# 187 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/heap_array.c"
static void up_heap(heap_t *heap, int findex)
#line 187
{
  int parent_index;

#line 189
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 148
static void swap(node_t *first, node_t *second)
#line 148
{
  long long key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 124 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/hpl.c"
static uint8_t TOSH_get_clock0_counter(void)
#line 124
{

  if (scales[tos_state.current_node] == 0 || 
  intervals[tos_state.current_node] == 0) {
#line 127
      return 0;
    }
  else 
#line 128
    {
      long long timeDiff = tos_state.tos_time - setTime[tos_state.current_node];

#line 130
      timeDiff /= (long long )clockScales[scales[tos_state.current_node]];
      timeDiff %= 256;
      return (uint8_t )timeDiff;
    }
}

#line 54
static void TOSH_clock_set_interval(uint8_t interval)
#line 54
{
  long long elapsed_time;
  long long ticks;
  int elapsedTicks;
  int realInterval;

  event_t *event = (void *)0;

#line 61
  interval = interval + 1;

  dbg(DBG_CLOCK, "CLOCK: Setting clock interval to %u @ %s\n", (unsigned int )(interval & 0xff), currentTime());
  if (clockEvents[tos_state.current_node] != (void *)0) {
      event_clocktick_invalidate(clockEvents[tos_state.current_node]);
    }


  elapsed_time = tos_state.tos_time - setTime[tos_state.current_node];
  elapsedTicks = elapsed_time / (long long )clockScales[scales[tos_state.current_node]];

  realInterval = interval - elapsedTicks;
  if (realInterval <= 0) {
      realInterval += 256;
    }

  ticks = clockScales[(int )(scales[tos_state.current_node] & 0xff)] * realInterval;
  event = (event_t *)malloc(sizeof(event_t ));

  event_clocktick_create(event, tos_state.current_node, tos_state.tos_time, ticks);
  queue_insert_event(& tos_state.queue, event);
#line 81
  ;
  intervals[tos_state.current_node] = interval;
  clockEvents[tos_state.current_node] = event;
}

# 408 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/external_comm.c"
static char *currentTime(void)
#line 408
{
  static char timeBuf[128];

#line 410
  printTime(timeBuf, 128);
  return timeBuf;
}

# 48 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/events.c"
static void event_total_cleanup(event_t *event)
#line 48
{
  free(event->data);
  dbg(DBG_MEM, "event_total_cleanup: freeing event data: 0x%x\n", (unsigned int )event->data);
  event->data = (void *)0;
  free(event);
  dbg(DBG_MEM, "event_total_cleanup: freeing event: 0x%x\n", (unsigned int )event);
}

# 136 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/sched.c"
static bool TOSH_run_next_task(void)
{
  __nesc_atomic_t fInterruptFlags;
  uint8_t old_full;
  void (*func)(void );

  fInterruptFlags = __nesc_atomic_start();
  old_full = TOSH_sched_full;
  func = TOSH_queue[old_full].tp;
  if (func == (void *)0) 
    {
      __nesc_atomic_sleep();
      return 0;
    }

  TOSH_queue[old_full].tp = (void *)0;
  TOSH_sched_full = (old_full + 1) & TOSH_TASK_BITMASK;
  __nesc_atomic_end(fInterruptFlags);
  func();

  return 1;
}

# 477 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  void nido_stop_mote(uint16_t moteID)
#line 477
{

  tos_state.cancelBoot[moteID] = 1;

  if (tos_state.moteOn[moteID] && moteID < tos_state.num_nodes) {
      tos_state.moteOn[moteID] = 0;
      tos_state.current_node = moteID;




      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 488
        TOS_LOCAL_ADDRESS = 1;
#line 488
        __nesc_atomic_end(__nesc_atomic); }

      tos_state.node_state[moteID].time = tos_state.tos_time;
      Nido$StdControl$stop();
    }
}


  TOS_MsgPtr NIDO_received_radio(TOS_MsgPtr packet)
#line 496
{
  packet->crc = 1;
  return Nido$RadioReceiveMsg$receive(packet);
}






  TOS_MsgPtr NIDO_received_uart(TOS_MsgPtr packet)
#line 506
{
  packet->crc = 1;
  return Nido$UARTReceiveMsg$receive(packet);
}

# 40 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/tos.c"
  void handle_signal(int sig)
#line 40
{
  if ((sig == 2 || sig == 19) && signaled == 0) {
      char ftime[128];

#line 43
      printTime(ftime, 128);
      printf("Exiting on SIGINT at %s.\n", ftime);


      signaled = 1;
      exit(0);
    }
}

# 102 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/system/sched.c"
 bool TOS_post(void (*tp)(void))
#line 102
{
  __nesc_atomic_t fInterruptFlags;
  uint8_t tmp;



  fInterruptFlags = __nesc_atomic_start();

  tmp = TOSH_sched_free;

  if (TOSH_queue[tmp].tp == (void *)0) {
      TOSH_sched_free = (tmp + 1) & TOSH_TASK_BITMASK;
      TOSH_queue[tmp].tp = tp;
      __nesc_atomic_end(fInterruptFlags);

      return TRUE;
    }
  else {
      __nesc_atomic_end(fInterruptFlags);

      return FALSE;
    }
}

# 227 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/packet_sim.c"
  void event_backoff_handle(event_t *event, struct TOS_state *state)
#line 227
{
  dbg(DBG_PACKET, "SIM_PACKET: Handling backoff event @%s.\n", currentTime());
  if (txState[tos_state.current_node] != RADIO_TX_BACK) {
      dbg(DBG_ERROR, "SIM_PACKET: Backing off in non-backoff state.\n");
    }

  if (incoming[tos_state.current_node] != (void *)0) {
      int backoffAmount = backoffLow;

#line 235
      backoffAmount += rand() % (backoffHigh - backoffLow);
      event_backoff_create(event, tos_state.current_node, tos_state.tos_time + backoffAmount);
      dbg(DBG_PACKET, "SIM_PACKET: Backoff more: %i.\n", backoffAmount);
      queue_insert_event(& tos_state.queue, event);
#line 238
      ;
    }
  else {
      dbg(DBG_PACKET, "SIM_PACKET: No incoming packet, transmit OK.\n");
      txState[tos_state.current_node] = RADIO_TX_TRANS;
      event_start_transmit_create(event, tos_state.current_node, tos_state.tos_time + txChangeLatency);
      queue_insert_event(& tos_state.queue, event);
#line 244
      ;
    }
}

#line 268
  void event_start_transmit_handle(event_t *event, struct TOS_state *state)
#line 268
{
  link_t *connectLink;
  TOS_MsgPtr msg = packet_transmitting[tos_state.current_node];
  int transmitTime = preambleLength + msg->length + headerLength;
  bool ack = FALSE;

#line 273
  transmitTime *= byteTransmitTime;
  connectLink = packet_connectivity[tos_state.current_node];
  msg->crc = 1;

  dbg(DBG_PACKET, "SIM_PACKET: Transmitting, transmit time is %i.\n", transmitTime);



  ptII_send_packet(msg);

  while (connectLink != (void *)0) {
      int mote = connectLink->mote;


      event_t *recvEvent = (event_t *)malloc(sizeof(event_t ));
      IncomingMsg *msgEvent = (IncomingMsg *)malloc(sizeof(IncomingMsg ));

#line 289
      msgEvent->fromID = tos_state.current_node;
      msgEvent->next = (void *)0;
      nmemcpy(& msgEvent->msg, msg, sizeof(TOS_Msg ));

      dbg(DBG_PACKET, "SIM_PACKET: Considering reception at %i\n", (int )mote);


      if (
#line 295
      incoming[mote] == (void *)0 && 
      txState[mote] != RADIO_TX_TRANS && 
      tos_state.moteOn[mote]) {
          int r;
          double prob;

          r = rand() % 100000;
          prob = (double )r / 100000.0;
          if (prob < connectLink->data) {
              corruptPacket(msgEvent, tos_state.current_node, mote);
              rxState[mote] = RADIO_RX_RECV;
            }
          else {
              if (msg->addr == TOS_BCAST_ADDR || 
              msg->addr == mote) {
                  ack = TRUE;
                }
              rxState[mote] = RADIO_RX_RECV;
              current_ptr[mote]->crc = 1;
            }
          dbg(DBG_PACKET, "SIM_PACKET: Enqueueing receive for %i.\n", mote);
          event_receive_packet_create(recvEvent, mote, tos_state.tos_time + transmitTime, msgEvent, TRUE);
          addIncomingEntry(mote, msgEvent);
          queue_insert_event(& tos_state.queue, recvEvent);
#line 318
          ;
        }
      else {
          IncomingMsg *alreadyIncoming = incoming[mote];

#line 322
          dbg(DBG_PACKET, "SIM_PACKET: %i already receiving or transmitting: enqueue event for non-receive (noise), corrupt all already incoming\n", mote);
          while (alreadyIncoming != (void *)0) {
              corruptPacket(alreadyIncoming, tos_state.current_node, mote);




              if (packet_transmitting[alreadyIncoming->fromID] != (void *)0 && 
              packet_transmitting[alreadyIncoming->fromID]->addr == mote) {
                  packet_transmitting[alreadyIncoming->fromID]->ack = 0;
                }
              alreadyIncoming = alreadyIncoming->next;
            }
          event_receive_packet_create(recvEvent, mote, tos_state.tos_time + transmitTime, msgEvent, FALSE);
          addIncomingEntry(mote, msgEvent);
          queue_insert_event(& tos_state.queue, recvEvent);
#line 337
          ;
        }
      connectLink = connectLink->next_link;
    }

  packet_transmitting[tos_state.current_node] = msg;
  msg->ack = ack;
  dbg(DBG_PACKET, "SIM_PACKET: Enqueueing send done.\n");
  event_send_packet_done_create(event, tos_state.current_node, tos_state.tos_time + transmitTime - 1);
  queue_insert_event(& tos_state.queue, event);
#line 346
  ;
}

#line 258
static void corruptPacket(IncomingMsg *msg, int src, int dest)
#line 258
{
  int i;
  uint8_t *buf = (uint8_t *)& msg->msg;

#line 261
  dbg(DBG_PACKET, "SIM_PACKET: Corrupting message from %i to %i\n", src, dest);
  for (i = 0; i < 29 + 7; i++) {
      buf[i] = (uint8_t )(rand() & 0xff);
    }
  msg->msg.crc = 0;
}

#line 350
  void event_receive_packet_create(event_t *event, int node, long long eventTime, IncomingMsg *msg, bool deliver)
#line 350
{
  event->mote = node;
  event->force = 1;
  event->pause = 0;
  event->time = eventTime;
  if (deliver) {
      event->handle = event_receive_packet_handle;
    }
  else {
      event->handle = event_receive_packet_noise_handle;
    }
  event->cleanup = event_total_cleanup;
  event->data = msg;
  msg->next = (void *)0;
}

#line 379
  void event_receive_packet_handle(event_t *event, struct TOS_state *state)
#line 379
{
  IncomingMsg *receivedPacket;

  receivedPacket = (IncomingMsg *)event->data;

  removeIncomingEntry(tos_state.current_node, receivedPacket);

  rxState[tos_state.current_node] = RADIO_RX_IDLE;

  if (tos_state.current_node < tos_state.num_nodes && 
  tos_state.moteOn[tos_state.current_node]) {
      dbg(DBG_PACKET, "SIM_PACKET: Receiving\n");
      nmemcpy(current_ptr[tos_state.current_node], & receivedPacket->msg, sizeof(TOS_Msg ));
      current_ptr[tos_state.current_node] = packet_sim_receive_msg(current_ptr[tos_state.current_node]);
    }

  event_cleanup(event);
}

#line 111
static bool removeIncomingEntry(int moteID, IncomingMsg *entry)
#line 111
{
  dbg(DBG_PACKET, "SIM_PACKET: Removing incoming packet from %i to %i\n", (int )entry->fromID, (int )moteID);
  if (incoming[moteID] == (void *)0) {
      dbg(DBG_ERROR, "SIM_PACKET: Could not find IncomingMsg entry 0x%x for mote %i.\n", entry, moteID);
      return FALSE;
    }
  else {
      if (incoming[moteID] == entry) {
          dbg(DBG_PACKET, "SIM_PACKET: Incoming: 0x%x\n", incoming[moteID]);
          if (lastIncoming[moteID] == entry) {
              lastIncoming[moteID] = (void *)0;
              incoming[moteID] = (void *)0;
            }
          else {
              incoming[moteID] = incoming[moteID]->next;
            }
          return TRUE;
        }
      else {
          IncomingMsg *prevMsg = incoming[moteID];
          IncomingMsg *currentMsg = incoming[moteID]->next;
          IncomingMsg *nextMsg;

#line 133
          if (currentMsg == (void *)0) {
              dbg(DBG_ERROR, "SIM_PACKET: Could not find IncomingMsg entry 0x%x for mote %i.\n", entry, moteID);
              return FALSE;
            }
          nextMsg = currentMsg->next;

          while (currentMsg != entry && nextMsg != (void *)0) {
              prevMsg = currentMsg;
              currentMsg = nextMsg;
              nextMsg = currentMsg->next;
            }
          if (currentMsg != entry) {
              dbg(DBG_ERROR, "SIM_PACKET: Could not find IncomingMsg entry 0x%x for mote %i.\n", entry, moteID);
              return FALSE;
            }
          prevMsg->next = nextMsg;

          if (lastIncoming[moteID] == entry) {
              lastIncoming[moteID] = prevMsg;
            }

          dbg(DBG_PACKET, "SIM_PACKET: Incoming: 0x%x\n", incoming[moteID]);
          return TRUE;
        }
    }
}

#line 366
  void event_receive_packet_noise_handle(event_t *event, struct TOS_state *state)
#line 366
{
  IncomingMsg *receivedPacket;

  receivedPacket = (IncomingMsg *)event->data;

  removeIncomingEntry(tos_state.current_node, receivedPacket);

  rxState[tos_state.current_node] = RADIO_RX_IDLE;

  dbg(DBG_PACKET, "SIM_PACKET: Noise packet (no proper detection), don't deliver\n");
  event_cleanup(event);
}

#line 160
static void addIncomingEntry(int moteID, IncomingMsg *entry)
#line 160
{
  dbg(DBG_PACKET, "SIM_PACKET: Adding incoming packet from %i to %i (incoming=0x%x)\n", (int )entry->fromID, (int )moteID, incoming[moteID]);
  entry->next = (void *)0;
  if (lastIncoming[moteID] == (void *)0) {
      incoming[moteID] = entry;
      lastIncoming[moteID] = entry;
    }
  else {
      lastIncoming[moteID]->next = entry;
      lastIncoming[moteID] = entry;
    }
}

#line 398
  void event_send_packet_done_create(event_t *event, int node, long long eventTime)
#line 398
{
  event->mote = node;
  event->force = 0;
  event->pause = 0;
  event->time = eventTime;
  event->handle = event_send_packet_done_handle;
  event->cleanup = event_total_cleanup;
  event->data = (void *)0;
}


  void event_send_packet_done_handle(event_t *event, struct TOS_state *state)
#line 409
{
  RadioMsgSentEvent ev;
  TOS_MsgPtr bufferPtr = packet_transmitting[tos_state.current_node];

#line 412
  if (dbg_active(DBG_PACKET)) {
      char timeBuf[128];

#line 414
      printTime(timeBuf, 128);
      dbg(DBG_PACKET, "SIM_PACKET: Send done @%s\n", timeBuf);
    }

  nmemcpy(& ev.message, bufferPtr, sizeof  ev.message);
  ev.message.crc = 1;
  sendTossimEvent(tos_state.current_node, AM_RADIOMSGSENTEVENT, tos_state.tos_time, &ev);

  packet_transmitting[tos_state.current_node] = (void *)0;
  packet_sim_transmit_done(bufferPtr);
  txState[tos_state.current_node] = RADIO_TX_IDLE;
  event_cleanup(event);
}

#line 526
  void ptII_insert_packet_event(long long ptolemyTime, TOS_MsgPtr msg)
#line 526
{
  int transmitTime = preambleLength + msg->length + headerLength;




  int mote = tos_state.current_node;



  event_t *recvEvent = (event_t *)malloc(sizeof(event_t ));
  IncomingMsg *msgEvent = (IncomingMsg *)malloc(sizeof(IncomingMsg ));

#line 538
  msgEvent->fromID = tos_state.current_node;
  msgEvent->next = (void *)0;
  nmemcpy(& msgEvent->msg, msg, sizeof(TOS_Msg ));

  dbg(DBG_PACKET, "SIM_PACKET: Considering reception at %i\n", (int )mote);


  if (
#line 544
  incoming[mote] == (void *)0 && 
  txState[mote] != RADIO_TX_TRANS && 
  tos_state.moteOn[mote]) {
#line 561
      rxState[mote] = RADIO_RX_RECV;
      current_ptr[mote]->crc = 1;

      dbg(DBG_PACKET, "SIM_PACKET: Enqueueing receive for %i.\n", mote);

      event_receive_packet_create(recvEvent, mote, ptolemyTime + transmitTime, msgEvent, TRUE);
      addIncomingEntry(mote, msgEvent);
      queue_insert_event(& tos_state.queue, recvEvent);
#line 568
      ;
    }
  else {
      IncomingMsg *alreadyIncoming = incoming[mote];

#line 572
      dbg(DBG_PACKET, "SIM_PACKET: %i already receiving or transmitting: enqueue event for non-receive (noise), corrupt all already incoming\n", mote);
      while (alreadyIncoming != (void *)0) {
          corruptPacket(alreadyIncoming, tos_state.current_node, mote);




          if (packet_transmitting[alreadyIncoming->fromID] != (void *)0 && 
          packet_transmitting[alreadyIncoming->fromID]->addr == mote) {
              packet_transmitting[alreadyIncoming->fromID]->ack = 0;
            }
          alreadyIncoming = alreadyIncoming->next;
        }

      event_receive_packet_create(recvEvent, mote, ptolemyTime + transmitTime, msgEvent, FALSE);
      addIncomingEntry(mote, msgEvent);
      queue_insert_event(& tos_state.queue, recvEvent);
#line 588
      ;
    }
}

# 108 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  void event_boot_handle(event_t *fevent, 
struct TOS_state *fstate)
#line 109
{
  char timeVal[128];

#line 111
  printTime(timeVal, 128);


  if (!tos_state.cancelBoot[tos_state.current_node]) {
      dbg(DBG_BOOT, "BOOT: Mote booting at time %s.\n", timeVal);
      nido_start_mote((uint16_t )tos_state.current_node);
    }
  else 
#line 117
    {
      dbg(DBG_BOOT, "BOOT: Boot cancelled at time %s since mote turned off.\n", 
      timeVal);
    }
}










  int main(int argc, char **argv)
#line 132
{
  long long i;





  int num_nodes_start = -1;
  int random_seed = 0;
  int random_seed_set = 0;



  char *adc_model_name = (void *)0;
  char *model_name = (void *)0;
  char *eeprom_name = (void *)0;

  int start_time = 0;
  int pause_time = 0;
  int start_interval = 10;
  char *rate_constant = "1000.0";
  char *lossy_file = (void *)0;
  int radio_kb_rate = 40;

  char *packet_conf = (void *)0;
  int currentArg;

  if (argc == 2 && (strcmp(argv[1], "-h") == 0 || 
  strcmp(argv[1], "--help") == 0)) {
      Nido$help(argv[0]);
    }

  if (argc < 2) {
#line 164
      Nido$usage(argv[0]);
    }
  dbg_init();

  for (currentArg = 1; currentArg < argc - 1; currentArg++) {
      char *arg = argv[currentArg];

#line 170
      if (strcmp(arg, "-h") == 0 || 
      strcmp(arg, "--help") == 0) {
          Nido$help(argv[0]);
        }
      else {
#line 174
        if (strcmp(argv[currentArg], "--help") == 0) {
            Nido$help(argv[0]);
          }
        else {
#line 177
          if (strcmp(arg, "-gui") == 0) {
              GUI_enabled = 1;
            }
          else {
#line 180
            if (strcmp(arg, "-nodbgout") == 0) {
                dbg_suppress_stdout = 1;
              }
            else {
#line 183
              if (strncmp(arg, "-a=", 3) == 0) {
                  arg += 3;
                  adc_model_name = arg;
                }
              else {
#line 187
                if (strncmp(arg, "-b=", 3) == 0) {
                    arg += 3;
                    start_interval = atoi(arg);
                    if (start_interval < 0) {
                        fprintf(stderr, "SIM: boot time value must be a positive integer, not %s\n", arg);
                        exit(-1);
                      }
                  }
                else {
#line 195
                  if (strncmp(arg, "-ef=", 3) == 0) {
                      arg += 4;
                      eeprom_name = arg;
                    }
                  else {
#line 199
                    if (strncmp(arg, "-l=", 3) == 0) {
                        arg += 3;
                        rate_constant = arg;
                      }
                    else {
#line 203
                      if (strncmp(arg, "-r=", 3) == 0) {
                          arg += 3;
                          model_name = arg;
                        }
                      else {
#line 207
                        if (strncmp(arg, "-rf=", 4) == 0) {
                            arg += 4;
                            model_name = "lossy";
                            lossy_file = arg;
                          }
                        else {
#line 212
                          if (strncmp(arg, "-pf=", 4) == 0) {
                              arg += 4;
                              model_name = "lossy";
                              packet_conf = arg;
                            }
                          else {
#line 217
                            if (strncmp(arg, "-s=", 3) == 0) {
                                arg += 3;
                                num_nodes_start = atoi(arg);
                              }
                            else {
#line 221
                              if (strncmp(arg, "-t=", 3) == 0) {
                                  arg += 3;
                                  Nido$max_run_time[tos_state.current_node] = (unsigned long long )atoi(arg);
                                  Nido$max_run_time[tos_state.current_node] *= 4000000;
                                }
                              else {
#line 226
                                if (strncmp(arg, "-seed=", 6) == 0) {
                                    arg += 6;
                                    random_seed = atoi(arg);
                                    random_seed_set = 1;
                                  }
                                else {
#line 231
                                  if (strcmp(arg, "-p") == 0) {
                                      Nido$power_profiling[tos_state.current_node] = 1;
                                    }
                                  else {
#line 234
                                    if (strcmp(arg, "-cpuprof") == 0) {
                                        Nido$cpu_profiling[tos_state.current_node] = 1;
                                      }
                                    else {
                                        Nido$usage(argv[0]);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
    }
#line 242
  set_rate_value(atof(rate_constant));
  if (get_rate_value() <= 0.0) {
      fprintf(stderr, "SIM: Invalid rate constant: %s.\n", rate_constant);
      exit(-1);
    }

  Nido$num_nodes_total[tos_state.current_node] = atoi(argv[argc - 1]);
  if (Nido$num_nodes_total[tos_state.current_node] <= 0) {
#line 249
      Nido$usage(argv[0]);
    }
  if (num_nodes_start < 0 || num_nodes_start > Nido$num_nodes_total[tos_state.current_node]) {
      num_nodes_start = Nido$num_nodes_total[tos_state.current_node];
    }



  Nido$PowerState$init(Nido$power_profiling[tos_state.current_node], Nido$cpu_profiling[tos_state.current_node]);


  if (Nido$num_nodes_total[tos_state.current_node] > TOSNODES) {
      fprintf(stderr, "Nido: I am compiled for maximum of %d nodes and you have specified %d nodes.\n", TOSNODES, Nido$num_nodes_total[tos_state.current_node]);
      fprintf(stderr, "Nido: Exiting...\n");
      exit(-1);
    }

  init_signals();
  tos_state.num_nodes = Nido$num_nodes_total[tos_state.current_node];



  if (model_name == (void *)0 || strcmp(model_name, "simple") == 0) {
      tos_state.rfm = create_simple_model();
      tos_state.radioModel = TOSSIM_RADIO_MODEL_SIMPLE;
    }
  else {
#line 275
    if (strcmp(model_name, "lossy") == 0) {
        tos_state.rfm = create_lossy_model(lossy_file);
        tos_state.radioModel = TOSSIM_RADIO_MODEL_LOSSY;
      }
    else {
        fprintf(stderr, "SIM: Don't recognize RFM model type %s.\n", model_name);
        exit(-1);
      }
    }


  if (adc_model_name == (void *)0 || strcmp(adc_model_name, "generic") == 0) {
      tos_state.adc = create_generic_adc_model();
    }
  else {
#line 289
    if (strcmp(adc_model_name, "random") == 0) {
        tos_state.adc = create_random_adc_model();
      }
    else {
        fprintf(stderr, "SIM: Bad ADC model name: %s\n", adc_model_name);
        exit(-1);
      }
    }
#line 296
  if (eeprom_name != (void *)0) {
      namedEEPROM(eeprom_name, Nido$num_nodes_total[tos_state.current_node], DEFAULT_EEPROM_SIZE);
    }
  else {
      anonymousEEPROM(Nido$num_nodes_total[tos_state.current_node], DEFAULT_EEPROM_SIZE);
    }
  dbg_clear(DBG_SIM | DBG_BOOT, "SIM: EEPROM system initialized.\n");

  tos_state.space = create_simple_spatial_model();

  tos_state.radio_kb_rate = radio_kb_rate;
  tos_state_model_init();


  packet_sim_init(packet_conf);

  init_hardware();

  queue_init(& tos_state.queue, pause_time);
  dbg_clear(DBG_SIM, "SIM: event queue initialized.\n");

  if (!random_seed_set) {
      struct timeval tv;

#line 319
      gettimeofday(&tv, (void *)0);
      random_seed = tv.tv_usec;
    }


  dbg_clear(DBG_ALL, "SIM: Random seed is %i\n", random_seed);
  srand(random_seed);

  initializeSockets();

  if (GUI_enabled) {
      waitForGuiConnection();
    }

  for (i = 0; i < num_nodes_start; i++) {

      int rval = rand();

#line 336
      if (start_interval > 0) {
          rval %= 4000000 * start_interval;
          start_time = rval + i;
        }
      else {
#line 339
        if (start_interval == 0) {
            start_time = i;
          }
        }
      tos_state.node_state[i].time = start_time;



      dbg_clear(DBG_SIM | DBG_USR3, "SIM: Time for mote %i initialized to %lli.\n", 

      1, tos_state.node_state[i].time);
    }

  for (i = 0; i < num_nodes_start; i++) {
      char timeVal[128];
      event_t *fevent = (event_t *)malloc(sizeof(event_t ));

#line 355
      fevent->mote = i;
      fevent->time = tos_state.node_state[i].time;
      fevent->handle = event_boot_handle;
      fevent->cleanup = event_default_cleanup;
      fevent->pause = 0;
      fevent->force = 1;
      queue_insert_event(& tos_state.queue, fevent);
#line 361
      ;
      printOtherTime(timeVal, 128, tos_state.node_state[i].time);
      dbg(DBG_BOOT, "BOOT: Scheduling for boot at %s.\n", timeVal);
    }

  rate_checkpoint();

  return 0;
}

#line 79
static void Nido$help(char *progname)
#line 79
{
  fprintf(stderr, "Usage: %s [options] num_nodes\n", progname);
  fprintf(stderr, "  [options] are:\n");
  fprintf(stderr, "  -h, --help        Display this message.\n");
  fprintf(stderr, "  -gui              pauses simulation waiting for GUI to connect\n");
  fprintf(stderr, "  -nodbgout	 only send dbg messages to GUI, not to stdout\n");
  fprintf(stderr, "  -a=<model>        specifies ADC model (generic is default)\n");
  fprintf(stderr, "                    options: generic random\n");
  fprintf(stderr, "  -b=<sec>          motes boot over first <sec> seconds (default 10)\n");
  fprintf(stderr, "  -ef=<file>        use <file> for eeprom; otherwise anonymous file is used\n");
  fprintf(stderr, "  -l=<scale>        run sim at <scale> times real time (fp constant)\n");
  fprintf(stderr, "  -r=<model>        specifies a radio model (simple is default)\n");
  fprintf(stderr, "                    options: simple lossy\n");
  fprintf(stderr, "  -pf=<file>        specifies file for packet mode\n");
  fprintf(stderr, "  -rf=<file>        specifies file for lossy mode (lossy.nss is default)\n");
  fprintf(stderr, "                    implicitly selects lossy model\n");
  fprintf(stderr, "  -s=<num>          only boot <num> of nodes\n");
  fprintf(stderr, "  -t=<sec>          run simulation for <sec> virtual seconds\n");
  fprintf(stderr, "  -seed=<seed>      use random seed <seed>\n");
  fprintf(stderr, "  -p                do power profiling\n");
  fprintf(stderr, "  -cpuprof          do cpu profiling (only if compiled with cilly!)\n");
  fprintf(stderr, "  num_nodes         number of nodes to simulate\n");

  fprintf(stderr, "\n");
  dbg_help();
  fprintf(stderr, "\n");
  exit(-1);
}

# 78 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/adjacency_list.c"
static int adjacency_list_init(void)
#line 78
{
  int i;

#line 80
  free_list = (link_t *)malloc(sizeof(link_t ) * NUM_NODES_ALLOC);
  for (i = 0; i < NUM_NODES_ALLOC - 1; i++) {
      free_list[i].next_link = &free_list[i + 1];
    }
  free_list[NUM_NODES_ALLOC - 1].next_link = (void *)0;
  num_free_links = NUM_NODES_ALLOC;
  return SUCCESS;
}

# 212 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/rfm_model.c"
static void static_one_cell_init(void)
#line 212
{
  int i;
#line 213
  int j;
  link_t *new_link;







  radioConnectivityLock = ptII_createMonitorObject();


  radio_connectivity[0] = (void *)0;

  for (i = 0; i < tos_state.num_nodes; i++) {
      for (j = 0; j < tos_state.num_nodes; j++) {
          if (i != j) {
              new_link = allocate_link(j);
              new_link->data = 0.0;

              new_link->next_link = radio_connectivity[i];
              radio_connectivity[i] = new_link;
            }
        }
    }
}

# 58 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/eeprom.c"
static int createEEPROM(char *file, int motes, int eempromBytes)
#line 58
{
  int rval;
  char val = 0;

  local_filename = file;
  numMotes = motes;
  moteSize = eempromBytes;

  if (initialized) {
      dbg(DBG_ERROR, "ERROR: Trying to initialize EEPROM twice.\n");
      return -1;
    }
  local_fd = open(file, 02 | 0100, (((0400 | 0200) | 0100) | (0400 >> 3)) | ((0400 >> 3) >> 3));

  if (local_fd < 0) {
      dbg(DBG_ERROR, "ERROR: Unable to create EEPROM backing store file.\n");
      return -1;
    }

  rval = (int )lseek(local_fd, moteSize * numMotes, 0);
  if (rval < 0) {
      dbg(DBG_ERROR, "ERROR: Unable to establish EEPROM of correct size.\n");
    }

  rval = write(local_fd, &val, 1);
  if (rval < 0) {
      dbg(DBG_ERROR, "ERROR: Unable to establish EEPROM of correct size.\n");
    }
  initialized = 1;

  return local_fd;
}

# 429 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/packet_sim.c"
static int read_int(FILE *file)
#line 429
{
  char buf[128];
  int findex = 0;
  int ch;

#line 433
  while (1) {
      ch = _IO_getc(file);
      if (ch == -1) {
#line 435
          return -1;
        }
      else {
#line 436
        if (ch >= '0' && ch <= '9') {
            buf[findex] = (char )ch;
            findex++;
          }
        else {
#line 440
          if ((ch == '\n' || ch == ' ') || ch == '\t') {
              if (findex == 0) {
                  continue;
                }
              else {
                  buf[findex] = 0;
                  break;
                }
            }
          else {
              return -1;
            }
          }
        }
#line 452
      if (findex >= 127) {
          return -1;
        }
    }
  return atoi(buf);
}

static double read_double(FILE *file)
#line 459
{
  char buf[128];
  int findex = 0;
  int ch;

#line 463
  while (1) {
      ch = _IO_getc(file);
      if (ch == -1) {
#line 465
          return -1;
        }
      else {
#line 467
        if (((((
#line 466
        ch >= '0' && ch <= '9') || ch == '.') || ch == '-') || ch == 'E')
         || ch == 'e') {
            buf[findex] = (char )ch;
            findex++;
          }
        else {
#line 471
          if ((ch == '\n' || ch == ' ') || ch == '\t') {
              if (findex == 0) {
                  continue;
                }
              else {
                  buf[findex] = 0;
                  break;
                }
            }
          else {
              return -1;
            }
          }
        }
#line 483
      if (findex >= 127) {
          return -1;
        }
    }
  return atof(buf);
}

# 371 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  void ptII_fire(long long ptolemyTime)
#line 371
{

  bool again = FALSE;



  bool isTime = FALSE;

#line 378
  if (ptolemyTime == 0) {
      isTime = TRUE;
    }
  else 
#line 380
    {
      if (!queue_is_empty(& tos_state.queue)) {
          if (ptolemyTime == queue_peek_event_time(& tos_state.queue)) {
              isTime = TRUE;
            }
        }
    }
  if (!isTime) {
      return;
    }

  do {
      again = FALSE;

      if (Nido$max_run_time[tos_state.current_node] > 0 && tos_state.tos_time >= Nido$max_run_time[tos_state.current_node]) {


          ptII_cleanup();
          return;
        }


      ptII_MonitorEnter(tos_state.pause_lock);



      if (tos_state.paused == TRUE) {

          ptII_MonitorNotify(tos_state.pause_lock);

          ptII_MonitorWait(tos_state.pause_lock);
        }


      ptII_MonitorExit(tos_state.pause_lock);


      if (!queue_is_empty(& tos_state.queue)) {
          tos_state.tos_time = queue_peek_event_time(& tos_state.queue);
          queue_handle_next_event(& tos_state.queue);



          rate_based_wait();
        }


      while (TOSH_run_next_task()) {
        }
      if (Nido$cpu_profiling[tos_state.current_node]) {



          if (tos_state.tos_time - Nido$last_power_time[tos_state.current_node] > (long long )4000000 / 5) 
            {
              Nido$PowerState$CPUCycleCheckpoint();
              Nido$last_power_time[tos_state.current_node] = tos_state.tos_time;
            }
        }
      if (!queue_is_empty(& tos_state.queue)) {
          if (tos_state.tos_time == queue_peek_event_time(& tos_state.queue)) {
              again = TRUE;
            }
        }
    }
  while (again);
}

# 112 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/event_queue.c"
static int queue_is_empty(event_queue_t *queue)
#line 112
{
  int rval;


  ptII_MonitorEnter(queue->lock);


  rval = heap_is_empty(& queue->heap);


  ptII_MonitorExit(queue->lock);

  return rval;
}

static long long queue_peek_event_time(event_queue_t *queue)
#line 127
{
  long long rval;


  ptII_MonitorEnter(queue->lock);


  if (heap_is_empty(& queue->heap)) {
      rval = -1;
    }
  else {
      rval = heap_get_min_key(& queue->heap);
    }



  ptII_MonitorExit(queue->lock);

  return rval;
}

# 449 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/contrib/ptII/ptinyos/beta/TOSSIM-packet/Nido.nc"
  void ptII_cleanup(void)
#line 449
{
  if (Nido$power_profiling[tos_state.current_node] || Nido$cpu_profiling[tos_state.current_node]) {
      Nido$PowerState$stop();
    }
  printf("Simulation of %i motes completed.\n", Nido$num_nodes_total[tos_state.current_node]);
}

# 322 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/PowerStateM.nc"
static   double PowerStateM$PowerState$get_mote_cycles(int mote)
#line 322
{
  int bb;
  double total;

#line 325
  if (!cpu_prof_on) {
      fprintf(stderr, "get_mote_cycles() called when cpu prof is off!  Shouldn't happen!\n");
      exit(-1);
    }

  total = 0;
  for (bb = 1; bb < PowerStateM$num_bbs(); bb++) {
      total += PowerStateM$bb_exec_count(mote, bb) * cycles[bb];
    }
  return total;
}

# 104 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/heap_array.c"
static void *heap_pop_min_data(heap_t *heap, long long *key)
#line 104
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 107
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 161
static void down_heap(heap_t *heap, int findex)
#line 161
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long left_key = ((node_t *)heap->data)[left_index].key;
      long long right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 175
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long left_key = ((node_t *)heap->data)[left_index].key;

#line 180
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 82 "/home/jenkins/workspace/ptII/vendors/ptinyos/tinyos-1.x/tos/../contrib/ptII/ptinyos/tos/platform/ptII/UARTNoCRCPacketM.nc"
  void NIDO_uart_send_done(TOS_MsgPtr fmsg, result_t fsuccess)
#line 82
{
  UARTNoCRCPacketM$Send$sendDone(fmsg, fsuccess);
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module Nido */
  if (!strcmp(varname, "Nido$last_power_time"))
  {
    *addr = (uintptr_t)&Nido$last_power_time[__nesc_mote];
    *size = sizeof(Nido$last_power_time[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Nido$power_profiling"))
  {
    *addr = (uintptr_t)&Nido$power_profiling[__nesc_mote];
    *size = sizeof(Nido$power_profiling[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Nido$cpu_profiling"))
  {
    *addr = (uintptr_t)&Nido$cpu_profiling[__nesc_mote];
    *size = sizeof(Nido$cpu_profiling[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Nido$num_nodes_total"))
  {
    *addr = (uintptr_t)&Nido$num_nodes_total[__nesc_mote];
    *size = sizeof(Nido$num_nodes_total[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "Nido$max_run_time"))
  {
    *addr = (uintptr_t)&Nido$max_run_time[__nesc_mote];
    *size = sizeof(Nido$max_run_time[__nesc_mote]);
    return 0;
  }

  /* Module PotM */

  /* Module HPLPotC */

  /* Module PowerStateM */

  /* Module IntToLedsM */

  /* Module LedsM */
  if (!strcmp(varname, "LedsM$ledsOn"))
  {
    *addr = (uintptr_t)&LedsM$ledsOn[__nesc_mote];
    *size = sizeof(LedsM$ledsOn[__nesc_mote]);
    return 0;
  }

  /* Module RfmToIntM */

  /* Module AMStandard */
  if (!strcmp(varname, "AMStandard$state"))
  {
    *addr = (uintptr_t)&AMStandard$state[__nesc_mote];
    *size = sizeof(AMStandard$state[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AMStandard$lastCount"))
  {
    *addr = (uintptr_t)&AMStandard$lastCount[__nesc_mote];
    *size = sizeof(AMStandard$lastCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "AMStandard$counter"))
  {
    *addr = (uintptr_t)&AMStandard$counter[__nesc_mote];
    *size = sizeof(AMStandard$counter[__nesc_mote]);
    return 0;
  }

  /* Module TossimPacketM */
  if (!strcmp(varname, "TossimPacketM$buffer"))
  {
    *addr = (uintptr_t)&TossimPacketM$buffer[__nesc_mote];
    *size = sizeof(TossimPacketM$buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketM$bufferPtr"))
  {
    *addr = (uintptr_t)&TossimPacketM$bufferPtr[__nesc_mote];
    *size = sizeof(TossimPacketM$bufferPtr[__nesc_mote]);
    return 0;
  }

  /* Module UARTNoCRCPacketM */

  /* Module NoLeds */

  /* Module TimerM */
  if (!strcmp(varname, "TimerM$mState"))
  {
    *addr = (uintptr_t)&TimerM$mState[__nesc_mote];
    *size = sizeof(TimerM$mState[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$setIntervalFlag"))
  {
    *addr = (uintptr_t)&TimerM$setIntervalFlag[__nesc_mote];
    *size = sizeof(TimerM$setIntervalFlag[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$mScale"))
  {
    *addr = (uintptr_t)&TimerM$mScale[__nesc_mote];
    *size = sizeof(TimerM$mScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$mInterval"))
  {
    *addr = (uintptr_t)&TimerM$mInterval[__nesc_mote];
    *size = sizeof(TimerM$mInterval[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$queue_head"))
  {
    *addr = (uintptr_t)&TimerM$queue_head[__nesc_mote];
    *size = sizeof(TimerM$queue_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$queue_tail"))
  {
    *addr = (uintptr_t)&TimerM$queue_tail[__nesc_mote];
    *size = sizeof(TimerM$queue_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$queue_size"))
  {
    *addr = (uintptr_t)&TimerM$queue_size[__nesc_mote];
    *size = sizeof(TimerM$queue_size[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$queue"))
  {
    *addr = (uintptr_t)&TimerM$queue[__nesc_mote];
    *size = sizeof(TimerM$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$interval_outstanding"))
  {
    *addr = (uintptr_t)&TimerM$interval_outstanding[__nesc_mote];
    *size = sizeof(TimerM$interval_outstanding[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TimerM$mTimerList"))
  {
    *addr = (uintptr_t)&TimerM$mTimerList[__nesc_mote];
    *size = sizeof(TimerM$mTimerList[__nesc_mote]);
    return 0;
  }

  /* Module HPLClock */
  if (!strcmp(varname, "HPLClock$set_flag"))
  {
    *addr = (uintptr_t)&HPLClock$set_flag[__nesc_mote];
    *size = sizeof(HPLClock$set_flag[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HPLClock$mscale"))
  {
    *addr = (uintptr_t)&HPLClock$mscale[__nesc_mote];
    *size = sizeof(HPLClock$mscale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HPLClock$nextScale"))
  {
    *addr = (uintptr_t)&HPLClock$nextScale[__nesc_mote];
    *size = sizeof(HPLClock$nextScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HPLClock$minterval"))
  {
    *addr = (uintptr_t)&HPLClock$minterval[__nesc_mote];
    *size = sizeof(HPLClock$minterval[__nesc_mote]);
    return 0;
  }

  /* Module HPLPowerManagementM */

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module Nido */
  Nido$last_power_time[__nesc_mote] = 0;
  Nido$power_profiling[__nesc_mote] = 0;
  Nido$cpu_profiling[__nesc_mote] = 0;
  memset(&Nido$num_nodes_total[__nesc_mote], 0, sizeof Nido$num_nodes_total[__nesc_mote]);
  Nido$max_run_time[__nesc_mote] = 0;

  /* Module PotM */

  /* Module HPLPotC */

  /* Module PowerStateM */

  /* Module IntToLedsM */

  /* Module LedsM */
  memset(&LedsM$ledsOn[__nesc_mote], 0, sizeof LedsM$ledsOn[__nesc_mote]);

  /* Module RfmToIntM */

  /* Module AMStandard */
  memset(&AMStandard$state[__nesc_mote], 0, sizeof AMStandard$state[__nesc_mote]);
  memset(&AMStandard$lastCount[__nesc_mote], 0, sizeof AMStandard$lastCount[__nesc_mote]);
  memset(&AMStandard$counter[__nesc_mote], 0, sizeof AMStandard$counter[__nesc_mote]);

  /* Module TossimPacketM */
  memset(&TossimPacketM$buffer[__nesc_mote], 0, sizeof TossimPacketM$buffer[__nesc_mote]);
  memset(&TossimPacketM$bufferPtr[__nesc_mote], 0, sizeof TossimPacketM$bufferPtr[__nesc_mote]);

  /* Module UARTNoCRCPacketM */

  /* Module NoLeds */

  /* Module TimerM */
  memset(&TimerM$mState[__nesc_mote], 0, sizeof TimerM$mState[__nesc_mote]);
  memset(&TimerM$setIntervalFlag[__nesc_mote], 0, sizeof TimerM$setIntervalFlag[__nesc_mote]);
  memset(&TimerM$mScale[__nesc_mote], 0, sizeof TimerM$mScale[__nesc_mote]);
  memset(&TimerM$mInterval[__nesc_mote], 0, sizeof TimerM$mInterval[__nesc_mote]);
  memset(&TimerM$queue_head[__nesc_mote], 0, sizeof TimerM$queue_head[__nesc_mote]);
  memset(&TimerM$queue_tail[__nesc_mote], 0, sizeof TimerM$queue_tail[__nesc_mote]);
  memset(&TimerM$queue_size[__nesc_mote], 0, sizeof TimerM$queue_size[__nesc_mote]);
  memset(&TimerM$queue[__nesc_mote], 0, sizeof TimerM$queue[__nesc_mote]);
  memset(&TimerM$interval_outstanding[__nesc_mote], 0, sizeof TimerM$interval_outstanding[__nesc_mote]);
  memset(&TimerM$mTimerList[__nesc_mote], 0, sizeof TimerM$mTimerList[__nesc_mote]);

  /* Module HPLClock */
  memset(&HPLClock$set_flag[__nesc_mote], 0, sizeof HPLClock$set_flag[__nesc_mote]);
  memset(&HPLClock$mscale[__nesc_mote], 0, sizeof HPLClock$mscale[__nesc_mote]);
  memset(&HPLClock$nextScale[__nesc_mote], 0, sizeof HPLClock$nextScale[__nesc_mote]);
  memset(&HPLClock$minterval[__nesc_mote], 0, sizeof HPLClock$minterval[__nesc_mote]);

  /* Module HPLPowerManagementM */

}
