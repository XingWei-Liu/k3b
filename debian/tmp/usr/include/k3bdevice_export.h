
#ifndef LIBK3BDEVICE_EXPORT_H
#define LIBK3BDEVICE_EXPORT_H

#ifdef K3BDEVICE_STATIC_DEFINE
#  define LIBK3BDEVICE_EXPORT
#  define K3BDEVICE_NO_EXPORT
#else
#  ifndef LIBK3BDEVICE_EXPORT
#    ifdef k3bdevice_EXPORTS
        /* We are building this library */
#      define LIBK3BDEVICE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define LIBK3BDEVICE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef K3BDEVICE_NO_EXPORT
#    define K3BDEVICE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef LIBK3BDEVICE_EXPORT_DEPRECATED
#  define LIBK3BDEVICE_EXPORT_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef LIBK3BDEVICE_EXPORT_DEPRECATED_EXPORT
#  define LIBK3BDEVICE_EXPORT_DEPRECATED_EXPORT LIBK3BDEVICE_EXPORT LIBK3BDEVICE_EXPORT_DEPRECATED
#endif

#ifndef LIBK3BDEVICE_EXPORT_DEPRECATED_NO_EXPORT
#  define LIBK3BDEVICE_EXPORT_DEPRECATED_NO_EXPORT K3BDEVICE_NO_EXPORT LIBK3BDEVICE_EXPORT_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef K3BDEVICE_NO_DEPRECATED
#    define K3BDEVICE_NO_DEPRECATED
#  endif
#endif

#endif /* LIBK3BDEVICE_EXPORT_H */
