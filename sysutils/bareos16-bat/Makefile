# $FreeBSD$

PORTNAME=	bareos16
PKGNAMESUFFIX=	-bat
PORTREVISION=	0

COMMENT=	Backup archiving recovery open sourced (GUI)

LIB_DEPENDS+=	libqwt.so:x11-toolkits/qwt5 \
		libbareos.so:sysutils/bareos16-client

CONFLICTS=	bacula*-bat-* bareos-bat-*

USES=		pkgconfig desktop-file-utils
USE_QT4=	qmake_build uic_build moc_build rcc_build
WITH_BAT=	yes

PLIST=		${.CURDIR}/pkg-plist
MAKE_ENV+=	MAKEOBJDIRPREFIX=/

MASTERDIR=	${.CURDIR}/../../sysutils/bareos16-server

CONFIGURE_ARGS+=	--enable-bat \
			--with-qwt=${LOCALBASE}/lib \
			--disable-build-dird \
			--disable-build-stored \
			--enable-client-only

OPTIONS_DEFINE=	OPENSSL
OPTIONS_DEFAULT=OPENSSL

.include "${MASTERDIR}/Makefile"
