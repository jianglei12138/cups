/* config.h.  Generated from config.h.in by configure.  */
/*
 * "$Id: config.h.in 12687 2015-06-03 17:19:04Z msweet $"
 *
 * Configuration file for CUPS.
 *
 * Copyright 2007-2015 by Apple Inc.
 * Copyright 1997-2007 by Easy Software Products.
 *
 * These coded instructions, statements, and computer programs are the
 * property of Apple Inc. and are protected by Federal copyright
 * law.  Distribution and use rights are outlined in the file "LICENSE.txt"
 * which should have been included with this file.  If this file is
 * file is missing or damaged, see the license at "http://www.cups.org/".
 */

#ifndef _CUPS_CONFIG_H_
#define _CUPS_CONFIG_H_

/*
 * Version of software...
 */

#define CUPS_SVERSION "CUPS v2.1.3"
#define CUPS_MINIMAL "CUPS/2.1.3"


/*
 * Default user and groups...
 */

#define CUPS_DEFAULT_USER "system"
#define CUPS_DEFAULT_GROUP "system"
#define CUPS_DEFAULT_SYSTEM_GROUPS "root"
#define CUPS_DEFAULT_PRINTOPERATOR_AUTH "@SYSTEM"
#define CUPS_DEFAULT_SYSTEM_AUTHKEY ""


/*
 * Default file permissions...
 */

#define CUPS_DEFAULT_CONFIG_FILE_PERM 0640
#define CUPS_DEFAULT_LOG_FILE_PERM 0644


/*
 * Default logging settings...
 */

#define CUPS_DEFAULT_LOG_LEVEL "warn"
#define CUPS_DEFAULT_ACCESS_LOG_LEVEL "none"


/*
 * Default fatal error settings...
 */

#define CUPS_DEFAULT_FATAL_ERRORS "config"


/*
 * Default browsing settings...
 */

#define CUPS_DEFAULT_BROWSING 1
#define CUPS_DEFAULT_BROWSE_LOCAL_PROTOCOLS ""
#define CUPS_DEFAULT_DEFAULT_SHARED 1


/*
 * Default IPP port...
 */

#define CUPS_DEFAULT_IPP_PORT 631


/*
 * Default printcap file...
 */

#define CUPS_DEFAULT_PRINTCAP "/etc/printcap"


/*
 * Default Samba and LPD config files...
 */

#define CUPS_DEFAULT_SMB_CONFIG_FILE ""
#define CUPS_DEFAULT_LPD_CONFIG_FILE ""


/*
 * Default MaxCopies value...
 */

#define CUPS_DEFAULT_MAX_COPIES 9999


/*
 * Do we have domain socket support, and if so what is the default one?
 */

#define CUPS_DEFAULT_DOMAINSOCKET "/system/usr/root/var/run/cups/cups.sock"


/*
 * Default WebInterface value...
 */

#define CUPS_DEFAULT_WEBIF 1


/*
 * Where are files stored?
 *
 * Note: These are defaults, which can be overridden by environment
 *       variables at run-time...
 */

#define CUPS_BINDIR "/system/usr/root/bin"
#define CUPS_CACHEDIR "/system/usr/root/var/cache/cups"
#define CUPS_DATADIR "/system/usr/root/share/cups"
#define CUPS_DOCROOT "/system/usr/root/share/doc/cups"
#define CUPS_FONTPATH "/system/usr/root/share/cups/fonts"
#define CUPS_LOCALEDIR "/system/usr/root/share/locale"
#define CUPS_LOGDIR "/system/usr/root/var/log/cups"
#define CUPS_REQUESTS "/system/usr/root/var/spool/cups"
#define CUPS_SBINDIR "/system/usr/root/sbin"
#define CUPS_SERVERBIN "/system/usr/root/lib/cups"
#define CUPS_SERVERROOT "/system/usr/root/etc/cups"
#define CUPS_STATEDIR "/system/usr/root/var/run/cups"


/*
 * Do we have posix_spawn?
 */

/* #undef HAVE_POSIX_SPAWN */


/*
 * Do we have ZLIB?
 */

#define HAVE_LIBZ 1
#define HAVE_INFLATECOPY 1


/*
 * Do we have PAM stuff?
 */

#define HAVE_LIBPAM 0
/* #undef HAVE_PAM_PAM_APPL_H */
/* #undef HAVE_PAM_SET_ITEM */
/* #undef HAVE_PAM_SETCRED */


/*
 * Do we have <shadow.h>?
 */

/* #undef HAVE_SHADOW_H */


/*
 * Do we have <crypt.h>?
 */

