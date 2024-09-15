SRCBRANCH ?= "release/2.28/master"
PV = "2.28"
SRCREV_glibc ?= "3c03baca37fdcb52c3881e653ca392bba7a99c2b"
SRCREV_localedef ?= "c328777219ccc480be3112cf807217ca6b570b64"

GLIBC_GIT_URI ?= "git://sourceware.org/git/glibc.git"

UPSTREAM_CHECK_GITTAGREGEX = "(?P<pver>\d+\.\d+(\.(?!90)\d+)*)"
