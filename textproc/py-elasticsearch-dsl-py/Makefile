# Created by: Dan Langille <dvl@FreeBSD.org>
# $FreeBSD$

PORTNAME=	elasticsearch-dsl-py
PORTVERSION=	0.0.11
PORTREVISION=	3
CATEGORIES=	textproc python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	High level Python client for Elasticsearch

LICENSE=	APACHE20

DEPRECATED=	ElasticSearch 1.x End of Life
EXPIRATION_DATE=	2018-06-14

RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}elasticsearch>=1.3.0:textproc/py-elasticsearch@${FLAVOR}
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}dateutil>=0:devel/py-dateutil@${FLAVOR}

USE_GITHUB=	yes
GH_ACCOUNT=	elastic

USES=		python:2.7
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
