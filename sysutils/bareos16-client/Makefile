# $FreeBSD$

PORTNAME=	bareos16
PORTREVISION=	0
PKGNAMESUFFIX=	-client

COMMENT=	Backup archiving recovery open sourced (client)

BROKEN_aarch64=	Fails to link: missing sbrk

WITH_CLIENT_ONLY=yes
USE_RC_SUBR=	bareos-fd

PLIST=		${PKGDIR}/pkg-plist.client
MASTERDIR=	${.CURDIR}/../../sysutils/bareos16-server

OPTIONS_DEFINE=	NLS PYTHON LMDB SCSICRYPTO
OPTIONS_DEFAULT=#
LMDB_DESC=	Enable build of LMDB support

.include "${MASTERDIR}/Makefile"
