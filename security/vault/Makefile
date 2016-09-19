# $FreeBSD$

PORTNAME=	vault
PORTVERSION=	0.6.2
DISTVERSIONPREFIX=	v
CATEGORIES=	security

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Tool for securely accessing secrets

LICENSE=	MPL

BUILD_DEPENDS=	go>=1.7.1:lang/go

USE_GITHUB=	yes
GH_ACCOUNT=	hashicorp

STRIP=		# stripping can break go binaries

USE_RC_SUBR=	vault

USERS=		vault
GROUPS=		vault

PLIST_FILES=	bin/${PORTNAME}

# GIT_COMMIT = git rev-parse HEAD

post-patch:
	@${REINPLACE_CMD} -e 's|PORTVERSION|${PORTVERSION}|g' ${WRKSRC}/version/version.go
	@${MV} ${WRKSRC}/vendor ${WRKSRC}/src
	@${MKDIR} ${WRKSRC}/src/github.com/${GH_ACCOUNT}/${PORTNAME}
	@cd ${WRKSRC} ; \
	${MV} .gitignore .travis.yml CHANGELOG.md CONTRIBUTING.md \
	LICENSE Makefile README.md api audit builtin cli command helper http \
	logical main.go main_test.go make.bat meta physical scripts shamir terraform \
	vault version website \
	src/github.com/${GH_ACCOUNT}/${PORTNAME}

do-build:
	@cd ${WRKSRC}/src/github.com/${GH_ACCOUNT}/${PORTNAME}; \
		${SETENV} ${BUILD_ENV} GOPATH=${WRKSRC} go build -o bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/github.com/${GH_ACCOUNT}/${PORTNAME}/bin/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
