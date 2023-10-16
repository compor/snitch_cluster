
volatile enum snrt_ssr_dm;
volatile enum snrt_ssr_dim;

/*extern void snrt_ssr_enable();*/
extern void snrt_ssr_disable();
extern void snrt_ssr_loop_1d(enum snrt_ssr_dm dm, size_t b0, size_t s0);
extern void snrt_ssr_loop_2d(enum snrt_ssr_dm dm, size_t b0, size_t b1,
                             size_t s0, size_t s1);
extern void snrt_ssr_loop_3d(enum snrt_ssr_dm dm, size_t b0, size_t b1,
                             size_t b2, size_t s0, size_t s1, size_t s2);
extern void snrt_ssr_read(enum snrt_ssr_dm dm, enum snrt_ssr_dim dim,
                          volatile void *ptr);
extern void snrt_ssr_write(enum snrt_ssr_dm dm, enum snrt_ssr_dim dim,
                           volatile void *ptr);
extern void snrt_fpu_fence();