/* #undef HAVE_CRYPT_H */


/*
 * Use <stdint.h>?
 */

#define HAVE_STDINT_H 1


/*
 * Use <string.h>, <strings.h>, and/or <bstring.h>?
 */

#define HAVE_STRING_H 1
#define HAVE_STRINGS_H 1
/* #undef HAVE_BSTRING_H */


/*
 * Do we have the long long type?
 */

#define HAVE_LONG_LONG 1

#ifdef HAVE_LONG_LONG
#  define CUPS_LLFMT	"%lld"
#  define CUPS_LLCAST	(long long)
#else
#  define CUPS_LLFMT	"%ld"
#  define CUPS_LLCAST	(long)
#endif /* HAVE_LONG_LONG */


/*
 * Do we have the strtoll() function?
 */

/*
 * Do we have the strXXX() functions?
 */

#define HAVE_STRDUP 1
#define HAVE_STRLCAT 1
#define HAVE_STRLCPY 1


/*
 * Do we have the geteuid() function?
 */

#define HAVE_GETEUID 1


/*
 * Do we have the setpgid() function?
 */

#define HAVE_SETPGID 1


/*
 * Do we have the vsyslog() function?
 */

#define HAVE_VSYSLOG 1


/*
 * Do we have the ASL functions?
 */

/* #undef HAVE_ASL_H */


/*
 * Do we have the systemd journal functions?
 */

/* #undef HAVE_SYSTEMD_SD_JOURNAL_H */


/*
 * Do we have the (v)snprintf() functions?
 */

#define HAVE_SNPRINTF 1
#define HAVE_VSNPRINTF 1


/*
 * What signal functions to use?
 */

/* #undef HAVE_SIGSET */
#define HAVE_SIGACTION 1


/*
 * What wait functions to use?
 */

#define HAVE_WAITPID 1
#define HAVE_WAIT3 1


/*
 * Do we have the mallinfo function and malloc.h?
 */

/* #undef HAVE_MALLINFO */
#define HAVE_MALLOC_H 1


/*
 * Do we have the POSIX ACL functions?
 */

/* #undef HAVE_ACL_INIT */


/*
 * Do we have the langinfo.h header file?
 */

/* #undef HAVE_LANGINFO_H */


/*
 * Which encryption libraries do we have?
 */

/* #undef HAVE_CDSASSL */
/* #undef HAVE_GNUTLS */
/* #undef HAVE_SSPISSL */
/* #undef HAVE_SSL */


/*
 * Do we have the gnutls_transport_set_pull_timeout_function function?
 */

/* #undef HAVE_GNUTLS_TRANSPORT_SET_PULL_TIMEOUT_FUNCTION */


/*
 * Do we have the gnutls_priority_set_direct function?
 */

/* #undef HAVE_GNUTLS_PRIORITY_SET_DIRECT */


/*
 * What Security framework headers do we have?
 */

/* #undef HAVE_AUTHORIZATION_H */
/* #undef HAVE_SECBASEPRIV_H */
/* #undef HAVE_SECCERTIFICATE_H */
/* #undef HAVE_SECIDENTITYSEARCHPRIV_H */
/* #undef HAVE_SECITEM_H */
/* #undef HAVE_SECITEMPRIV_H */
/* #undef HAVE_SECPOLICY_H */
/* #undef HAVE_SECPOLICYPRIV_H */
/* #undef HAVE_SECURETRANSPORTPRIV_H */


/*
 * Do we have the cssmErrorString function?
 */

/* #undef HAVE_CSSMERRORSTRING */


/*
 * Do we have the SecGenerateSelfSignedCertificate function?
 */

/* #undef HAVE_SECGENERATESELFSIGNEDCERTIFICATE */


/*
 * Do we have the SecKeychainOpen function?
 */

/* #undef HAVE_SECKEYCHAINOPEN */


/*
 * Do we have (a working) SSLSetEnabledCiphers function?
 */

/* #undef HAVE_SSLSETENABLEDCIPHERS */


/*
 * Do we have libpaper?
 */

/* #undef HAVE_LIBPAPER */


/*
 * Do we have mDNSResponder for DNS Service Discovery (aka Bonjour)?
 */

/* #undef HAVE_DNSSD */


/*
 * Do we have Avahi for DNS Service Discovery (aka Bonjour)?
 */

/* #undef HAVE_AVAHI */


/*
 * Do we have <sys/ioctl.h>?
 */

#define HAVE_SYS_IOCTL_H 1


/*
 * Does the "stat" structure contain the "st_gen" member?
 */

