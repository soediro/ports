# $FreeBSD$

PORTNAME=	kontactinterface
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE glue for embedding KParts into Kontact

LICENSE=	LGPL21

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons ecm \
		emoticons i18n iconthemes init itemmodels itemviews jobwidgets \
		kdelibs4support kio parts service sonnet textwidgets \
		widgetsaddons windowsystem xmlgui
USE_QT5=	core dbus gui network widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
