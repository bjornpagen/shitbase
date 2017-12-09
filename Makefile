# shitbase makefile

SUBDIRS = cat echo

all:
	@for i in ${SUBDIRS}; do cd $$i; ${MAKE} || exit; cd ..; done
	
clean:
	@for i in ${SUBDIRS}; do cd $$i; echo "removing $$i" ; rm $$i || exit; cd ..; done

