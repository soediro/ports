# Created by: Dave Cottlehuber <dave@ideegeo.com>
# $FreeBSD$

PORTNAME=	lava
PORTVERSION=	1.0.0
# PORTREVISION=	0
CATEGORIES=	sysutils

MAINTAINER=	dave@iwantmyname.com
COMMENT=	Keeps your CouchDB views molten hot

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	jq:textproc/jq \
		curl:ftp/curl

USE_GITHUB=	yes
GH_ACCOUNT=	iwantmyname

NO_BUILD=	yes
NO_ARCH=	yes

PLIST_FILES=	bin/${PORTNAME}.sh
PORTDOCS=	README.md

do-install:
		${MKDIR} ${STAGEDIR}${DOCSDIR}
		${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}/
		${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME}.sh \
			${STAGEDIR}${PREFIX}/bin/${PORTNAME}.sh

.include <bsd.port.mk>