/* #undef HAVE_ST_GEN */


/*
 * Does the "tm" structure contain the "tm_gmtoff" member?
 */

#define HAVE_TM_GMTOFF 1


/*
 * Do we have rresvport_af()?
 */

/* #undef HAVE_RRESVPORT_AF */


/*
 * Do we have getaddrinfo()?
 */

#define HAVE_GETADDRINFO 1


/*
 * Do we have getnameinfo()?
 */

#define HAVE_GETNAMEINFO 1


/*
 * Do we have getifaddrs()?
 */

/* #undef HAVE_GETIFADDRS */


/*
 * Do we have hstrerror()?
 */

#define HAVE_HSTRERROR 1


/*
 * Do we have res_init()?
 */

#define HAVE_RES_INIT 1


/*
 * Do we have <resolv.h>
 */

#define HAVE_RESOLV_H 1


/*
 * Do we have the <sys/sockio.h> header file?
 */

/* #undef HAVE_SYS_SOCKIO_H */


/*
 * Does the sockaddr structure contain an sa_len parameter?
 */

/* #undef HAVE_STRUCT_SOCKADDR_SA_LEN */


/*
 * Do we have pthread support?
 */

#define HAVE_PTHREAD_H 1


/*
 * Do we have launchd support?
 */

/* #undef HAVE_LAUNCH_H */
/* #undef HAVE_LAUNCHD */
/* #undef HAVE_LAUNCH_ACTIVATE_SOCKET */


/*
 * Do we have systemd support?
 */

/* #undef HAVE_SYSTEMD */


/*
 * Various scripting languages...
 */

#define HAVE_JAVA 1
#define CUPS_JAVA "/usr/bin/java"
#define HAVE_PERL 1
#define CUPS_PERL "/usr/bin/perl"
/* #undef HAVE_PHP */
#define CUPS_PHP ""
#define HAVE_PYTHON 1
#define CUPS_PYTHON "/usr/bin/python"


/*
 * Location of the poppler/Xpdf pdftops program...
 */

/* #undef HAVE_PDFTOPS */
/* #undef HAVE_PDFTOPS_WITH_ORIGPAGESIZES */
#define CUPS_PDFTOPS	"/usr/bin/pdftops"


/*
 * Location of the Ghostscript gs program...
 */

/* #undef HAVE_GHOSTSCRIPT */
/* #undef HAVE_GHOSTSCRIPT_PS2WRITE */
#define CUPS_GHOSTSCRIPT "/usr/bin/gs"


/*
 * Do we have CoreFoundation public and private headers?
 */

/* #undef HAVE_COREFOUNDATION_H */
/* #undef HAVE_CFPRIV_H */
/* #undef HAVE_CFBUNDLEPRIV_H */


/*
 * Do we have ApplicationServices public headers?
 */

/* #undef HAVE_APPLICATIONSERVICES_H */


/*
 * Do we have the SCDynamicStoreCopyComputerName function?
 */

/* #undef HAVE_SCDYNAMICSTORECOPYCOMPUTERNAME */


/*
 * Do we have OS X 10.4's mbr_XXX functions?
 */

/* #undef HAVE_MEMBERSHIP_H */
/* #undef HAVE_MEMBERSHIPPRIV_H */
/* #undef HAVE_MBR_UID_TO_UUID */


/*
 * Do we have Darwin's notify_post header and function?
 */

/* #undef HAVE_NOTIFY_H */
/* #undef HAVE_NOTIFY_POST */


/*
 * Do we have DBUS?
 */

/* #undef HAVE_DBUS */
/* #undef HAVE_DBUS_MESSAGE_ITER_INIT_APPEND */
/* #undef HAVE_DBUS_THREADS_INIT */


/*
 * Do we have the GSSAPI support library (for Kerberos support)?
 */

/* #undef HAVE_GSS_ACQUIRE_CRED_EX_F */
/* #undef HAVE_GSS_C_NT_HOSTBASED_SERVICE */
/* #undef HAVE_GSS_GSSAPI_H */
/* #undef HAVE_GSS_GSSAPI_SPI_H */
/* #undef HAVE_GSSAPI */
/* #undef HAVE_GSSAPI_GSSAPI_H */
/* #undef HAVE_GSSAPI_H */


/*
 * Default GSS service name...
 */

#define CUPS_DEFAULT_GSSSERVICENAME "host"


/*
 * Select/poll interfaces...
 */

#define HAVE_POLL 1
#define HAVE_EPOLL 1
/* #undef HAVE_KQUEUE */


/*
 * Do we have the <dlfcn.h> header?
 */

