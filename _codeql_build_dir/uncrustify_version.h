/**
 * @file uncrustify_version.h
 * Simply defines UNCRUSTIFY_VERSION.
 * I don't particularly like how autoconf and friends handle the version...
 *
 * @author  Ben Gardner
 * @license GPL v2+
 */
#ifndef UNCRUSTIFY_VERSION_H_INCLUDED
#define UNCRUSTIFY_VERSION_H_INCLUDED

#ifdef DEBUG
#define UNCRUSTIFY_VERSION    "Uncrustify_d-35b4585"
#else
#define UNCRUSTIFY_VERSION    "Uncrustify-35b4585"
#endif

#endif /* UNCRUSTIFY_VERSION_H_INCLUDED */
