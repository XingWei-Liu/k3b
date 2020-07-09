
#ifndef LIBK3B_EXPORT_H
#define LIBK3B_EXPORT_H

#ifdef K3BLIB_STATIC_DEFINE
#  define LIBK3B_EXPORT
#  define K3BLIB_NO_EXPORT
#else
#  ifndef LIBK3B_EXPORT
#    ifdef k3blib_EXPORTS
        /* We are building this library */
#      define LIBK3B_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define LIBK3B_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef K3BLIB_NO_EXPORT
#    define K3BLIB_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef LIBK3B_EXPORT_DEPRECATED
#  define LIBK3B_EXPORT_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef LIBK3B_EXPORT_DEPRECATED_EXPORT
#  define LIBK3B_EXPORT_DEPRECATED_EXPORT LIBK3B_EXPORT LIBK3B_EXPORT_DEPRECATED
#endif

#ifndef LIBK3B_EXPORT_DEPRECATED_NO_EXPORT
#  define LIBK3B_EXPORT_DEPRECATED_NO_EXPORT K3BLIB_NO_EXPORT LIBK3B_EXPORT_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef K3BLIB_NO_DEPRECATED
#    define K3BLIB_NO_DEPRECATED
#  endif
#endif

#endif /* LIBK3B_EXPORT_H */
