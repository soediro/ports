# Created by: Thomas Bartelmess <thomas@bartelmess.io>
# $FreeBSD$

PORTNAME=	graylog
PORTVERSION=	2.1.0
CATEGORIES=	sysutils java
MASTER_SITES=	https://packages.graylog2.org/releases/graylog/

MAINTAINER=	thomas@bartelmess.io
COMMENT=	Tool for centralized log collection

LICENSE=	GPLv3+

RUN_DEPENDS=	elasticsearch2>=2.3.0:textproc/elasticsearch2 \
		mongodb>=2.4:databases/mongodb

USES=		tar:tgz
USE_JAVA=	yes
JAVA_VERSION=	1.8+
JAVA_EXTRACT=	yes
JAVA_RUN=	yes
NO_ARCH=	yes
NO_BUILD=	yes

GRAYLOG_DIR=	/var/db/${PORTNAME}

USE_RC_SUBR=	${PORTNAME}

GRAYLOGUSER?=	${PORTNAME}
GRAYLOGGROUP?=	${GRAYLOGUSER}
USERS=		${GRAYLOGUSER}
GROUPS=		${GRAYLOGGROUP}

SUB_LIST=	GRAYLOGUSER=${GRAYLOGUSER} \
		GRAYLOGGROUP=${GRAYLOGGROUP} \
		JAVA_HOME=${JAVA_HOME} \
		GRAYLOG_DIR=${GRAYLOG_DIR} \
		ETCDIR=${ETCDIR}

do-install:
	${MKDIR} \
		${STAGEDIR}${GRAYLOG_DIR} \
		${STAGEDIR}${ETCDIR} \
		${STAGEDIR}${JAVASHAREDIR}/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/graylog.jar ${STAGEDIR}${JAVASHAREDIR}/${PORTNAME}/
	(cd ${WRKSRC}/plugin && ${COPYTREE_SHARE} . ${STAGEDIR}${JAVASHAREDIR}/${PORTNAME}/ )
	${INSTALL_DATA} ${WRKSRC}/graylog.conf.example ${STAGEDIR}${ETCDIR}
	${INSTALL_DATA} ${FILESDIR}/graylog_logging.xml ${STAGEDIR}${ETCDIR}

.include <bsd.port.mk>
