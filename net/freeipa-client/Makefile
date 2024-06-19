PORTNAME=	freeipa-client
DISTVERSION=	4.11.0
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	https://releases.pagure.org/freeipa/
DISTNAME=	freeipa-${DISTVERSION}

MAINTAINER=	xavier.beaudouin@klarasystems.com
COMMENT=	FreeIPA Client tools
WWW=		https://www.freeipa.org/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pip>0:devel/py-pip@${PY_FLAVOR} \
		samba416>0:net/samba416 \
		talloc>0:devel/talloc \
		sssd2>0:security/sssd2

LIB_DEPENDS=	libcmocka.so:sysutils/cmocka \
		libcurl.so:ftp/curl \
		libini_config.so:devel/ding-libs \
		libjansson.so:devel/jansson \
		libnspr4.so:devel/nspr \
		libnss3.so:security/nss \
		libpopt.so:devel/popt \
		libpwquality.so:security/libpwquality \
		libsasl2.so:security/cyrus-sasl2 \
		libtalloc.so:devel/talloc \
		libxmlrpc.so:net/xmlrpc-c

USES=		autoreconf gettext gmake gssapi:mit ldap libtool \
		localbase:ldflags pkgconfig python

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share
CFLAGS=-I/usr/local/include/samba4/
CONFIGURE_ARGS=	--disable-dependency-tracking \
		--with-ipaplatform=freebsd \
		--without-ipatests \


# Don't bytecode python files
MAKE_ENV=	PYTHONDONTWRITEBYTECODE=1

# Remove all systemd dependant things
EXTRACT_AFTER_ARGS=	--exclude client/systemd --exclude daemons/dnssec \
			--exclude daemons/ipa-otpd --exclude \
			daemons/ipa-slapi-plugins --exclude init/systemd \
			--exclude init/tmpfilesd

# Make sample configuration file
post-install:
	@${MV} ${STAGEDIR}${PREFIX}/etc/ipa/epn.conf ${STAGEDIR}${PREFIX}/etc/ipa/epn.conf.sample

.include <bsd.port.mk>
