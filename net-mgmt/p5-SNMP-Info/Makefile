# Created by: arved
# $FreeBSD$

PORTNAME=	SNMP-Info
PORTVERSION=	3.54
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	jadawin@FreeBSD.org
COMMENT=	Perl5 module for gathering information from network devices

LICENSE=	BSD3CLAUSE

LIB_DEPENDS=	libnetsnmp.so:net-mgmt/net-snmp
RUN_DEPENDS=	p5-PPI>0:textproc/p5-PPI \
		p5-Module-Info>0:devel/p5-Module-Info \
		p5-Class-ISA>0:devel/p5-Class-ISA
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild
NO_ARCH=	yes

.include <bsd.port.mk>
