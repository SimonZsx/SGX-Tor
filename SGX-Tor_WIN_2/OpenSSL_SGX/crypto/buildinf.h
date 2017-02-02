#ifndef MK1MF_BUILD
  /* auto-generated by Configure for crypto/cversion.c:
   * for Unix builds, crypto/Makefile.ssl generates functional definitions;
   * Windows builds (and other mk1mf builds) compile cversion.c with
   * -DMK1MF_BUILD and use definitions added to this file by util/mk1mf.pl. */
  #error "Windows builds (PLATFORM=VC-WIN64A) use mk1mf.pl-created Makefiles"
#endif
#ifdef MK1MF_PLATFORM_VC_WIN64A
  /* auto-generated/updated by util/mk1mf.pl for crypto/cversion.c */
  #define CFLAGS "compiler: cl -DGETPID_IS_MEANINGLESS  /MD /Ox -DOPENSSL_THREADS  -DGETPID_IS_MEANINGLESS -W3 -wd4090 -Gs0 -GF -Gy -nologo -DOPENSSL_SYS_WIN32 -DWIN32_LEAN_AND_MEAN -DL_ENDIAN -D_CRT_SECURE_NO_DEPRECATE -DUNICODE -D_UNICODE -DOPENSSL_USE_APPLINK -I. -DOPENSSL_NO_IDEA -DOPENSSL_NO_RC5 -DOPENSSL_NO_MD2 -DOPENSSL_NO_GOST -DOPENSSL_NO_ENGINE -DOPENSSL_NO_HW -DOPENSSL_NO_JPAKE -DOPENSSL_NO_STATIC_ENGINE"
  #define PLATFORM "VC-WIN64A"
  #define DATE "Sun Sep  4 11:12:35 2016"
#endif
