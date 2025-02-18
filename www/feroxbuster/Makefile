PORTNAME=	feroxbuster
DISTVERSIONPREFIX=	v
DISTVERSION=	2.10.3
CATEGORIES=	www security

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Fast, simple, recursive content discovery tool
WWW=		https://epi052.github.io/feroxbuster/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_i386=	compilation fails: error: undefined symbol: __atomic_is_lock_free

USES=		cargo gmake perl5
USE_PERL5=	build

USE_GITHUB=	yes
GH_ACCOUNT=	epi052

CARGO_CRATES=	addr2line-0.21.0 \
		adler-1.0.2 \
		ahash-0.8.11 \
		aho-corasick-1.1.3 \
		anstream-0.6.13 \
		anstyle-1.0.6 \
		anstyle-parse-0.2.3 \
		anstyle-query-1.0.2 \
		anstyle-wincon-3.0.2 \
		anyhow-1.0.82 \
		ascii-canvas-3.0.0 \
		assert-json-diff-2.0.2 \
		assert_cmd-2.0.14 \
		async-channel-1.9.0 \
		async-channel-2.2.1 \
		async-executor-1.11.0 \
		async-global-executor-2.4.1 \
		async-io-1.13.0 \
		async-io-2.3.2 \
		async-lock-2.8.0 \
		async-lock-3.3.0 \
		async-object-pool-0.1.4 \
		async-process-1.8.1 \
		async-signal-0.2.6 \
		async-std-1.12.0 \
		async-task-4.7.0 \
		async-trait-0.1.80 \
		atomic-waker-1.1.2 \
		autocfg-1.2.0 \
		backtrace-0.3.71 \
		base64-0.21.7 \
		basic-cookies-0.1.5 \
		bit-set-0.5.3 \
		bit-vec-0.6.3 \
		bitflags-1.3.2 \
		bitflags-2.5.0 \
		block-buffer-0.10.4 \
		blocking-1.5.1 \
		bstr-1.9.1 \
		bumpalo-3.16.0 \
		byteorder-1.5.0 \
		bytes-1.6.0 \
		castaway-0.1.2 \
		cc-1.0.95 \
		cfg-if-1.0.0 \
		cfg_aliases-0.1.1 \
		clap-4.5.4 \
		clap_builder-4.5.2 \
		clap_complete-4.5.2 \
		clap_lex-0.7.0 \
		colorchoice-1.0.0 \
		concurrent-queue-2.4.0 \
		console-0.15.8 \
		core-foundation-0.9.4 \
		core-foundation-sys-0.8.6 \
		cpufeatures-0.2.12 \
		crc32fast-1.4.0 \
		crossbeam-deque-0.8.5 \
		crossbeam-epoch-0.9.18 \
		crossbeam-utils-0.8.19 \
		crossterm-0.27.0 \
		crossterm_winapi-0.9.1 \
		crunchy-0.2.2 \
		crypto-common-0.1.6 \
		cssparser-0.31.2 \
		cssparser-macros-0.6.1 \
		ctrlc-3.4.4 \
		curl-0.4.46 \
		curl-sys-0.4.72+curl-8.6.0 \
		deranged-0.3.11 \
		derive_more-0.99.17 \
		difflib-0.4.0 \
		digest-0.10.7 \
		dirs-5.0.1 \
		dirs-next-2.0.0 \
		dirs-sys-0.4.1 \
		dirs-sys-next-0.1.2 \
		doc-comment-0.3.3 \
		dtoa-1.0.9 \
		dtoa-short-0.3.4 \
		ego-tree-0.6.2 \
		either-1.11.0 \
		ena-0.14.2 \
		encode_unicode-0.3.6 \
		encoding_rs-0.8.34 \
		env_logger-0.10.2 \
		equivalent-1.0.1 \
		errno-0.3.8 \
		event-listener-2.5.3 \
		event-listener-3.1.0 \
		event-listener-4.0.3 \
		event-listener-5.3.0 \
		event-listener-strategy-0.4.0 \
		event-listener-strategy-0.5.1 \
		fastrand-1.9.0 \
		fastrand-2.0.2 \
		filetime-0.2.23 \
		fixedbitset-0.4.2 \
		flate2-1.0.29 \
		float-cmp-0.9.0 \
		fnv-1.0.7 \
		foreign-types-0.3.2 \
		foreign-types-shared-0.1.1 \
		form_urlencoded-1.2.1 \
		fuchsia-cprng-0.1.1 \
		futf-0.1.5 \
		futures-0.3.30 \
		futures-channel-0.3.30 \
		futures-core-0.3.30 \
		futures-executor-0.3.30 \
		futures-io-0.3.30 \
		futures-lite-1.13.0 \
		futures-lite-2.3.0 \
		futures-macro-0.3.30 \
		futures-sink-0.3.30 \
		futures-task-0.3.30 \
		futures-util-0.3.30 \
		fxhash-0.2.1 \
		gaoya-0.2.0 \
		generic-array-0.14.7 \
		getopts-0.2.21 \
		getrandom-0.2.14 \
		gimli-0.28.1 \
		gloo-timers-0.2.6 \
		h2-0.3.26 \
		hashbrown-0.14.3 \
		hermit-abi-0.3.9 \
		html5ever-0.26.0 \
		http-0.2.12 \
		http-body-0.4.6 \
		httparse-1.8.0 \
		httpdate-1.0.3 \
		httpmock-0.6.8 \
		humantime-2.1.0 \
		hyper-0.14.28 \
		hyper-tls-0.5.0 \
		idna-0.5.0 \
		indexmap-2.2.6 \
		indicatif-0.17.8 \
		instant-0.1.12 \
		io-lifetimes-1.0.11 \
		ipnet-2.9.0 \
		is-terminal-0.4.12 \
		isahc-1.7.2 \
		itertools-0.10.5 \
		itertools-0.11.0 \
		itoa-1.0.11 \
		js-sys-0.3.69 \
		kv-log-macro-1.0.7 \
		lalrpop-0.20.2 \
		lalrpop-util-0.20.2 \
		lazy_static-1.4.0 \
		leaky-bucket-1.0.1 \
		levenshtein-1.0.5 \
		libc-0.2.153 \
		libnghttp2-sys-0.1.10+1.61.0 \
		libredox-0.1.3 \
		libz-sys-1.1.16 \
		linux-raw-sys-0.3.8 \
		linux-raw-sys-0.4.13 \
		lock_api-0.4.12 \
		log-0.4.21 \
		mac-0.1.1 \
		markup5ever-0.11.0 \
		memchr-2.7.2 \
		mime-0.3.17 \
		miniz_oxide-0.7.2 \
		mio-0.8.11 \
		native-tls-0.2.11 \
		new_debug_unreachable-1.0.6 \
		nix-0.28.0 \
		normalize-line-endings-0.3.0 \
		num-conv-0.1.0 \
		num-traits-0.2.18 \
		num_cpus-1.16.0 \
		number_prefix-0.4.0 \
		object-0.32.2 \
		once_cell-1.19.0 \
		openssl-0.10.64 \
		openssl-macros-0.1.1 \
		openssl-probe-0.1.5 \
		openssl-src-300.2.3+3.2.1 \
		openssl-sys-0.9.102 \
		option-ext-0.2.0 \
		parking-2.2.0 \
		parking_lot-0.12.2 \
		parking_lot_core-0.9.10 \
		percent-encoding-2.3.1 \
		petgraph-0.6.4 \
		phf-0.10.1 \
		phf-0.11.2 \
		phf_codegen-0.10.0 \
		phf_generator-0.10.0 \
		phf_generator-0.11.2 \
		phf_macros-0.11.2 \
		phf_shared-0.10.0 \
		phf_shared-0.11.2 \
		pico-args-0.5.0 \
		pin-project-1.1.5 \
		pin-project-internal-1.1.5 \
		pin-project-lite-0.2.14 \
		pin-utils-0.1.0 \
		piper-0.2.1 \
		pkg-config-0.3.30 \
		polling-2.8.0 \
		polling-3.7.0 \
		portable-atomic-1.6.0 \
		powerfmt-0.2.0 \
		ppv-lite86-0.2.17 \
		precomputed-hash-0.1.1 \
		predicates-3.1.0 \
		predicates-core-1.0.6 \
		predicates-tree-1.0.9 \
		proc-macro2-1.0.81 \
		quick-xml-0.23.1 \
		quote-1.0.36 \
		rand-0.3.23 \
		rand-0.4.6 \
		rand-0.8.5 \
		rand_chacha-0.3.1 \
		rand_core-0.3.1 \
		rand_core-0.4.2 \
		rand_core-0.6.4 \
		rand_pcg-0.3.1 \
		random_choice-0.3.2 \
		rayon-1.10.0 \
		rayon-core-1.12.1 \
		rdrand-0.4.0 \
		redox_syscall-0.4.1 \
		redox_syscall-0.5.1 \
		redox_users-0.4.5 \
		regex-1.10.4 \
		regex-automata-0.4.6 \
		regex-syntax-0.8.3 \
		reqwest-0.11.27 \
		rlimit-0.10.1 \
		rustc-demangle-0.1.23 \
		rustix-0.37.27 \
		rustix-0.38.34 \
		rustls-pemfile-1.0.4 \
		rustversion-1.0.15 \
		ryu-1.0.17 \
		same-file-1.0.6 \
		schannel-0.1.23 \
		scopeguard-1.2.0 \
		scraper-0.18.1 \
		seahash-4.1.0 \
		security-framework-2.10.0 \
		security-framework-sys-2.10.0 \
		selectors-0.25.0 \
		self_update-0.36.0 \
		semver-1.0.22 \
		serde-1.0.198 \
		serde_derive-1.0.198 \
		serde_json-1.0.116 \
		serde_regex-1.1.0 \
		serde_spanned-0.6.5 \
		serde_urlencoded-0.7.1 \
		servo_arc-0.3.0 \
		sha-1-0.10.1 \
		shingles-0.1.1 \
		signal-hook-0.3.17 \
		signal-hook-mio-0.2.3 \
		signal-hook-registry-1.4.2 \
		similar-2.5.0 \
		siphasher-0.3.11 \
		slab-0.4.9 \
		sluice-0.5.5 \
		smallvec-1.13.2 \
		socket2-0.4.10 \
		socket2-0.5.6 \
		stable_deref_trait-1.2.0 \
		string_cache-0.8.7 \
		string_cache_codegen-0.5.2 \
		strsim-0.11.1 \
		syn-1.0.109 \
		syn-2.0.60 \
		sync_wrapper-0.1.2 \
		system-configuration-0.5.1 \
		system-configuration-sys-0.5.0 \
		tar-0.4.40 \
		tempfile-3.10.1 \
		tendril-0.4.3 \
		term-0.7.0 \
		termcolor-1.4.1 \
		terminal_size-0.3.0 \
		termtree-0.4.1 \
		thiserror-1.0.59 \
		thiserror-impl-1.0.59 \
		time-0.3.36 \
		time-core-0.1.2 \
		tiny-keccak-2.0.2 \
		tinyvec-1.6.0 \
		tinyvec_macros-0.1.1 \
		tokio-1.37.0 \
		tokio-macros-2.2.0 \
		tokio-native-tls-0.3.1 \
		tokio-socks-0.5.1 \
		tokio-util-0.7.10 \
		toml-0.8.12 \
		toml_datetime-0.6.5 \
		toml_edit-0.22.12 \
		tower-service-0.3.2 \
		tracing-0.1.40 \
		tracing-attributes-0.1.27 \
		tracing-core-0.1.32 \
		tracing-futures-0.2.5 \
		triomphe-0.1.11 \
		try-lock-0.2.5 \
		typenum-1.17.0 \
		unicode-bidi-0.3.15 \
		unicode-ident-1.0.12 \
		unicode-normalization-0.1.23 \
		unicode-width-0.1.11 \
		unicode-xid-0.2.4 \
		url-2.5.0 \
		urlencoding-2.1.3 \
		utf-8-0.7.6 \
		utf8parse-0.2.1 \
		uuid-1.8.0 \
		value-bag-1.8.1 \
		vcpkg-0.2.15 \
		version_check-0.9.4 \
		wait-timeout-0.2.0 \
		waker-fn-1.1.1 \
		walkdir-2.5.0 \
		want-0.3.1 \
		wasi-0.11.0+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.92 \
		wasm-bindgen-backend-0.2.92 \
		wasm-bindgen-futures-0.4.42 \
		wasm-bindgen-macro-0.2.92 \
		wasm-bindgen-macro-support-0.2.92 \
		wasm-bindgen-shared-0.2.92 \
		web-sys-0.3.69 \
		winapi-0.3.9 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.8 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		windows-sys-0.48.0 \
		windows-sys-0.52.0 \
		windows-targets-0.48.5 \
		windows-targets-0.52.5 \
		windows_aarch64_gnullvm-0.48.5 \
		windows_aarch64_gnullvm-0.52.5 \
		windows_aarch64_msvc-0.48.5 \
		windows_aarch64_msvc-0.52.5 \
		windows_i686_gnu-0.48.5 \
		windows_i686_gnu-0.52.5 \
		windows_i686_gnullvm-0.52.5 \
		windows_i686_msvc-0.48.5 \
		windows_i686_msvc-0.52.5 \
		windows_x86_64_gnu-0.48.5 \
		windows_x86_64_gnu-0.52.5 \
		windows_x86_64_gnullvm-0.48.5 \
		windows_x86_64_gnullvm-0.52.5 \
		windows_x86_64_msvc-0.48.5 \
		windows_x86_64_msvc-0.52.5 \
		winnow-0.6.6 \
		winreg-0.50.0 \
		xattr-1.3.1 \
		zerocopy-0.7.32 \
		zerocopy-derive-0.7.32 \
		zip-0.6.6

OPENSSLINC=	/usr/include
OPENSSLLIB=	/usr/lib

PLIST_FILES=	bin/${PORTNAME}

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
