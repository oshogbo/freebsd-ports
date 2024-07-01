PKGNAMESUFFIX=	-litle

COMMENT=	Firmware Burning and Diagnostics Tools for Mellanox devices (static without curl)

CONFLICTS_INSTALL=	mstflint

MASTERDIR=	${.CURDIR}/../mstflint

PLIST=		${.CURDIR}/pkg-plist

OPTIONS_EXCLUDE=   FWMANAGER ADAB

EXTRA_PATCHES+= ${.CURDIR}/files/extrat-LITE-patch-Makefile.am \
		${.CURDIR}/files/extrat-LITE-patch-ext_libs-json-Makefile.am \
		${.CURDIR}/files/extrat-LITE-patch-common-Makefile.am

post-install:
	@echo ""

.include "${MASTERDIR}/Makefile"

CONFIGURE_ARGS=    --enable-all-static --disable-dc \
		   --disable-openssl --disable-inband