/* #undef HAVE_DLFCN_H */


/*
 * Do we have <sys/param.h>?
 */

#define HAVE_SYS_PARAM_H 1


/*
 * Do we have <sys/ucred.h>?
 */

/* #undef HAVE_SYS_UCRED_H */


/*
 * Do we have removefile()?
 */

/* #undef HAVE_REMOVEFILE */


/*
 * Do we have <sandbox.h>?
 */

/* #undef HAVE_SANDBOX_H */


/*
 * Which random number generator function to use...
 */

#define HAVE_ARC4RANDOM 1
/* #undef HAVE_RANDOM */
#define HAVE_LRAND48 1

#ifdef HAVE_ARC4RANDOM
#  define CUPS_RAND() arc4random()
#  define CUPS_SRAND(v)
#elif defined(HAVE_RANDOM)
#  define CUPS_RAND() random()
#  define CUPS_SRAND(v) srandom(v)
#elif defined(HAVE_LRAND48)
#  define CUPS_RAND() lrand48()
#  define CUPS_SRAND(v) srand48(v)
#else
#  define CUPS_RAND() rand()
#  define CUPS_SRAND(v) srand(v)
#endif /* HAVE_ARC4RANDOM */


/*
 * Do we have libusb?
 */

/* #undef HAVE_LIBUSB */


/*
 * Do we have libwrap and tcpd.h?
 */

/* #undef HAVE_TCPD_H */


/*
 * Do we have <iconv.h>?
 */

#define HAVE_ICONV_H 1


/*
 * Do we have statfs or statvfs and one of the corresponding headers?
 */

#define HAVE_STATFS 1
/* #undef HAVE_STATVFS */
#define HAVE_SYS_MOUNT_H 1
#define HAVE_SYS_STATFS_H 1
/* #undef HAVE_SYS_STATVFS_H */
#define HAVE_SYS_VFS_H 1


/*
 * Location of OS X localization bundle, if any.
 */

/* #undef CUPS_BUNDLEDIR */


/*
 * Do we have XPC?
 */

/* #undef HAVE_XPC */
/* #undef HAVE_XPC_PRIVATE_H */


/*
 * Do we have Mini-XML?
 */

/* #undef HAVE_MXML_H */


/*
 * Do we have the C99 abs() function?
 */




/* CUPS Version is 1.1 */
/* #undef CUPS_1_1 */

/* CUPS Version is 1.4 or newer */
/* #undef CUPS_1_4 */

/* Use libjpeg instead of builtin jpeg decoder. */
/* #undef ENABLE_LIBJPEG */

/* Use zlib instead of builtin zlib decoder. */
/* #undef ENABLE_ZLIB */

/* Have FreeType2 include files */
/* #undef HAVE_FREETYPE_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the "cups" library (-lcups). */
#define HAVE_LIBCUPS 1

/* Define to 1 if you have the "cupsimage" library (-lcupsimage). */
#define HAVE_LIBCUPSIMAGE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* have new GfxFontType */
/* #undef HAVE_NEW_GFX_FONTTYPE */

/* Define to 1 if you have the "popen" function. */
/* #undef HAVE_POPEN */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <dirent.h> header file, and it defines "DIR".
   */
/* #undef HAVE_DIRENT_H */

/* Define to 1 if you have the <ndir.h> header file, and it defines "DIR". */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines "DIR".
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines "DIR".
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <zlib.h> header file. */
/* #undef HAVE_ZLIB_H */

/* Parser::Parser has two arguments. */
/* #undef PARSER_HAS_2_ARGS */

/* Define to 1 if you have the "poppler" library (-lpoppler). */
/* #undef HAVE_LIBPOPPLER */

/* New font type enumeration */
/* #undef FONTTYPE_ENUM2 */

/* GlobalParams::GlobalParams has a argument. */
/* #undef GLOBALPARAMS_HAS_A_ARG */

/* Have Stream::getUndecodedStream */
/* #undef HAVE_GETUNDECODEDSTREAM */

/* Have UGooString.h */
/* #undef HAVE_UGOOSTRING_H */

/* Old CharCodeToUnicode::mapToUnicode */
/* #undef OLD_MAPTOUNICODE */

/* Old GfxColorSpace::parse */
/* #undef OLD_CS_PARSE */

/* Poppler uses CMS */
/* #undef USE_CMS */

/* Poppler data dir */
/* #undef POPPLER_DATADIR */


#endif /* !_CUPS_CONFIG_H_ */

/*
 * End of "$Id: config.h.in 12687 2015-06-03 17:19:04Z msweet $".
 */
