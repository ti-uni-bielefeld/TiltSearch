// ===========================================================================
//
// Single header version of the WarpingSIMD library.
// Version: v31.0.0
// GitHub repository: https://github.com/ti-uni-bielefeld/WarpingSIMD
//
// This file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

// ===========================================================================
// LICENSE.md
// ===========================================================================
/*
# License

License agreement (version 2)

between the licensor

    Ralf Möller
    Computer Engineering
    Faculty of Technology
    Bielefeld University
    www.ti.uni-bielefeld.de

and the licensee (the user of the software and the databases)

regarding the use of the following software

- the low-level C++ template SIMD library
- the SIMD implementation of the MinWarping and the 2D-Warping methods
  for local visual homing

in the following referred to as "the software",

and on the use of the

- panoramic image databases

in the following referred to as "the databases".

1.  The licensor grants the licensee the non-exclusive,
    non-transferable, non-licensable right to use and modify the
    software and the databases. The software and the databases are
    licensed free of charge.

2.  The licensee agrees not to transfer or to disclose the software
    and the databases in original or modified form to other
    individuals or to other institutions.

3.  The software and the databases will only be used for the
    licensee's own scientific study, scientific research, or academic
    teaching. Use for commercial or business purposes is not
    permitted. Use for any purposes with military background is not
    permitted.

4.  The licensee agrees not to use the software and the databases in
    applications where the life and health of humans and the property
    of humans or institutions is potentially endangered.

5.  The software is provided entirely in the form of source code. It
    is the sole responsibility of the licensee to check the
    correctness of all parts of the software that are used by the
    licensee. The licensee has to be able to understand the
    functionality of all parts of the software that the licensee
    uses. The licensee accepts that the software was not tested in
    depth and agrees to perform in-depth tests and to correct errors
    for all parts that are used by the licensee.

6.  The software contains code fragments taken from other software
    which is licensed by "The MIT license"
    (https://opensource.org/licenses/MIT) and code fragments from
    software help sites on the internet (e.g. stackoverflow.com). The
    software was inspired by and contains code fragments from Agner
    Fog's "Vector Class Library"
    (http://www.agner.org/optimize/#vectorclass). Agner Fog declared
    that he sees no violation of his copyright by the software in its
    present form.

7.  Because the software and the databases are provided free of
    charge, there is no warranty for the software and the databases
    (to the extent permitted by applicable law). The software
    including the databases is provided "as is" without warranty of
    any kind, without even the implied warranty of merchantability or
    fitness for a particular purpose. The entire risk of using the
    software and the databases lies with the licensee.

8.  In no event (unless required by applicable law) will the licensor
    or any contributor be liable for any claim, any sort of damage or
    any other liability arising from the use of the software and the
    databases or arising from the inability to use the software and
    the databases.

9.  The licensor is not obligated to provide any support for the
    licensee regarding the use of the software and the databases.

10. This license agreement comes into force without signatures as
    soon as the licensee obtains the software and/or the
    databases. If the licensee disagrees with any of the clauses of
    this license, the licensee is not permitted to obtain or keep the
    software and the image databases.

11. Should any provision of this license agreement be or become
    invalid, this shall not affect the validity of the remaining
    provisions. Any invalid provision shall be replaced by a valid
    provision which corresponds to the meaning and purpose of the
    invalid provision.

12. This license agreement (files LICENSE, LICENSE.md and LICENSE.doc) has to
    accompany the files of the software and the files of the
    databases. The header text of the source files referring to the
    license agreement has to remain unchanged.

13. German law applies and the place of jurisdiction is Bielefeld.
*/
// ===========================================================================
// end of LICENSE.md
// ===========================================================================

// ===========================================================================
//
// Main include file for the WarpingSIMD library.
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#pragma once
#ifndef WARPING_SIMD_H_
#define WARPING_SIMD_H_

// ===========================================================================
//
// ComplexSearch.H --
// template for complex (double, partial etc.) search
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef COMPLEX_SEARCH_H_
#define COMPLEX_SEARCH_H_

// ===========================================================================
//
// MinWarpingMatch.H --
// C++ template for match array of minWarping algorithm
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef MINWARPING_MATCH_H_
#define MINWARPING_MATCH_H_

// ===========================================================================
//
// SIMDImage.H --
// simple image classes used for implementation of SIMD computations
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef SIMD_IMAGE_H_
#define SIMD_IMAGE_H_

// ===========================================================================
//
// SIMDException.H --
// exception class for SIMD code (with location and error string)
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef SIMD_EXCEPTION_H_
#define SIMD_EXCEPTION_H_

#include <exception>
#include <string>

namespace simd {

class SIMDException : public std::exception
{
public:
  const std::string exc, loc, err, msg;

  SIMDException(const std::string &loc, const std::string &err)
    : exception(), exc("SIMDException"), loc(loc), err(err),
      msg(exc + " at " + loc + ": " + err)
  {}

  virtual ~SIMDException() throw() {}

  virtual const char *what() const throw() { return msg.c_str(); }
};

} // namespace simd

#endif

// ===========================================================================
//
// SharedSIMDPtr.H --
// smart shared pointer class for SIMD data
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef SHARED_SIMD_PTR_H_
#define SHARED_SIMD_PTR_H_

#include <assert.h>
#include <cstddef>
#include <cstdint>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tsimd.H>

#ifdef SHARED_SIMD_PTR_DEBUG_ON
#define SHARED_SIMD_PTR_DEBUG(ACTION) ACTION
#else
#define SHARED_SIMD_PTR_DEBUG(ACTION)
#endif

// NOTES:
// - SharedSIMDPtr is NOT thread-safe (no atomic counters in
//   SharedSIMDPtrDesc, no atomic manipulator of pointers etc.)

// TODO: intrusive reference counting (Alexandrescu p.167)
// TODO: (allocate common block for data and desc)
// TODO: (alignment of desc needs to be considered!)
// TODO: thread-safety (atomic counting, atomic pointer manipulation...)

namespace simd {

// -------------------------------------------------------------------------
// SharedSIMDPtrDesc
// -------------------------------------------------------------------------

// use this in .C file to initialize static members
#ifdef SHARED_SIMD_PTR_HEAP_COUNT
#define SHARED_SIMD_PTR_HEAP_COUNT_INIT                                        \
  size_t SharedSIMDPtrDesc::totalDescNo = 0;                                   \
  size_t SharedSIMDPtrBase::totalSize   = 0;
#endif

class SharedSIMDPtrDesc
{
protected:
  // number of references to shared data:
  // refCount == 0: no data, not shared ("empty")
  // refCount == 1: data, not shared ("unique")
  // refCount > 1:  data, shared ("shared")
  // (note that in SharedSIMDPtr, the SharedSIMDPtrDesc is deleted if empty,
  //  so the case refCount==0 should never occur)
  int refCount;

public:
#ifdef SHARED_SIMD_PTR_HEAP_COUNT
  static size_t totalDescNo;
#endif

  SharedSIMDPtrDesc()
  {
    SHARED_SIMD_PTR_DEBUG(puts("SharedSIMDPtrDesc(): created desc"));
    init();
#ifdef SHARED_SIMD_PTR_HEAP_COUNT
    totalDescNo++;
#endif
  }
  ~SharedSIMDPtrDesc()
  {
    SHARED_SIMD_PTR_DEBUG(puts("~SharedSIMDPtrDesc(): destroyed desc"));
#ifdef SHARED_SIMD_PTR_HEAP_COUNT
    assert(totalDescNo > 0);
    totalDescNo--;
#endif
  }
  void init() { refCount = 1; }
  void inc()
  {
    refCount++;
    SHARED_SIMD_PTR_DEBUG(
      printf("SharedSIMDPtrDesc::inc() refCount=%d\n", refCount));
  }
  void dec()
  {
    //  1. Mar 18 (rm): make sure refCount never goes to zero
    assert(refCount > 1);
    refCount--;
    SHARED_SIMD_PTR_DEBUG(
      printf("SharedSIMDPtrDesc::dec() refCount=%d\n", refCount));
  }
  // bool empty()  { return (refCount == 0); }
  bool unique() { return (refCount == 1); }
  bool shared() { return (refCount > 1); }
  int get() { return refCount; }
};

// -------------------------------------------------------------------------
// SharedSIMDPtr
// -------------------------------------------------------------------------

// SharedSIMDPtr behaves (at least partly) like a pointer:
// - copy-constructor and operator= copy the data pointer, not the data
//   (implemented through makeView);
// making a view of a "nil" SharedSIMDPtr just creates a "nil" SharedSIMDPtr;
// beware if you use a std::vector of SharedSIMDPtr:
// - std::vector.resize(n) calls SharedSIMDPtr() once (default argument)
//   and then n times SharedSIMDPtr(const SharedSIMDPtr&),
//   so we create n independent SharedSIMDPtr's;
// - std::vector.resize(n, sharedPtr) for a non-nil sharedPtr creates
//   n views of the same data!

#ifdef SHARED_SIMD_PTR_HEAP_COUNT
class SharedSIMDPtrBase
{
public:
  static size_t totalSize;
};
#endif

template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class SharedSIMDPtr
#ifdef SHARED_SIMD_PTR_HEAP_COUNT
  : public SharedSIMDPtrBase
#endif
{
protected:
  // origData: original data block, may be shared
  // can be NULL pointer
  T *origData;
  // descriptor shared between all shared pointers
  SharedSIMDPtrDesc *desc;
  // origOwner == true indicates that this object is the original owner
  // (creator) of origData
  // this may not be strictly necessary, it just guarantees that only the
  // original owner may reallocate data (not the last one referring to it)
  bool origOwner;
  // 13. Sep 19 (rm)
  // if viewIsProtected is true, then it is not possible to make this object
  // a view of something else (required e.g. for planes of a SIMDStack)
  bool viewIsProtected;

public:
  // data: shared data; can be NULL pointer
  T *data;
  // size of the data behind "data"
  size_t size;

  // create a shared NULL pointer
  SharedSIMDPtr() : viewIsProtected(false)
  {
    SHARED_SIMD_PTR_DEBUG(printf("SharedSIMDPtr()\n"));
    allocate(0);
  }

  // create a shared pointer with data (this is the original owner)
  // must tolerate initSize == 0 (e.g. copy constructor on empty object
  // called from vector::resize)
  SharedSIMDPtr(size_t initSize) : viewIsProtected(false)
  {
    SHARED_SIMD_PTR_DEBUG(printf("SharedSIMDPtr(%ld)\n", (long int) initSize));
    allocate(initSize);
  }

  // TODO: copy constructor creates a view (as operator=), ok?
  SharedSIMDPtr(const SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN> &ssp)
    : viewIsProtected(false)
  {
    SHARED_SIMD_PTR_DEBUG(printf("SharedSIMDPtr(SharedSIMDPtr&)\n"));
    makeView(ssp, 0, ssp.size);
  }

  // free shared pointer if it is not shared
  virtual ~SharedSIMDPtr()
  {
    SHARED_SIMD_PTR_DEBUG(puts("~SharedSIMDPtr()"));
    release();
  }

  // change size
  void resize(size_t newSize)
  {
    SHARED_SIMD_PTR_DEBUG(printf("SharedSIMDPtr::resize(%d)\n", newSize));
    reallocate(newSize);
  }

  // access to the data portion
  // operator T*() const { return data; }
  // not recommended, see Alexandrescu "Modern C++ design" p.172

  // -> access
  T *operator->()
  {
    if (!data)
      throw SIMDException("SharedSIMDPtr::operator->",
                          "dereferencing of nil pointer");
    return data;
  }

  // * access
  // TODO: is SharedSIMDPtr::operator*  needed somewhere?
  /*
  T& operator*()
  {
    return *data;
  }
  */

  // TODO: methods for comparison of SharedSIMDPtrs?, see Alexandrescu

  // different view
  void view(const SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN> &ssp,
            size_t portionOffset, size_t portionSize)
  {
    SHARED_SIMD_PTR_DEBUG(printf("SharedSIMDPtr::view(ssp, %ld, %ld)\n",
                                 (long int) portionOffset,
                                 (long int) portionSize));
    makeView(ssp, portionOffset, portionSize);
  }

  // different view, protected
  void protectedView(const SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN> &ssp,
                     size_t portionOffset, size_t portionSize)
  {
    SHARED_SIMD_PTR_DEBUG(
      printf("SharedSIMDPtr::protectedView(ssp, %ld, %ld)\n",
             (long int) portionOffset, (long int) portionSize));
    makeProtectedView(ssp, portionOffset, portionSize);
  }

  // identical view
  SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN> &operator=(
    const SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN> &ssp)
  {
    SHARED_SIMD_PTR_DEBUG(printf("SharedSIMDPtr::operator=(ssp)\n"));
    makeView(ssp, 0, ssp.size);
    return *this;
  }

  void fill(T val)
  {
    if (data)
      for (size_t i = 0; i < size; i++) data[i] = val;
  }

  void fillByte(int byte)
  {
    if (data) memset(data, byte, size * sizeof(T));
  }

  void clear() { fillByte(0x00); }

  bool save(FILE *f) const
  {
    if (!data) return false;
    size_t res = fwrite(data, sizeof(T), size, f);
    return (res == size);
  }

  bool load(FILE *f)
  {
    if (!data) return false;
    size_t res = fread(data, sizeof(T), size, f);
    return (res == size);
  }

  // copy data from a source if source and destination exist
  void copyFrom(const T *const srcData)
  {
    if (data && srcData) memcpy(data, srcData, size * sizeof(T));
  }

  // copy data from a source with conversion if source and destination exist
  template <typename U>
  void copyFrom(const U *const srcData)
  {
    if (data && srcData)
      for (size_t i = 0; i < size; i++) data[i] = T(srcData[i]);
  }

  // copy data to a destination if source and destination exist
  void copyTo(T *const dstData) const
  {
    if (data && dstData) memcpy(dstData, data, size * sizeof(T));
  }

  // copy data to a destination with conversion if source and dest. exist
  template <typename U>
  void copyTo(U *const dstData) const
  {
    if (data && dstData)
      for (size_t i = 0; i < size; i++) dstData[i] = U(data[i]);
  }

  void printInfo(FILE *f = stdout)
  {
    fprintf(f, "origData %p, data %p, size %ld, origOwner %d, desc %p",
            (void *) origData, (void *) data, (long int) size, origOwner,
            (void *) desc);
    if (desc)
      fprintf(f, " (refCount %d)\n", desc->get());
    else
      fprintf(f, "\n");
  }

protected:
  static void checkSize(size_t sizeToCheck)
  {
    // size must be a multiple of SIMD_WIDTH
    if ((sizeToCheck * sizeof(T)) % SIMD_WIDTH != 0)
      throw SIMDException("SharedSIMDPtr::checksize",
                          "size (in bytes) is not a multiple of SIMD_WIDTH");
  }

  static void checkAlignment(const T *const ptr)
  {
    // (SIMD_ALIGN is assumed to be a power of two, not checked)
    if ((((uintptr_t) ptr) & (SIMD_ALIGN - 1)) != 0)
      throw SIMDException("SharedSIMDPtr::checkAlignment",
                          "pointer is not aligned (SIMD_ALIGN)");
  }

  // allocate must tolerate allocSize == 0
  // (called from constructor (2) and reallocate())
  void allocate(size_t allocSize)
  {
    origOwner = true;
    if (allocSize == 0) {
      // empty pointer
      origData = data = 0;
      size            = 0;
      desc            = 0;
    } else {
      // non-empty pointer
      checkSize(allocSize);
      // alignment passed to posix_memalign must be a multiple of
      // sizeof(void*) according to manpage, but we also allow values
      // for SIMD_ALIGN smaller than sizeof(void*) (e.g. 1)
      size_t align = std::max(sizeof(void *), (size_t) SIMD_ALIGN);
      if (align % sizeof(void *) != 0)
        throw SIMDException("SharedSIMDPtr::allocate",
                            "alignment must be smaller than "
                            "or multiple of sizeof(void*)");
      // 20. Sep 22 (Jonas Keller): use simd_aligned_malloc instead of
      // posix_memalign
      origData = (T *) simd_aligned_malloc(align, allocSize * sizeof(T));
      if (origData == NULL)
        throw SIMDException("SharedSIMDPtr::allocate",
                            "simd_aligned_malloc failed");
      SHARED_SIMD_PTR_DEBUG(printf("SharedSIMDPtr::allocate(): "
                                   "created data %p\n",
                                   (void *) origData));
#ifdef SHARED_SIMD_PTR_HEAP_COUNT
      totalSize += allocSize * sizeof(T);
#endif
      desc = new SharedSIMDPtrDesc();
      data = origData;
      size = allocSize;
    }
  }

  // (called from reallocate() (if origOwner) and release() (if last user))
  void deallocate()
  {
    // 1. Mar 18 (rm): just to be on the safe side: make sure we never
    // delete shared data
    assert(!desc || desc->unique());
    if (origData) {
      // 20. Sep 22 (Jonas Keller): use simd_aligned_free instead of free
      simd_aligned_free(origData);
      SHARED_SIMD_PTR_DEBUG(printf("SharedSIMDPtr::deallocate(): "
                                   "destroyed data %p\n",
                                   (void *) origData));
#ifdef SHARED_SIMD_PTR_HEAP_COUNT
      assert(totalSize >= size * sizeof(T));
      totalSize -= size * sizeof(T);
#endif
    }
    if (desc) delete desc;
  }

  // reallocate() (called from resize())
  //              newSize
  // newSize size ==size origOwner desc action
  // -----------------------------------------------------------------
  // 0       0    true   true      0    nothing (newSize == size)
  // !=0     0    false  true      0    deallocate-, allocate(!=0)
  // 0       !=0  false  true      !=0  shared-chk, deallocate+, allocate(0)
  // 0       !=0  false  false     !=0  exception: not original owner!
  // !=0     !=0  false  true      !=0  shared-chk, deallocate+, allocate(!=0)
  // !=0     !=0  false  false     !=0  exception: not original owner
  // !=0     !=0  true   true      !=0  nothing (newSize == size)
  // !=0     !=0  true   false     !=0  nothing (newSize == size)
  void reallocate(size_t newSize)
  {
    SHARED_SIMD_PTR_DEBUG(
      printf("SharedSIMDPtr::reallocate(%ld)\n", (long int) newSize));
    // no need to resize of the size didn't change
    if (newSize != size) {
      // if we are not the original owner, we are not allowed to reallocate
      if (!origOwner)
        throw SIMDException("SharedSIMDPtr::reallocate",
                            "only original data owner may reallocate");
      // here we are the original owner
      if (desc)
        // shared data cannot be reallocated
        if (desc->shared())
          throw SIMDException("SharedSIMDPtr::reallocate",
                              "shared pointers may not be reallocated");
      // free memory if it was allocated
      deallocate();
      // allocate new memory
      allocate(newSize);
    }
  }

  // (called from destructor and makeView())
  void release()
  {
    SHARED_SIMD_PTR_DEBUG(printf("SharedSIMDPtr::release()\n"));
    // we only free memory if the data is unique (non-NULL and not shared)
    if (desc) {
      if (desc->unique()) deallocate();
      // otherwise we just indicate that a reference has been deleted
      else
        desc->dec();
    }
  }

  void makeView(const SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN> &ssp,
                size_t portionOffset, size_t portionSize)
  {
    SHARED_SIMD_PTR_DEBUG(printf("SharedSIMDPtr::makeView(ssp, %ld, %ld)\n",
                                 (long int) portionOffset,
                                 (long int) portionSize));
    // 13. Sep 19 (rm)
    if (viewIsProtected)
      throw SIMDException("SharedSIMDPtr::makeView", "view is protected");
    _makeView(ssp, portionOffset, portionSize);
  }

  // 13. Sep 19 (rm)
  void makeProtectedView(const SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN> &ssp,
                         size_t portionOffset, size_t portionSize)
  {
    SHARED_SIMD_PTR_DEBUG(
      printf("SharedSIMDPtr::makeProtectedView(ssp, %ld, %ld)\n",
             (long int) portionOffset, (long int) portionSize));
    if (viewIsProtected)
      throw SIMDException("SharedSIMDPtr::makeProtectedView",
                          "view is protected");
    _makeView(ssp, portionOffset, portionSize);
    viewIsProtected = true;
  }

  // 13. Sep 19 (rm): makeView -> _makeView
  void _makeView(const SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN> &ssp,
                 size_t portionOffset, size_t portionSize)
  {
    SHARED_SIMD_PTR_DEBUG(printf("SharedSIMDPtr::_makeView(ssp, %ld, %ld)\n",
                                 (long int) portionOffset,
                                 (long int) portionSize));
    // 1. Mar 18 (rm): happened in both branches, moved here
    // possibly release memory if we are the last owner
    //
    release();
    // after release() we have two cases:
    // - the data was deallocated (last user) or
    // - there are other users (shared) or at least one (unique) who will
    //   release the data later
    if (ssp.size == 0) {
      // view of an empty pointer is an empty pointer
      if ((portionOffset != 0) || (portionSize != 0))
        throw SIMDException("SharedSIMDPtr::makeView",
                            "view of empty object must be empty");
      origData = data = 0;
      size            = 0;
      origOwner       = true;
      desc            = 0;
    } else {
      // check size constraints
      if (portionOffset + portionSize > ssp.size)
        throw SIMDException("SharedSIMDPtr::makeView",
                            "data boundary violation");
      // now make "this" a view of the data in ssp
      origData = ssp.origData;
      data     = ssp.data + portionOffset;
      checkAlignment(data);
      size      = portionSize;
      origOwner = false;
      desc      = ssp.desc;
      desc->inc();
    }
  }
};

} // namespace simd

#endif

#include <cstddef>
#include <stdio.h>
#include <vector>

#ifdef SIMD_IMAGE_DEBUG_ON
#define SIMD_IMAGE_DEBUG(ACTION) ACTION
#else
#define SIMD_IMAGE_DEBUG(ACTION)
#endif

namespace simd {

// ===========================================================================
// checkWidth
// ===========================================================================

template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
void checkWidth(int width)
{
  SIMD_IMAGE_DEBUG(printf("checkWidth(%d)\n", width));
  // width should be a multiple of SIMD_WIDTH
  if ((width * sizeof(T)) % SIMD_WIDTH != 0)
    throw SIMDException("SIMDImage::checkWidth",
                        "width is not a multiple of SIMD_WIDTH");
  // assert that each row start is aligned (alignment of data is
  // guaranteed by SIMDData)
  // (for simplicity, it would also reject a single-row image where
  // this condition is not fulfilled, even though there actually is
  // only a single row)
  // (SIMD_ALIGN is assumed to be a power of two, not checked)
  // (special case: width == 0: accepted)
  if (((width * sizeof(T)) & (SIMD_ALIGN - 1)) != 0)
    throw SIMDException("SIMDImage::checkRowAlignment",
                        "row start is not aligned");
}

// ===========================================================================
// AddOns for SIMDImage
// ===========================================================================

// - AddOns are additional data that can be part of a SIMDImage
// - it is possible to assign any AddOn to DefaultAddOn
// - it is not possible to assign DefaultAddOn to Panorama

// this is an empty AddOn
class DefaultAddOn
{
public:
  DefaultAddOn() {}
  DefaultAddOn(const DefaultAddOn &) {}
  DefaultAddOn &operator=(const DefaultAddOn &) { return *this; }

  // DefaultAddOn accepts all other AddOns (but not the other way round)
  template <class OtherAddOn>
  DefaultAddOn(const OtherAddOn &)
  {}
  template <class OtherAddOn>
  DefaultAddOn &operator=(const OtherAddOn &)
  {
    return *this;
  }

  bool operator==(const DefaultAddOn &) const { return true; }
  bool operator!=(const DefaultAddOn &) const { return false; }

  // properties of this AddOn
  void isInvariantToVerticalReorganization() const {}
  void isInvariantToHorizontalReorganization() const {}
};

// AddOn for panoramic images
class Panorama
{
public:
  double verticalResolution; // [rad/pixel]
  double horizon;            // relates to vertical image coordinate

  // TODO: 3. Jul 18 (rm) this is problematic but not easy to fix:
  // TODO: if e.g. resize is called and no addOn parameter is passed, the
  // TODO: default constr. of Panorama is used, which sets the parameters
  // TODO: to zero; presently this default constr. can't be removed because
  // TODO: it is used in several locations
  Panorama() : verticalResolution(0.0), horizon(0.0) {}

  Panorama(const Panorama &p)
    : verticalResolution(p.verticalResolution), horizon(p.horizon)
  {}
  Panorama(double verticalResolution, double horizon)
    : verticalResolution(verticalResolution), horizon(horizon)
  {}
  Panorama &operator=(const Panorama &p)
  {
    verticalResolution = p.verticalResolution;
    horizon            = p.horizon;
    return *this;
  }
  bool operator==(const Panorama &p) const
  {
    return (verticalResolution == p.verticalResolution) &&
           (horizon == p.horizon);
  }
  bool operator!=(const Panorama &p) const { return !(*this == p); }

  // properties of this AddOn
  void isInvariantToHorizontalReorganization() const {}
};

// ===========================================================================
// SIMDImage
// ===========================================================================

// SIMDImage is derived from SharedSIMDPtr instead of containing a
// SharedSIMDPtr (to avoid another layer of data access:
// myImage.data instead of myImage.sharedPtr.data), but it does not
// behave like a pointer: copy-constructor and operator= allocate new data!

// SIMDImage and SIMDStack are both derived from SharedSIMDPtr,
// therefore they can both be passed to
// SIMDImage::view(SharedSIMDPtr,size_t,size_t)

// AddOns can be added to SIMDImage, e.g. Panorama (with parameters
// of panoramic images)

// simple image class template for single-band images
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AddOn = DefaultAddOn>
class SIMDImage : public SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>
{
public:
  // ***** variables are public, but should not be changed from outside *****
  // width, height
  int w, h;

  AddOn addOn;

  SIMDImage() : SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>(), w(0), h(0), addOn()
  {
    SIMD_IMAGE_DEBUG(puts("SIMDImage()"));
  }

  SIMDImage(int initW, int initH, const AddOn &initAddOn = AddOn())
    : SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>(initW * initH), w(initW),
      h(initH), addOn(initAddOn)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDImage(%d,%d)\n", initW, initH));
    checkWidth<T, SIMD_WIDTH, SIMD_ALIGN>(w);
  }

  // 1. Mar 18 (rm): we have to add this, since otherwise it seems that
  // the constructor of SharedSIMDPtr fits better and is used without using
  // a SIMDImage constructor
  SIMDImage(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &si)
    : SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>(si.size), w(si.w), h(si.h),
      addOn(si.addOn)
  {
    SIMD_IMAGE_DEBUG(puts("SIMDImage<...,AddOn>(si&)"));
    checkWidth<T, SIMD_WIDTH, SIMD_ALIGN>(w);
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::copyFrom(si.data);
  }

  // note that copy constructor is called from vector::resize,
  // therefore SharedSIMDPtr must tolerate zero size (copies from
  // empty SIMDImage)
  // TODO: is this copy ctor covered by the one immediately below?
  template <class OtherAddOn>
  SIMDImage(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, OtherAddOn> &si)
    : SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>(si.size), w(si.w), h(si.h),
      addOn(si.addOn)
  {
    SIMD_IMAGE_DEBUG(puts("SIMDImage<...,OtherAddOn>(si&)"));
    checkWidth<T, SIMD_WIDTH, SIMD_ALIGN>(w);
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::copyFrom(si.data);
  }

  // required for things like:
  // SIMDImage<char,16,16> ic;
  // SIMDImage<float,16,16> if = ic;
  // (copy constructor gets called, not operator=)
  template <typename U, size_t OTHER_SIMD_WIDTH, size_t OTHER_SIMD_ALIGN,
            class OtherAddOn>
  SIMDImage(
    const SIMDImage<U, OTHER_SIMD_WIDTH, OTHER_SIMD_ALIGN, OtherAddOn> &si)
    : SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>(si.size), w(si.w), h(si.h),
      addOn(si.addOn)
  {
    SIMD_IMAGE_DEBUG(puts("SIMDImage(si<U,...,OtherAddOn>&)"));
    checkWidth<T, SIMD_WIDTH, SIMD_ALIGN>(w);
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::copyFrom(si.data);
  }

  ~SIMDImage() { SIMD_IMAGE_DEBUG(puts("~SIMDImage()")); }

  void view(const SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN> &sp, size_t extOff,
            int extW, int extH, const AddOn &extAddOn = AddOn())
  {
    SIMD_IMAGE_DEBUG(printf("SIMDImage::view(%lu,%d,%d)\n",
                            (unsigned long) extOff, extW, extH));
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::view(sp, extOff, extW * extH);
    w     = extW;
    h     = extH;
    addOn = extAddOn;
    checkWidth<T, SIMD_WIDTH, SIMD_ALIGN>(w);
  }

  void view(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &si)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDImage::view(&si)\n"));
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::view(si, 0, si.size);
    w     = si.w;
    h     = si.h;
    addOn = si.addOn;
    // check width not necessary
  }

  // 13. Sep 19 (rm)
  void protectedView(const SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN> &sp,
                     size_t extOff, int extW, int extH,
                     const AddOn &extAddOn = AddOn())
  {
    SIMD_IMAGE_DEBUG(printf("SIMDImage::protectedView(%lu,%d,%d)\n",
                            (unsigned long) extOff, extW, extH));
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::protectedView(sp, extOff,
                                                            extW * extH);
    w     = extW;
    h     = extH;
    addOn = extAddOn;
    checkWidth<T, SIMD_WIDTH, SIMD_ALIGN>(w);
  }

  // 13. Sep 19 (rm)
  void protectedView(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &si)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDImage::protectedView(&si)\n"));
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::protectedView(si, 0, si.size);
    w     = si.w;
    h     = si.h;
    addOn = si.addOn;
    // check width not necessary
  }

  //  1. Mar 18 (rm): this one is needed since otherwise operator= of
  // SharedSIMDPtr is used instead (seems to fit better)
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &operator=(
    const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &si)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDImage::operator=<...,AddOn>\n"));
    resize(si.w, si.h, si.addOn);
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::copyFrom(si.data);
    return *this;
  }

  // apparently we need this to disable the default operator=
  // even though it is a special case of the templated version below
  template <class OtherAddOn>
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &operator=(
    const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, OtherAddOn> &si)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDImage::operator=<...,OtherAddOn>\n"));
    resize(si.w, si.h, si.addOn);
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::copyFrom(si.data);
    return *this;
  }

  template <typename U, size_t OTHER_SIMD_WIDTH, size_t OTHER_SIMD_ALIGN,
            class OtherAddOn>
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &operator=(
    const SIMDImage<U, OTHER_SIMD_WIDTH, OTHER_SIMD_ALIGN, OtherAddOn> &si)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDImage::operator=<U,...,OtherAddOn>\n"));
    resize(si.w, si.h, si.addOn);
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::copyFrom(si.data);
    return *this;
  }

  // resize doesn't clear!
  template <class OtherAddOn>
  void resize(int newW, int newH, const OtherAddOn &newAddOn)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDImage::resize(<...,OtherAddOn>)\n"));
    if (!SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::origOwner) {
      // if we don't own the data, we can only proceed if size is
      // correct (size change is not possible)
      if (!sameSize(newW, newH))
        throw SIMDException("SIMDImage::resize",
                            "data not owned, size change not possible");
    } else {
      // if we own the data, we only have to reallocate if the size
      // changes
      if (!sameSize(newW, newH)) {
        SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::reallocate(newW * newH);
        w     = newW;
        h     = newH;
        addOn = newAddOn;
        checkWidth<T, SIMD_WIDTH, SIMD_ALIGN>(w);
      }
    }
  }

  void resize(int newW, int newH)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDImage::resize()\n"));
    resize(newW, newH, AddOn());
  }

  bool sameSize(int otherW, int otherH) const
  {
    return (otherW == w) && (otherH == h);
  }

  template <class OtherAddOn>
  bool sameSize(
    const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, OtherAddOn> &si) const
  {
    return sameSize(si.w, si.h);
  }

  template <class OtherAddOn>
  bool same(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, OtherAddOn> &si) const
  {
    return sameSize(si) &&
           (SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::data == si.data);
  }

  // access to row j without index check
  // (slow since we have no table with row pointers)
  T *operator[](int j) const
  {
    if (!SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::data)
      throw SIMDException("SIMDImage::operator[]", "empty image");
    return SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::data + j * w;
  }

  void printInfo(FILE *f = stdout)
  {
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::printInfo(f);
    fprintf(f, "w %d, h %d\n", w, h);
  }

  bool validIndex(int x, int y)
  {
    return ((x >= 0) && (x < w) && (y >= 0) && (y < h));
  }
};

// ===========================================================================
// SIMDStack
// ===========================================================================

// TODO: also provide view for SIMDStack as in SIMDImage
// TODO: such that another class can split its data into multiple SIMDStacks?
// TODO: generalize SIMDImage and SIMDStack in a template?
// TODO: test SIMDStack for non-default addon!

// TODO: 10. Jul 19 (rm)
// TODO: - provide view for SIMDStack, may be difficult

// template class for stack of images (of same size)
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AddOn = DefaultAddOn>
class SIMDStack : public SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>
{
public:
  // ***** variables are public, but should not be changed from outside *****
  // number of planes, width and height of each plane
  int numPlanes, w, h;
  AddOn addOn;

  SIMDStack()
    : SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>(), numPlanes(0), w(0), h(0),
      addOn()
  {
    SIMD_IMAGE_DEBUG(printf("SIMDStack()\n"));
  }

  /* covered by constructor below 10. Jul 19 (rm)
  SIMDStack(int initNumPlanes, int initW, int initH)
    : SharedSIMDPtr<T,SIMD_WIDTH,SIMD_ALIGN>(initNumPlanes * initW * initH),
      numPlanes(initNumPlanes), w(initW), h(initH)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDStack(%d,%d,%d)\n",
                            initNumPlanes,initW,initH));
    checkWidth<T,SIMD_WIDTH,SIMD_ALIGN>(w);
    allocatePlanes(AddOn());
  }
  */

  SIMDStack(int initNumPlanes, int initW, int initH,
            const AddOn &initAddOn = AddOn())
    : SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>(initNumPlanes * initW * initH),
      numPlanes(initNumPlanes), w(initW), h(initH), addOn(initAddOn)
  {
    SIMD_IMAGE_DEBUG(
      printf("SIMDStack(%d,%d,%d)\n", initNumPlanes, initW, initH));
    checkWidth<T, SIMD_WIDTH, SIMD_ALIGN>(w);
    allocatePlanes(initAddOn);
  }

  SIMDStack(const SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &ss)
    : SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>(ss.size),
      numPlanes(ss.numPlanes), w(ss.w), h(ss.h), addOn(ss.addOn)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDStack(SIMDStack&)\n"));
    checkWidth<T, SIMD_WIDTH, SIMD_ALIGN>(w);
    allocatePlanes(ss.addOn);
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::copyFrom(ss.data);
  }

  template <class OtherAddOn>
  SIMDStack(const SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN, OtherAddOn> &ss)
    : SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>(ss.size),
      numPlanes(ss.numPlanes), w(ss.w), h(ss.h), addOn(ss.addOn)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDStack(SIMDStack&)\n"));
    checkWidth<T, SIMD_WIDTH, SIMD_ALIGN>(w);
    allocatePlanes(ss.addOn);
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::copyFrom(ss.data);
  }

  template <typename U, size_t OTHER_SIMD_WIDTH, size_t OTHER_SIMD_ALIGN,
            class OtherAddOn>
  SIMDStack(
    const SIMDStack<U, OTHER_SIMD_WIDTH, OTHER_SIMD_ALIGN, OtherAddOn> &ss)
    : SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>(ss.size),
      numPlanes(ss.numPlanes), w(ss.w), h(ss.h), addOn(ss.addOn)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDStack(SIMDStack<U>&)\n"));
    checkWidth<T, SIMD_WIDTH, SIMD_ALIGN>(w);
    allocatePlanes(ss.addOn);
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::copyFrom(ss.data);
  }

  ~SIMDStack() { SIMD_IMAGE_DEBUG(puts("~SIMDStack()")); }

  // apparently we need this to disable the default operator=
  // even though it is a special case of the templated version below
  SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &operator=(
    const SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &ss)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDStack::operator=()\n"));
    resize(ss.numPlanes, ss.w, ss.h, ss.addOn);
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::copyFrom(ss.data);
    return *this;
  }

  template <class OtherAddOn>
  SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &operator=(
    const SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN, OtherAddOn> &ss)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDStack::operator=(T,OtherAddOn)\n"));
    resize(ss.numPlanes, ss.w, ss.h, ss.addOn);
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::copyFrom(ss.data);
    return *this;
  }

  template <typename U, size_t OTHER_SIMD_WIDTH, size_t OTHER_SIMD_ALIGN,
            class OtherAddOn>
  SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &operator=(
    const SIMDStack<U, OTHER_SIMD_WIDTH, OTHER_SIMD_ALIGN, OtherAddOn> &ss)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDStack::operator=(U,OtherAddOn)\n"));
    resize(ss.numPlanes, ss.w, ss.h, ss.addOn);
    SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::copyFrom(ss.data);
    return *this;
  }

  // resize doesn't clear!
  template <class OtherAddOn>
  void resize(int newNumPlanes, int newW, int newH, const OtherAddOn &addOn)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDStack::resize(OtherAddOn)\n"));
    if (!sameSize(newNumPlanes, newW, newH)) {
      SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::reallocate(newNumPlanes * newW *
                                                           newH);
      numPlanes = newNumPlanes;
      w         = newW;
      h         = newH;
      checkWidth<T, SIMD_WIDTH, SIMD_ALIGN>(w);
      allocatePlanes(addOn);
    }
  }

  void resize(int newNumPlanes, int newW, int newH)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDStack::resize()\n"));
    resize(newNumPlanes, newW, newH, AddOn());
  }

  // contributed by B. Volkmer
  template <typename U, size_t OTHER_SIMD_WIDTH, size_t OTHER_SIMD_ALIGN,
            class OtherAddOn>
  void resize(SIMDStack<U, OTHER_SIMD_WIDTH, OTHER_SIMD_ALIGN, OtherAddOn> o)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDStack::resize(U,OtherAddOn)\n"));
    resize(o.numPlanes, o.w, o.h, o.addOn);
  }

  // access to plane i
  inline SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &operator[](int i)
  {
    if (!((i >= 0) && (i < numPlanes)))
      throw SIMDException("SIMDStack::operator[]", "index out of range");
    return planes[i];
  }

  // access to plane i
  inline const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &operator[](
    int i) const
  {
    if (!((i >= 0) && (i < numPlanes)))
      throw SIMDException("SIMDStack::operator[]", "index out of range");
    return planes[i];
  }

  // access to all bands as single image
  inline SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &operator()() { return all; }

  // access to all bands as single image
  inline const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &operator()() const
  {
    return all;
  }

  bool sameSize(int otherNumPlanes, int otherW, int otherH) const
  {
    return (numPlanes == otherNumPlanes) && (w == otherW) && (h == otherH);
  }

  bool sameSize(const SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN> &ss) const
  {
    return sameSize(ss.numPlanes, ss.w, ss.h);
  }

  // contributed by B. Volkmer
  template <class OtherAddOn>
  bool same(const SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN, OtherAddOn> &si) const
  {
    return sameSize(si) &&
           (SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN>::data == si.data);
  }

  bool validIndex(int plane, int x, int y)
  {
    return ((plane >= 0) && (plane < numPlanes) && (x >= 0) && (x < w) &&
            (y >= 0) && (y < h));
  }

protected:
  // image representing all planes, always DefaultAddOn
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> all;

  // array of images representing the individual planes
  std::vector<SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOn>> planes;

  void allocatePlanes(const AddOn &addOn)
  {
    SIMD_IMAGE_DEBUG(printf("SIMDStack::allocatePlanes()\n"));
    SIMD_IMAGE_DEBUG(printf("numPlanes %d, %d x %d\n", numPlanes, w, h));
    planes.resize(numPlanes);
    SIMD_IMAGE_DEBUG(
      printf("planes.size = %lu\n", (unsigned long) planes.size()));
    const size_t planeSize = w * h;
    size_t off             = 0;
    for (int i = 0; i < numPlanes; i++, off += planeSize) {
      SIMD_IMAGE_DEBUG(printf("creating plane %i, off = %lu, %d x %d\n", i,
                              (unsigned long) off, w, h));
      // shallow copy in each image!
      // 13. Sep 19 (rm): protected!
      planes[i].protectedView(*this, off, w, h, addOn);
    }
    // 23. Sep 16 (rm): fixed bug: was numPlanes*h x w
    SIMD_IMAGE_DEBUG(
      printf("creating all, off = 0, %d x %d\n", w, numPlanes * h));
    // shallow copy! always DefaultAddOn
    // 13. Sep 19 (rm): protected!
    all.protectedView(*this, 0, w, numPlanes * h);
  }
};

} // namespace simd

#endif

#include <cstddef>
#include <limits>
#include <tsimd.H>

namespace simd {

// ===========================================================================
// MinWarpingMatch
// ===========================================================================

template <typename MatchType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class MinWarpingMatch
{
public:
  const int nAlpha, nPsi;
  const MatchType invalid;
  SIMDImage<MatchType, SIMD_WIDTH, SIMD_ALIGN> match;
  int *modulo_na, *modulo_na_pna;

  MinWarpingMatch(int nAlpha, int nPsi,
                  MatchType invalid_ = SIMDTypeInfo<MatchType>::max())
    : nAlpha(nAlpha), nPsi(nPsi), invalid(invalid_), match(nAlpha, nPsi),
      modulo_na(0), modulo_na_pna(0)
  {
    // match = new SIMDImage<MatchType,SIMD_ALIGN>(nAlpha, nPsi);
    // modulo nAlpha
    // 19. Jun 13 (rm): new alpha handling, factor 3 instead of 2
    modulo_na = new int[3 * nAlpha];
    for (int i = 0; i < 3 * nAlpha; i++) modulo_na[i] = i % nAlpha;
    modulo_na_pna = modulo_na + nAlpha;
  }

  virtual ~MinWarpingMatch()
  {
    if (modulo_na) delete[] modulo_na;
  }

  MatchType *operator[](int iPsi)
  {
    if ((iPsi < 0) || (iPsi >= nPsi))
      throw SIMDException("MinWarpingMatch::operator[]", "invalid index");
    return match[iPsi];
  }

  // check whether size and invalid are the same
  bool sameConfig(const MinWarpingMatch &otherMatch)
  {
    return (nAlpha == otherMatch.nAlpha) && (nPsi == otherMatch.nPsi) &&
           (invalid == otherMatch.invalid);
  }

  bool save(FILE *f) const { return match.save(f); }

  void clear() { match.clear(); }

  void fillInvalid()
  {
    // if MatchType is an unsigned integer and invalid coincides with
    // the maximum value of MatchType, we can fill with 0xff bytes,
    // otherwise we fill in a loop
    if (SIMDTypeInfo<MatchType>::isInteger &&
        !SIMDTypeInfo<MatchType>::isSigned &&
        (invalid == SIMDTypeInfo<MatchType>::max()))
      match.fillByte(0xff);
    else
      match.fill(invalid);
  }

  void invertSolution(int iAlpha0, int iPsi0, int &iAlpha1, int &iPsi1)
  {
    iPsi1   = (nPsi - iPsi0) % nPsi;
    iAlpha1 = modulo_na_pna[nAlpha / 2 - (iPsi0 * nAlpha) / nPsi + iAlpha0];
  }

  // TODO: can we accelerate invertPsiRangeFrom using vector instructions?
  void invertPsiRangeFrom(const MinWarpingMatch &otherMatch,
                          const int iPsi0Start, const int iPsi0End)
  {
    if (!sameConfig(otherMatch))
      throw SIMDException("MinWarpingMatch::invertPsiRangeFrom",
                          "configuration mismatch");
    int nAlpha2 = nAlpha / 2;
    // indices with suffix 0 for match in normal order (SS-CV match)
    // indices with suffix 1 for match in inverse order (CV-SS match)
    for (int iPsi0 = iPsi0Start; iPsi0 <= iPsi0End; iPsi0++) {
      // psi1 = -psi0
      int iPsi1        = (nPsi - iPsi0) % nPsi;
      int iPsi1_nAlpha = iPsi1 * nAlpha;
      int iPsi0_nAlpha = iPsi0 * nAlpha;
      // 29. Aug 15 (rm): iPsi0*nAlpha->iPsi0_nAlpha
      int nAlpha2_iPsi0_nAlpha_nPsi = nAlpha2 - iPsi0_nAlpha / nPsi;
      for (int iAlpha0 = 0; iAlpha0 < nAlpha; iAlpha0++) {
        // alpha1 = pi - psi0 * (...) + alpha0, nAlpha added because of %
        // TODO: if nAlpha!=nPsi, can we have holes in the transformation?
        // int iAlpha1 = (nAlpha + nAlpha/2 -(iPsi0*nAlpha)/nPsi + iAlpha0)
        //               % nAlpha;
        // 22. Dec 13 (rm)
        int iAlpha1 = modulo_na_pna[nAlpha2_iPsi0_nAlpha_nPsi + iAlpha0];
        // int idx0 = iPsi0 * nAlpha + iAlpha0;
        // int idx1 = iPsi1 * nAlpha + iAlpha1;
        int idx0         = iPsi0_nAlpha + iAlpha0;
        int idx1         = iPsi1_nAlpha + iAlpha1;
        match.data[idx0] = otherMatch.match.data[idx1];
      }
    }
  }

  void invertFrom(const MinWarpingMatch &otherMatch)
  {
    invertPsiRangeFrom(otherMatch, 0, nPsi - 1);
  }

  void invertSinglePsiFrom(const MinWarpingMatch &otherMatch, int iPsiSingle)
  {
    match.fill(invalid);
    invertPsiRangeFrom(otherMatch, iPsiSingle, iPsiSingle);
  }

  void averageOf(const MinWarpingMatch &match1, const MinWarpingMatch &match2)
  {
    if (!(sameConfig(match1) && sameConfig(match2)))
      throw SIMDException("MinWarpingMatch::averageOf",
                          "configuration mismatch");
    SIMDVec<MatchType, SIMD_WIDTH> vec1, vec2, result, resultIsInvalid,
      invalidVec = set1<MatchType, SIMD_WIDTH>(invalid);
    for (size_t i = 0; i < match.size;
         i += SIMDVec<MatchType, SIMD_WIDTH>::elements) {
      vec1            = load<SIMD_WIDTH>(match1.match.data + i);
      vec2            = load<SIMD_WIDTH>(match2.match.data + i);
      resultIsInvalid = or_(cmpeq(vec1, invalidVec), cmpeq(vec2, invalidVec));
      result          = ifelse(resultIsInvalid, invalidVec, avgrd(vec1, vec2));
      store(match.data + i, result);
    }
  }

  void averageSinglePsiOf(const MinWarpingMatch &match1,
                          const MinWarpingMatch &match2, int iPsiSingle)
  {
    if (!(sameConfig(match1) && sameConfig(match2)))
      throw SIMDException("MinWarpingMatch::averageSinglePsiOf",
                          "configuration mismatch");
    SIMDVec<MatchType, SIMD_WIDTH> vec1, vec2, result, resultIsInvalid,
      invalidVec    = set1<MatchType, SIMD_WIDTH>(invalid);
    MatchType *row  = match[iPsiSingle];
    MatchType *row1 = match1.match[iPsiSingle];
    MatchType *row2 = match2.match[iPsiSingle];
    match.fill(invalid);
    for (int i = 0; i < nAlpha; i += SIMDVec<MatchType, SIMD_WIDTH>::elements) {
      vec1            = load<SIMD_WIDTH>(row1 + i);
      vec2            = load<SIMD_WIDTH>(row2 + i);
      resultIsInvalid = or_(cmpeq(vec1, invalidVec), cmpeq(vec2, invalidVec));
      result          = ifelse(resultIsInvalid, invalidVec, avgrd(vec1, vec2));
      store(row + i, result);
    }
  }

  void copyFrom(const MinWarpingMatch &otherMatch)
  {
    if (!sameConfig(otherMatch))
      throw SIMDException("MinWarpingMatch::copyFrom", "size mismatch");
    match.copyFrom(otherMatch);
  }

  // looking for best (minimal) match
  void bestMatchFull(int &iAlphaMin, int &iPsiMin, MatchType &dMin)
  {
    MatchType *minp = match.data;
    for (MatchType *mp = match.data + 1; mp < match.data + nAlpha * nPsi; mp++)
      if (*mp < *minp) minp = mp;
    iPsiMin   = (minp - match.data) / nAlpha;
    iAlphaMin = (minp - match.data) % nAlpha;
    // printf("minp = %p, match = %p, minp - match = %d, iPsiMin = %d,
    //         iAlphaMin = %d, nPsi = %d, nAlpha = %d\n",
    //	    minp, match, minp - match, iPsiMin, iAlphaMin, nPsi, nAlpha);
    dMin = *minp;
  }

  // obtain min and max which is not invalid (for visualization, not
  // speed-tuned)
  // fails if no pixel is valid (all pixels are invalid):
  // minv, maxv not changed
  void extremaExceptInvalid(MatchType &min, MatchType &max)
  {
    MatchType minv  = SIMDTypeInfo<MatchType>::min(),
              maxv  = SIMDTypeInfo<MatchType>::max();
    MatchType *minp = &maxv, *maxp = &minv;
    for (MatchType *mp = match.data; mp < match.data + nAlpha * nPsi; mp++)
      if (*mp != invalid) {
        if (*mp < *minp) minp = mp;
        if (*mp > *maxp) maxp = mp;
      }
    min = *minp;
    max = *maxp;
  }

  template <typename ImgType>
  void getImage(SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN> &res,
                double shift = 0.0, double scale = 1.0) const
  {
    ImgType imgMax = SIMDTypeInfo<ImgType>::max();
    copyShiftAndScale(match, shift, scale, res);
    for (size_t i = 0; i < match.size; i++)
      if (match.data[i] == invalid) res.data[i] = imgMax;
  }
};

} // namespace simd

#endif

// ===========================================================================
//
// MinWarpingSearchRange.H --
// class defining search range for partial minWarping
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef MINWARPING_SEARCHRANGE_H_
#define MINWARPING_SEARCHRANGE_H_

#include <algorithm>
#include <cmath>
#include <cstddef>
#include <tsimd.H> // 20. Apr 18 (rm): thanks to Benedikt Volkmer
#include <vector>

namespace simd {

// ===========================================================================
// MinWarping search range
// ===========================================================================

template <typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class MinWarpingSearchRange
{
public:
  // the number of SPS (scale-plane stack) elements processed
  // in parallel in a SIMD vector
  const int simd_sps_elems;
  // full search range
  const int nAlpha, nPsi;
  // restricted search range: indices
  std::vector<int> alphaIndices, psiIndices;
  // these are currently unused, but are computed
  int iAlphaSIMDBlockStart, iAlphaSIMDBlockStop;

  MinWarpingSearchRange(int nAlpha, int nPsi)
    : // simd_sps_elems(SIMD_WIDTH / sizeof(SPSType)),
      simd_sps_elems(numSIMDVecElements<SPSType, SIMD_WIDTH>()), nAlpha(nAlpha),
      nPsi(nPsi)
  {}

  void setPartialRange(double alphaEst, double alphaRadius, double psiEst,
                       double psiRadius)
  {
    getRangeIndicesSpacingSIMDBlock(alphaEst, alphaRadius, nAlpha, alphaIndices,
                                    iAlphaSIMDBlockStart, iAlphaSIMDBlockStop);
    getRangeIndices(psiEst, psiRadius, nPsi, psiIndices);
  }

  void setFullRange()
  {
    getAllIndicesSpacingSIMDBlock(nAlpha, alphaIndices, iAlphaSIMDBlockStart,
                                  iAlphaSIMDBlockStop);
    getAllIndices(nPsi, psiIndices);
  }

  void setSingleRange(int iAlpha, int iPsi)
  {
    getRangeIndicesSpacingSIMDBlockSingle(
      iAlpha, alphaIndices, iAlphaSIMDBlockStart, iAlphaSIMDBlockStop);
    getRangeIndicesSingle(iPsi, psiIndices);
  }

  template <typename CompassType>
  void setFullCompassRange(
    double psiFraction,
    const SIMDImage<CompassType, SIMD_WIDTH, SIMD_ALIGN> &compass)
  {
    getAllIndicesSpacingSIMDBlock(nAlpha, alphaIndices, iAlphaSIMDBlockStart,
                                  iAlphaSIMDBlockStop);
    getCompassIndices(psiFraction, compass, psiIndices);
  }

protected:
  // determine index of an angle
  // same function as angle2index in MathExt.H/Math.C
  // moved here to make it independent of other parts of PROG system
  static int a2i(double a, int n)
  {
    // map angle to interval [0,2pi) and return mapped angle / 2pi
    double ra   = a * (0.5 / M_PI);
    double ra01 = ra - ::floor(ra);
    // determine corresponding index
    int i = (int) (ra01 * n + 0.5);
    return (i == n) ? 0 : i;
  }

  // provides a vector with indices given an angular range
  // [value-radius,value+radius], n specifies the index range [0,n-1]
  // only works for radius in [0,pi) (and may even fail in that case if
  // n is very small)
  static void getRangeIndices(double value, double radius, int n,
                              std::vector<int> &indices)
  {
    int il, ir, i, I;

    // printf("center %u\n", a2i(value, n));
    // index of left border
    il = a2i(value - radius, n);
    // index of right border
    ir = a2i(value + radius, n);
    // printf("il, ir = %u, %u\n", il, ir);
    if (il <= ir) {
      // left border is left of right border
      indices.resize((ir - il) + 1);
      for (i = il, I = 0; i <= ir; i++, I++) indices[I] = i;
    } else {
      // left border is right of right border
      indices.resize((ir + 1) + (n - il));
      for (i = 0, I = 0; i <= ir; i++, I++) indices[I] = i;
      for (i = il; i < n; i++, I++) indices[I] = i;
    }
  }

  static void getRangeIndicesSingle(int index, std::vector<int> &indices)
  {
    indices.resize(1);
    indices[0] = index;
  }

  // vector with all indices
  static void getAllIndices(int n, std::vector<int> &indices)
  {
    indices.resize(n);
    for (int i = 0; i < n; i++) indices[i] = i;
  }

  // indices obtained from a compass estimate ("fraction" smallest values)
  template <typename CompassType>
  static void getCompassIndices(
    double fraction,
    const SIMDImage<CompassType, SIMD_WIDTH, SIMD_ALIGN> &compass,
    std::vector<int> &indices)
  {
    int n        = compass.w;
    int iLargest = int(fraction * (n - 1));
    CompassType largest;
    // we need to make a copy since nth_element overwrites the array
    // CompassType compassCopy[n];
    SIMDImage<CompassType, SIMD_WIDTH, SIMD_ALIGN> compassCopy = compass;
    // memcpy(compassCopy, compass.data, n * sizeof(CompassType));

    std::nth_element(compassCopy.data, compassCopy.data + iLargest,
                     compassCopy.data + n);
    indices.clear();
    largest = compassCopy.data[iLargest];
    // printf("largest %u @ %u\n", largest, iLargest);
    for (int i = 0; i < n; i++)
      // here we work on the original compass array
      if (compass.data[i] <= largest) {
        // printf("sel %d\n", i);
        indices.push_back(i);
      }
  }

  // (for 16: was (N >> 4) + 1)
  // TODO: fast way to find exponent of a power of 2, and so use >> again?
  // 10. Oct 14 (rm): left this unsigned to possibly avoid case distinctions
  unsigned sizeBlk(unsigned N) { return ((N / simd_sps_elems) + 1); };
  // (for 16: was I & (~15))
  unsigned lowerBlk(unsigned I) { return (I & ~(simd_sps_elems - 1)); };

  // for vector indices with spacing of simd_sps_elems:
  // provides a vector with indices given an angular range
  // [value-radius,value+radius], n specifies the index range [0,n-1]
  // only works for radius in [0,pi) (and may even fail in that case if
  // n is very small)
  void getRangeIndicesSpacingSIMDBlock(double value, double radius, int n,
                                       std::vector<int> &indices,
                                       int &iStartBlk, int &iStopBlk)
  {
    int il, ir, ilBlk, irBlk, i, I;

    // printf("center %u\n", a2i(value, n));
    // index of left border
    il = a2i(value - radius, n);
    // index of right border
    ir = a2i(value + radius, n);
    // with spacing of simd_sps_elems we need the start index of the
    // block of simd_sps_elems which contains il or ir
    iStartBlk = ilBlk = lowerBlk(il);
    irBlk             = lowerBlk(ir);
    // 19. Jun 13 (rm): no wrapping here, and assert iStartBlk < iStopBlk
    // iStopBlk = (irBlk + simd_sps_elems) % n;
    iStopBlk = irBlk + simd_sps_elems;
    if (iStopBlk <= iStartBlk) iStopBlk += n;
    // printf("il, ir = %u, %u\n", il, ir);
    if (il <= ir) {
      // left border is left of right border
      indices.resize(sizeBlk(irBlk - ilBlk));
      for (i = ilBlk, I = 0; i <= irBlk; i += simd_sps_elems, I++)
        indices[I] = i;
    } else {
      // left border is right of right border
      indices.resize(sizeBlk(irBlk) + sizeBlk((n - ilBlk) - 1));
      for (i = 0, I = 0; i <= irBlk; i += simd_sps_elems, I++) indices[I] = i;
      for (i = ilBlk; i < n; i += simd_sps_elems, I++) indices[I] = i;
    }
  }

  void getRangeIndicesSpacingSIMDBlockSingle(int index,
                                             std::vector<int> &indices,
                                             int &iStartBlk, int &iStopBlk)
  {
    indices.resize(1);
    iStartBlk = indices[0] = lowerBlk(index);
    iStopBlk               = iStartBlk + simd_sps_elems;
  }

  // for tests: vector with all indices with spacing of 8
  void getAllIndicesSpacingSIMDBlock(int n, std::vector<int> &indices,
                                     int &iStartBlk, int &iStopBlk)
  {
    // identical to (n-1) / simd_sps_elems + 1:
    indices.resize(sizeBlk(n - 1));
    int j = 0;
    for (int i = 0; i < n; i += simd_sps_elems, j++) indices[j] = i;
    iStartBlk = 0;
    iStopBlk  = n;
  }
};

} // namespace simd

#endif

// ===========================================================================
//
// WarpingParameter.H --
// warping parameters and some lookup tables bundled in a template class
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef WARPING_PARAMETER_H_
#define WARPING_PARAMETER_H_

#include <cmath>
#include <cstddef>
#include <string.h>
#include <tsimd.H>

// 20. Sep 22 (Jonas Keller): on Windows M_PI is not defined, so we
// define it here
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

namespace simd {

// we need SPSType (type of scale-plane stack elements) and the vector
// width in bytes (SIMD_WIDTH) since these influence the dimensions of
// the SPS which are stored in WarpingParameter
template <typename SPSType, size_t SIMD_WIDTH>
class WarpingParameter
{
public:
  // the number of SPS (scale-plane stack) elements processed
  // in parallel in a SIMD vector (determines wSPS and blkSize)
  // TODO: WarpingParameter: check if use of these members is still correct
  const int simd_sps_elems;
  // width of snapshot and current view, also scale planes are width x width
  const int w;
  // angular step size
  const double dTheta;
  // number of steps in search direction alpha (movement direction angle)
  const int nAlpha;
  // number of steps in search direction psi (compass angle)
  const int nPsi;
  // step width for alpha
  const int stepAlpha;
  // step width for psi
  const int stepPsi;
  // step angle for alpha
  const double dAlpha;
  // step angle for psi
  const double dPsi;
  // width of shuffled scale-plane stack
  const int wSPS;
  // size of a single contiguous block in shuffled SPS
  const int blkSize;

  // vector storing all discrete alphas
  double *alphaVec;
  // vector storing all discrete psis
  double *psiVec;
  // vector storing pixel indices of all alphas
  int *jAlphaVec;
  // vector storing pixel indices of all psis
  int *jPsiVec;

  // modulo tables for faster computation
  // (we intentionally provide free access to these tables)
  // modulo2w: modulo w and multiplied with wSPS
  int *modulo2w, *modulo2wpw;
  // modulo: just modulo w
  int *modulo, *modulopw;
  // modulo nAlpha
  int *modNAlpha;
  // shuffle table
  int *shuffle;
  // shuffle table combined with modulo table
  int *shuffleModulo, *shuffleModuloPW;
  // inverse shuffle table
  int *unshuffle;

  WarpingParameter(int width, int nAlpha, int nPsi)
    : // simd_sps_elems(SIMD_WIDTH / sizeof(SPSType)),
      simd_sps_elems(numSIMDVecElements<SPSType, SIMD_WIDTH>()), w(width),
      dTheta((2.0 * M_PI) / w), nAlpha(nAlpha), nPsi(nPsi),
      stepAlpha(w / nAlpha), stepPsi(w / nPsi), dAlpha((2.0 * M_PI) / nAlpha),
      dPsi((2.0 * M_PI) / nPsi),
      // wSPS: width of shuffled scale-plane stack: we need simd_sps_elems
      // more so that we can read simd_sps_elems values in parallel
      // whereever we are in the sps rows
      wSPS(w + stepAlpha * simd_sps_elems), blkSize(nAlpha + simd_sps_elems),
      alphaVec(0), psiVec(0), jAlphaVec(0), jPsiVec(0), modulo2w(0),
      modulo2wpw(0), modulo(0), modulopw(0), modNAlpha(0), shuffle(0),
      shuffleModulo(0), shuffleModuloPW(0), unshuffle(0)
  {
    // TODO: WarpingParameter: are the checks (w/nAlpha/nPsi...) ok?
    // TODO: move the checks somewhere else?

    // SPS is sampled in nAlpha / nPsi steps
    if (w % nAlpha != 0)
      throw SIMDException("WarpingParameter::WarpingParameter",
                          "width w needs to be a multiple of nAlpha");
    if (w % nPsi != 0)
      throw SIMDException("WarpingParameter::WarpingParameter",
                          "width w needs to be a multiple of nPsi");
    // each block in the shuffled SPS contains nAlpha elements which
    // have to be read in parallel
    if (nAlpha % simd_sps_elems != 0)
      throw SIMDException("WarpingCompound::WarpingCompound",
                          "nAlpha needs to be a multiple of simd_sps_elems");

    // compass computation is done via horizontal instructions, so we need
    // to process simd_sps_elems in parallel, but this we only test if the
    // compass is used

    createModuloTables();
    createParameterArrays();
    // create shuffle table (after modulo-tables!)
    createShuffle();
  }

  virtual ~WarpingParameter()
  {
    destroyModuloTables();
    destroyParameterArrays();
    destroyShuffle();
  }

  // ------------------------------------------------------------------------

protected:
  void createModuloTables()
  {
    // for our special order in dest (theta, delta) we need this modulo table
    // modulo2w = new int [2*w];
    // we need to multiply by wSPS to skip rows in the scale plane
    // for (int m = 0; m < w; m++) modulo2w[m] = m * wSPS;
    // shift to the middle of the array so that we can handle negative indices
    // modulo2wpw = modulo2w + w;
    // duplicate
    // memcpy(modulo2wpw, modulo2w, w * sizeof(int));
    // new version 20. Nov 15 (rm), 23. Nov 15 (rm): more space
    modulo2w = new int[6 * w];
    for (int m = 0; m < 6 * w; m++) modulo2w[m] = (m % w) * wSPS;
    modulo2wpw = modulo2w + 3 * w;
    // just plain modulo w table:
    // modulo = new int [2*w];
    // for (int i = 0; i < 2 * w; i++) modulo[i] = i % w;
    // modulopw = modulo + w;
    // new version 20. Nov 15 (rm), 23. Nov 15 (rm): more space
    modulo = new int[6 * w];
    for (int i = 0; i < 6 * w; i++) modulo[i] = i % w;
    modulopw = modulo + 3 * w;
    // modulo nAlpha (triple copy), new version 20. Nov 15 (rm)
    modNAlpha = new int[3 * nAlpha];
    for (int i = 0; i < 3 * nAlpha; i++) modNAlpha[i] = i % nAlpha;
    // memcpy(modNAlpha + nAlpha, modNAlpha, nAlpha * sizeof(int));
    // memcpy(modNAlpha + 2 * nAlpha, modNAlpha, nAlpha * sizeof(int));
  }

  void destroyModuloTables()
  {
    if (modulo2w) {
      delete[] modulo2w;
      modulo2w   = 0;
      modulo2wpw = 0;
    }
    if (modulo) {
      delete[] modulo;
      modulo   = 0;
      modulopw = 0;
    }
    if (modNAlpha) {
      delete[] modNAlpha;
      modNAlpha = 0;
    }
  }

  void createShuffle()
  {
    // resorting of horizontal index for SSE2 implementation of search phase
    shuffle = new int[w];
    // forward shuffle
    for (int j = 0; j < w; j++)
      // we need simd_sps_elems words more in each section (blkSize)
      shuffle[j] = (j % stepAlpha) * blkSize + j / stepAlpha;
    // 30. Jul 11 (rm): combined shuffle-modulo table
    // 10. Oct 14 (rm): shuffleModuloPW
    // 20. Nov 15 (rm), 23. Nov 15 (rm): more space
    shuffleModulo = new int[6 * w];
    for (int j = 0; j < 6 * w; j++) shuffleModulo[j] = shuffle[modulo[j]];
    shuffleModuloPW = shuffleModulo + 3 * w;
    //  1. Oct 14 (rm): unshuffle
    unshuffle = new int[wSPS];
    for (int js = 0; js < wSPS; js++)
      // TODO: unshuffle: is % w necessary?
      unshuffle[js] = ((js % blkSize) * stepAlpha + js / blkSize) % w;
  }

  void destroyShuffle()
  {
    if (shuffle) {
      delete[] shuffle;
      shuffle = 0;
    }
    if (shuffleModulo) {
      delete[] shuffleModulo;
      shuffleModulo   = 0;
      shuffleModuloPW = 0;
    }
    if (unshuffle) {
      delete[] unshuffle;
      unshuffle = 0;
    }
  }

  void createParameterArrays()
  {
    // resize tables
    jAlphaVec = new int[nAlpha];
    alphaVec  = new double[nAlpha];
    jPsiVec   = new int[nPsi];
    psiVec    = new double[nPsi];
    // initialize tables (modified from WarpTableSet)
    for (int iAlpha = 0; iAlpha < nAlpha; iAlpha++) {
      jAlphaVec[iAlpha] = iAlpha * stepAlpha;
      alphaVec[iAlpha]  = jAlphaVec[iAlpha] * dTheta;
    }
    for (int iPsi = 0; iPsi < nPsi; iPsi++) {
      jPsiVec[iPsi] = iPsi * stepPsi;
      psiVec[iPsi]  = jPsiVec[iPsi] * dTheta;
    }
  }

  void destroyParameterArrays()
  {
    if (jAlphaVec) {
      delete[] jAlphaVec;
      jAlphaVec = 0;
    }
    if (alphaVec) {
      delete[] alphaVec;
      alphaVec = 0;
    }
    if (jPsiVec) {
      delete[] jPsiVec;
      jPsiVec = 0;
    }
    if (psiVec) {
      delete[] psiVec;
      psiVec = 0;
    }
  }
};

} // namespace simd

#endif

// ===========================================================================
//
// WarpingSPS.H --
// C++ template for scale-plane stack
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef WARPING_SPS_H_
#define WARPING_SPS_H_

#include <cstddef>
#include <stdio.h>
#include <string.h>
#include <tsimd.H>

namespace simd {

// -------------------------------------------------------------------------
// SymmetricScaleFactors
// -------------------------------------------------------------------------

// neighboring scale factors are related by constant factor;
// scale factors are inversion-symmetric

class SymmetricScaleFactors
{
public:
  // vector storing all scale parameters
  std::vector<double> scaleFactors;

  SymmetricScaleFactors(int nScalePlanes, double maxScaleFactor)
  {
    scaleFactors.resize(nScalePlanes);
    // center index (nScalePlanes needs to be odd)
    int nc = (nScalePlanes - 1) / 2;
    // initialize scale factors
    scaleFactors[nc] = 1.0;
    // if we have more than 1 scale plane
    if (nc != 0) {
      // factor between scaleFactors
      double fac = exp(log(maxScaleFactor) / nc);
      // set scaleFactors
      double fn = 1.0, fp = 1.0;
      for (int i = 1; i <= nc; i++) {
        fn /= fac;
        fp *= fac;
        scaleFactors[nc - i] = fn;
        scaleFactors[nc + i] = fp;
      }
    }
  }
};

// -------------------------------------------------------------------------
// SingleScaleFactor (for Min2Warping)
// -------------------------------------------------------------------------

class SingleScaleFactor
{
public:
  // vector storing all scale parameters
  std::vector<double> scaleFactors;

  SingleScaleFactor()
  {
    scaleFactors.resize(1);
    scaleFactors[0] = 1.0;
  }
};

// -------------------------------------------------------------------------
// WarpingSPS
// -------------------------------------------------------------------------

// SIMD_WIDTH is the number of vector elements processed in
// parallel in the SPS by a SIMD vector extension;
// SIMD_ALIGN is the alignment requirement of the SIMD vector
// extension (in bytes)
template <typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPS
{
public:
  // a reference to the joint parameter set
  const WarpingParameter<SPSType, SIMD_WIDTH> &param;
  // we intentionally provide free access to the scale-plane stack
  // from the outside
  SIMDStack<SPSType, SIMD_WIDTH, SIMD_ALIGN> stack;

  WarpingSPS(const WarpingParameter<SPSType, SIMD_WIDTH> &param,
             int numScaleFactors)
    : param(param), stack(numScaleFactors, param.wSPS, param.w)
  {
    // puts("WarpingSPS::WarpingSPS");
  }

  virtual ~WarpingSPS() {}

  bool saveAll(FILE *f) const { return stack().save(f); }

  // couldn't call this load, leads to conflicts with SIMD template load
  bool loadAll(FILE *f) { return stack().load(f); }

  bool sameSize(const WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps) const
  {
    // 2 SPS have the same size if the 2 stacks have the same size
    return stack.sameSize(sps.stack);
  }

  void copyFrom(const WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps)
  {
    if (!sameSize(sps))
      throw SIMDException("WarpingSPS::copyFrom", "size mismatch");
    // we just copy data, no resize operation
    stack.copy(sps.stack.data);
  }

  // fill in simd_sps_elems more elements in reshuffled scale-plane stack
  void complement()
  {
    SIMDVec<SPSType, SIMD_WIDTH> copy;
    SPSType *src, *dst;
    int off;
    const int w = param.w, wSPS = param.wSPS;

    for (int p = 0; p < stack.numPlanes; p++) {
      // offset to parts
      off = 0;
      // pointer into scale plane
      SPSType *data = stack[p].data;
      // go through all stepAlpha parts
      for (int s = 0; s < param.stepAlpha; s++) {
        // pick plane start
        src = data + off;
        dst = src + param.nAlpha;
        // go through entire first column in each part
        for (int i = 0; i < w; i++) {
          // printf("p = %d, s = %d, i = %d, src = %p, dst = %p (%d)\n",
          //	 p, s, i, src, dst, param.simd_sps_elems);
          // copy entire first column in each part
          copy = load<SIMD_WIDTH>(src);
          store(dst, copy);
          // for (int k = 0; k < param.simd_sps_elems; k++) dst[k] = src[k];
          src += wSPS;
          dst += wSPS;
        }
        off += param.blkSize;
      }
    }
  }

  // inversion of scale-plane stack (ss-cv => cv-ss)
  void invertFrom(const WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &spsFrom)
  {
    if (!sameSize(spsFrom))
      throw SIMDException("WarpingSPS::invertFrom", "size mismatch");
    //  1. Oct 14 (rm)
    int w = param.w, wSPS = param.wSPS, simd_sps_elems = param.simd_sps_elems;
    int blkSize = param.blkSize, nAlpha = param.nAlpha;
    // 10. Oct 14 (rm): we just need shuffleModuloPW
    // int *shuffleModulo = param.shuffleModulo;
    int *shuffleModuloPW = param.shuffleModuloPW;
    int *unshuffle       = param.unshuffle;
    int *modulo2wpw      = param.modulo2wpw;
    // (in-place inversion may not be possible, not sure)
    // original scale-plane stack has coordinates
    // iThetaSS, iDeltaCV
    // inverted scale-plane stack has coordinates
    // iThetaCV, iDeltaSS
    int S = stack.numPlanes;
    SIMDVec<SPSType, SIMD_WIDTH> d;
    // 22. Dec 13 (rm): changed loop order: plane -> row -> column
    for (int s = 0; s < S; s++) {
      SPSType *planeTo   = stack[s].data;
      SPSType *planeFrom = spsFrom.stack[(S - 1) - s].data;
      for (int iDeltaCV = 0; iDeltaCV < w; iDeltaCV++) {
        SPSType *planeToRow   = planeTo + modulo2wpw[-iDeltaCV];
        SPSType *planeFromRow = planeFrom + modulo2wpw[iDeltaCV];
        /*
          int *shuffleModulo_plus_iDeltaCV
          = param.shuffleModulo + iDeltaCV;
          for (int iThetaSS = 0; iThetaSS < param.w; iThetaSS++) {
          // compute new coordinates
          // thetaCV = deltaCV + thetaSS
          // int iThetaCV = modulo[iDeltaCV + iThetaSS];
          // deltaSS = -deltaCV;
          // int iDeltaSS = modulopw[-iDeltaCV];
          // copy data (from SPS copy to SPS which is used in computation)
          // note that we invert the order of the scale planes s -> (S-1)-s
          // scalePlane1[s][shuffle[iThetaCV] + wSPS * iDeltaSS] =
          //  scalePlane0[(S-1)-s][shuffle[iThetaSS] + wSPS * iDeltaCV];
          // 22. Dec 13 (rm): faster via table?
          // scalePlane1[s][shuffleModulo[iDeltaCV + iThetaSS]
          //	       + modulo2wpw[-iDeltaCV]] =
          // scalePlane0[(S-1)-s][shuffle[iThetaSS]
          //		       + modulo2wpw[iDeltaCV]];
          planeToRow[shuffleModulo_plus_iDeltaCV[iThetaSS]] =
          planeFromRow[param.shuffle[iThetaSS]];
          }
        */
        //  1. Oct 14 (rm)
        for (int blkStart = 0; blkStart < wSPS; blkStart += blkSize) {
          for (int iDstS = blkStart; iDstS < blkStart + nAlpha;
               iDstS += simd_sps_elems) {
            // 10. Oct 14 (rm):
            // now shuffleModuloPW (negative indices) instead of w +
            // int iSrcS = shuffleModulo[w + unshuffle[iDstS] - iDeltaCV];
            int iSrcS = shuffleModuloPW[unshuffle[iDstS] - iDeltaCV];
            // SIMDVec<SPSType,SIMD_WIDTH>
            d = loadu<SIMD_WIDTH>(planeFromRow + iSrcS);
            store(planeToRow + iDstS, d);
          }
        }
      }
    }
    // complement
    complement();
  }

  // get a compass estimate from the (shuffled) SPS
  // TODO: may be overgeneralized: since we add, we can probably assume that
  // TODO: sizeof(CompassType) >= sizeof(SPSType)
  // TODO: (decided to leave this in as an example)
  template <typename CompassType>
  void compassEstimate(
    SIMDImage<CompassType, SIMD_WIDTH, SIMD_ALIGN> &compass) const
  {
    const int wSPS           = param.wSPS;
    const int blkSize        = param.blkSize;
    const int simd_sps_elems = param.simd_sps_elems;
    const int simd_compass_elems =
      numSIMDVecElements<CompassType, SIMD_WIDTH>();
    // SIMD_WIDTH / sizeof(CompassType);
    const int nAlpha     = param.nAlpha;
    const int nPsi       = param.nPsi;
    const int numPlanes  = stack.numPlanes;
    const int numInVecs  = numInputSIMDVecs<CompassType, SPSType>();
    const int numOutVecs = numOutputSIMDVecs<CompassType, SPSType>();
    const int numElems =
      numSIMDVecsElements<CompassType, SPSType, SIMD_WIDTH>();
    if (blkSize % numElems != 0)
      throw SIMDException("WarpingSPS:CompassEstimate",
                          "blkSize has to be a multiple of numElems");
    if (nPsi % simd_compass_elems != 0)
      throw SIMDException("WarpingSPS:CompassEstimate",
                          "nPsi has to be a multiple of simd_compass_elems");
    SIMDVec<CompassType, SIMD_WIDTH> sum[simd_compass_elems];
    SIMDVec<SPSType, SIMD_WIDTH> minv[numInVecs];
    SIMDVec<CompassType, SIMD_WIDTH> minvC[numOutVecs];
    compass.resize(nPsi, 1);
    // we compute a compass estimate for nPsi steps in blocks of
    // simd_compass_elems elements
    for (int iPsi0 = 0; iPsi0 < nPsi; iPsi0 += simd_compass_elems) {
      // we compute simd_compass_elems sums and then add them horizontally
      // SIMDVec<CompassType,SIMD_WIDTH> sum[simd_compass_elems];
      for (int ic = 0, iPsi = iPsi0; ic < simd_compass_elems; ic++, iPsi++) {
        sum[ic] = setzero<CompassType, SIMD_WIDTH>();
        // row offset: the psi-index is subtracted in the warp
        // equations, that's why we have to invert it here
        int rowOff = param.modulo2wpw[-param.jPsiVec[iPsi]];
        // we sum over each SPS row, but leave out the fill-in elements:
        // we have stepAlpha blocks with blkSize elements each in the SPS!
        for (int block = 0; block < wSPS; block += blkSize)
          for (int iAlpha = 0; iAlpha < nAlpha; iAlpha += numElems) {
            // compute minimum through all scale planes
            int off = rowOff + block + iAlpha;
            for (int vi = 0, ioff = 0; vi < numInVecs;
                 vi++, ioff += simd_sps_elems) {
              // printf("block %d, iAlpha = %d, off %u\n", block, iAlpha, off);
              minv[vi] = load<SIMD_WIDTH>(stack[0].data + off + ioff);
              for (int p = 1; p < numPlanes; p++)
                minv[vi] =
                  min(minv[vi], load<SIMD_WIDTH>(stack[p].data + off + ioff));
            }
            // now we convert to CompassType
            convert(minv, minvC);
            // add to sum[ic]
            for (int vo = 0; vo < numOutVecs; vo++)
              sum[ic] = adds(sum[ic], minvC[vo]);
          }
      }
      // add (saturated) all sums horizontally and store into compass
      store(compass.data + iPsi0, hadds(sum));
    }
  }

  // get a compass estimate from the (shuffled) SPS (quantil)
  void quantilCompassEstimate(
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &compass,
    double quantilFraction) const
  {
    const int wSPS           = param.wSPS;
    const int blkSize        = param.blkSize;
    const int nAlpha         = param.nAlpha;
    const int nPsi           = param.nPsi;
    const int quantilElement = int(quantilFraction * (param.w - 1));
    const int numPlanes      = stack.numPlanes;
    std::vector<SPSType> rowVec;
    SIMDVec<SPSType, SIMD_WIDTH> minv;
    // 18. May 16 (rm): was min.elements, clang++ warned about it
    SPSType minValues[SIMDVec<SPSType, SIMD_WIDTH>::elements];
    compass.resize(nPsi, 1);
    // go through all psi values
    for (int iPsi = 0; iPsi < nPsi; iPsi++) {
      rowVec.clear();
      // row offset: the psi-index is subtracted in the warp
      // equations, that's why we have to invert it here
      int rowOff = param.modulo2wpw[-param.jPsiVec[iPsi]];
      // we leave out the fill-in elements:
      // we have stepAlpha blocks with blkSize elements each in the SPS!
      for (int block = 0; block < wSPS; block += blkSize)
        for (int iAlpha = 0; iAlpha < nAlpha; iAlpha += minv.elements) {
          // compute minimum through all scale planes
          int off = rowOff + block + iAlpha;
          minv    = load<SIMD_WIDTH>(stack[0].data + off);
          for (int p = 1; p < numPlanes; p++)
            minv = min(minv, load<SIMD_WIDTH>(stack[p].data + off));
          store(minValues, minv);
          rowVec.insert(rowVec.end(), minValues, minValues + minv.elements);
        }
      // determine and store quantil element
      nth_element(rowVec.begin(), rowVec.begin() + quantilElement,
                  rowVec.end());
      compass.data[iPsi] = rowVec[quantilElement];
    }
  }

  bool validPlane(int i) const { return (i >= 0) && (i < stack.numPlanes); }

  // get plane as it is (shuffled, theta-delta order)
  template <typename ImgType>
  void getPlaneRaw(int i, SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN> &dest,
                   double shift = 0.0, double scale = 1.0) const
  {
    if (!validPlane(i))
      throw SIMDException("WarpingSPS<SPSType>::getPlane",
                          "scale plane index out of range");
    copyShiftAndScale(stack[i], shift, scale, dest);
  }

  // get unshuffled plane
  template <typename ImgType>
  void getPlaneUnshuffled(int i,
                          SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN> &dest,
                          double shift = 0.0, double scale = 1.0) const
  {
    if (!validPlane(i))
      throw SIMDException("WarpingSPS::getPlaneUnshuffled",
                          "scale plane index out of range");
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> unshuffled;
    unshufflePlane(stack[i], unshuffled);
    copyShiftAndScale(unshuffled, shift, scale, dest);
  }

  // get unshuffled plane in theta-theta' order
  template <typename ImgType>
  void getPlaneUnshuffledTT(int i,
                            SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN> &dest,
                            double shift = 0.0, double scale = 1.0) const
  {
    if (!validPlane(i))
      throw SIMDException("WarpingSPS::getPlaneUnshuffledTT",
                          "scale plane index out of range");
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> unshuffledTT;
    unshufflePlaneTT(stack[i], unshuffledTT);
    copyShiftAndScale(unshuffledTT, shift, scale, dest);
  }

  template <typename ImgType>
  void getPlane(int i, int format,
                SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN> &dest,
                double shift = 0.0, double scale = 1.0) const
  {
    switch (format) {
    case 0: getPlaneRaw(i, dest, shift, scale); break;
    case 1: getPlaneUnshuffled(i, dest, shift, scale); break;
    case 2: getPlaneUnshuffledTT(i, dest, shift, scale); break;
    default: throw SIMDException("WarpingSPS::getPlane", "invalid format");
    }
  }

  // compute minimum over all scale planes and return as Image
  template <typename ImgType>
  void getPlaneMinimumRaw(SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN> &min,
                          double shift = 0.0, double scale = 1.0) const
  {
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> planeMinArray;
    planeMinimum(planeMinArray);
    copyShiftAndScale(planeMinArray, shift, scale, min);
  }

  // compute minimum over all scale planes and return as Image (unshuffled)
  template <typename ImgType>
  void getPlaneMinimumUnshuffled(
    SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN> &min, double shift = 0.0,
    double scale = 1.0) const
  {
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> planeMinArray;
    planeMinimum(planeMinArray);
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> unshuffled;
    unshufflePlane(planeMinArray, unshuffled);
    copyShiftAndScale(unshuffled, shift, scale, min);
  }

  // compute minimum over all scale planes and return as Image (unshuffled,
  // theta-theta' order)
  template <typename ImgType>
  void getPlaneMinimumUnshuffledTT(
    SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN> &min, double shift = 0.0,
    double scale = 1.0) const
  {
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> planeMinArray;
    planeMinimum(planeMinArray);
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> unshuffledTT;
    unshufflePlaneTT(planeMinArray, unshuffledTT);
    copyShiftAndScale(unshuffledTT, shift, scale, min);
  }

  template <typename ImgType>
  void getPlaneMinimum(int format,
                       SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN> &min,
                       double shift = 0.0, double scale = 1.0) const
  {
    switch (format) {
    case 0: getPlaneMinimumRaw(min, shift, scale); break;
    case 1: getPlaneMinimumUnshuffled(min, shift, scale); break;
    case 2: getPlaneMinimumUnshuffledTT(min, shift, scale); break;
    default:
      throw SIMDException("WarpingSPS::getPlaneMinimum", "invalid format");
    }
  }

  template <typename CompassType, typename ImgType>
  void getCompassImage(SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN> &res,
                       double shift = 0.0, double scale = 1.0) const
  {
    SIMDImage<CompassType, SIMD_WIDTH, SIMD_ALIGN> compass;
    compassEstimate<CompassType>(compass);
    copyShiftAndScale(compass, shift, scale, res);
  }

  template <typename ImgType>
  void getQuantilCompassImage(SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN> &res,
                              double quantilFraction, double shift = 0.0,
                              double scale = 1.0) const
  {
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> compass;
    quantilCompassEstimate(compass, quantilFraction);
    copyShiftAndScale(compass, shift, scale, res);
  }

  void planeMinimum(WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &spsMin) const
  {
    if ((param.w != spsMin.param.w) || (param.wSPS != spsMin.param.wSPS) ||
        (spsMin.stack.numPlanes != 1))
      throw SIMDException("WarpingSPS::planeMinimum", "invalid size of spsMin");
    planeMinimum(spsMin.stack[0]);
  }

  //------------------------------------------------------------------------

protected:
  void planeMinimum(SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &minimum) const
  {
    SIMDVec<SPSType, SIMD_WIDTH> minv;
    SPSType *minp;
    int simd_sps_elems = param.simd_sps_elems;

    minimum.resize(param.wSPS, param.w);
    minp = minimum.data;
    for (int e = 0; e < param.wSPS * param.w; e += simd_sps_elems) {
      minv = load<SIMD_WIDTH>(stack[0].data + e);
      for (int p = 1; p < stack.numPlanes; p++)
        minv = min(minv, load<SIMD_WIDTH>(stack[p].data + e));
      store(minp, minv);
      minp += simd_sps_elems;
    }
  }

  // unshuffle single plane
  void unshufflePlane(
    const SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &plane,
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &planeUnshuffled) const
  {
    planeUnshuffled.resize(param.w, param.w);
    for (int iTheta = 0; iTheta < param.w; iTheta++)
      for (int iDelta = 0; iDelta < param.w; iDelta++)
        planeUnshuffled[iDelta][iTheta] = plane[iDelta][param.shuffle[iTheta]];
  }

  // unshuffle single plane and put into theta-theta' order
  void unshufflePlaneTT(
    const SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &plane,
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &planeUnshuffledTT) const
  {
    planeUnshuffledTT.resize(param.w, param.w);
    for (int iTheta = 0; iTheta < param.w; iTheta++)
      for (int iDelta = 0; iDelta < param.w; iDelta++) {
        int iThetaPrime = param.modulo[iTheta + iDelta];
        planeUnshuffledTT[iThetaPrime][iTheta] =
          plane[iDelta][param.shuffle[iTheta]];
      }
  }
};

} // namespace simd

#endif

#include <cmath>
#include <cstddef>

namespace simd {

class ComplexSearchSelector
{
public:
  enum { SPS_ORIG, SPS_INV, NUM_SPS };
  enum {
    MATCH_1,
    MATCH_2,
    MATCH_2_INV,
    MATCH_RES,
    MATCH_FINE_1,
    MATCH_FINE_2,
    MATCH_FINE_2_INV,
    MATCH_FINE_RES,
    NUM_MATCH
  };
};

// ComplexSearch: template class with template parameter
// SearchTemplateClass (e.g. MinWarpingTemplate or WarpingTemplate);
// allows to define full, partial, fine search as either single or
// double search independent of the SearchTemplateClass; search
// functions are also templates with template template parameters
// FullSearchClass or PartialSearcherClass

template <typename SPSType, typename MatchType, typename CompassType,
          size_t SIMD_WIDTH, size_t SIMD_ALIGN, class SearchTemplateClass>
class ComplexSearch : public ComplexSearchSelector
{
protected:
  // spsWasInverted indicates whether a previous search was a double
  // search where an inverted scale-plane stack was computed; is
  // needed to decide whether fine search can be done as double
  // search as well
  bool spsWasInverted;

  // invertAndAverage inverts match array MATCH_2 to MATCH_2_INV,
  // averages with MATCH_1, and returns MATCH_RES
  inline MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> *invertAndAverage()
  {
    // average
    matchArray[MATCH_2_INV]->invertFrom(*(matchArray[MATCH_2]));
    matchArray[MATCH_RES]->averageOf(*(matchArray[MATCH_1]),
                                     *(matchArray[MATCH_2_INV]));
    return (matchResPtr = matchArray[MATCH_RES]);
  }

public:
  const WarpingParameter<SPSType, SIMD_WIDTH> &param;
  WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> **spsArray;
  SearchTemplateClass *searchTemplate;
  MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> **matchArray, *matchResPtr;

  // constructor receives references or pointers to data structures
  // such that these can be shared by multiple ComplexSearch
  // instances; searchTemplate is deleted in the destructor such
  // that a pointer can be generated by new directly in the
  // constructor call
  ComplexSearch(const WarpingParameter<SPSType, SIMD_WIDTH> &param,
                WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> **spsArray,
                SearchTemplateClass *searchTemplate,
                MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> **matchArray)
    : spsWasInverted(false), param(param), spsArray(spsArray),
      searchTemplate(searchTemplate), matchArray(matchArray), matchResPtr(0)
  {}

  ~ComplexSearch() { delete searchTemplate; }

  // =========================================================================
  // search result
  // =========================================================================

  // full search for the best match in the match array pointed to by
  // internal variable matchResPtr
  void bestMatchFull(int &iAlphaMin, double &alphaMin, int &iPsiMin,
                     double &psiMin, double &dMin)
  {
    MatchType _dMin;
    if (!matchResPtr)
      throw SIMDException("WarpingCompound::bestMatchFull",
                          "no result available");
    matchResPtr->bestMatchFull(iAlphaMin, iPsiMin, _dMin);
    dMin     = double(_dMin);
    psiMin   = param.psiVec[iPsiMin];
    alphaMin = param.alphaVec[iAlphaMin];
  }

  // invert solution given by indices of alpha and psi
  void invertSolution(int iAlphaMin, int iPsiMin, int &iAlphaMinInv,
                      int &iPsiMinInv)
  {
    if (!matchResPtr)
      throw SIMDException("WarpingCompound::invertSolution",
                          "no result available");
    matchResPtr->invertSolution(iAlphaMin, iPsiMin, iAlphaMinInv, iPsiMinInv);
  }

  // =========================================================================
  // full and partial search (using fullSearcher and partialSearcher)
  // =========================================================================

  template <
    template <typename, typename, size_t, size_t> class FullSearcherClass>
  MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> *full(
    FullSearcherClass<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>
      &searchAlgorithm,
    bool doubleSearch)
  {
    spsWasInverted = doubleSearch;
    // first run
    searchAlgorithm.search(*searchTemplate, *(spsArray[SPS_ORIG]),
                           *(matchArray[MATCH_1]));
    if (!doubleSearch) return (matchResPtr = matchArray[MATCH_1]);
    // second run
    spsArray[SPS_INV]->invertFrom(*(spsArray[SPS_ORIG]));
    searchAlgorithm.search(*searchTemplate, *(spsArray[SPS_INV]),
                           *(matchArray[MATCH_2]));
    return invertAndAverage();
  }

  template <
    template <typename, typename, size_t, size_t> class PartialSearcherClass>
  MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> *partial(
    PartialSearcherClass<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>
      &searchAlgorithm,
    bool doubleSearch, double alphaEst, double alphaRadius, double psiEst,
    double psiRadius)
  {
    MinWarpingSearchRange<SPSType, SIMD_WIDTH, SIMD_ALIGN> range(param.nAlpha,
                                                                 param.nPsi);
    spsWasInverted = doubleSearch;
    // first run
    range.setPartialRange(alphaEst, alphaRadius, psiEst, psiRadius);
    searchAlgorithm.search(*searchTemplate, *(spsArray[SPS_ORIG]), range,
                           *(matchArray[MATCH_1]));
    if (!doubleSearch) return (matchResPtr = matchArray[MATCH_1]);
    // second run
    // we have to invert the search range centers as well for second
    // computation
    double psiEstInv   = 2.0 * M_PI - psiEst;
    double alphaEstInv = M_PI + alphaEst - psiEst;
    range.setPartialRange(alphaEstInv, alphaRadius, psiEstInv, psiRadius);
    spsArray[SPS_INV]->invertFrom(*(spsArray[SPS_ORIG]));
    searchAlgorithm.search(*searchTemplate, *(spsArray[SPS_INV]), range,
                           *(matchArray[MATCH_2]));
    return invertAndAverage();
  }

  // for tests only: uses partial searcher but performs a full-range search
  template <
    template <typename, typename, size_t, size_t> class PartialSearcherClass>
  MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> *partialFull(
    PartialSearcherClass<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>
      &searchAlgorithm,
    bool doubleSearch)
  {
    MinWarpingSearchRange<SPSType, SIMD_WIDTH, SIMD_ALIGN> range(param.nAlpha,
                                                                 param.nPsi);
    spsWasInverted = doubleSearch;
    range.setFullRange();
    // first run
    searchAlgorithm.search(*searchTemplate, *(spsArray[SPS_ORIG]), range,
                           *(matchArray[MATCH_1]));
    if (!doubleSearch) return (matchResPtr = matchArray[MATCH_1]);
    // second run
    spsArray[SPS_INV]->invertFrom(*(spsArray[SPS_ORIG]));
    searchAlgorithm.search(*searchTemplate, *(spsArray[SPS_INV]), range,
                           *(matchArray[MATCH_2]));
    return invertAndAverage();
  }

  // TODO: - compass acceleration: it should be possible to invert the
  // TODO:   compass directly, but the problem is that the inversion
  // TODO:   operation in WarpingSPS::invertFrom operates on the pixel
  // TODO:   index whereas the compass array is indexed by the param
  // TODO:   index; at the moment we therefore invert the SPS and
  // TODO:   compute the compass again
  template <
    template <typename, typename, size_t, size_t> class PartialSearcherClass>
  MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> *compassAcceleration(
    PartialSearcherClass<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>
      &searchAlgorithm,
    bool doubleSearch, double psiFraction)
  {
    SIMDImage<CompassType, SIMD_WIDTH, SIMD_ALIGN> compass;
    MinWarpingSearchRange<SPSType, SIMD_WIDTH, SIMD_ALIGN> range(param.nAlpha,
                                                                 param.nPsi);
    spsWasInverted = doubleSearch;
    // first run
    spsArray[SPS_ORIG]->compassEstimate(compass);
    range.setFullCompassRange(psiFraction, compass);
    searchAlgorithm.search(*searchTemplate, *(spsArray[SPS_ORIG]), range,
                           *(matchArray[MATCH_1]));
    if (!doubleSearch) return (matchResPtr = matchArray[MATCH_1]);
    // second run
    spsArray[SPS_INV]->invertFrom(*(spsArray[SPS_ORIG]));
    spsArray[SPS_INV]->compassEstimate(compass);
    range.setFullCompassRange(psiFraction, compass);
    searchAlgorithm.search(*searchTemplate, *(spsArray[SPS_INV]), range,
                           *(matchArray[MATCH_2]));
    return invertAndAverage();
  }

  template <
    template <typename, typename, size_t, size_t> class PartialSearcherClass>
  MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> *
  quantilCompassAcceleration(
    PartialSearcherClass<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>
      &searchAlgorithm,
    bool doubleSearch, double psiFraction, double quantilFraction)
  {
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> compass;
    MinWarpingSearchRange<SPSType, SIMD_WIDTH, SIMD_ALIGN> range(param.nAlpha,
                                                                 param.nPsi);
    spsWasInverted = doubleSearch;
    // first run
    spsArray[SPS_ORIG]->quantilCompassEstimate(compass, quantilFraction);
    range.setFullCompassRange(psiFraction, compass);
    searchAlgorithm.search(*searchTemplate, *(spsArray[SPS_ORIG]), range,
                           *(matchArray[MATCH_1]));
    if (!doubleSearch) return (matchResPtr = matchArray[MATCH_1]);
    // second run
    spsArray[SPS_INV]->invertFrom(*(spsArray[SPS_ORIG]));
    spsArray[SPS_INV]->quantilCompassEstimate(compass, quantilFraction);
    range.setFullCompassRange(psiFraction, compass);
    searchAlgorithm.search(*searchTemplate, *(spsArray[SPS_INV]), range,
                           *(matchArray[MATCH_2]));
    return invertAndAverage();
  }

  // for tests: only inverse search
  template <
    template <typename, typename, size_t, size_t> class FullSearcherClass>
  MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> *fullInverse(
    FullSearcherClass<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>
      &searchAlgorithm)
  {
    spsWasInverted = true;
    spsArray[SPS_INV]->invertFrom(*(spsArray[SPS_ORIG]));
    searchAlgorithm.search(*searchTemplate, *(spsArray[SPS_INV]),
                           *(matchArray[MATCH_2]));
    matchArray[MATCH_2_INV]->invertFrom(*(matchArray[MATCH_2]));
    return (matchResPtr = matchArray[MATCH_2_INV]);
  }

  // fine search
  template <
    template <typename, typename, size_t, size_t> class PartialSearcherClass>
  void fine(PartialSearcherClass<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>
              &searchAlgorithm,
            bool doubleSearch, int iAlpha, int iPsi, int &jAlphaOffBest,
            double &alphaBest, int &jPsiOffBest, double &psiBest,
            double &matchBest, SIMDImage<MatchType, 1, 1> &fineMatch,
            bool surround = false)
  {
    if (!matchResPtr)
      throw SIMDException("WarpingCompound::fineSearch", "no previous search");
    if (doubleSearch && !spsWasInverted)
      throw SIMDException("WarpingCompound::fineSearch",
                          "double fine search requires inverted sps");
    // pointer to array which holds the result of the fine search
    MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> *matchFineRes;
    // search range
    MinWarpingSearchRange<SPSType, SIMD_WIDTH, SIMD_ALIGN> range(param.nAlpha,
                                                                 param.nPsi);
    // surround = false: search entire range between solutions
    // surround = true: only search surrounding of this solution
    const int alphaRange = surround ? param.stepAlpha / 2 : param.stepAlpha - 1;
    const int psiRange   = surround ? param.stepPsi / 2 : param.stepPsi - 1;
    // result image
    fineMatch.resize(2 * alphaRange + 1, 2 * psiRange + 1);
    // minimum search
    MatchType _matchBest = SIMDTypeInfo<MatchType>::max();
    jAlphaOffBest = jPsiOffBest = 0;
    // for (int m = MATCH_FINE_1; m < NUM_MATCH; m++)
    //   matchArray[m]->fillInvalid();
    // go through all offset pairs (including 0,0)
    for (int jPsiOff = -psiRange; jPsiOff <= psiRange; jPsiOff++) {
      for (int jAlphaOff = -alphaRange; jAlphaOff <= alphaRange; jAlphaOff++) {
        // first search
        range.setSingleRange(iAlpha, iPsi);
        searchAlgorithm.search(*searchTemplate, *(spsArray[SPS_ORIG]), range,
                               *(matchArray[MATCH_FINE_1]), jAlphaOff, jPsiOff);
        if (!doubleSearch)
          // single search
          matchFineRes = matchArray[MATCH_FINE_1];
        else {
          // double search
          int iAlphaInv, iPsiInv;
          matchArray[MATCH_FINE_1]->invertSolution(iAlpha, iPsi, iAlphaInv,
                                                   iPsiInv);
          range.setSingleRange(iAlphaInv, iPsiInv);
          int jPsiOffInv = -jPsiOff, jAlphaOffInv = jAlphaOff - jPsiOff;
          searchAlgorithm.search(*searchTemplate, *(spsArray[SPS_INV]), range,
                                 *(matchArray[MATCH_FINE_2]), jAlphaOffInv,
                                 jPsiOffInv);
          // average
#if 1
          // faster version: only for single iPsi
          matchArray[MATCH_FINE_2_INV]->invertSinglePsiFrom(
            *(matchArray[MATCH_FINE_2]), iPsi);
          matchArray[MATCH_FINE_RES]->averageSinglePsiOf(
            *(matchArray[MATCH_FINE_1]), *(matchArray[MATCH_FINE_2_INV]), iPsi);
#else
          // slower version
          matchArray[MATCH_FINE_2_INV]->invertFrom(*(matchArray[MATCH_FINE_2]));
          matchArray[MATCH_FINE_RES]->averageOf(
            *(matchArray[MATCH_FINE_1]), *(matchArray[MATCH_FINE_2_INV]));
#endif
          matchFineRes = matchArray[MATCH_FINE_RES];
        }
        MatchType _dMin = (*matchFineRes)[iPsi][iAlpha];
        fineMatch[jPsiOff + psiRange][jAlphaOff + alphaRange] = _dMin;
        // should never happen:
        // 17. Feb 16 (rm) (it actually *can* happen if postScale is
        // too large, probably because sums run into saturation and
        // invalid is the same as the saturated value)
        assert(_dMin != matchFineRes->invalid);
        if (_dMin < _matchBest) {
          _matchBest    = _dMin;
          jAlphaOffBest = jAlphaOff;
          jPsiOffBest   = jPsiOff;
        }
      }
    }
    matchBest = double(_matchBest);
    // angles are not in [0, 2*pi)
    alphaBest = param.alphaVec[iAlpha] + jAlphaOffBest * param.dTheta;
    psiBest   = param.psiVec[iPsi] + jPsiOffBest * param.dTheta;
  }

  // all combined
  // specifically useful for tests with different parameter
  // combinations, otherwise one could better pick a specific search
  // mode from the functions above
  template <
    template <typename, typename, size_t, size_t> class FullSearcherClass,
    template <typename, typename, size_t, size_t> class PartialSearcherClass>
  void search(FullSearcherClass<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>
                &fullSearchAlgorithm,
              PartialSearcherClass<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>
                &partialSearchAlgorithm,
              double alphaEst, double psiEst, int compassAccelerationMode,
              double psiFraction, double quantilCompassFraction,
              int partialSearch, double alphaRad, double psiRad,
              int partialFullSearch, int doubleSearch, int fineSearch,
              int doubleSearchFine, int fineSearchSurround, double &alphaMin,
              double &psiMin, double &dMin, int &iAlphaMin, int &iPsiMin,
              int &iAlphaMinInv, int &iPsiMinInv, int &jAlphaOff, int &jPsiOff,
              SIMDImage<MatchType, 1, 1> &fineMatch)
  {
    if (compassAccelerationMode == 1)
      // with compass acceleration (psi), sum
      compassAcceleration(partialSearchAlgorithm, doubleSearch, psiFraction);
    else if (compassAccelerationMode == 2)
      // with compass acceleration (psi), quantil
      quantilCompassAcceleration(partialSearchAlgorithm, doubleSearch,
                                 psiFraction, quantilCompassFraction);
    else if (partialSearch)
      // partial search
      partial(partialSearchAlgorithm, doubleSearch, alphaEst, alphaRad, psiEst,
              psiRad);
    else if (partialFullSearch)
      // full search, but with partial searcher (for tests only)
      partialFull(partialSearchAlgorithm, doubleSearch);
    else
      // full search
      full(fullSearchAlgorithm, doubleSearch);
    // ---- find best match -----
    bestMatchFull(iAlphaMin, alphaMin, iPsiMin, psiMin, dMin);
    invertSolution(iAlphaMin, iPsiMin, iAlphaMinInv, iPsiMinInv);
    // ---- fine search -----
    if (fineSearch)
      // with fine search
      fine(partialSearchAlgorithm, doubleSearchFine, iAlphaMin, iPsiMin,
           jAlphaOff, alphaMin, jPsiOff, psiMin, dMin, fineMatch,
           fineSearchSurround);
    else
      // without fine search
      jAlphaOff = jPsiOff = 0;
  }
};

} // namespace simd

#endif

// ===========================================================================
//
// MinWarpingSearch.H --
// classes for full and partial MinWarping search algorithms
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef MINWARPING_SEARCH_H_
#define MINWARPING_SEARCH_H_

// ===========================================================================
//
// MinWarpingTemplate.H --
// class encoding the minWarping template (x-y arguments)
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef MINWARPING_TEMPLATE_H_
#define MINWARPING_TEMPLATE_H_

#include <cmath>
#include <cstddef>
#include <limits>
#include <stdint.h>
#include <stdio.h>
#include <tsimd.H> // 20. Apr 18 (rm): thanks to Benedikt Volkmer
#include <vector>

// 20. Sep 22 (Jonas Keller): on Windows M_PI is not defined, so we
// define it here
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

namespace simd {

// =========================================================================
// data types for min-template
// =========================================================================

typedef uint32_t MinTemplateSPOffset;
typedef int32_t MinTemplateIY;

// min_template_col_entry_t contains exactly one entry
// of a min template column.
// sp is an address offset, which has to be added to the start address of the
// scale plane stack and then points to a specific scaleplane.
typedef SIMD_ATTR_PACKED_STRUCT
{
  MinTemplateSPOffset sp;
  // 19. Jun 15 (rm): uint32_t is faster (25600->23500) in this
  // version, but not in CODE3 (there slightly slower)
  // uint16_t iy;
  MinTemplateIY iy;
}
min_templt_col_entry_t;

typedef min_templt_col_entry_t *lp_min_templt_col_entry_t;

// Structure which represents a single column.
// 20. Sep 22 (Jonas Keller):
// used struct name {...}; instead of typedef struct {...} name;
// because compiler warns that type is not C-compatible for linkage
SIMD_ATTR_PACKED_STRUCT min_templt_col_t
{
  // 19. Jun 15 (rm)
  // uint32_t was slower than uint16_t, but with new pointer-based
  // loop, int was better (22500 -> 22000), int32_t even better?
  // uint16_t len;
  // uint32_t len;
  int32_t len;
  // 27. Nov 15 (rm): alternative adapted from suggestion by (as)
  // min_templt_col_entry_t entries[];
  SIMD_INLINE min_templt_col_entry_t *entries()
  {
    return (min_templt_col_entry_t *) ((uint8_t *) (this) + sizeof(len));
  }
};

// Pointer type for the structure above
typedef min_templt_col_t *lp_min_templt_col_t;

// =========================================================================
// MinWarping template
// =========================================================================

class MinWarpingTemplate
{
public:
  // width and sps width (latter needed only to compute plane offset
  // for getImage() and save())
  const int w, wSPS;
  // minimal / maximal rho
  const double rhoMin, rhoMax;
  // angular width
  const double dTheta;

  // vector storing all thresholds
  std::vector<double> thresholds;

  // Pointer on the first column
  lp_min_templt_col_t minTemplate;
  // ptr to the columns of the template mentioned above
  lp_min_templt_col_t *minTemplateColumns;

  MinWarpingTemplate(int width, int spsWidth,
                     const std::vector<double> &scaleFactors,
                     double maxThreshold, double rhoMin, double rhoMax)
    : w(width), wSPS(spsWidth), rhoMin(rhoMin), rhoMax(rhoMax),
      dTheta((2.0 * M_PI) / w), minTemplate(0), minTemplateColumns(0)
  {
    // 10. Nov 11 (rm): we use MinTemplateSPOffset as offset (sp)
    // in the scale plane stack, this limits the size of the sps (we
    // compute it this way in order not to exceed any limits in this
    // computation, more instructive form of condition is:
    // w*w*nScalePlanes > SCALEPLANEOFFSETTYPE_MAX)
    if (std::numeric_limits<MinTemplateSPOffset>::max() / scaleFactors.size() <
        (unsigned int) (w * w))
      throw SIMDException("MinWarpingTemplate::MinWarpingTemplate",
                          "size of scale-plane stack exceeds offset limit");
    initializeThresholds(scaleFactors, maxThreshold);
    createMinTemplate();
  }

  virtual ~MinWarpingTemplate() { destroyMinTemplate(); }

  template <typename ImgType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
  void getImage(SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN> &img, ImgType undef,
                double scale = 1.0, double shift = 0.0) const
  {
    lp_min_templt_col_t tCol;
    int jY, sp;

    img.resize(w, w);
    // filled with negative value for all undefined pixels
    img.fill(undef);
    for (int jX = 0; jX < w; jX++) {
      // get the template column
      tCol = minTemplateColumns[jX];
      if (tCol->len != 0)
        // go through all elements in this template column
        for (int colEntry = 0; colEntry < tCol->len; colEntry++) {
          jY          = tCol->entries()[colEntry].iy;
          sp          = tCol->entries()[colEntry].sp;
          img[jY][jX] = scale * (sp / (wSPS * w)) + shift;
        }
    }
  }

  // write in human-readable form
  void save(FILE *f) const
  {
    for (int jX = 0; jX < w; jX++) {
      // get the template column
      lp_min_templt_col_t tCol = minTemplateColumns[jX];
      fprintf(f, "x = %4d, len = %4d\n", jX, tCol->len);
      if (tCol->len != 0) {
        // go through all elements in this template column
        for (int colEntry = 0; colEntry < tCol->len; colEntry++) {
          int jY = tCol->entries()[colEntry].iy;
          int sp = tCol->entries()[colEntry].sp;
          fprintf(f, "\ty = %4d, sp = %4d\n", jY, sp / (wSPS * w));
        }
      }
    }
  }

  // this is a left-over from earlier experiments; sorts entries
  // according to y value, idea was to improve cache efficiency,
  // didn't help though;
  // if you use it, call this function only once!
  void sortMinTemplateY()
  {
    int ixright = w / 2 + 1;
    // we only need to sort right part of template
    for (int jX = ixright; jX < w; jX++) {
      // get the template column
      lp_min_templt_col_t tCol = minTemplateColumns[jX];
      // we need at least 3 entries to sort: 0 (is left untouched) and 2 more
      if (tCol->len > 2) {
        // go through all elements in this template column
        for (int colEntry1 = 1; colEntry1 < (tCol->len + 1) / 2; colEntry1++) {
          int colEntry2 = tCol->len - colEntry1;
          // swap entries
          min_templt_col_entry_t tmp = tCol->entries()[colEntry1];
          tCol->entries()[colEntry1] = tCol->entries()[colEntry2];
          tCol->entries()[colEntry2] = tmp;
        }
      }
    }
  }

  //--------------------------------------------------------------------------

protected:
  // thresholds are chosen in the center between neighboring scale factors
  void initializeThresholds(const std::vector<double> &scaleFactors,
                            double maxThreshold)
  {
    int nScalePlanes = scaleFactors.size();
    thresholds.resize(nScalePlanes);
    // initialize thresholds: center between scaleFactors
    for (int i = 0; i < nScalePlanes - 1; i++)
      thresholds[i] = 0.5 * (scaleFactors[i] + scaleFactors[i + 1]);
    // upper threshold is given
    thresholds[nScalePlanes - 1] = maxThreshold;
  }

  // creates scale-plane template for min-warping
  // from ScalePlaneStack.C (code by mk)
  // as we know, that we can access linear memory most efficiently, we
  // build our template this way:
  // <2*len0> <sp00> <iy00> ... <spX0> <iyX0>
  // <2*len1> <sp01> <iy01> ... <spX1> <iyX1>
  // ...
  // we must not omit the col_length (although it follows a simple rule)
  // because we need it to mark empty columns as they occur in templates with
  // odd widths!

  void createMinTemplate()
  {
    int ixleft  = (w - 1) / 2;
    int ixright = w / 2 + 1;

    // Reserve enough memory for the min template - there have to be
    // "w" column headers and at least "w * w / 4" column entries
    int templtSpace = sizeof(min_templt_col_t) * w +
                      sizeof(min_templt_col_entry_t) * (w * w / 4);

    // Reserve the complete template memory with malloc, as the
    // memory region is composed of min_templt_col_entry_t and
    // min_templt_col_entry_t - so we can't use "new"
    minTemplate = (lp_min_templt_col_t) (malloc(templtSpace));

    // Reserve the memory for minTemplateColumns - this array holds
    // pointers to the beginning of each column
    minTemplateColumns = new lp_min_templt_col_t[w];

    // Pointer on the current column in the min template
    lp_min_templt_col_t ptr = minTemplate;

    // Skip the first column - set the column pointer to the
    // beginning of the template
    ptr->len              = 0;
    minTemplateColumns[0] = ptr;
    // goto next column (empty "entries" array)
    ptr++;

    // Calculate the left half of the min template
    calculateMinTemplatePart(ptr, 1, ixleft + 1, 1);

    // we insert a gap here if the width is even
    if (!(w & 1)) {
      ptr->len                       = 0;
      minTemplateColumns[ixleft + 1] = ptr;
      // goto next column (empty "entries" array)
      ptr++;
    }

    // Calculate the right half of the min template
    calculateMinTemplatePart(ptr, ixright, w, (-1));

    // Check whether we're still inside the reserved memory region
    // printf("w = %d, %p - %p = %d <= %d ?\n",
    //	  w, ptr, minTemplate, (intptr_t)ptr - (intptr_t)minTemplate,
    //	  templtSpace);
    if ((intptr_t) ptr - (intptr_t) minTemplate > templtSpace)
      throw SIMDException("MinWarpingTemplate::createTemplate",
                          "insufficient reserved memory");
  }

  // calculateMinTemplatePart is used by createMinTemplate to create
  // the left and the right half of the minTemplate.
  //
  // ptr is a reference on the current column pointer
  // xstart is the start value for ix
  // xstop is the end value for ix, where xstop is not reached, ix != xstop
  // iy_dir is the direction into which iy gets incremented
  void calculateMinTemplatePart(lp_min_templt_col_t &ptr, const int xstart,
                                const int xstop, const int iy_dir)
  {
    int ix, iy, j, ej;
    int colHeight;
    unsigned int t;
    double x, y;
    double sigma, sinxpy;
    bool found;
    double rho;

    for (ix = xstart; ix < xstop; ix++) {
      // Set the column pointer
      minTemplateColumns[ix] = ptr;

      x         = ix * dTheta;
      colHeight = (std::abs(2 * ix - w) + 1) / 2;

      iy       = 0;
      ptr->len = 0;
      // entry index (with rho-mechanism: can differ from j!)
      ej = 0;
      for (j = 0; j < colHeight; j++) {
        if (iy < 0) iy += w;

        y      = iy * dTheta;
        sinxpy = sin(x + y);
        sigma  = sin(x) / sinxpy;

        // 16. Jul 12 (rm): we only accept (x,y) pairs within a
        // certain rho-range
        rho = sin(y) / sinxpy;
        // printf("rho = %g\n", rho);
        if ((rho >= rhoMin) && (rho <= rhoMax)) {
          // printf("inside\n");

          if (sigma <= thresholds[thresholds.size() - 1]) {
            found = false;
            for (t = 0; t < thresholds.size(); t++)
              if (sigma <= thresholds[t]) {
                found = true;
                break;
              }
            if (!found)
              throw SIMDException(
                "MinWarpingTemplate::calculateMinTemplatePart",
                "scale plane not found");

            // Increment the column length
            ptr->len++;

            // Calculate the scale-plane address offset (multiples of SPSType)
            // 23. Oct 12 (rm): here we can take any scale plane since
            // the offset is the same for all
            // ptr->entries()[ej].sp =
            //  (uint32_t)(scalePlane[t] - scalePlane[0]);
            // 18. Aug 14 (rm): no access to scalePlane after refactoring
            ptr->entries()[ej].sp = (MinTemplateSPOffset) (t * w * wSPS);

            // Store the row index
            ptr->entries()[ej].iy = iy;

            // 16. Jul 12 (rm) next index
            ej++;

          } else {
            break;
          }
        }

        // Calculate the next row index
        iy += iy_dir;
      }

      // Increment the column pointer position
      // advance by ptr->len elements of type min_templt_col_entry (skip
      // entire entries array) and 1 element of min_templt_col_t
      ptr =
        (lp_min_templt_col_t) ((lp_min_templt_col_entry_t) ptr + ptr->len) + 1;
    }
  }

  void destroyMinTemplate()
  {
    if (minTemplate) {
      free(minTemplate);
      minTemplate = NULL;
    }
    if (minTemplateColumns) {
      delete[] minTemplateColumns;
      minTemplateColumns = 0;
    }
  }
};

} // namespace simd

#endif

#include <cmath>
#include <cstddef>

namespace simd {

// ===========================================================================
// MinWarping full search algorithms
// ===========================================================================

template <typename SPSType, typename MatchType, size_t SIMD_WIDTH,
          size_t SIMD_ALIGN>
class MinWarpingFull
{
public:
  virtual ~MinWarpingFull() {}
  virtual void search(
    const MinWarpingTemplate &minTemplate,
    const WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps,
    MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> &match) = 0;
};

// ===========================================================================
// MinWarping partial search algorithms
// ===========================================================================

template <typename SPSType, typename MatchType, size_t SIMD_WIDTH,
          size_t SIMD_ALIGN>
class MinWarpingPartial
{
public:
  virtual ~MinWarpingPartial() {}
  virtual void search(
    const MinWarpingTemplate &minTemplate,
    const WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps,
    const MinWarpingSearchRange<SPSType, SIMD_WIDTH, SIMD_ALIGN> &range,
    MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> &match,
    int jAlphaOff = 0, int jPsiOff = 0) = 0;
};

} // namespace simd

#endif

// ===========================================================================
//
// MinWarpingSearchCollection.H --
// collection of search algorithms for minWarping
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef MINWARPING_SEARCH_COLLECTION_H_
#define MINWARPING_SEARCH_COLLECTION_H_

#include <cstddef>
#include <limits>
#include <tsimd.H>
#include <vector>

namespace simd {

// TODO: test if _mm_lddqu_si128 is faster than loadu
// TODO: faster with different arrangement of SPS (more cache-efficient?)
// TODO: test gcc 4.9 runtime (M. Pflanzer: 50% slower!?)

// ###########################################################################
// full matching
// ###########################################################################

// ===========================================================================
// XPAY
// ===========================================================================

// XPAY denotes the search order: x, psi, alpha, y
template <typename SPSType, typename MatchType, size_t SIMD_WIDTH,
          size_t SIMD_ALIGN>
class MinWarpingFull_XPAY
  : public MinWarpingFull<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>
{
  virtual void search(const MinWarpingTemplate &minTemplate,
                      const WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps,
                      MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> &match)
  {
    // we assume that sizeof(SPSType) <= sizeof(MatchType)
    // (since we add up SPSType elements in MatchType sum)
    // (just to provide the user with a clear compiler message)
    static_assert(sizeof(SPSType) <= sizeof(MatchType), "");

    // 30. Sep 14 (rm): local copies (somewhat faster, surprisingly)
    //  1. Jun 15 (rm): now const
    const int w    = minTemplate.w;
    const int nPsi = sps.param.nPsi, nAlpha = sps.param.nAlpha;
    int *const shuffleModulo = sps.param.shuffleModulo;
    int *const modulo2wpw    = sps.param.modulo2wpw;
    int *const jPsiVec       = sps.param.jPsiVec;
    int *const jAlphaVec     = sps.param.jAlphaVec;
    MatchType *const _match  = match.match.data;
    SPSType *const _stack    = sps.stack.data;
    const int simd_sps_elems = sps.param.simd_sps_elems;
    // numInVecs is always 1, see assertion above
    const int numOutVecs = numOutputSIMDVecs<MatchType, SPSType>();
    const int numOutVecElems =
      // numOutputSIMDVecElements<MatchType,SPSType,SIMD_WIDTH>();
      numSIMDVecElements<MatchType, SIMD_WIDTH>();
    // numElems is always simd_sps_elems, see assertion above
    const SPSType maxSPS = SIMDTypeInfo<SPSType>::max();
    // SIMDVec<SPSType,SIMD_WIDTH> zero = setzero<SPSType,SIMD_WIDTH>();
    // faster if not defined inside loops?
    SIMDVec<SPSType, SIMD_WIDTH> minv, v;
    SIMDVec<MatchType, SIMD_WIDTH> minvM[numOutVecs];

    // we write simd_sps_elems results to match array in one go
    if (nAlpha % simd_sps_elems != 0)
      throw SIMDException("MinWarpingFull_XPAY::search",
                          "nAlpha has to be a multiple of simd_sps_elems");

    // here the match array is accumulated
    // TODO: entire clear in the beginning or split (when needed) - which
    // TODO: is faster?
    match.clear();
    // go trough all template columns
#if 0
      for (int jX = 0; jX < w; jX++) {
#else
    // slightly faster, but only on AVX
    // idea: SPS is accessed in stepAlpha blocks
    const int stepAlpha = sps.param.stepAlpha;
    for (int jXbase = 0; jXbase < stepAlpha; jXbase++)
      for (int jX = jXbase; jX < w; jX += stepAlpha) {
#endif
        // get the template column
        lp_min_templt_col_t tCol = minTemplate.minTemplateColumns[jX];
        // we only do min search for non-empty template columns
        // (otherwise we would obtain initial value of min!)
        if (tCol->len != 0) {
          // precompute part of shuffled (jX + jAlpha) % w
          int *shuffleModuloPlusX = shuffleModulo + jX;
          // pointer into match array (arranged in nPsi rows @ nAlpha cols)
          MatchType *matchp = _match;
          // go through all psi parameters
          for (int iPsi = 0; iPsi < nPsi; iPsi++) {
            // precompute part of (jY - jPsi) % w (times wSPS)
            int *modulo2wpwMinusPsi = modulo2wpw - jPsiVec[iPsi];
            // go through all alpha parameters
            for (int iAlpha = 0; iAlpha < nAlpha; iAlpha += simd_sps_elems) {
              // precompute scale-plane stack with column offset
              // select word in scale-plane row, shuffled:
              // jTheta = (jX + jAlpha) % w
              // 30. Sep 14 (rm): array access instead of dereferentiation
              SPSType *spsCol = _stack + shuffleModuloPlusX[jAlphaVec[iAlpha]];
              // we search for a minimum, so we start with the highest
              // positive value
              minv = set1<SPSType, SIMD_WIDTH>(maxSPS);
              // go through all elements in this template column
              // 19. Jun 15 (rm): pointer-based loop is faster
              const min_templt_col_entry_t *const start = tCol->entries();
              const min_templt_col_entry_t *const end   = start + tCol->len;
              for (const min_templt_col_entry_t *entry = start; entry < end;
                   entry++) {
                // compute address of sps word
                // 30. Sep 14 (rm): array access instead of dereferentiation
                SPSType *vp =
                  // select scale plane
                  spsCol + entry->sp +
                  // select row in scale plane: jDelta=wSPS * [(jY - jPsi) % w]
                  modulo2wpwMinusPsi[entry->iy];
                // we need to have an unaligned access
                v = loadu<SIMD_WIDTH>(vp);
                // update minimum (vpminub)
                minv = min(minv, v);
              }
              // accumulate minima
              extend(minv, minvM);
              for (int vo = 0; vo < numOutVecs; vo++, matchp += numOutVecElems)
                store(matchp, adds(load<SIMD_WIDTH>(matchp), minvM[vo]));
            }
          }
        }
      }
  }
};

// ###########################################################################
// min-warping curve (structure taken from full-XPAY, but no SIMD code)
// ###########################################################################

// 23. Feb 18 (rm): added jYVec
template <typename SPSType, typename MatchType, size_t SIMD_WIDTH,
          size_t SIMD_ALIGN>
void minWarpingCurve(const MinWarpingTemplate &minTemplate,
                     const WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps,
                     int iAlpha, int iPsi,
                     std::vector<int> &jDeltaVec,     // over jTheta
                     std::vector<int> &planeIndexVec, // over jTheta
                     std::vector<SPSType> &minVec,    // over jTheta
                     std::vector<int> &jYVec,         // over jX
                     std::vector<int> &jXVec,         // over jTheta
                     std::vector<int> &jThetaVec,     // over jX
                     MatchType &matchSum)
{
  // 30. Sep 14 (rm): local copies (somewhat faster, surprisingly)
  //  1. Jun 15 (rm): now const
  const int w = minTemplate.w, wSPS = minTemplate.wSPS;
  int *const shuffle    = sps.param.shuffle;
  int *const modulo     = sps.param.modulo;
  int *const modulopw   = sps.param.modulopw;
  SPSType *const _stack = sps.stack.data;
  const int numPlanes   = sps.stack.numPlanes;
  const SPSType maxSPS  = SIMDTypeInfo<SPSType>::max();
  // resize result vectors, gaps in min-template stay negative!
  jDeltaVec.resize(w, -1);
  planeIndexVec.resize(w, -1);
  minVec.resize(w, SIMDTypeInfo<SPSType>::max());
  jYVec.resize(w, -1);
  jXVec.resize(w, -1);
  jThetaVec.resize(w, -1);
  matchSum = 0;
  // jAlpha, jPsi:
  const int jAlpha = sps.param.jAlphaVec[iAlpha];
  const int jPsi   = sps.param.jPsiVec[iPsi];
  // go trough all template columns
  for (int jX = 0; jX < w; jX++) {
    // get the template column
    lp_min_templt_col_t tCol = minTemplate.minTemplateColumns[jX];
    // we only do min search for non-empty template columns
    // (otherwise we would obtain initial value of min!)
    if (tCol->len != 0) {
      // precompute scale-plane stack with column offset
      // select word in scale-plane row, shuffled:
      // jTheta = (jX + jAlpha) % w
      int jTheta = modulo[jX + jAlpha];
      // 30. Sep 14 (rm): array access instead of dereferentiation
      SPSType *spsCol = _stack + shuffle[jTheta];
      // we search for a minimum, so we start with the highest
      // positive value
      SPSType minv = maxSPS;
      // initialize with invalid values, should be updated in any case
      int jDeltaMin = w, planeIndexMin = numPlanes, jYMin = w;
      // go through all elements in this template column
      // 19. Jun 15 (rm): pointer-based loop is faster
      const min_templt_col_entry_t *const start = tCol->entries();
      const min_templt_col_entry_t *const end   = start + tCol->len;
      for (const min_templt_col_entry_t *entry = start; entry < end; entry++) {
        int jY = (int) entry->iy;
        // jDelta = (jY - jPsi) % w
        int jDelta = modulopw[jY - jPsi];
        // entry->sp is an offset, not an index, convert back to index
        int planeIndex = entry->sp / (wSPS * w);
        // compute address of sps word
        // 30. Sep 14 (rm): array access instead of dereferentiation
        SPSType *vp =
          // select scale plane
          spsCol + entry->sp +
          // select row in scale plane: jDelta = wSPS * [(jY - jPsi) % w]
          wSPS * jDelta;
        // we need to have an unaligned access
        SPSType v = *vp;
        // update minimum
        // 6. Oct 15 (rm): <= instead of < (if all values are equal,
        //                 jDeltaMin was not updated)
        if (v <= minv) {
          minv          = v;
          jDeltaMin     = jDelta;
          planeIndexMin = planeIndex;
          jYMin         = jY;
        }
      }
      // these vectors run over jTheta
      jDeltaVec[jTheta]     = jDeltaMin;
      planeIndexVec[jTheta] = planeIndexMin;
      minVec[jTheta]        = minv;
      // jYVec runs over jX!
      jYVec[jX] = jYMin;
      //  4. Jul 18 (rm): association jX <-> jTheta
      jXVec[jTheta] = jX;
      jThetaVec[jX] = jTheta;
      matchSum += minv;
    }
  }
}

// ###########################################################################
// partial matching
// ###########################################################################

// TODO: check: is partial search really working on arbitrary range sets
// TODO: with holes?

// ===========================================================================
// XPAY
// ===========================================================================

// XPAY denotes the search order: x, psi, alpha, y
template <typename SPSType, typename MatchType, size_t SIMD_WIDTH,
          size_t SIMD_ALIGN>
class MinWarpingPartial_XPAY
  : public MinWarpingPartial<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>
{
public:
  virtual void search(
    const MinWarpingTemplate &minTemplate,
    const WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps,
    const MinWarpingSearchRange<SPSType, SIMD_WIDTH, SIMD_ALIGN> &range,
    MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> &match, int jAlphaOff,
    int jPsiOff)
  {
    // we assume that sizeof(SPSType) <= sizeof(MatchType)
    // (since we add up SPSType elements in MatchType sum)
    // (just to provide the user with a clear compiler message)
    static_assert(sizeof(SPSType) <= sizeof(MatchType), "");

    //  1. Oct 14 (rm): local copies (sometimes faster, not here though)
    //  3. Jun 15 (rm): now const
    const int w                = minTemplate.w;
    const int nAlpha           = sps.param.nAlpha;
    int *const shuffleModuloPW = sps.param.shuffleModuloPW;
    int *const modulo2wpw      = sps.param.modulo2wpw;
    int *const jAlphaVec       = sps.param.jAlphaVec;
    int *const jPsiVec         = sps.param.jPsiVec;
    MatchType *const _match    = match.match.data;
    SPSType *const _stack      = sps.stack.data;
    const int simd_sps_elems   = sps.param.simd_sps_elems;
    // numInVecs is always 1, see assertion above
    const int numOutVecs = numOutputSIMDVecs<MatchType, SPSType>();
    const int numOutVecElems =
      // numOutputSIMDVecElements<MatchType,SPSType,SIMD_WIDTH>();
      numSIMDVecElements<MatchType, SIMD_WIDTH>();
    // numElems is always simd_sps_elems, see assertion above
    const SPSType maxSPS = SIMDTypeInfo<SPSType>::max();
    // faster if not defined inside loops
    SIMDVec<MatchType, SIMD_WIDTH> zero = setzero<MatchType, SIMD_WIDTH>();
    SIMDVec<SPSType, SIMD_WIDTH> minv, v;
    SIMDVec<MatchType, SIMD_WIDTH> minvM[numOutVecs];

    // we write simd_sps_elems results to match array in one go
    if (nAlpha % simd_sps_elems != 0)
      throw SIMDException("MinWarpingPartial_XPAY::search",
                          "nAlpha has to be a multiple of simd_sps_elems");

    // this is a bit more complicated than in the PAXY version: since we
    // accumulate in the match array, we need to initialize all match
    // elements which will not be touched later with invalid (e.g. 0xffff)
    // and all elements which will be touched with 0x0000,
    // all untouched elements in alpha-psi array (match) are invalid
    // (e.g. 0xffff)
    match.fillInvalid();
    // the elements which will be touched are zeroed out
    // go through all psi parameters
    for (unsigned int kPsi = 0; kPsi < range.psiIndices.size(); kPsi++) {
      int iPsi            = range.psiIndices[kPsi];
      MatchType *matchRow = _match + iPsi * nAlpha;
      // go through all alpha parameters
      // note that alphaIndices contain indices with a spacing of
      // simd_sps_elems!
      for (unsigned int kAlpha = 0; kAlpha < range.alphaIndices.size();
           kAlpha++) {
        int iAlpha = range.alphaIndices[kAlpha];
        // set consecutive values to 0
        store(matchRow + iAlpha, zero, numOutVecs);
      }
    }
    // go trough all template columns
    // TODO: same x-loop spliting as in full search?
    for (int jX = 0; jX < w; jX++) {
      // get the template column
      lp_min_templt_col_t tCol = minTemplate.minTemplateColumns[jX];
      // we only do min search for non-empty template columns
      // (otherwise we would obtain initial value of min!)
      if (tCol->len != 0) {
        // precompute part of shuffled (jX + jAlpha) % w
        // 20. Nov 15 (rm): shuffleModuloPW instead of shuffleModulo
        // 17. Dec 15 (rm): addition of offset moved here
        int *shuffleModuloPlusXPlusAlphaOff = shuffleModuloPW + jX + jAlphaOff;
        // go through all psi parameters
        for (unsigned int kPsi = 0; kPsi < range.psiIndices.size(); kPsi++) {
          // get index
          int iPsi = range.psiIndices[kPsi];
          // precompute part of (jY - jPsi) % w (times wSPS)
          // 20. Nov 15 (rm): offset added
          int *modulo2wpwMinusPsi = modulo2wpw - (jPsiVec[iPsi] + jPsiOff);
          // pointer into match row
          MatchType *matchRow = _match + iPsi * nAlpha;
          // go through all alpha parameters
          // note that alphaIndices contain indices with a spacing of 8!
          for (unsigned int kAlpha = 0; kAlpha < range.alphaIndices.size();
               kAlpha++) {
            // get index
            int iAlpha = range.alphaIndices[kAlpha];
            // precompute scale-plane stack with column offset
            // select word in scale-plane row, shuffled: (jX + jAlpha) % w
            //  1. Oct 14 (rm): index access
            // 20. Nov 15 (rm): offset added
            SPSType *spsCol =
              _stack + shuffleModuloPlusXPlusAlphaOff[jAlphaVec[iAlpha]];
            // we search for a minimum, so we start with the highest
            // positive value
            minv = set1<SPSType, SIMD_WIDTH>(maxSPS);
            // go through all elements in this template column
            // 19. Jun 15 (rm): pointer-based loop is faster
            const min_templt_col_entry_t *const start = tCol->entries();
            const min_templt_col_entry_t *const end   = start + tCol->len;
            for (const min_templt_col_entry_t *entry = start; entry < end;
                 entry++) {
              // compute address of sps word
              SPSType *vp =
                // select scale plane
                //  1. Oct 14 (rm): index access
                spsCol + entry->sp +
                // select row in scale plane: wSPS * [(jY - jPsi) % w]
                modulo2wpwMinusPsi[entry->iy];
              // we need to have an unaligned access
              v = loadu<SIMD_WIDTH>(vp);
              // update minimum
              minv = min(minv, v);
            }
            // accumulate minima
            // MatchType *matchp = match + iPsi * nAlpha + iAlpha;
            MatchType *matchp = matchRow + iAlpha;
            extend(minv, minvM);
            for (int vo = 0; vo < numOutVecs; vo++, matchp += numOutVecElems)
              store(matchp, adds(load<SIMD_WIDTH>(matchp), minvM[vo]));
          }
        }
      }
    }
  }
};

} // namespace simd

#endif

// ===========================================================================
//
// OCamModel.H --
// Christoph Berganski
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef OCAM_MODEL_H
#define OCAM_MODEL_H

// Math functions: root, powers, trig. to compute coordinate mappings
#include <cmath>
// Dynamic size generic vector (array). Used to hold polynomial coefficients
#include <vector>
// Standard library string. Used to specify filename
#include <string>
// Standard library exception base class (to derive custom exception)
#include <exception>
// size_t
#include <cstddef>
#include <tsimd.H>

// Transformation matrices
// ===========================================================================
//
// TransformMatrix.H --
// Christoph Berganski
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef TRANSFORM_H
#define TRANSFORM_H

// Fixed size generic array
#include <array>
// Math functions: sin(), cos()
#include <cmath>

// Prior to C++17 there are no inline variables
#if __cplusplus >= 201703L
// If inline variables are available, it is probably better to actually use
// inline for global constants: The variable (constant) has external linkage and
// shares one address across all translation units.
#define GLOBAL_CONSTANT inline const
#else
// If not available, just fall back to static having one instance per
// translation unit.
#define GLOBAL_CONSTANT static const
#endif

/**
 * @brief Homogenous transformations (4d matrices)
 */
namespace transform {
/**
 * @brief Homogenous transformation represented as 4x4 matrix
 */
using Matrix = std::array<std::array<double, 4>, 4>;

/**
 * @brief Homogenous coordinate vector (4d vector)
 */
using Vector = std::array<double, 4>;

/**
 * @brief The identity transformation
 */
GLOBAL_CONSTANT Matrix Id = {{// @formatter:off
                              {1.0, 0.0, 0.0, 0.0},
                              {0.0, 1.0, 0.0, 0.0},
                              {0.0, 0.0, 1.0, 0.0},
                              {0.0, 0.0, 0.0, 1.0}}};
// @formatter:on

/**
 * @brief Basic X-Axis rotation transformation
 */
static inline Matrix Rx(const double x)
{
  // @formatter:off
  return {{{1, 0, 0, 0},
           {0, cos(x), -sin(x), 0},
           {0, sin(x), cos(x), 0},
           {0, 0, 0, 1}}};
  // @formatter:on
}

/**
 * @brief Basic Y-Axis rotation transformation
 */
static inline Matrix Ry(const double y)
{
  // @formatter:off
  return {{{cos(y), 0, sin(y), 0},
           {0, 1, 0, 0},
           {-sin(y), 0, cos(y), 0},
           {0, 0, 0, 1}}};
  // @formatter:on
}

/**
 * @brief Basic Z-Axis rotation transformation
 */
static inline Matrix Rz(const double z)
{
  // @formatter:off
  return {{{cos(z), -sin(z), 0, 0},
           {sin(z), cos(z), 0, 0},
           {0, 0, 1, 0},
           {0, 0, 0, 1}}};
  // @formatter:on
}

/**
 * @brief Basic X-Axis translation transformation
 */
static inline Matrix Tx(const double x)
{
  // @formatter:off
  return {{{1, 0, 0, x}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}}};
  // @formatter:on
}

/**
 * @brief Basic Y-Axis translation transformation
 */
static inline Matrix Ty(const double y)
{
  // @formatter:off
  return {{{1, 0, 0, 0}, {0, 1, 0, y}, {0, 0, 1, 0}, {0, 0, 0, 1}}};
  // @formatter:on
}

/**
 * @brief Basic Z-Axis translation transformation
 */
static inline Matrix Tz(const double z)
{
  // @formatter:off
  return {{{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, z}, {0, 0, 0, 1}}};
  // @formatter:on
}

/**
 * @brief Transformation Matrix-Matrix multiplication (composition)
 */
static inline Matrix operator*(const Matrix &A, const Matrix &B)
{
  // Initialize empty 4x4 matrix
  // @formatter:off
  Matrix C = {{{0.0, 0.0, 0.0, 0.0},
               {0.0, 0.0, 0.0, 0.0},
               {0.0, 0.0, 0.0, 0.0},
               {0.0, 0.0, 0.0, 0.0}}};
  // @formatter:on
  // Compute product (accumulate in C)
  for (std::size_t i = 0; i < 4; ++i)
    for (std::size_t j = 0; j < 4; ++j)
      for (std::size_t k = 0; k < 4; ++k) C[i][j] += A[i][k] * B[k][j];
  // Return accumulator matrix
  return C;
}

/**
 * @brief Transformation Matrix-Vector multiplication
 */
static inline Vector operator*(const Matrix &A, const Vector &x)
{
  // Initialize empty 4x1/1x4 vector
  Vector y = {{0.0, 0.0, 0.0, 0.0}};
  // Compute product (accumulate in y)
  for (std::size_t i = 0; i < 4; ++i)
    for (std::size_t j = 0; j < 4; ++j) y[i] += A[i][j] * x[j];
  // Return accumulator vector
  return y;
}
} // namespace transform

#endif /*TRANSFORM_H*/

// SIMD Image type

// Functions operating on SIMDImages
// ===========================================================================
//
// SIMDImageFunctions.H --
// functions operating on SIMDImage objects
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef SIMD_IMAGE_FUNCTIONS_H_
#define SIMD_IMAGE_FUNCTIONS_H_

// ===========================================================================
//
// saturate_cast.H --
// Christoph Berganski
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef SATURATE_CAST_H
#define SATURATE_CAST_H

#include <algorithm> // std::min and std::max
#include <tsimd.H>   // SIMD typedefs and TypeInfo

// WarpingSIMD / SIMDImage namespace
namespace simd {
/**
 * @brief Type cast with saturation. This means: Values outside of the target
 * type range are clipped to the target type min or max value.
 */
template <typename Tout, typename Tin>
Tout saturate_cast(const Tin v)
{
  // Target Type min value in input type
  Tin min = (Tin) TypeInfo<Tout>::min();
  // Target Type max value in input type
  Tin max = (Tin) TypeInfo<Tout>::max();
  // Clip value to [min,max] before casting to Tout
  return (Tout) std::min(std::max(v, min), max);
}
} // namespace simd

#endif /*SATURATE_CAST_H*/

#include <algorithm>
#include <cstddef>
#include <math.h>
#include <tsimd.H>
#include <vector>

/**
 * @brief Interpolation method selectors
 */
enum class Interpolation : int {
  /**
   * @brief Nearest neighbor interpolation method selector
   */
  NEAREST = 0,

  /**
   * @brief (Bi-)Linear interpolation method selector
   */
  LINEAR = 1
};

namespace simd {

// ===========================================================================
// NOTES:
// - copy*() functions allow same image as input and output
// ===========================================================================

// ===========================================================================
// functions operating on SIMDImage
// ===========================================================================

// ---------------------------------------------------------------------------
// sameness / overlap check
// ---------------------------------------------------------------------------

// images with same type could be identical (same data pointer)
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AnyAddOn1,
          class AnyAddOn2>
bool same(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &i1,
          const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &i2)
{
  return i1.same(i2);
}

// images with different type can never be identical
template <typename T, typename U, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn1, class AnyAddOn2>
bool same(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &,
          const SIMDImage<U, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &)
{
  return false;
}

// stacks with same type could be identical (same data pointer)
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AnyAddOn1,
          class AnyAddOn2>
bool same(const SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &s1,
          const SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &s2)
{
  return s1.same(s2);
}

// stacks with different type can never be identical
template <typename T, typename U, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn1, class AnyAddOn2>
bool same(const SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &,
          const SIMDStack<U, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &)
{
  return false;
}

// sharedptrs with same element type can overlap (some data pointer)
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
bool overlap(const SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN> &i1,
             const SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN> &i2)
{
  // check if start of i1 falls into range of i2 and vice versa
  return (((i1.data >= i2.data) && (i1.data < i2.data + i2.size)) ||
          ((i2.data >= i1.data) && (i2.data < i1.data + i1.size)));
}

// sharedptrs with different element types can never overlap
template <typename T, typename U, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
bool overlap(const SharedSIMDPtr<T, SIMD_WIDTH, SIMD_ALIGN> &,
             const SharedSIMDPtr<U, SIMD_WIDTH, SIMD_ALIGN> &)
{
  return false;
}

// ---------------------------------------------------------------------------
// sum of absolute values
// ---------------------------------------------------------------------------

// sum of absolute values in all columns
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AnyAddOn1,
          class AnyAddOn2>
void sumOfAbs(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &img,
              SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &absSum)
{
  SIMDVec<T, SIMD_WIDTH> as;
  if (overlap(img, absSum))
    throw SIMDException("sumOfAbs", "input and output image overlap");
  // number of elements in vector
  const int simd_elems = as.elements;
  const int w = img.w, h = img.h;
  absSum.resize(w, 1, img.addOn);
  // pointer to input image: we work with two pointers, one (pi0)
  // pointing to the top row, the other (pi1) traversing the column block
  // pi0 traverses top row in jumps of simd_elems values
  const T *pi0 = img.data;
  // pas traverses result (single row) in jumps of simd_elems values
  T *pas = absSum.data;
  // go through top column in jumps of simd_elems
  for (int x = 0; x < w; x += simd_elems) {
    // pi1 traverses block of 8 columns, starting at the top row
    const T *pi1 = pi0;
    // sum of absolute values = 0
    // SIMDVec<T,SIMD_WIDTH>
    as = setzero<T, SIMD_WIDTH>();
    // go through column block
    for (int y = 0; y < h; y++) {
      // add absolute values with saturation
      // 25. Jan 14 (rm): using adds: we have to avoid overflow!
      as = adds(as, abs(load<SIMD_WIDTH>(pi1)));
      // go to next row
      pi1 += w;
    }
    // store sum
    store(pas, as);
    // next block of 8 columns
    pi0 += simd_elems;
    pas += simd_elems;
  }
}

// ---------------------------------------------------------------------------
// match operators for numerator
// ---------------------------------------------------------------------------

// match operator for NSAD
template <typename T, size_t SIMD_WIDTH>
struct MatchAbsDiff
{
  static SIMD_INLINE SIMDVec<T, SIMD_WIDTH> match(
    const SIMDVec<T, SIMD_WIDTH> &a, const SIMDVec<T, SIMD_WIDTH> &b)
  {
    return abs(sub(a, b));
  }
};

// match operator for ASC2
template <typename T, size_t SIMD_WIDTH>
struct MatchAsc2
{
  static SIMD_INLINE SIMDVec<T, SIMD_WIDTH> match(
    const SIMDVec<T, SIMD_WIDTH> &a, const SIMDVec<T, SIMD_WIDTH> &b)
  {
    // max(min(a,b), -max(a,b))
    return max(min(a, b), neg(max(a, b)));
  }
};

// match operator for ASC without inversion
// (slow, for tests only, effect: addition of 1 only in denominator)
template <typename T, size_t SIMD_WIDTH>
struct MatchAscDirect
{
  static SIMD_INLINE SIMDVec<T, SIMD_WIDTH> match(
    const SIMDVec<T, SIMD_WIDTH> &a, const SIMDVec<T, SIMD_WIDTH> &b)
  {
    // |a| + |b| - (|a + b| - |a - b|)
    return sub(add(abs(a), abs(b)), sub(abs(add(a, b)), abs(sub(a, b))));
  }
};

// match operator for NSADA
template <typename T, size_t SIMD_WIDTH>
struct MatchAbsDiffAbs
{
  static SIMD_INLINE SIMDVec<T, SIMD_WIDTH> match(
    const SIMDVec<T, SIMD_WIDTH> &a, const SIMDVec<T, SIMD_WIDTH> &b)
  {
    return abs(sub(abs(a), abs(b)));
  }
};

// match operator for NSAD-NSADA mix
template <typename T, size_t SIMD_WIDTH>
struct MatchAvgAbsDiffAbsDiffAbs
{
  static SIMD_INLINE SIMDVec<T, SIMD_WIDTH> match(
    const SIMDVec<T, SIMD_WIDTH> &a, const SIMDVec<T, SIMD_WIDTH> &b)
  {
    return avg(abs(sub(a, b)), abs(sub(abs(a), abs(b))));
  }
};

// ---------------------------------------------------------------------------
// pairing of image columns 1 (without re-arrange)
// ---------------------------------------------------------------------------

// 1 is faster!
#define CPM1_ACCUMULATE_IN_MEMORY 1
// (if CPM1_ACCUMULATE_IN_MEMORY == 1) 1 is slightly faster
#define CPM1_SPLIT_CLEAR 1

// loop structurefrom old scalarProductSIMDWord2: accumulation in memory
// (I tried a version of this where I replaced pointer by index access, but
// it was a bit slower)

// 2x Panorama -> DefaultAddOn
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class MatchOperator>
void columnPairMatching1(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l1,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l2,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &dir)
{
  // same horizon required, but vertical resolution can differ
  if (l1.addOn.horizon != l2.addOn.horizon)
    throw SIMDException("columnPairMatching1", "panorama horizons differ");
  if (overlap(l1, dir) || overlap(l2, dir))
    throw SIMDException("columnPairMatching1",
                        "input and output images overlap");
  if (!l1.sameSize(l2))
    throw SIMDException("columnPairMatching1",
                        "input images have different size");
  SIMDVec<T, SIMD_WIDTH> l1_Nx, l2_N;
  const int simd_elems = numSIMDVecElements<T, SIMD_WIDTH>();
  // image size
  const int sz = l1.size, w = l1.w;
  dir.resize(w, w);
  const T *const l1data = l1.data, *const l2data = l2.data;
#if CPM1_ACCUMULATE_IN_MEMORY
  // accumulate in memory: faster!
  // set entire result to zero (we accumulate here)
#if !CPM1_SPLIT_CLEAR
  dir.clear();
#endif
  // start at first row in dir
  T *dirRow = dir.data;
  // slowest loop: single pixel access in l1
  // l1Col points to the top element of each column in l1)
  for (const T *l1Col = l1data; l1Col < l1data + w; l1Col++) {
    // start at first row in l2
    const T *l2El = l2data;
#if CPM1_SPLIT_CLEAR
    memset(dirRow, 0x00, w * sizeof(T));
#endif
    // middle loop: direction term accumulation
    // l1El goes through all elements in the current column of l1)
    for (const T *l1El = l1Col; l1El < l1Col + sz; l1El += w) {
      // this is the common term for all row elements
      // SIMDVec<T,SIMD_WIDTH>
      l1_Nx = set1<T, SIMD_WIDTH>(*l1El);
      // pointer dirEl runs through all row elements
      // fastest loop: step-wise computation of direction term
      for (T *dirEl = dirRow; dirEl < dirRow + w; dirEl += simd_elems) {
        // load
        // SIMDVec<T,SIMD_WIDTH>
        l2_N = load<SIMD_WIDTH>(l2El);
        // sum up match
        store(dirEl,
              adds(load<SIMD_WIDTH>(dirEl), MatchOperator::match(l1_Nx, l2_N)));
        // next element in l2
        l2El += simd_elems;
      }
    }
    // next row in result
    dirRow += w;
  }
#else  // CPM1_ACCUMULATE_IN_MEMORY
  // accumulate in register s_N
  SIMDVec<T, SIMD_WIDTH> s_N;
  // loop structure from scalarProductSIMDWord1 in ImageSSE.C, modified
  T *dirEl = dir.data;
  for (const T *l1Col = l1data; l1Col < l1data + w; l1Col++) {
    for (const T *l2Col = l2data; l2Col < l2data + w;
         l2Col += simd_elems, dirEl += simd_elems) {
      // reset summation variable
      s_N = setzero<T, SIMD_WIDTH>();
      for (const T *l1El = l1Col, *l2El = l2Col; l1El < l1Col + sz;
           l1El += w, l2El += w) {
        // get factor from l1 (this is probably what makes it slow)
        l1_Nx = set1<T, SIMD_WIDTH>(*l1El);
        // get elements from l2
        l2_N = load<SIMD_WIDTH>(l2El);
        s_N  = adds(s_N, MatchOperator::match(l1_Nx, l2_N));
      }
      // store sum
      store(dirEl, s_N);
    }
  }
#endif // CPM1_ACCUMULATE_IN_MEMORY
}

// NSAD term
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
void normSumAbsDiffTerm1(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l1,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l2,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &dir)
{
  columnPairMatching1<T, SIMD_WIDTH, SIMD_ALIGN, MatchAbsDiff<T, SIMD_WIDTH>>(
    l1, l2, dir);
}

// ASC+ term (in second version using min/max)
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
void asc2Term1(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l1,
               const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l2,
               SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &dir)
{
  SIMDVec<T, SIMD_WIDTH> dirV;
  const int simd_elems = numSIMDVecElements<T, SIMD_WIDTH>();
  columnPairMatching1<T, SIMD_WIDTH, SIMD_ALIGN, MatchAsc2<T, SIMD_WIDTH>>(
    l1, l2, dir);
  // multiply result by 2 since the max-min expression is only half as
  // large as the one in ascDirTerm1
  T *const dirdata = dir.data;
  const int sz     = dir.size;
  for (T *dirp = dirdata; dirp < dirdata + sz; dirp += simd_elems) {
    // SIMDVec<T,SIMD_WIDTH>
    dirV = load<SIMD_WIDTH>(dirp);
    store(dirp, adds(dirV, dirV));
  }
}

// NSADA term
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
void normSumAbsDiffAbsTerm1(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l1,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l2,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &dir)
{
  columnPairMatching1<T, SIMD_WIDTH, SIMD_ALIGN,
                      MatchAbsDiffAbs<T, SIMD_WIDTH>>(l1, l2, dir);
}

// NSAD-NSADA mix term
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
void normSumAvgAbsDiffAbsDiffAbsTerm1(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l1,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l2,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &dir)
{
  columnPairMatching1<T, SIMD_WIDTH, SIMD_ALIGN,
                      MatchAvgAbsDiffAbsDiffAbs<T, SIMD_WIDTH>>(l1, l2, dir);
}

// ---------------------------------------------------------------------------
// columnPairMatchingTilt1 (ignoring invalid values)
// contributed by Annika Hoffmann
// ---------------------------------------------------------------------------

// loop structure from old scalarProductSIMDWord2: accumulation in memory
// consider invalid pixels
// additional parameters for precomputed sum of absolute values
// (colMeasRaw1, colMeasRaw2) - here the corresponding value has to be picked
// in colMeasure1 and colMeasure2 the used colMeasRaw-values are saved
// (for normalization step)
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class MatchOperator>
void columnPairMatchingTilt1(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l1,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l2,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &dir,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &colMeasure1,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &colMeasure2,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &colMeasure12)
{
  // same horizon required, but vertical resolution can differ
  // (due to magnification of images)
  if (l1.addOn.horizon != l2.addOn.horizon)
    throw SIMDException("columnPairMatchingTilt1", "panorama horizons differ");
  if (overlap(l1, dir) || overlap(l2, dir))
    throw SIMDException("columnPairMatchingTilt1",
                        "input and output images overlap");
  if (!l1.sameSize(l2))
    throw SIMDException("columnPairMatchingTilt1",
                        "input images have different size");

  // invalidVal: we always use maximal value of type T to indicate
  // invalid pixels
  T invalidVal                      = SIMDTypeInfo<T>::max();
  SIMDVec<T, SIMD_WIDTH> invalidVec = set1<T, SIMD_WIDTH>(invalidVal);
  // image size
  const int sz = l1.size, w = l1.w /*, h=l1.h */;
  dir.resize(w, w);
  // colMeasure1 and colMeasure2: may be required for special
  // distance measures where the individual sums are needed, for
  // NSAD etc. where we divde by the sum, colMeasure12 (their sum)
  // would be sufficient; colMeasure1 and colMeasure2 need to be of
  // size w x w, since individual combinations of columns are
  // required
  colMeasure1.resize(w, w);
  colMeasure2.resize(w, w);
  colMeasure12.resize(w, w);
  SIMDVec<T, SIMD_WIDTH> l1_Nx, l2_N;
  const int simd_elems  = numSIMDVecElements<T, SIMD_WIDTH>();
  const T *const l1data = l1.data, *const l2data = l2.data;
  SIMDVec<T, SIMD_WIDTH> zero, one, summand, s_N, colMeasA, colMeasB, colMeasAB;
  // zero-vector for zero-addition, if element is invalid
  zero = setzero<T, SIMD_WIDTH>();
  // vector with 1 elements for incrementing counter
  one = setunity<T, SIMD_WIDTH>();
  // accumulated absolute values
  const T *pAccuA = colMeasRaw1.data;
  const T *pAccuB = colMeasRaw2.data;

  // individual
  T *pcolMeasA  = colMeasure1.data;
  T *pcolMeasB  = colMeasure2.data;
  T *pcolMeasAB = colMeasure12.data;

  // counter for last valid index in image1/2 columns
  // we use the same type as the image such that we have the same number
  // of elements (should be ok even for small types, since row number is
  // typically small)
  SIMDVec<T, SIMD_WIDTH> firstInvalidRow;
  // boolean vector: invalid elements in a given row
  SIMDVec<T, SIMD_WIDTH> invalidElem;
  // buffer for firstInvalidRow
  T firstInvalidRowBuf[simd_elems] SIMD_ATTR_ALIGNED(SIMD_ALIGN);
  // loop structure from scalarProductSIMDWord1 in ImageSSE.C, modified
  T *dirEl = dir.data;
  // l1_offset holds the index of the currently processed column in l1data
  // l2_offset hold the index of the currently processed column in l2data
  int l1_offset, l2_offset;
  // l1Col runs through the top element of each column in l1
  l1_offset = 0;
  for (const T *l1Col = l1data; l1Col < l1data + w; l1Col++, l1_offset++) {
    // reset l2_offset; we start in column 0 in l2data
    l2_offset = 0;
    // l2Col runs through top element of columns in l2,
    // in steps of simd_elems, which are used in a vector
    for (const T *l2Col = l2data; l2Col < l2data + w; l2Col += simd_elems,
                 dirEl += simd_elems, pcolMeasA += simd_elems,
                 pcolMeasB += simd_elems, pcolMeasAB += simd_elems,
                 l2_offset += simd_elems) {
      // reset summation variable
      s_N = setzero<T, SIMD_WIDTH>();
      // initial assumption: all rows are invalid
      firstInvalidRow = setzero<T, SIMD_WIDTH>();
      // l1El runs through each element in the current column of l1
      // l2El runs through each element in the current column of l2
      for (const T *l1El = l1Col, *l2El = l2Col; l1El < l1Col + sz;
           l1El += w, l2El += w) {
        // if pixel in image1 is invalid, we leave the loop
        if (*l1El == invalidVal) break;

        // get factor from l1
        l1_Nx = set1<T, SIMD_WIDTH>(*l1El);
        // get elements from l2
        l2_N = load<SIMD_WIDTH>(l2El);

        // check whether all pixels in l2_N are invalid, leave the loop
        invalidElem = cmpeq(l2_N, invalidVec);

        if (test_all_ones(invalidElem)) break;

        // add 1 to all columns with valid elements
        firstInvalidRow = add(firstInvalidRow, ifelse(invalidElem, zero, one));

        // here we know that l1El is valid, and some elements of l2N are also
        // valid
        // compute sum, but consider invalid values
        summand = ifelse(invalidElem, zero, MatchOperator::match(l1_Nx, l2_N));
        s_N     = adds(s_N, summand);
      }
      // store sum
      store(dirEl, s_N);
      // store firstInvalidRow
      store(firstInvalidRowBuf, firstInvalidRow);
      // firstInvalidRowBuf contains the index of the first invalid row for
      // each of simd_elems columns
      for (int i = 0; i < simd_elems; i++) {
        int lastValidRow = firstInvalidRowBuf[i] - 1;
        // we don't allow column pairs without any valid rows
        // if colMeasA and colMeasB are not required, we could add
        // here instead of afterwards
        // if there are no valid pixels (in the column pair), we just take
        // row 0 from the accumalated row data, since s_N element is 0,
        // normalized measure will be zero
        if (lastValidRow < 0)
          // should not happen, but just to be on the safe side
          fprintf(stderr,
                  "columnPairMatchingTilt1: lastValidRow (%d) < 0 "
                  "at l1Col %d l2col %d i %d\n",
                  lastValidRow, int(l1Col - l1data), int(l2Col - l2data), i);
        int validRowOff  = (lastValidRow >= 0) ? lastValidRow * w : 0;
        *(pcolMeasA + i) = *(pAccuA + validRowOff + l1_offset);
        *(pcolMeasB + i) = *(pAccuB + validRowOff + l2_offset + i);
      }
      // compute sum of colMeasA and colMeasB -> later used for normalization
      colMeasA  = load<SIMD_WIDTH>(pcolMeasA);
      colMeasB  = load<SIMD_WIDTH>(pcolMeasB);
      colMeasAB = adds(colMeasA, colMeasB);

      store(pcolMeasAB, colMeasAB);
    }
  }
}

// ---------------------------------------------------------------------------
// pairing of image columns 2 (with swizzle)
// ---------------------------------------------------------------------------

// 0 is faster
#define CPM2_ACCUMULATE_IN_MEMORY 0
// (if CPM2_ACCUMULATE_IN_MEMORY == 1) is slightly faster
#define CPM2_SPLIT_CLEAR 1
// not much difference
#define CPM2_ORDER_VH 0

// 2xPanorama -> DefaultAddOn
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class MatchOperator>
void columnPairMatching2(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &imgV,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &imgH, int w, int wSPS,
  int step, int n, int blkSize, const int *const modn,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &dir)
{
  /*
  printf("columnPairMatching2: SIMD_WIDTH=%d, w=%d, wSPS=%d, n=%d, step=%d,
  imgV.w=%d, imgV.h=%d\n", SIMD_WIDTH, w, wSPS, n, step, imgV.w, imgV.h);
  */
  // same horizon required, but vertical resolution can differ
  if (imgV.addOn.horizon != imgH.addOn.horizon)
    throw SIMDException("columnPairMatching1", "panorama horizons differ");
  if (overlap(imgV, dir) || overlap(imgH, dir))
    throw SIMDException("columnPairMatching2",
                        "input and output images overlap");
  if (!imgV.sameSize(imgH))
    throw SIMDException("columnPairMatching2",
                        "input images have different size");
  if (imgV.w != wSPS)
    throw SIMDException("columnPairMatching2", "invalid size of input images");
  // image size (includes complementary columns)
  const int szImg = imgV.size;
  // complementary columns: number of elements
  const int nElems = numSIMDVecElements<T, SIMD_WIDTH>();
  // short-hands to image data
  const T *const dataV = imgV.data, *const dataH = imgH.data;
  // resize result array
  dir.resize(w, w);
  // shorthand to result data
  T *dirData = dir.data;
  // step x w
  const int step_x_w = step * w;
  // vectors
  SIMDVec<T, SIMD_WIDTH> vecH, vecV;
  // 2 accumulation modes
#if CPM2_ACCUMULATE_IN_MEMORY
  // set entire result to zero (we accumulate here)
  // we also tested a version where the clear is split (slightly faster)
#if !CPM2_SPLIT_CLEAR
  // clear in one go
  dir.clear();
#endif // CPM2_SPLIT_CLEAR
#else  // CPM2_ACCUMULATE_IN_MEMORY
  // we accumulate in a register (vecS)
  SIMDVec<T, SIMD_WIDTH> vecS;
#endif // CPM2_ACCUMULATE_IN_MEMORY
       // two different loop orders
#if CPM2_ORDER_VH
  // order: vertical->horizontal
  // vertical block (i.e. block in vertical image imgV)
  const T *imgBlkV = dataV;
  for (int iBlkV = 0; iBlkV < step; iBlkV++, imgBlkV += blkSize) {
    // horizontal block (i.e. block in horizontal image imgH)
    const T *imgBlkH = dataH;
    T *dirBlkH       = dirData;
    for (int iBlkH = 0; iBlkH < step;
         iBlkH++, imgBlkH += blkSize, dirBlkH += n) {
#else
  // order: horizontal->vertical
  // horizontal block (i.e. block in horizontal image imgH)
  const T *imgBlkH = dataH;
  T *dirBlkH       = dirData;
  for (int iBlkH = 0; iBlkH < step; iBlkH++, imgBlkH += blkSize, dirBlkH += n) {
    // vertical block (i.e. block in vertical image imgV)
    const T *imgBlkV = dataV;
    for (int iBlkV = 0; iBlkV < step; iBlkV++, imgBlkV += blkSize) {
#endif
      // for computation of start value for iDelta
      // TODO: LUT for iDelta0?
      int iDelta0 = (iBlkV - iBlkH + step) % step;
      T *dirRow   = dirBlkH + iDelta0 * w;
      // go through all iDelta belonging to this H/V block
      for (int iDelta = iDelta0; iDelta < w;
           iDelta += step, dirRow += step_x_w) {
        // compute horizontal offset
        // TODO: LUT for off?
        int off = (iBlkH + iDelta) / step;
#if CPM2_ACCUMULATE_IN_MEMORY
#if CPM2_SPLIT_CLEAR
        // clear is split
        memset(dirRow, 0x00, n * sizeof(T));
#endif // CPM2_SPLIT_CLEAR
       // go through all rows and accumulate in memory
        for (const T *imgRowH = imgBlkH, *imgRowV = imgBlkV;
             imgRowH < dataH + szImg; imgRowH += wSPS, imgRowV += wSPS) {
          // go through all horizontal indices in imgH
          for (int iOffH = 0; iOffH < n; iOffH += nElems) {
            // compute index in l2
            int iOffV = modn[iOffH + off];
            // load inputs
            vecH     = load<SIMD_WIDTH>(imgRowH + iOffH);
            vecV     = loadu<SIMD_WIDTH>(imgRowV + iOffV);
            T *dirEl = dirRow + iOffH;
            // compute and accumulate
            store(dirEl, adds(load<SIMD_WIDTH>(dirEl),
                              MatchOperator::match(vecV, vecH)));
          }
        }
#else  // CPM2_ACCUMULATE_IN_MEMORY
       // accumulate in register: faster!
       // (especially since dir.clear() is not executed)
       // go through all horizontal indices in imgH
        T *dirEl = dirRow;
        for (int iOffH = 0; iOffH < n; iOffH += nElems, dirEl += nElems) {
          // compute index in l2
          int iOffV = modn[iOffH + off];
          // go through all rows and accumulate in vecS
          vecS = setzero<T, SIMD_WIDTH>();
          for (const T *imgRowH = imgBlkH + iOffH, *imgRowV = imgBlkV + iOffV;
               imgRowH < dataH + szImg; imgRowH += wSPS, imgRowV += wSPS) {
            // load inputs
            vecH = load<SIMD_WIDTH>(imgRowH);
            vecV = loadu<SIMD_WIDTH>(imgRowV);
            // compute and accumulate
            vecS = adds(vecS, MatchOperator::match(vecV, vecH));
          }
          // stream_store and sfence (outside inner loop) was slower
          store(dirEl, vecS);
        }
#endif // CPM2_ACCUMULATE_IN_MEMORY
      }
    }
  }
}

// NSAD term
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
void normSumAbsDiffTerm2(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l1,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l2, int w, int wSPS,
  int step, int n, int blkSize, const int *const modn,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &dir)
{
  columnPairMatching2<T, SIMD_WIDTH, SIMD_ALIGN, MatchAbsDiff<T, SIMD_WIDTH>>(
    l1, l2, w, wSPS, step, n, blkSize, modn, dir);
}

// ASC+ term (in second version using min/max)
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
void asc2Term2(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l1,
               const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l2, int w,
               int wSPS, int step, int n, int blkSize, const int *const modn,
               SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &dir)
{
  SIMDVec<T, SIMD_WIDTH> dirV;
  const int simd_elems = numSIMDVecElements<T, SIMD_WIDTH>();
  columnPairMatching2<T, SIMD_WIDTH, SIMD_ALIGN, MatchAsc2<T, SIMD_WIDTH>>(
    l1, l2, w, wSPS, step, n, blkSize, modn, dir);
  // multiply result by 2 since the max-min expression is only half as
  // large as the one in ascDirTerm1
  T *const dirdata = dir.data;
  const int sz     = dir.size;
  for (T *dirp = dirdata; dirp < dirdata + sz; dirp += simd_elems) {
    // SIMDVec<T,SIMD_WIDTH>
    dirV = load<SIMD_WIDTH>(dirp);
    store(dirp, adds(dirV, dirV));
  }
}

// ASC direct term (slow, for tests only)
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
void ascDirectTerm(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l1,
                   const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l2,
                   int w, int wSPS, int step, int n, int blkSize,
                   const int *const modn,
                   SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &dir)
{
  columnPairMatching2<T, SIMD_WIDTH, SIMD_ALIGN, MatchAscDirect<T, SIMD_WIDTH>>(
    l1, l2, w, wSPS, step, n, blkSize, modn, dir);
}

// NSADA term
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
void normSumAbsDiffAbsTerm2(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l1,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l2, int w, int wSPS,
  int step, int n, int blkSize, const int *const modn,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &dir)
{
  columnPairMatching2<T, SIMD_WIDTH, SIMD_ALIGN,
                      MatchAbsDiffAbs<T, SIMD_WIDTH>>(l1, l2, w, wSPS, step, n,
                                                      blkSize, modn, dir);
}

// NSAD-NSADA mix term
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
void normSumAvgAbsDiffAbsDiffAbsTerm2(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l1,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &l2, int w, int wSPS,
  int step, int n, int blkSize, const int *const modn,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &dir)
{
  columnPairMatching2<T, SIMD_WIDTH, SIMD_ALIGN,
                      MatchAvgAbsDiffAbsDiffAbs<T, SIMD_WIDTH>>(
    l1, l2, w, wSPS, step, n, blkSize, modn, dir);
}

// ---------------------------------------------------------------------------
// normalized distance measure (denominator terms are added)
// ---------------------------------------------------------------------------

// normalized distance measure where denominator terms are added
template <int invertJointMeasure, typename SPSType, typename T,
          size_t SIMD_WIDTH, size_t SIMD_ALIGN>
void computeScalePlaneNormalizedAdd1(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &jointMeasure,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &ssMeasure,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &cvMeasure, int wSPS,
  const int *const modulo2wpw, const int *const shuffle, double postScale,
  SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane)
{
  if (overlap(jointMeasure, scalePlane) || overlap(ssMeasure, scalePlane) ||
      overlap(cvMeasure, scalePlane))
    throw SIMDException("computeScalePlaneNormalizedAdd1",
                        "input and output images overlap");
  if (!ssMeasure.sameSize(cvMeasure))
    throw SIMDException("computeScalePlaneNormalizedAdd1",
                        "ss/cv measure images have different size");
  if (jointMeasure.w != jointMeasure.h)
    throw SIMDException("computeScalePlaneNormalizedAdd1",
                        "joint measure image is not square-sized");
  if (jointMeasure.w != ssMeasure.w)
    throw SIMDException("computeScalePlaneNormalizedAdd1",
                        "joint/ss measure differ in width");
  const int w = jointMeasure.w;
  // number of elements in a vector relating to the input SIMDImages
  const int vecElemsIn = numSIMDVecElements<T, SIMD_WIDTH>();
  // number of input vectors required to fill single output vector
  const int numInVecs = numInputSIMDVecs<SPSType, T>();
  // number of output vectors required to take up single input vector
  const int numOutVecs = numOutputSIMDVecs<SPSType, T>();
  // number of input and output elements
  const int numElems = numSIMDVecsElements<SPSType, T, SIMD_WIDTH>();
  // width must be multiple of numElems
  if (w % numElems != 0)
    throw SIMDException("computeScalePlaneNormalizedAdd1",
                        "width must be multiple of numElems");
  SIMDVec<T, SIMD_WIDTH> cvMeasxN, measSum[numInVecs], joint[numInVecs];
  SIMDVec<SPSType, SIMD_WIDTH> spsVal[numOutVecs];

  const int *modulo2woff = modulo2wpw;
  // destination scale plane
  scalePlane.resize(wSPS, w);
  SPSType *destP = scalePlane.data;
  // pointer to dirTerm
  const T *jointPtr = jointMeasure.data;
  // i corresponds to theta'
  for (int i = 0; i < w; i++) {
    // we take a single value from cvMeasure and expand it to
    // vecElemsIn identical values (numInVecs vectors);
    // here we add 1 to avoid division by zero!
    // TODO: should we make this epsilon offset variable?
    // SIMDVec<T,SIMD_WIDTH>
    cvMeasxN             = set1<T, SIMD_WIDTH>(cvMeasure.data[i] + 1);
    const T *ssMeasPtr   = ssMeasure.data;
    const int *shufflepj = shuffle;
    // j corresponds to theta
    for (int j = 0; j < w; j += numElems) {
      // SIMDVec<T,SIMD_WIDTH> measSum[numInVecs], joint[numInVecs];
      for (int vi = 0, off = 0; vi < numInVecs; vi++, off += vecElemsIn) {
        // sum of two values in denominator
        measSum[vi] = adds(cvMeasxN, load<SIMD_WIDTH>(ssMeasPtr + off));
        // denominator
        joint[vi] = load<SIMD_WIDTH>(jointPtr + off);
        // inversion for correlation-based joint measures from [-1,1]
        if (invertJointMeasure) joint[vi] = subs(measSum[vi], joint[vi]);
      }
      // SIMDVec<SPSType,SIMD_WIDTH> spsVal[numOutVecs];
      // division and multiplication by postScales
      fdivmul(joint, measSum, postScale, spsVal);
      // store to memory
      // TODO: would store of SPS be faster with extract instead of writing
      // TODO: to memory first?)
      // TODO: would stream operation be faster?
#if 1
      SPSType Cstore[numElems] SIMD_ATTR_ALIGNED(SIMD_ALIGN);
      store(Cstore, spsVal, numOutVecs);
      // now we do the "slanted" insertion into dest
      // TODO: store of SPS is quite time-consuming due to inefficient
      // TODO: cache use, especially if single bytes are written
      const int *modulo2woffmj = modulo2woff - j;
      // we have to go through all elements separately
      for (int k = 0; k < numElems; k++, modulo2woffmj--)
        *(destP + shufflepj[k] + *modulo2woffmj) = Cstore[k];
#else
      // test how vector store would accelerate this code:
      // 3400 us -> 2300 us!
      // code doesn't produce correct homevectors, of course
      store(destP, spsVal, numOutVecs);
      destP += numElems;
#endif
      jointPtr += numElems;
      ssMeasPtr += numElems;
      shufflepj += numElems;
    }
    modulo2woff++;
  }
}

// ---------------------------------------------------------------------------
// multi dimensional sigmoid on normalized distance measures
// (denominator terms are added)
// ---------------------------------------------------------------------------

// normalized distance measure where denominator terms are added
template <int invertJointMeasure, int NPREPROCS, typename SPSType, typename T,
          size_t SIMD_WIDTH, size_t SIMD_ALIGN>
void computeScalePlaneSigmoidNormalizedAdd1(
  const SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN> &jointMeasureStk,
  const SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN> &ssMeasureStk,
  const SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN> &cvMeasureStk, int wSPS,
  const int *const modulo2wpw, const int *const shuffle,
  const std::vector<double> &sigmoidW, const std::vector<double> &sigmoidW0,
  double postScale, SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane)
{
  if (overlap(jointMeasureStk, scalePlane) ||
      overlap(ssMeasureStk, scalePlane) || overlap(cvMeasureStk, scalePlane))
    throw SIMDException("computeScalePlaneSigmoidNormalizedAdd1",
                        "input and output images overlap");
  if (!ssMeasureStk.sameSize(cvMeasureStk))
    throw SIMDException("computeScalePlaneSigmoidNormalizedAdd1",
                        "ss/cv measure images have different size");
  if (jointMeasureStk.w != jointMeasureStk.h)
    throw SIMDException("computeScalePlaneSigmoidNormalizedAdd1",
                        "joint measure image is not square-sized");
  if (jointMeasureStk.w != ssMeasureStk.w)
    throw SIMDException("computeScalePlaneSigmoidNormalizedAdd1",
                        "joint/ss measure differ in width");
  if (jointMeasureStk.numPlanes != NPREPROCS ||
      ssMeasureStk.numPlanes != NPREPROCS ||
      cvMeasureStk.numPlanes != NPREPROCS)
    throw SIMDException("computeScalePlaneSigmoidNormalizedAdd1",
                        "input number of planes differ the defined number");
  if (sigmoidW.size() != (size_t) NPREPROCS)
    throw SIMDException("computeScalePlaneSigmoidNormalizedAdd1",
                        "sigmoidW has wrong size");
  if (sigmoidW0.size() != (size_t) NPREPROCS)
    throw SIMDException("computeScalePlaneSigmoidNormalizedAdd1",
                        "sigmoidW0 has wrong size");
  const int w = jointMeasureStk.w;
  // number of elements in a vector relating to the input SIMDImages
  const int vecElemsIn = numSIMDVecElements<T, SIMD_WIDTH>();
  // number of input vectors required to fill single output vector
  const int numInVecs = numInputSIMDVecs<SPSType, T>();
  // number of output vectors required to take up single input vector
  const int numOutVecs = numOutputSIMDVecs<SPSType, T>();
  // number of input and output elements
  const int numElems = numSIMDVecsElements<SPSType, T, SIMD_WIDTH>();
  // width must be multiple of numElems
  if (w % numElems != 0)
    throw SIMDException("computeScalePlaneSigmoidNormalizedAdd1",
                        "width must be multiple of numElems");
  SIMDVec<T, SIMD_WIDTH> cvMeasxN[NPREPROCS], measSum[NPREPROCS][numInVecs],
    joint[NPREPROCS][numInVecs];
  SIMDVec<SPSType, SIMD_WIDTH> spsVal[numOutVecs];

  const int *modulo2woff = modulo2wpw;
  // destination scale plane
  scalePlane.resize(wSPS, w);
  SPSType *destP = scalePlane.data;
  // pointer to dirTerm
  const T *jointPtr[NPREPROCS]; // = jointMeasure.data;
  for (int pp = 0; pp < NPREPROCS; pp++) {
    jointPtr[pp] = jointMeasureStk[pp].data;
  }
  // i corresponds to theta'
  for (int i = 0; i < w; i++) {
    // we take a single value from cvMeasure and expand it to
    // vecElemsIn identical values (numInVecs vectors);
    // here we add 1 to avoid division by zero!
    // TODO: should we make this epsilon offset variable?
    // SIMDVec<T,SIMD_WIDTH>
    const T *ssMeasPtr[NPREPROCS];
    for (int pp = 0; pp < NPREPROCS; pp++) {
      cvMeasxN[pp]  = set1<T, SIMD_WIDTH>(cvMeasureStk[pp].data[i] + 1);
      ssMeasPtr[pp] = ssMeasureStk[pp].data;
    }
    const int *shufflepj = shuffle;
    // j corresponds to theta
    for (int j = 0; j < w; j += numElems) {
      for (int pp = 0; pp < NPREPROCS; pp++) {
        for (int vi = 0, off = 0; vi < numInVecs; vi++, off += vecElemsIn) {
          // sum of two values in denominator
          measSum[pp][vi] =
            adds(cvMeasxN[pp], load<SIMD_WIDTH>(ssMeasPtr[pp] + off));
          // denominator
          joint[pp][vi] = load<SIMD_WIDTH>(jointPtr[pp] + off);
          // inversion for correlation-based joint measures from [-1,1]
          if (invertJointMeasure)
            joint[pp][vi] = subs(measSum[pp][vi], joint[pp][vi]);
        }
      }
      // division, sigmoid and scaling as float
      fdivMsigmoidmul<NPREPROCS, numInVecs, SPSType, T, SIMD_WIDTH>(
        joint, measSum,
        // conversion to C array
        &sigmoidW[0], &sigmoidW0[0], postScale, spsVal);

      // store to memory
      // TODO: would store of SPS be faster with extract instead of writing
      // TODO: to memory first?)
      // TODO: would stream operation be faster?
#if 1
      SPSType Cstore[numElems] SIMD_ATTR_ALIGNED(SIMD_ALIGN);
      store(Cstore, spsVal, numOutVecs);
      // now we do the "slanted" insertion into dest
      // TODO: store of SPS is quite time-consuming due to inefficient
      // TODO: cache use, especially if single bytes are written
      const int *modulo2woffmj = modulo2woff - j;
      // we have to go through all elements separately
      for (int k = 0; k < numElems; k++, modulo2woffmj--)
        *(destP + shufflepj[k] + *modulo2woffmj) = Cstore[k];
#else
      // test how vector store would accelerate this code:
      // 3400 us -> 2300 us!
      // code doesn't produce correct homevectors, of course
      store(destP, spsVal, numOutVecs);
      destP += numElems;
#endif
      for (int pp = 0; pp < NPREPROCS; pp++) {
        jointPtr[pp] += numElems;
        ssMeasPtr[pp] += numElems;
      }
      shufflepj += numElems;
    }
    modulo2woff++;
  }
}

// ---------------------------------------------------------------------------
// normalized distance measure (denominator terms are added), swizzled version
// ---------------------------------------------------------------------------

// 0 is faster
#define CSPNA2_LOOP_AS_IN_CPM2 0

// normalized distance measure where denominator terms are added
template <int invertJointMeasure, typename SPSType, typename T,
          size_t SIMD_WIDTH, size_t SIMD_ALIGN>
void computeScalePlaneNormalizedAdd2(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &jointMeasure,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &ssMeasure,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &cvMeasure, int w, int wSPS,
  int stepAlpha, int nAlpha, int blkSize, const int *const modNAlpha,
  const int *const shuffleModulo, const int *const unshuffle, double postScale,
  SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane)
{
  if (overlap(jointMeasure, scalePlane) || overlap(ssMeasure, scalePlane) ||
      overlap(cvMeasure, scalePlane))
    throw SIMDException("computeScalePlaneNormalizedAdd2",
                        "input and output images overlap");
  if (!ssMeasure.sameSize(cvMeasure))
    throw SIMDException("computeScalePlaneNormalizedAdd2",
                        "ss/cv measure images have different size");
  if (ssMeasure.h != 1)
    throw SIMDException("computeScalePlaneNormalizedAdd2",
                        "ss/cv measure images should have height 1");
  if (ssMeasure.w != wSPS)
    throw SIMDException("computeScalePlaneNormalizedAdd2",
                        "ss/cv measure images have invalid width");
  if (jointMeasure.w != jointMeasure.h)
    throw SIMDException("computeScalePlaneNormalizedAdd2",
                        "joint measure image is not square-sized");
  if (jointMeasure.w != w)
    throw SIMDException("computeScalePlaneNormalizedAdd2",
                        "joint measure has invalid dimensions");
  // number of elements in a vector relating to the input SIMDImages
  const int vecElemsIn = numSIMDVecElements<T, SIMD_WIDTH>();
  // number of input vectors required to fill single output vector
  const int numInVecs = numInputSIMDVecs<SPSType, T>();
  // number of output vectors required to take up single input vector
  const int numOutVecs = numOutputSIMDVecs<SPSType, T>();
  // number of input and output elements
  const int numElems = numSIMDVecsElements<SPSType, T, SIMD_WIDTH>();
  // width must be multiple of numElems
  if (w % numElems != 0)
    throw SIMDException("computeScalePlaneNormalizedAdd2",
                        "width must be multiple of numElems");
  // SIMD vectors
  SIMDVec<T, SIMD_WIDTH> cvMeas[numInVecs], ssMeas[numInVecs],
    measSum[numInVecs], jointMeas[numInVecs];
  SIMDVec<SPSType, SIMD_WIDTH> spsVal[numOutVecs];
  // add 1 to cvMeasure to avoid div by zero
  // TODO: should we make this epsilon offset variable?
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> cvMeasureP1;
  adds(cvMeasure, T(1), cvMeasureP1);
  // shorthands
  const T *const cvData = cvMeasureP1.data, *const ssData = ssMeasure.data;
  // destination scale plane
  scalePlane.resize(wSPS, w);

  // 10. Feb 16 (rm): made this a C-if instead of a cpp-if to avoid
  // unused-pameter warnings
  if (CSPNA2_LOOP_AS_IN_CPM2) {
    // same loop structure as in columnPairMatching2 (version: vertical->horiz.)
    // step x w
    const int step_x_w       = stepAlpha * w;
    const int step_x_wSPS    = stepAlpha * wSPS;
    SPSType *const destData  = scalePlane.data;
    const T *const jointData = jointMeasure.data;
    // vertical block (i.e. block in vertical image imgV)
    const T *imgBlkCV = cvData;
    for (int iBlkCV = 0; iBlkCV < stepAlpha; iBlkCV++, imgBlkCV += blkSize) {
      // horizontal block (i.e. block in horizontal image imgH)
      const T *imgBlkSS = ssData;
      SPSType *destBlk  = destData;
      const T *jointBlk = jointData;
      for (int iBlkSS = 0; iBlkSS < stepAlpha; iBlkSS++, imgBlkSS += blkSize,
               jointBlk += nAlpha, destBlk += blkSize) {
        // for computation of start value for iDelta
        // TODO: LUT for iDelta0?
        int iDelta0       = (iBlkCV - iBlkSS + stepAlpha) % stepAlpha;
        SPSType *destRow  = destBlk + iDelta0 * wSPS;
        const T *jointRow = jointBlk + iDelta0 * w;
        // go through all iDelta belonging to this H/V block
        for (int iDelta = iDelta0; iDelta < w; iDelta += stepAlpha,
                 jointRow += step_x_w, destRow += step_x_wSPS) {
          // compute horizontal offset
          // TODO: LUT for off?
          int off = (iBlkSS + iDelta) / stepAlpha;
          // go through all horizontal indices in imgH
          SPSType *destEl  = destRow;
          const T *jointEl = jointRow;
          for (int iOffSS = 0; iOffSS < nAlpha;
               iOffSS += numElems, jointEl += numElems, destEl += numElems) {
            // compute index in l2
            int iOffCV       = modNAlpha[iOffSS + off];
            const T *imgSSEl = imgBlkSS + iOffSS, *imgCVEl = imgBlkCV + iOffCV;
            for (int vi = 0, vecOff = 0; vi < numInVecs;
                 vi++, vecOff += vecElemsIn) {
              // load measures
              ssMeas[vi] = load<SIMD_WIDTH>(imgSSEl + vecOff);
              cvMeas[vi] = loadu<SIMD_WIDTH>(imgCVEl + vecOff);
              // puts("cv loaded");
              jointMeas[vi] = load<SIMD_WIDTH>(jointEl + vecOff);
              // sum of two values in denominator
              measSum[vi] = adds(cvMeas[vi], ssMeas[vi]);
              // inversion for correlation-based joint measures from [-1,1]
              if (invertJointMeasure)
                jointMeas[vi] = subs(measSum[vi], jointMeas[vi]);
            }
            // division and multiplication by postScales
            fdivmul(jointMeas, measSum, postScale, spsVal);
            store(destEl, spsVal, numOutVecs);
          }
        }
      }
    }
  }

  else { // CSPNA2_LOOP_AS_IN_CPM2

    // simplified loop structure (directly using shuffle/unshuffle): faster!
    SPSType *destRow = scalePlane.data;
    // elements in joint.data are contiguous, simpler loop counting possible
    const T *jointEl = jointMeasure.data;
    // go through all row indices
    for (int iDelta = 0; iDelta < w; iDelta++, destRow += wSPS) {
      const int *const shuffleModulo_p_iDelta = shuffleModulo + iDelta;
      // go through all column indices (block-wise)
      SPSType *destBlk = destRow;
      for (const T *ssBlk = ssData; ssBlk < ssData + wSPS;
           ssBlk += blkSize, destBlk += blkSize) {
        SPSType *destEl = destBlk;
        for (const T *ssEl = ssBlk; ssEl < ssBlk + nAlpha;
             ssEl += numElems, destEl += numElems, jointEl += numElems) {
          // read multiple input vectors
          // we can compute iCV here since we have enough wrap-around columns
          // such that we can add off below
          int iSS       = ssEl - ssData;
          int iCV       = shuffleModulo_p_iDelta[unshuffle[iSS]];
          const T *cvEl = cvData + iCV;
          for (int vi = 0, off = 0; vi < numInVecs; vi++, off += vecElemsIn) {
            // load measures
            ssMeas[vi] = load<SIMD_WIDTH>(ssEl + off);
            cvMeas[vi] = loadu<SIMD_WIDTH>(cvEl + off);
            // puts("cv loaded");
            jointMeas[vi] = load<SIMD_WIDTH>(jointEl + off);
            // sum of two values in denominator
            measSum[vi] = adds(cvMeas[vi], ssMeas[vi]);
            // inversion for correlation-based joint measures from [-1,1]
            if (invertJointMeasure)
              jointMeas[vi] = subs(measSum[vi], jointMeas[vi]);
          }
          // division and multiplication by postScales
          fdivmul(jointMeas, measSum, postScale, spsVal);
          store(destEl, spsVal, numOutVecs);
        }
      }
    }

  } // CSPNA2_LOOP_AS_IN_CPM2
}

// ---------------------------------------------------------------------------
// computeScalePlaneNormalizedAdd1Tilt
// contributed by Annika Hoffmann
// ---------------------------------------------------------------------------

// normalized distance measure where denominator terms are added
template <int invertJointMeasure, typename SPSType, typename T,
          size_t SIMD_WIDTH, size_t SIMD_ALIGN>
void computeScalePlaneNormalizedAdd1Tilt(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &jointMeasure,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &sscvMeasure, int wSPS,
  const int *const modulo2wpw, const int *const shuffle, double postScale,
  SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane)
{
  if (overlap(jointMeasure, scalePlane) || overlap(sscvMeasure, scalePlane))
    throw SIMDException("computeScalePlaneNormalizedAdd1Tilt",
                        "input and output images overlap");
  if (jointMeasure.w != jointMeasure.h)
    throw SIMDException("computeScalePlaneNormalizedAdd1Tilt",
                        "joint measure image is not square-sized");
  if (jointMeasure.w != sscvMeasure.w)
    throw SIMDException("computeScalePlaneNormalizedAdd1Tilt",
                        "joint/ss measure differ in width");

  const int w = jointMeasure.w;
  // number of elements in a vector relating to the input SIMDImages
  const int vecElemsIn = numSIMDVecElements<T, SIMD_WIDTH>();
  // number of input vectors required to fill single output vector
  const int numInVecs = numInputSIMDVecs<SPSType, T>();
  // number of output vectors required to take up single input vector
  const int numOutVecs = numOutputSIMDVecs<SPSType, T>();
  // number of input and output elements
  const int numElems = numSIMDVecsElements<SPSType, T, SIMD_WIDTH>();
  // width must be multiple of numElems
  if (w % numElems != 0)
    throw SIMDException("computeScalePlaneNormalizedAdd1Tilt",
                        "width must be multiple of numElems");

  SIMDVec<T, SIMD_WIDTH> joint[numInVecs], sscvMeas[numInVecs];
  SIMDVec<SPSType, SIMD_WIDTH> spsVal[numOutVecs];
  SIMDVec<T, SIMD_WIDTH> ones = setunity<T, SIMD_WIDTH>();

  const int *modulo2woff = modulo2wpw;
  // destination scale plane
  scalePlane.resize(wSPS, w);
  SPSType *destP = scalePlane.data;
  // pointer to dirTerm
  const T *jointPtr    = jointMeasure.data;
  const T *sscvMeasPtr = sscvMeasure.data;
  // i corresponds to theta'
  for (int i = 0; i < w; i++) {
    // we take a single value from cvMeasure and expand it to
    // vecElemsIn identical values (numInVecs vectors);
    const int *shufflepj = shuffle;
    // j corresponds to theta
    for (int j = 0; j < w; j += numElems) {
      for (int vi = 0, off = 0; vi < numInVecs; vi++, off += vecElemsIn) {
        // sum in denominator: we add 1 to avoid div by 0
        // TODO: should we make this epsilon offset variable?
        // 18. Jul 19 (rm): fixed bug reported by Christoph Berganski:
        // adds instead of add to avoid overflow
        sscvMeas[vi] = adds(load<SIMD_WIDTH>(sscvMeasPtr + off), ones);
        // TODO: the above addition of ones is critical if all computations are
        // done in float arithmetic; but does not
        //  effect the results using typical type constellations; with float
        //  arithmetic here, division by zero has to be prevented differently!
        // sscvMeas[vi] = load<SIMD_WIDTH>(sscvMeasPtr +off);
        //  numerator
        joint[vi] = load<SIMD_WIDTH>(jointPtr + off);
        // inversion for correlation-based joint measures from [-1,1]
        if (invertJointMeasure) joint[vi] = subs(sscvMeas[vi], joint[vi]);
      }
      // division and multiplication by postScales
      fdivmul(joint, sscvMeas, postScale, spsVal);
      // store to memory
      SPSType Cstore[numElems] SIMD_ATTR_ALIGNED(SIMD_ALIGN);
      store(Cstore, spsVal, numOutVecs);
      // now we do the "slanted" insertion into dest
      // TODO: store of SPS is quite time-consuming due to inefficient
      // TODO: cache use, especially if single bytes are written
      const int *modulo2woffmj = modulo2woff - j;
      // we have to go through all elements separately
      for (int k = 0; k < numElems; k++, modulo2woffmj--) {
        *(destP + shufflepj[k] + *modulo2woffmj) = Cstore[k];
      }
      jointPtr += numElems;
      sscvMeasPtr += numElems;
      shufflepj += numElems;
    }
    modulo2woff++;
  }
}

// ---------------------------------------------------------------------------
// vertical edge filter
// ---------------------------------------------------------------------------

// vertical edge filter in columns
// Panorama -> Panorama
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class OutAddOn>
void verticalEdgeFilter(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &orig,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, OutAddOn> &edge)
{
  // check overlap of arguments
  if (overlap(orig, edge))
    throw SIMDException("verticalEdgeFilter", "input and output image overlap");
  // pointers to original (input) image
  const T *po0, *po1;
  // pointers to edge (output) image
  T *pe0, *pe1;
  // SIMD registers for two pixels and their difference
  SIMDVec<T, SIMD_WIDTH> v0, v1, d;
  const int simd_elems = numSIMDVecElements<T, SIMD_WIDTH>();
  const int w = orig.w, h = orig.h;
  // TODO: edge-filtering removes one row, but
  // TODO: which? isn't that a matter of interpretation? I think
  // TODO: the reason was that in the robot experiments the horizon
  // TODO: can be at the bottom row of the image, and it should not
  // TODO: move outside of the image
  edge.resize(w, h - 1,
              Panorama(orig.addOn.verticalResolution, orig.addOn.horizon - 1));
  // we operate with pointer pairs: *0 always points to block of
  // simd_elems columns in the top row, *1 traverses the columns
  po0 = orig.data;
  pe0 = edge.data;
  // we go through all columns in jumps of simd_elems columns
  for (int x = 0; x < w; x += simd_elems) {
    // we start at the top of the simd_elems-column block
    po1 = po0;
    pe1 = pe0;
    // load values of first row
    v0 = load<SIMD_WIDTH>(po1);
    // go to next row
    po1 += w;
    // go through remaining rows
    for (int y = 1; y < h; y++) {
      // load values of next row
      v1 = load<SIMD_WIDTH>(po1);
      // compute difference (signed types only!)
      d = sub(v1, v0);
      // store difference
      store(pe1, d);
      // keep values of this row for next loop
      v0 = v1;
      // go to next row
      po1 += w;
      pe1 += w;
    }
    // skip simd_elems columns (within top row)
    po0 += simd_elems;
    pe0 += simd_elems;
  }
}

// ---------------------------------------------------------------------------
// vertical edge filter tilt - consider invalid pixels
// contributed by C. Berganski
// ---------------------------------------------------------------------------

// vertical edge filter in columns
// Panorama -> Panorama
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class OutAddOn>
void verticalEdgeFilterTilt(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &orig,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, OutAddOn> &edge)
{
  // check overlap of arguments
  if (overlap(orig, edge))
    throw SIMDException("verticalEdgeFilterTilt",
                        "input and output image overlap");

  // pointers to original (input) image
  const T *po0, *po1;
  // pointers to edge (output) image
  T *pe0, *pe1;
  // SIMD registers for two pixels and their difference
  SIMDVec<T, SIMD_WIDTH> v0, v1, d, invvec, invpix;

  const int simd_elems = numSIMDVecElements<T, SIMD_WIDTH>();
  const int w = orig.w, h = orig.h;
  // TODO: edge-filtering removes one row, but
  // TODO: which? isn't that a matter of interpretation? I think
  // TODO: the reason was that in the robot experiments the horizon
  // TODO: can be at the bottom row of the image, and it should not
  // TODO: move outside of the image
  edge.resize(w, h - 1,
              Panorama(orig.addOn.verticalResolution, orig.addOn.horizon - 1));

  // Prepare invalid vector (vector of type max-value)
  invvec = set1<T, SIMD_WIDTH>(SIMDTypeInfo<T>::max());

  // we operate with pointer pairs: *0 always points to block of
  // simd_elems columns in the top row, *1 traverses the columns
  po0 = orig.data;
  pe0 = edge.data;
  // we go through all columns in jumps of simd_elems columns
  for (int x = 0; x < w; x += simd_elems) {
    // we start at the top of the simd_elems-column block
    po1 = po0;
    pe1 = pe0;
    // load values of first row
    v0 = load<SIMD_WIDTH>(po1);
    // go to next row
    po1 += w;
    // go through remaining rows
    for (int y = 1; y < h; y++) {
      // load values of next row
      v1 = load<SIMD_WIDTH>(po1);

      // check for invalid pixels (mask); suffices to check the
      // second row as the mask extending to the bottom of
      // the image cannot have invalid pixels in the upper row (v0)
      // but valid in the lower (v1)
      invpix = cmpeq(v1, invvec);

      // compute difference (signed types only!) for valid pixels only
      // extend mask for invalid
      d = ifelse(invpix, invvec, sub(v1, v0));

      // store difference
      store(pe1, d);
      // keep values of this row for next loop
      v0 = v1;
      // go to next row
      po1 += w;
      pe1 += w;
    }
    // skip simd_elems columns (within top row)
    po0 += simd_elems;
    pe0 += simd_elems;
  }
}

// ---------------------------------------------------------------------------
// magnify and scale
// ---------------------------------------------------------------------------

// vertical magnification around horizon with transformation from Tin to Tout
// 27. Feb 18 (rm): verticalResolution and horizon taken from input image,
// not passed as parameters
template <typename Tout, typename Tin, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class OutAddOn>
void magnifyAndScale(
  const SIMDImage<Tin, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
  int interpolation, double magnifyScale, double multiplyScale,
  SIMDImage<Tout, SIMD_WIDTH, SIMD_ALIGN, OutAddOn> &outImg)
{
  // 27. Feb 18 (rm)
  double verticalResolution = img.addOn.verticalResolution;
  double horizon            = img.addOn.horizon;
  double sourceRowDouble;
  const Tin *src;
  Tout *dst;
  const int numInVecs  = numInputSIMDVecs<Tout, Tin>();
  const int numOutVecs = numOutputSIMDVecs<Tout, Tin>();
  const int numElems   = numSIMDVecsElements<Tout, Tin, SIMD_WIDTH>();
  const int w = img.w, h = img.h;
  /*
  printf("magnifyImage: %d x %d, v = %.10g, h = %.10g\n",
         w, h, verticalResolution, horizon);
  */
  if ((magnifyScale < 0.0) || (magnifyScale > 1.0))
    throw SIMDException("magnifyAndScale", "magnifyScale out of range [0,1]");
  if (overlap(img, outImg))
    throw SIMDException("magnifyAndScale", "input and ouput image overlap");
  // the horizon must not lie outside the image since otherwise
  // magnification would produce undefined image rows
  // 6. Mar 13 (rm): we decrease the horizon after filtering, so the upper
  // limit was changed from 0.0 to 1.0
  if ((horizon < 0.0) || (horizon > h - 1))
    throw SIMDException("magnifyAndScale", "horizon lies outside the image");
  // w must be a multiple of numElems
  if (w % numElems != 0)
    throw SIMDException("magnifyAndScale",
                        "width must be a multiple of numElems");

  SIMDVec<Tin, SIMD_WIDTH> inVecs1[numInVecs], inVecs2[numInVecs];
  SIMDVec<Tout, SIMD_WIDTH> outVecs[numOutVecs];
  outImg.resize(
    w, h,
    Panorama(img.addOn.verticalResolution * magnifyScale, img.addOn.horizon));

  switch (interpolation) {
  case 0:
    // ================ nearest neighbor interpolation ==================
    if (verticalResolution <= 0.0) {
      // negative values or zero indicate: use approximative solution
      // source row index as double
      // 0.5 added for rounding
      // before in the loop:
      // sourceRowDouble = 0.5 + horizon - magnifyScale * (horizon - y)
      sourceRowDouble = 0.5 + horizon - horizon * magnifyScale;
      // copy rows (no interpolation)
      for (int y = 0; y < h; y++) {
        src = img.data + w * static_cast<int>(sourceRowDouble);
        dst = outImg.data + w * y;
        for (int x = 0; x < w; x += numElems) {
          // load numInVecs input vectors
          load(src, inVecs1, numInVecs);
          // process input vectors to output vectors (in float arithmetic)
          fmul(inVecs1, multiplyScale, outVecs);
          // store numOutVec output vectors
          store(dst, outVecs, numOutVecs);
          src += numElems;
          dst += numElems;
        }
        sourceRowDouble += magnifyScale;
      }
    } else {
      // exact solution
      double gamma, gammas;
      double verticalResolutionInv = 1.0 / verticalResolution;
      for (int y = 0; y < h; y++) {
        // verticalResolution: angle[rad] per pixel
        gammas = (horizon - y) * verticalResolution;
        gamma  = atan(magnifyScale * tan(gammas));
        // 0.5 added for rounding
        sourceRowDouble = 0.5 + horizon - gamma * verticalResolutionInv;
        src             = img.data + w * static_cast<int>(sourceRowDouble);
        dst             = outImg.data + w * y;
        for (int x = 0; x < w; x += numElems) {
          // load numInVecs input vectors
          load(src, inVecs1, numInVecs);
          // process input vectors to output vectors (in float arithmetic)
          fmul(inVecs1, multiplyScale, outVecs);
          // store numOutVec output vectors
          store(dst, outVecs, numOutVecs);
          src += numElems;
          dst += numElems;
        }
      }
    }
    break;

  case 1:
    // ================ linear interpolation =================
    double verticalResolutionInv = 1.0 / verticalResolution;
    for (int ys = 0; ys < h; ys++) {
      // source coordinate
      double y;
      if (verticalResolution <= 0.0)
        // negative values indicate: use approximative solution
        y = horizon - magnifyScale * (horizon - ys);
      else {
        // exact solution
        double gammas = (horizon - ys) * verticalResolution;
        double gamma  = atan(magnifyScale * tan(gammas));
        y             = horizon - gamma * verticalResolutionInv;
      }
      int y1 = ::floor(y);
      int y2 = y1 + 1;
      // interpolation weight
      double weight = y2 - y;
      // TODO: better explanation required for the case y2 >= h
      // y2 >= h is only allowed ...
      if (y2 >= h) {
        // ... if weight == 1.0 ...
        if (weight != 1.0)
          throw SIMDException("magnifyAndScale",
                              "y2 >= h is only allowed for weight == 1.0");
        // ... in this case y2 is set to y1
        y2 = y1;
      }
      const Tin *p1, *p2;
      Tout *ps;
      // go throught the two rows and write to result row
      for (p1 = img.data + y1 * w, p2 = img.data + y2 * w,
          ps = outImg.data + ys * w;
           p1 < img.data + y1 * w + w;
           p1 += numElems, p2 += numElems, ps += numElems) {
        // load numInVecs input vectors
        load(p1, inVecs1, numInVecs);
        load(p2, inVecs2, numInVecs);
        // process input vectors
        fwaddmul(inVecs1, inVecs2, weight, multiplyScale, outVecs);
        // store numOutVec output vectors
        store(ps, outVecs, numOutVecs);
      }
    }
    break;
  }
}

// ---------------------------------------------------------------------------
// magnify and scale for classes considering tilt
// after transformation from Tin to Tout, the invalid values for Tin are
// transformed to the invalid values for Tout, not just computed with
// multiplyScale
// contributed by Annika Hoffmann
// ---------------------------------------------------------------------------

// TODO: linear interpolation (interpolation=1) is not implemented yet,
// TODO: is difficult since invalid values should not be considered
// vertical magnification around horizon with transformation from Tin to Tout
template <typename Tout, typename Tin, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class OutAddOn>
void magnifyAndScaleTilt(
  const SIMDImage<Tin, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
  int interpolation, double magnifyScale, double multiplyScale,
  SIMDImage<Tout, SIMD_WIDTH, SIMD_ALIGN, OutAddOn> &outImg)
{
  // only interpolation == 0 is implemented
  assert(interpolation == 0);
  // 27. Feb 18 (rm)
  double verticalResolution = img.addOn.verticalResolution;
  double horizon            = img.addOn.horizon;
  double sourceRowDouble;
  const Tin *src;
  Tout *dst;
  const int numInVecs  = numInputSIMDVecs<Tout, Tin>();
  const int numOutVecs = numOutputSIMDVecs<Tout, Tin>();
  const int numElems   = numSIMDVecsElements<Tout, Tin, SIMD_WIDTH>();
  const int w = img.w, h = img.h;

  if ((magnifyScale < 0.0) || (magnifyScale > 1.0))
    throw SIMDException("magnifyAndScaleTilt",
                        "magnifyScale out of range [0,1]");
  if (overlap(img, outImg))
    throw SIMDException("magnifyAndScaleTilt", "input and ouput image overlap");
  // the horizon must not lie outside the image since otherwise
  // magnification would produce undefined image rows
  // 6. Mar 13 (rm): we decrease the horizon after filtering, so the upper
  // limit was changed from 0.0 to 1.0
  if ((horizon < 0.0) || (horizon > h - 1))
    throw SIMDException("magnifyAndScaleTilt",
                        "horizon lies outside the image");
  // w must be a multiple of numElems
  if (w % numElems != 0)
    throw SIMDException("magnifyAndScaleTilt",
                        "width must be a multiple of numElems");
  SIMDVec<Tin, SIMD_WIDTH> inVecs1[numInVecs];
  SIMDVec<Tout, SIMD_WIDTH> outVecs[numOutVecs];

  SIMDVec<Tin, SIMD_WIDTH> maxVecIn =
    set1<Tin, SIMD_WIDTH>(SIMDTypeInfo<Tin>::max());
  SIMDVec<Tout, SIMD_WIDTH> maxVecOut =
    set1<Tout, SIMD_WIDTH>(SIMDTypeInfo<Tout>::max());
  SIMDVec<Tout, SIMD_WIDTH> cmpVecsOut[numOutVecs];
  SIMDVec<Tin, SIMD_WIDTH> cmpVecs[numInVecs];

  // addon parameters are changed according to magnifyAndScale above
  outImg.resize(
    w, h,
    Panorama(img.addOn.verticalResolution * magnifyScale, img.addOn.horizon));

  // ================ only nearest neighbor interpolation ==================
  if (verticalResolution <= 0.0) {
    // negative values or zero indicate: use approximative solution
    // source row index as double
    // in the loop:
    // sourceRowDouble = 0.5 + horizon - magnifyScale * (horizon - y)
    sourceRowDouble = 0.5 + horizon - horizon * magnifyScale;
    // copy rows (no interpolation)
    for (int y = 0; y < h; y++) {
      src = img.data + w * static_cast<int>(sourceRowDouble);
      dst = outImg.data + w * y;
      for (int x = 0; x < w; x += numElems) {
        // load numInVecs input vectors
        load(src, inVecs1, numInVecs);

        // comparison is only defined for single vectors:
        for (int i = 0; i < numInVecs; i++) {
          cmpVecs[i] = cmpeq(inVecs1[i], maxVecIn);
        }
        convert(cmpVecs, cmpVecsOut);

        // process input vectors to output vectors
        fmul(inVecs1, multiplyScale, outVecs);

        // input maximum values (= invalid) are transformed to output
        // maximum values (= invalid)
        for (int i = 0; i < numOutVecs; i++)
          outVecs[i] = ifelse(cmpVecsOut[i], maxVecOut, outVecs[i]);

        // store numOutVec output vectors
        store(dst, outVecs, numOutVecs);
        src += numElems;
        dst += numElems;
      }
      sourceRowDouble += magnifyScale;
    }
  } else {
    // exact solution
    double gamma, gammas;
    double verticalResolutionInv = 1.0 / verticalResolution;
    for (int y = 0; y < h; y++) {
      // verticalResolution: angle[rad] per pixel
      gammas          = (horizon - y) * verticalResolution;
      gamma           = atan(magnifyScale * tan(gammas));
      sourceRowDouble = 0.5 + horizon - gamma * verticalResolutionInv;
      src             = img.data + w * static_cast<int>(sourceRowDouble);
      dst             = outImg.data + w * y;
      for (int x = 0; x < w; x += numElems) {
        // load numInVecs input vectors
        load(src, inVecs1, numInVecs);
        // comparison is only defined for single vectors:
        for (int i = 0; i < numInVecs; i++) {
          cmpVecs[i] = cmpeq(inVecs1[i], maxVecIn);
        }
        convert(cmpVecs, cmpVecsOut);
        fmul(inVecs1, multiplyScale, outVecs);
        // process input vectors to output vectors
        for (int i = 0; i < numOutVecs; i++)
          outVecs[i] = ifelse(cmpVecsOut[i], maxVecOut, outVecs[i]);

        store(dst, outVecs, numOutVecs);
        src += numElems;
        dst += numElems;
      }
    }
  }
}

// ---------------------------------------------------------------------------
// copy
// ---------------------------------------------------------------------------

// copy with transformation from Tin to Tout
template <typename Tout, typename Tin, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn1, class AnyAddOn2>
void copy(const SIMDImage<Tin, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &img,
          SIMDImage<Tout, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &outImg)
{
  // input and output images can be identical,
  // otherwise they shouldn't overlap
  if (!same(img, outImg) && overlap(img, outImg))
    throw SIMDException("copy",
                        "input and output image are not identical but overlap");
  const size_t size    = img.size;
  const int numInVecs  = numInputSIMDVecs<Tout, Tin>();
  const int numOutVecs = numOutputSIMDVecs<Tout, Tin>();
  const int numElems   = numSIMDVecsElements<Tout, Tin, SIMD_WIDTH>();
  // size must be a multiple of numElems
  if (size % numElems != 0)
    throw SIMDException("copy", "size must be a multiple of numElems");
  SIMDVec<Tin, SIMD_WIDTH> inVecs[numInVecs];
  SIMDVec<Tout, SIMD_WIDTH> outVecs[numOutVecs];
  outImg.resize(img.w, img.h, img.addOn);
  const Tin *src = img.data;
  Tout *dst      = outImg.data;
  for (size_t i = 0; i < size; i += numElems) {
    // load numInVecs input vectors
    load(src, inVecs, numInVecs);
    // process input vectors to output vectors
    convert(inVecs, outVecs);
    // store numOutVec output vectors
    store(dst, outVecs, numOutVecs);
    src += numElems;
    dst += numElems;
  }
}

// ---------------------------------------------------------------------------
// copy and scale
// ---------------------------------------------------------------------------

// copy and scale with transformation from Tin to Tout
template <typename Tout, typename Tin, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn1, class AnyAddOn2>
void copyAndScale(const SIMDImage<Tin, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &img,
                  double multiplyScale,
                  SIMDImage<Tout, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &outImg)
{
  // input and output images can be identical,
  // otherwise they shouldn't overlap
  if (!same(img, outImg) && overlap(img, outImg))
    throw SIMDException("copyAndScale",
                        "input and output image are not identical but overlap");
  const size_t size    = img.size;
  const int numInVecs  = numInputSIMDVecs<Tout, Tin>();
  const int numOutVecs = numOutputSIMDVecs<Tout, Tin>();
  const int numElems   = numSIMDVecsElements<Tout, Tin, SIMD_WIDTH>();
  // size must be a multiple of numElems
  if (size % numElems != 0)
    throw SIMDException("copyAndScale", "size must be a multiple of numElems");
  SIMDVec<Tin, SIMD_WIDTH> inVecs[numInVecs];
  SIMDVec<Tout, SIMD_WIDTH> outVecs[numOutVecs];
  outImg.resize(img.w, img.h, img.addOn);
  const Tin *src = img.data;
  Tout *dst      = outImg.data;
  for (size_t i = 0; i < size; i += numElems) {
    // load numInVecs input vectors
    load(src, inVecs, numInVecs);
    // process input vectors to output vectors (in float arithmetic)
    fmul(inVecs, multiplyScale, outVecs);
    // store numOutVec output vectors
    store(dst, outVecs, numOutVecs);
    src += numElems;
    dst += numElems;
  }
}

// each plane in stack has its own multiplyScale, so
// mulitplyScale[stk->numPlanes] is assumed
template <typename Tout, typename Tin, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn1, class AnyAddOn2>
void copyAndScale(const SIMDStack<Tin, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &stk,
                  const std::vector<double> &multiplyScale,
                  SIMDStack<Tout, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &outStk)
{
  if (multiplyScale.size() != (size_t) stk.numPlanes)
    throw SIMDException("copyAndScale", "multiplyScale vector has wrong size");
  // input and output images can be identical,
  // otherwise they shouldn't overlap
  if (!same(stk, outStk) && overlap(stk, outStk))
    throw SIMDException("copyAndScale",
                        "input and output stack are not identical but overlap");
  outStk.resize(stk);
  for (int i = 0; i < stk.numPlanes; i++)
    copyAndScale(stk[i], multiplyScale[i], outStk[i]);
}

// ---------------------------------------------------------------------------
// copy and scale for tilted images (contributed by Annika Hoffmann)
// ---------------------------------------------------------------------------

// copy and scale with transformation from Tin to Tout
template <typename Tout, typename Tin, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn1, class AnyAddOn2>
void copyAndScaleTilt(
  const SIMDImage<Tin, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &img,
  double multiplyScale,
  SIMDImage<Tout, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &outImg)
{
  // input and output images can be identical,
  // otherwise they shouldn't overlap
  if (!same(img, outImg) && overlap(img, outImg))
    throw SIMDException("copyAndScaleTilt",
                        "input and output image are not identical but overlap");
  const size_t size    = img.size;
  const int numInVecs  = numInputSIMDVecs<Tout, Tin>();
  const int numOutVecs = numOutputSIMDVecs<Tout, Tin>();
  const int numElems   = numSIMDVecsElements<Tout, Tin, SIMD_WIDTH>();
  // size must be a multiple of numElems
  if (size % numElems != 0)
    throw SIMDException("copyAndScaleTilt",
                        "size must be a multiple of numElems");

  SIMDVec<Tin, SIMD_WIDTH> maxVecIn =
    set1<Tin, SIMD_WIDTH>(SIMDTypeInfo<Tin>::max());
  SIMDVec<Tout, SIMD_WIDTH> maxVecOut =
    set1<Tout, SIMD_WIDTH>(SIMDTypeInfo<Tout>::max());
  SIMDVec<Tout, SIMD_WIDTH> cmpVecsOut[numOutVecs];
  SIMDVec<Tin, SIMD_WIDTH> cmpVecs[numInVecs];
  SIMDVec<Tin, SIMD_WIDTH> inVecs[numInVecs];
  SIMDVec<Tout, SIMD_WIDTH> outVecs[numOutVecs];

  outImg.resize(img.w, img.h, img.addOn);
  const Tin *src = img.data;
  Tout *dst      = outImg.data;
  for (size_t i = 0; i < size; i += numElems) {
    // load numInVecs input vectors
    load(src, inVecs, numInVecs);
    // comparison is only defined for single vectors:
    //  1. Dec 21 (rm): i -> j (shadows outer j)
    for (int j = 0; j < numInVecs; j++) {
      cmpVecs[j] = cmpeq(inVecs[j], maxVecIn);
    }
    convert(cmpVecs, cmpVecsOut);
    // process input vectors to output vectors
    fmul(inVecs, multiplyScale, outVecs);
    // set the invalid pixels
    //  1. Dec 21 (rm): i -> j (shadows outer j)
    for (int j = 0; j < numOutVecs; j++)
      outVecs[j] = ifelse(cmpVecsOut[j], maxVecOut, outVecs[j]);
    // store numOutVec output vectors
    store(dst, outVecs, numOutVecs);
    src += numElems;
    dst += numElems;
  }
}

// ---------------------------------------------------------------------------
// shift and scale
// ---------------------------------------------------------------------------

// shift and scale with transformation from Tin to Tout
template <typename Tout, typename Tin, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn1, class AnyAddOn2>
void copyShiftAndScale(
  const SIMDImage<Tin, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &img, double shift,
  double scale, SIMDImage<Tout, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &outImg)
{
  // input and output images can be identical,
  // otherwise they shouldn't overlap
  if (!same(img, outImg) && overlap(img, outImg))
    throw SIMDException("copyShiftAndScale",
                        "input and output image are not identical but overlap");
  const size_t size    = img.size;
  const int numInVecs  = numInputSIMDVecs<Tout, Tin>();
  const int numOutVecs = numOutputSIMDVecs<Tout, Tin>();
  const int numElems   = numSIMDVecsElements<Tout, Tin, SIMD_WIDTH>();
  // size must be a multiple of numElems
  if (size % numElems != 0)
    throw SIMDException("copyShiftAndScale",
                        "size must be a multiple of numElems");
  SIMDVec<Tin, SIMD_WIDTH> inVecs[numInVecs];
  SIMDVec<Tout, SIMD_WIDTH> outVecs[numOutVecs];
  outImg.resize(img.w, img.h, img.addOn);
  const Tin *src = img.data;
  Tout *dst      = outImg.data;
  for (size_t i = 0; i < size; i += numElems) {
    // load numInVecs input vectors
    load(src, inVecs, numInVecs);
    // process input vectors to output vectors (in float arithmetic)
    faddmul(inVecs, shift, scale, outVecs);
    // store numOutVec output vectors
    store(dst, outVecs, numOutVecs);
    src += numElems;
    dst += numElems;
  }
}

// ---------------------------------------------------------------------------
// scale and shift
// ---------------------------------------------------------------------------

// shift and scale with transformation from Tin to Tout
template <typename Tout, typename Tin, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn1, class AnyAddOn2>
void copyScaleAndShift(
  const SIMDImage<Tin, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &img, double scale,
  double shift, SIMDImage<Tout, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &outImg)
{
  // input and output images can be identical,
  // otherwise they shouldn't overlap
  if (!same(img, outImg) && overlap(img, outImg))
    throw SIMDException("copyScaleAndShift",
                        "input and output image are not identical but overlap");
  const size_t size    = img.size;
  const int numInVecs  = numInputSIMDVecs<Tout, Tin>();
  const int numOutVecs = numOutputSIMDVecs<Tout, Tin>();
  const int numElems   = numSIMDVecsElements<Tout, Tin, SIMD_WIDTH>();
  // size must be a multiple of numElems
  if (size % numElems != 0)
    throw SIMDException("copyScaleAndShift",
                        "size must be a multiple of numElems");
  SIMDVec<Tin, SIMD_WIDTH> inVecs[numInVecs];
  SIMDVec<Tout, SIMD_WIDTH> outVecs[numOutVecs];
  outImg.resize(img.w, img.h, img.addOn);
  const Tin *src = img.data;
  Tout *dst      = outImg.data;
  for (size_t i = 0; i < size; i += numElems) {
    // load numInVecs input vectors
    load(src, inVecs, numInVecs);
    // process input vectors to output vectors (in float arithmetic)
    fmuladd(inVecs, scale, shift, outVecs);
    // store numOutVec output vectors
    store(dst, outVecs, numOutVecs);
    src += numElems;
    dst += numElems;
  }
}

// ---------------------------------------------------------------------------
// insert
// ---------------------------------------------------------------------------

template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AnySrcAddOn,
          class AnyDstAddOn>
void insert(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnySrcAddOn> &src,
            int x0, int y0,
            SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyDstAddOn> &dst)
{
  if ((x0 + src.w > dst.w) || (y0 + src.h > dst.h))
    throw SIMDException("insert", "size of destination image exceeded");
  for (int yd = y0, ys = 0; ys < src.h; yd++, ys++)
    memcpy(dst[yd] + x0, src[ys], src.w * sizeof(T));
}

// ---------------------------------------------------------------------------
// minimum / maximum
// ---------------------------------------------------------------------------

template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AnyAddOn>
T max(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn> &img)
{
  SIMDVec<T, SIMD_WIDTH> maxv = set1<T, SIMD_WIDTH>(SIMDTypeInfo<T>::min());
  const int nElems            = numSIMDVecElements<T, SIMD_WIDTH>();
  for (T *d = img.data; d < img.data + img.size; d += nElems)
    maxv = max(maxv, load<SIMD_WIDTH>(d));
  return hmax(maxv);
}

template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AnyAddOn>
T maxExcept(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn> &img,
            T exceptVal)
{
  SIMDVec<T, SIMD_WIDTH> maxv = set1<T, SIMD_WIDTH>(SIMDTypeInfo<T>::min()),
                         excv = set1<T, SIMD_WIDTH>(exceptVal), v, isexcv;
  const int nElems            = numSIMDVecElements<T, SIMD_WIDTH>();
  for (T *d = img.data; d < img.data + img.size; d += nElems) {
    v      = load<SIMD_WIDTH>(d);
    isexcv = cmpeq(v, excv);
    maxv   = ifelse(isexcv, maxv, max(maxv, v));
  }
  T maxvbuf[nElems];
  storeu(maxvbuf, maxv);
  T maxs = maxvbuf[0];
  for (int i = 1; i < nElems; i++) maxs = std::max(maxs, maxvbuf[i]);
  return maxs;
}

template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AnyAddOn>
T min(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn> &img)
{
  SIMDVec<T, SIMD_WIDTH> minv = set1<T, SIMD_WIDTH>(SIMDTypeInfo<T>::max());
  const int nElems            = numSIMDVecElements<T, SIMD_WIDTH>();
  for (T *d = img.data; d < img.data + img.size; d += nElems)
    minv = min(minv, load<SIMD_WIDTH>(d));
  return hmin(minv);
}

template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AnyAddOn>
T maxAbs(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn> &img)
{
  SIMDVec<T, SIMD_WIDTH> maxv = set1<T, SIMD_WIDTH>(SIMDTypeInfo<T>::min());
  const int nElems            = numSIMDVecElements<T, SIMD_WIDTH>();
  for (T *d = img.data; d < img.data + img.size; d += nElems)
    maxv = max(maxv, abs(load<SIMD_WIDTH>(d)));
  return hmax(maxv);
}

// ---------------------------------------------------------------------------
// replace pixels oldVal with newVal
// ---------------------------------------------------------------------------

template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AnyAddOn>
void replace(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn> &img,
             T oldVal, T newVal,
             SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn> &res)
{
  SIMDVec<T, SIMD_WIDTH> oldv = set1<T, SIMD_WIDTH>(oldVal),
                         newv = set1<T, SIMD_WIDTH>(newVal), v;
  res                         = img;
  const int nElems            = numSIMDVecElements<T, SIMD_WIDTH>();
  for (T *d = res.data; d < res.data + res.size; d += nElems) {
    v = load<SIMD_WIDTH>(d);
    store(d, ifelse(cmpeq(oldv, v), newv, v));
  }
}

// ---------------------------------------------------------------------------
// load and save pgm files
// ---------------------------------------------------------------------------

// load from FILE*
// cannot handle comments in PGM headers (complicated)
template <typename ImgType, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AddOn>
bool loadPGM(FILE *f, SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, AddOn> &img,
             const AddOn &addOn = AddOn())
{
  int w, h, mx, ret;
  // do not write \n at the end of the format specification,
  // will also read other special chars after the \n!
  // "A sequence of white-space characters (space, tab, newline, etc.;
  // see isspace(3)).  This directive matches  any  amount  of  white
  // space, including none, in the input."
  ret = fscanf(f, "P5 %d %d %d", &w, &h, &mx);
  if (ret != 3) return false;
  if (mx > SIMDBYTE_MAX) return false;
  // instead we read a single byte to skip the single whitespace
  ret = fgetc(f);
  if (ret == EOF) return false;
  // create SIMDByte image
  // SIMD_WIDTH=SIMD_ALIGN=1 so that each image fits (TODO: necessary here?)
  SIMDImage<SIMDByte, 1, 1, AddOn> imgB;
  imgB.resize(w, h, addOn);
  // read data
  if (!imgB.load(f)) return false;
  // assign to argument image
  img = imgB;
  return true;
}

// load from filename (char*)
template <typename ImgType, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AddOn>
bool loadPGM(const char *filename,
             SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, AddOn> &img,
             const AddOn &addOn = AddOn())
{
  FILE *f = fopen(filename, "r");
  if (!f) return false;
  bool res = loadPGM(f, img, addOn);
  fclose(f);
  return res;
}

// load from filename (std::string)
template <typename ImgType, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AddOn>
bool loadPGM(const std::string &filename,
             SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, AddOn> &img,
             const AddOn &addOn = AddOn())
{
  return loadPGM(filename.c_str(), img, addOn);
}

// save to FILE*
// the user has to guarantee that the pixels of img fit into a SIMDByte
template <typename ImgType, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn>
bool savePGM(FILE *f,
             const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn> &img)
{
  int ret;
  ret = fprintf(f, "P5\n%d %d\n%d\n", img.w, img.h, SIMDBYTE_MAX);
  if (ret < 0) return false;
  // note that this calls the copy constructor, not operator=
  // SIMD_WIDTH=SIMD_ALIGN=1 so that each image fits
  SIMDImage<SIMDByte, 1, 1> imgB = img;
  return imgB.save(f);
}

// save to filename (char*)
template <typename ImgType, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn>
bool savePGM(const char *filename,
             const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn> &img)
{
  FILE *f = fopen(filename, "w");
  if (!f) return false;
  bool res = savePGM(f, img);
  fclose(f);
  return res;
}

// save to filename (std::string)
template <typename ImgType, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn>
bool savePGM(const std::string &filename,
             const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn> &img)
{
  return savePGM(filename.c_str(), img);
}

// ---------------------------------------------------------------------------
// rotateHor: rotate horizontally (cyclic)
// ---------------------------------------------------------------------------

template <typename ImgType, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn1, class AnyAddOn2>
void rotateHor(
  const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &inImg, int shift,
  SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &outImg)
{
  if (overlap(inImg, outImg))
    throw SIMDException("rotateHor", "input and output image overlap");
  const int w = inImg.w, h = inImg.h;
  if ((shift < 0) || (shift >= w))
    throw SIMDException("rotateHor", "shift parameter must be in [0,w)");
  inImg.addOn.isInvariantToHorizontalReorganization();
  outImg.resize(w, h, inImg.addOn);
  ImgType *ip = inImg.data, *op = outImg.data;
  const int wms = w - shift;
  for (int j = 0; j < h; j++, ip += w, op += w) {
    memcpy(op, ip + shift, wms * sizeof(ImgType));
    memcpy(op + wms, ip, shift * sizeof(ImgType));
  }
}

// ---------------------------------------------------------------------------
// swizzle (cyclic)
// ---------------------------------------------------------------------------

template <int N, typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn1, class AnyAddOn2>
void swizzleCyclic(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &inImg,
                   int nAuxVecCols,
                   SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &outImg)
{
  if (overlap(inImg, outImg))
    throw SIMDException("swizzleCyclic", "input and output image overlap");
  const int w = inImg.w, h = inImg.h;
  const int elems = numSIMDVecElements<T, SIMD_WIDTH>();
  const int n = N, n_x_elems = n * elems, blockSize = w / n;
  const int blockSizePlus = blockSize + nAuxVecCols * elems;
  const int wPlus         = w + nAuxVecCols * n_x_elems;
  // printf("w = %d, h = %d, elems = %d, n = %d, "
  //        "n_x_elems = %d, blockSize = %d\n",
  //	    w, h, elems, n, n_x_elems, blockSize);
  if (w % n_x_elems != 0)
    throw SIMDException("swizzleCyclic", "invalid width (w % n_x_elems != 0)");
  SIMDVec<T, SIMD_WIDTH> vecs[n];
  // outImg contains n_x_elems additional columns
  inImg.addOn.isInvariantToHorizontalReorganization();
  outImg.resize(wPlus, h, inImg.addOn);
  // blockOff is the offset to the start of each block
  int blockOff[n];
  for (int k = 0, off = 0; k < n; k++, off += blockSizePlus) blockOff[k] = off;
  // go through all rows
  for (int j = 0; j < h; j++) {
    // start of rows in inImg and outImg
    T *idp = inImg[j], *outRow = outImg[j], *odp = outRow;
    // go along this row
    for (int i = 0; i < w; i += n_x_elems, idp += n_x_elems, odp += elems) {
      // load n vectors
      load(idp, vecs, n);
      // swizzle vectors
      swizzle<N>(vecs);
      // store n vectors to different blocks (with same offset
      // relative to block, contained in odp)
      for (int k = 0; k < n; k++) store(odp + blockOff[k], vecs[k]);
    }
    // complement wrap-around columns in each block
    for (int k = 0; k < n; k++) {
      T *obp = outRow + blockOff[k];
      for (int m = 0; m < nAuxVecCols; m++, obp += elems)
        load_store<SIMD_WIDTH>(obp, obp + blockSize);
    }
  }
}

template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AnyAddOn1,
          class AnyAddOn2>
void swizzleCyclic(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &inImg,
                   int n, int nAuxVecCols,
                   SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &outImg)
{
  switch (n) {
  case 1: swizzleCyclic<1>(inImg, nAuxVecCols, outImg); break;
  case 2: swizzleCyclic<2>(inImg, nAuxVecCols, outImg); break;
  case 3: swizzleCyclic<3>(inImg, nAuxVecCols, outImg); break;
  case 4: swizzleCyclic<4>(inImg, nAuxVecCols, outImg); break;
  case 5: swizzleCyclic<5>(inImg, nAuxVecCols, outImg); break;

  default:
    throw SIMDException("swizzleCyclic", "invalid n (only 1..5 supported)");
  };
}

// ---------------------------------------------------------------------------
// unSwizzleCyclic (serial, slow)
// ---------------------------------------------------------------------------

template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AnyAddOn1,
          class AnyAddOn2>
void unSwizzleCyclic(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &inImg, int n,
  int nAuxVecCols, SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &outImg)
{
  const int wPlus = inImg.w, h = inImg.h;
  const int elems     = numSIMDVecElements<T, SIMD_WIDTH>();
  const int n_x_elems = n * elems, blockSizePlus = wPlus / n;
  // const int blockSize = blockSizePlus - nAuxVecCols * elems;
  const int w = wPlus - nAuxVecCols * n_x_elems;
  // printf("w = %d, h = %d, elems = %d, n = %d, "
  //        "n_x_elems = %d, blockSize = %d, blockSizePlus = %d, wPlus = %d\n",
  //	     w, h, elems, n, n_x_elems, blockSize, blockSizePlus, wPlus);
  outImg.resize(w, h, inImg.addOn);
  // col. index output image
  for (int io = 0; io < w; io++) {
    // col. index input image
    int ii = (io % n) * blockSizePlus + ::floor(io / n);
    for (int j = 0; j < h; j++) outImg[j][io] = inImg[j][ii];
  }
}

// ---------------------------------------------------------------------------
// numeric operations
// ---------------------------------------------------------------------------

// saturated add of a constant
template <typename ImgType, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn1, class AnyAddOn2>
void adds(const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &inImg,
          ImgType val,
          SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &outImg)
{
  // input and output images can be identical,
  // otherwise they shouldn't overlap
  if (!same(inImg, outImg) && overlap(inImg, outImg))
    throw SIMDException("adds",
                        "input and output image are not identical but overlap");
  SIMDVec<ImgType, SIMD_WIDTH> valVec = set1<ImgType, SIMD_WIDTH>(val);
  outImg                              = inImg;
  const int elems = numSIMDVecElements<ImgType, SIMD_WIDTH>();
  for (ImgType *dp = outImg.data; dp < outImg.data + outImg.size; dp += elems)
    store(dp, adds(load<SIMD_WIDTH>(dp), valVec));
}

// saturated sub of a constant
template <typename ImgType, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn1, class AnyAddOn2>
void subs(const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &inImg,
          ImgType val,
          SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &outImg)
{
  // input and output images can be identical,
  // otherwise they shouldn't overlap
  if (!same(inImg, outImg) && overlap(inImg, outImg))
    throw SIMDException("subs",
                        "input and output image are not identical but overlap");
  SIMDVec<ImgType, SIMD_WIDTH> valVec = set1<ImgType, SIMD_WIDTH>(val);
  outImg                              = inImg;
  const int elems = numSIMDVecElements<ImgType, SIMD_WIDTH>();
  for (ImgType *dp = outImg.data; dp < outImg.data + outImg.size; dp += elems)
    store(dp, subs(load<SIMD_WIDTH>(dp), valVec));
}

// multiplication by a constant (only for ImgType which provides mul)
template <typename ImgType, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn1, class AnyAddOn2>
void mul(const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &inImg,
         ImgType val,
         SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &outImg)
{
  // input and output images can be identical,
  // otherwise they shouldn't overlap
  if (!same(inImg, outImg) && overlap(inImg, outImg))
    throw SIMDException("mul",
                        "input and output image are not identical but overlap");
  SIMDVec<ImgType, SIMD_WIDTH> valVec = set1<ImgType, SIMD_WIDTH>(val);
  outImg                              = inImg;
  const int elems = numSIMDVecElements<ImgType, SIMD_WIDTH>();
  for (ImgType *dp = outImg.data; dp < outImg.data + outImg.size; dp += elems)
    store(dp, mul(load<SIMD_WIDTH>(dp), valVec));
}

// pixel-wise multiplication (only for ImgType which provides mul)
// contributed by Benedikt Volkmer (modified from operator*)
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AddOn>
void mul(const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &a,
         const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &b,
         SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOn> &c)
{
  if (!a.sameSize(b))
    throw SIMDException("mul", "input images have different size");
  c.resize(a.w, a.h, a.addOn);
  const int simd_elems = numSIMDVecElements<T, SIMD_WIDTH>();
  for (size_t p = 0; p < c.size; p += simd_elems) {
    SIMDVec<T, SIMD_WIDTH> a_v = load<SIMD_WIDTH>(a.data + p);
    SIMDVec<T, SIMD_WIDTH> b_v = load<SIMD_WIDTH>(b.data + p);
    SIMDVec<T, SIMD_WIDTH> c_v = a_v * b_v;
    store(c.data + p, c_v);
  }
}

// ---------------------------------------------------------------------------
// horizontal cyclic binomial filter
// ---------------------------------------------------------------------------

// FUNCTION IS OBSOLETE, USE horizontalBinomialFilterCyclic INSTEAD!

// example: w = 12, elems = 4
// in row:    |  0  1  2  3  |  4  5  6  7  |  8  9 10 11 |
// left/next: | 11  0  1  2  |  3  4  5  6  |  7  8  9 10 | 11  0  1  2
// center:    |  0  1  2  3  |  4  5  6  7  |  8  9 10 11 |
// right:     |  1  2  3  4  |  5  6  7  8  |  9 10 11  0 |

template <typename ImgType, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AnyAddOn1, class AnyAddOn2>
void binomialHorCyclic(
  const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn1> &inImg,
  SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, AnyAddOn2> &outImg)
{
  // input and output images can be identical,
  // otherwise they shouldn't overlap
  if (!same(inImg, outImg) && overlap(inImg, outImg))
    throw SIMDException("binomialHorCyclic",
                        "input and output image are not identical but overlap");
  const int w = inImg.w, h = inImg.h;
  inImg.addOn.isInvariantToHorizontalReorganization();
  outImg.resize(w, h, inImg.addOn);
  const int elems = numSIMDVecElements<ImgType, SIMD_WIDTH>();
  // ImgType rowBuf[w + elems] SIMD_ATTR_ALIGNED(SIMD_WIDTH);
  SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN> rowBuf(w + elems, 1);
  const ImgType *inRowPtr = inImg.data;
  ImgType *outRowPtr      = outImg.data;
  SIMDVec<ImgType, SIMD_WIDTH> left, next, center, right;
  for (int j = 0; j < h; j++, inRowPtr += w, outRowPtr += w) {
    // make a wrap-around copy of the row:
    // - first element is last element
    rowBuf.data[0] = inRowPtr[w - 1];
    // - then come the remaining elements (w - 1 would be sufficient,
    //   but maybe w helps memcpy() to find an efficient vectorized
    //   solution?)
    memcpy(rowBuf.data + 1, inRowPtr, w * sizeof(ImgType));
    // - the first elements (-1, 0, 1, ...) go to the end
    load_store<SIMD_WIDTH>(rowBuf.data, rowBuf.data + w);
    // process
    ImgType *bufPtr = rowBuf.data, *outPtr = outRowPtr;
    // left pixels
    left = load<SIMD_WIDTH>(bufPtr);
    for (int i = 0; i < w; i += elems, outPtr += elems) {
      // load next vector of pixels
      bufPtr += elems;
      next = load<SIMD_WIDTH>(bufPtr);
      // center pixels
      center = alignre<1>(next, left);
      // right pixels
      right = alignre<2>(next, left);
      // filter
      store(outPtr, avg(avg(left, right), center));
      // next round
      left = next;
    }
  }
}

// ---------------------------------------------------------------------------
// combineImageWithMask
// contributed by Annika Hoffmann
// ---------------------------------------------------------------------------

// use a mask image to set all "invalid" pixels to the maximum value
// of the current type
// imageIn and imageOut are in IMGType format (SIMDFloat)
// imgMask is in SIMDFloat format
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AddOnIn,
          class AddOnOut>
void combineImageWithMask(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOnIn> &imgIn,
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOnIn> &imgMask,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOnOut> &imgOut)
{
  const int w = imgIn.w, h = imgIn.h;
  imgOut.resize(w, h, imgIn.addOn);

  // vector for result computation
  SIMDVec<T, SIMD_WIDTH> resVec;
  SIMDVec<T, SIMD_WIDTH> maskVec;
  SIMDVec<T, SIMD_WIDTH> inVec;
  SIMDVec<T, SIMD_WIDTH> maxVec;

  maxVec               = set1<T, SIMD_WIDTH>(SIMDTypeInfo<T>::max());
  const int simd_elems = SIMD_WIDTH / sizeof(T);

  // pointer to input image: we work with two pointers, one (pi0)
  // pointing to the top row, the other (pi1) traversing the column block
  // pi0 traverses top row in jumps of simd_elems values
  const T *pi0 = imgIn.data;
  // pointer to mask image
  const T *pmask0 = imgMask.data;

  // pas traverses result (single row) in jumps of simd_elems values
  T *presult = imgOut.data;
  // 1 needs to be accepted as true (does not work for Byte-images with 255 as
  // maximal value) could the mask be something different than float image?
  SIMDVec<T, SIMD_WIDTH> cmpVec = set1<T, SIMD_WIDTH>(1);
  SIMDVec<T, SIMD_WIDTH> testVec;

  // go through top column in jumps of simd_elems
  for (int x = 0; x < w; x += simd_elems) {
    // pi1 traverses block of 8 columns, starting at the top row
    const T *pi1    = pi0;
    const T *pmask1 = pmask0;
    T *presult1     = presult;
    // go through column block
    for (int y = 0; y < h; y++) {
      inVec   = load<SIMD_WIDTH>(pi1);
      maskVec = load<SIMD_WIDTH>(pmask1);
      testVec = cmpge(maskVec, cmpVec);
      resVec  = ifelse(testVec, inVec, maxVec);
      pi1 += w;
      pmask1 += w;
      // store the result vector in the output image
      store(presult1, resVec);
      presult1 += w;
    }
    // next block of 8 columns
    pi0 += simd_elems;
    pmask0 += simd_elems;
    presult += simd_elems;
  }
}

// ---------------------------------------------------------------------------
// sumOfAbsAccuInvalid
// contributed by Annika Hoffmann
// ---------------------------------------------------------------------------

// sum of absolute values in all columns (accumulated version)
// row 1: sum of absolute values of first row,
// row h: sum of absolute values of all rows
// absSum has to be of size w x h
template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AddOn1,
          class AddOn2>
void sumOfAbsAccuInvalid(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOn1> &img,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, AddOn2> &absSum)
{
  SIMDVec<T, SIMD_WIDTH> as;
  // create vector with invalid pixels (which are always the max of
  // the used type
  SIMDVec<T, SIMD_WIDTH> invalidVec, compareVec, summandVec, zero, inVec;
  zero       = setzero<T, SIMD_WIDTH>();
  invalidVec = set1<T, SIMD_WIDTH>(SIMDTypeInfo<T>::max());

  // number of elements in vector
  const int simd_elems = SIMD_WIDTH / sizeof(T);
  const int w = img.w, h = img.h;
  // 2-dimensional image with all column sums, starting with row 1
  // up to row height
  absSum.resize(w, h, img.addOn);
  // temporary absSum, summed up from row 1 up to y
  // pointer to input image: we work with two pointers, one (pi0)
  // pointing to the top row, the other (pi1) traversing the column block
  // pi0 traverses top row in jumps of simd_elems values
  const T *pi0 = img.data;
  // pas traverses result  in jumps of simd_elems values
  T *pas = absSum.data;

  // go through top column in jumps of simd_elems
  for (int x = 0; x < w; x += simd_elems) {
    // pi1 traverses block of 8 columns, starting at the top row
    const T *pi1 = pi0;
    T *pas1      = pas + x;
    // sum of absolute values = 0
    as = setzero<T, SIMD_WIDTH>();
    // go through column block
    for (int y = 0; y < h; y++) {
      inVec = load<SIMD_WIDTH>(pi1);
      // add absolute values with saturation
      compareVec = cmpeq(inVec, invalidVec);
      summandVec = ifelse(compareVec, zero, inVec);
      as         = adds(as, abs(summandVec));
      // go to next row
      // store absolute sum for each additional pixel
      store(pas1, as);
      pi1 += w;
      pas1 += w;
    }
    // next block of 8 columns
    pi0 += simd_elems;
  }
}

// ---------------------------------------------------------------------------
// vertical edge filter [+1,0,-1]
// contributed by Benedikt Volkmer
// ---------------------------------------------------------------------------

template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class InAddOn,
          class OutAddOn>
void verticalEdgeFilter2(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, InAddOn> &orig,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, OutAddOn> &edge)
{
  // overlap does not interfere
  ////check overlap
  // if (overlap(orig, edge))
  //     throw SIMDException("verticalEdgeFilter2",
  //             "input and output image overlap");
  const int w = orig.w, h = orig.h;
  edge.resize(w, h, orig.addOn);
  const int simd_elems = numSIMDVecElements<T, SIMD_WIDTH>();
  SIMDVec<T, SIMD_WIDTH> top_v, bottom_v, lastBottom_v, diff_v;
  for (int p = 0; p < w; p += simd_elems) {
    // special handling of first row [+1,-1]
    top_v    = load<SIMD_WIDTH>(orig.data + p);
    bottom_v = load<SIMD_WIDTH>(orig.data + w + p);
    // difference of first and second row
    diff_v = sub(top_v, bottom_v);
    // store in first row
    store(edge.data + p, diff_v);
    // top = top
    lastBottom_v = bottom_v;
    // traverse rows except last
    for (int row = 1; row < (h - 1); row++) {
      // load new bottom vectors
      bottom_v = load<SIMD_WIDTH>(orig.data + (row + 1) * w + p);
      // difference between top and bottom
      // (top*1+current*0+bottom*(-1)=top-bottom)
      diff_v = sub(top_v, bottom_v);
      // store to edge
      store(edge.data + row * w + p, diff_v);
      // initialise next loop
      top_v        = lastBottom_v;
      lastBottom_v = bottom_v;
    }
    // special handling of last row [+1,-1]
    // difference of first and second row
    diff_v = sub(top_v, bottom_v);
    // store in last row
    store(edge.data + (w * (h - 1)) + p, diff_v);
  }
}

// ---------------------------------------------------------------------------
// vertical binomial filter [1/4,1/2,1/4]
// contributed by Benedikt Volkmer
// ---------------------------------------------------------------------------

template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class InAddOn,
          class OutAddOn>
void verticalBinomialFilter(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, InAddOn> &orig,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, OutAddOn> &binom)
{
  // Overlap does not interfere
  ////check overlap
  // if (overlap(orig, binom))
  //     throw SIMDException("verticalBinomialFilter",
  //             "input and output image overlap");
  const int w = orig.w, h = orig.h;
  binom.resize(w, h, orig.addOn);
  const int simd_elems = numSIMDVecElements<T, SIMD_WIDTH>();
  SIMDVec<T, SIMD_WIDTH> top_v, center_v, bottom_v, avg_v;
  for (int p = 0; p < w; p += simd_elems) {
    // special handling of first row [1/2,1/2], i.e. mirroring second row
    top_v    = load<SIMD_WIDTH>(orig.data + p);
    center_v = load<SIMD_WIDTH>(orig.data + w + p);
    // average of first and second row
    avg_v = avg(top_v, center_v);
    // store in first row
    store(binom.data + p, avg_v);
    // top = top
    // center = center
    // traverse rows except last
    for (int row = 1; row < (h - 1); row++) {
      // load new bottom vectors
      bottom_v = load<SIMD_WIDTH>(orig.data + (row + 1) * w + p);
      // average of center and average between top and bottom
      avg_v = avg(avg(top_v, bottom_v), center_v);
      // store to binom
      store(binom.data + row * w + p, avg_v);
      // initialise next loop
      top_v    = center_v;
      center_v = bottom_v;
    }
    // special handling of last row [1/2,1/2]
    // average of first and second row
    avg_v = avg(top_v, bottom_v);
    // store in last row
    store(binom.data + (w * (h - 1)) + p, avg_v);
  }
}

// ---------------------------------------------------------------------------
// horizontal edge filter [1,0,-1]
// contributed by Benedikt Volkmer
// ---------------------------------------------------------------------------

template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class InAddOn,
          class OutAddOn>
void horizontalEdgeFilterCyclic2(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, InAddOn> &orig,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, OutAddOn> &edge)
{
  // overlap does not interfere
  ////check overlap
  // if (overlap(orig, edge))
  //     throw SIMDException("horizontalEdgeFilterCyclic",
  //             "input and output image overlap");
  const int w = orig.w, h = orig.h;
  edge.resize(w, h, orig.addOn);
  const int simd_elems = numSIMDVecElements<T, SIMD_WIDTH>();
  for (size_t row = 0; row < edge.size; row += w) {
    SIMDVec<T, SIMD_WIDTH> next_v, left_v, right_v, previousResult_v,
      tmpResult_v;
    // calculate last vector tmp result, which need first elements shifted in
    next_v  = load<SIMD_WIDTH>(orig.data + row);
    left_v  = load<SIMD_WIDTH>(orig.data + row + w - simd_elems);
    right_v = alignre<2>(next_v, left_v);
    // l l l l l l l l|n n n n n n n n
    //     r r r r r r r r
    const SIMDVec<T, SIMD_WIDTH> lastResult_v = sub(left_v, right_v);
    //   l l l l l l l l
    // - l l l l l l n n
    previousResult_v = lastResult_v;
    left_v           = next_v;
    // calculate all vectors except the last
    // see horizontalBinomialFilterCyclic for analog explanation
    for (int p = 0; p < w - simd_elems; p += simd_elems) {
      next_v      = load<SIMD_WIDTH>(orig.data + row + p + simd_elems);
      right_v     = alignre<2>(next_v, left_v);
      tmpResult_v = sub(left_v, right_v);
      store(edge.data + row + p,
            alignre<simd_elems - 1>(tmpResult_v, previousResult_v));
      previousResult_v = tmpResult_v;
      left_v           = next_v;
    }
    // store last result
    store(edge.data + row + w - simd_elems,
          alignre<simd_elems - 1>(lastResult_v, previousResult_v));
  }
}

// ---------------------------------------------------------------------------
// horizontal binomial filter [1/4,1/2,1/4]
// contributed by Benedikt Volkmer
// ---------------------------------------------------------------------------

template <typename T, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class InAddOn,
          class OutAddOn>
void horizontalBinomialFilterCyclic(
  const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, InAddOn> &orig,
  SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, OutAddOn> &edge)
{
  // overlap does not interfere
  ////check overlap
  // if (overlap(orig, edge))
  //     throw SIMDException("horizontalBinomialFilterCyclic",
  //             "input and output image overlap");
  const int w = orig.w, h = orig.h;
  edge.resize(w, h, orig.addOn);
  const int simd_elems = numSIMDVecElements<T, SIMD_WIDTH>();
  for (size_t row = 0; row < edge.size; row += w) {
    SIMDVec<T, SIMD_WIDTH> next_v, left_v, right_v, center_v, previousResult_v,
      tmpResult_v;
    // calculate last vector tmp result, which need first elements shifted in
    next_v   = load<SIMD_WIDTH>(orig.data + row);
    left_v   = load<SIMD_WIDTH>(orig.data + row + w - simd_elems);
    center_v = alignre<1>(next_v, left_v);
    right_v  = alignre<2>(next_v, left_v);
    const SIMDVec<T, SIMD_WIDTH> lastResult_v =
      avg(avg(left_v, right_v), center_v);
    previousResult_v = lastResult_v;
    left_v           = next_v;
    // calculate all vectors except the last
    // the tmpResult is the result shifted right by 1
    // shifting it into the previous tmpResult by vector length -1 will be
    // the right result
    // example with vector length 4 applied to indices [0,1,2,3,4,5,6,7]
    // p=0: left_v = [0,1,2,3] (instead of [7,0,1,2]
    //     right_v = [2,3,4,5] (instead of [1,2,3,4]
    //    center_v = [1,2,3,4] (instead of [0,1,2,3]
    //   tmpResult = [1,2,3,4]
    //      result = [5,6,7,0] <- [1,2,3] = [0,1,2,3]
    // The last also shows, why lastResult has to be calculated first
    // this is necessary because there is just alignr not alignl
    for (int p = 0; p < w - simd_elems; p += simd_elems) {
      next_v      = load<SIMD_WIDTH>(orig.data + row + p + simd_elems);
      center_v    = alignre<1>(next_v, left_v);
      right_v     = alignre<2>(next_v, left_v);
      tmpResult_v = avg(avg(left_v, right_v), center_v);
      store(edge.data + row + p,
            alignre<simd_elems - 1>(tmpResult_v, previousResult_v));
      previousResult_v = tmpResult_v;
      left_v           = next_v;
    }
    // store last result
    store(edge.data + row + w - simd_elems,
          alignre<simd_elems - 1>(lastResult_v, previousResult_v));
  }
}

// ---------------------------------------------------------------------------
// harrisFilterCyclic
// contributed by Benedikt Volkmer (modified: SIMDFloat only)
// ---------------------------------------------------------------------------

template <int NORMALIZE, bool VARIANT, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class InAddOn, class OutAddOn>
void harrisFilterCyclic(
  const SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, InAddOn> &orig,
  SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, OutAddOn> &corner,
  const double k, const int binomialFilterCount)
{
  SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN> X, Y, A, B, C;
  verticalEdgeFilter2(orig, X);
  horizontalEdgeFilterCyclic2(orig, Y);
  mul(X, X, A);
  mul(Y, Y, B);
  mul(X, Y, C);
  // TODO: more cache-friendly with 3 loops?
  for (int i = 0; i < binomialFilterCount; ++i) {
    horizontalBinomialFilterCyclic(A, A);
    verticalBinomialFilter(A, A);
    horizontalBinomialFilterCyclic(B, B);
    verticalBinomialFilter(B, B);
    horizontalBinomialFilterCyclic(C, C);
    verticalBinomialFilter(C, C);
  }
  corner.resize(orig.w, orig.h, orig.addOn);
  const int simd_elems = numSIMDVecElements<SIMDFloat, SIMD_WIDTH>();
  // for variant:
  SIMDVec<SIMDFloat, SIMD_WIDTH> km1_v = set1<SIMDFloat, SIMD_WIDTH>(1.0 - k);
  SIMDVec<SIMDFloat, SIMD_WIDTH> k_v   = set1<SIMDFloat, SIMD_WIDTH>(k);
  for (size_t p = 0; p < orig.size; p += simd_elems) {
    SIMDVec<SIMDFloat, SIMD_WIDTH> det_v, trace_v, trace2_v, A_v, B_v, C_v, R_v;
    A_v      = load<SIMD_WIDTH, SIMDFloat>(A.data + p);
    B_v      = load<SIMD_WIDTH, SIMDFloat>(B.data + p);
    C_v      = load<SIMD_WIDTH, SIMDFloat>(C.data + p);
    det_v    = A_v * B_v - C_v * C_v;
    trace_v  = A_v + B_v;
    trace2_v = trace_v * trace_v;
    if (VARIANT)
      // variant: (1-k)*det-k*trace^2
      R_v = km1_v * det_v - k_v * trace2_v;
    else
      // original: det-k*trace^2
      R_v = det_v - k_v * trace2_v;
    if (NORMALIZE == 1)
      // sgn(R) * sqrt(abs(R))
      R_v = sign(sqrt(abs(R_v)), R_v);
    else if (NORMALIZE == 2)
      // sgn(R) * sqrt(sqrt(abs(R)))
      R_v = sign(sqrt(sqrt(abs(R_v))), R_v);
    store(corner.data + p, R_v);
  }
}

// ---------------------------------------------------------------------------
// harrisFilterCyclic with compile-time output selection
// contributed by Benedikt Volkmer (modified: SIMDFloat only)
// ---------------------------------------------------------------------------

typedef uint8_t HarrisOutputSelector;
#define HOS_VEDGE    1
#define HOS_HEDGE    2
#define HOS_DET      4
#define HOS_TR       8
#define HOS_RESPONSE 16
#define HOS_L1       32
#define HOS_L2       64
/*constexpr*/ bool HOShas(HarrisOutputSelector selector, uint8_t output)
{
  return selector & output;
}
/*constexpr*/ int HOScount(HarrisOutputSelector selector)
{
  const uint8_t NIBBLE_LOOKUP[16] = {0, 1, 1, 2, 1, 2, 2, 3,
                                     1, 2, 2, 3, 2, 3, 3, 4};
  return NIBBLE_LOOKUP[selector & 0x0F] + NIBBLE_LOOKUP[selector >> 4];
}
/*constexpr*/ int HOSidx(HarrisOutputSelector selector, uint8_t output)
{
  int idx = 0;
  if (HOShas(selector, HOS_VEDGE)) {
    if (HOS_VEDGE == output)
      return idx;
    else
      idx++;
  }
  if (HOShas(selector, HOS_HEDGE)) {
    if (HOS_HEDGE == output)
      return idx;
    else
      idx++;
  }
  if (HOShas(selector, HOS_RESPONSE)) {
    if (HOS_RESPONSE == output)
      return idx;
    else
      idx++;
  }
  if (HOShas(selector, HOS_DET)) {
    if (HOS_DET == output)
      return idx;
    else
      idx++;
  }
  if (HOShas(selector, HOS_TR)) {
    if (HOS_TR == output)
      return idx;
    else
      idx++;
  }
  if (HOShas(selector, HOS_L1)) {
    if (HOS_L1 == output)
      return idx;
    else
      idx++;
  }
  if (HOShas(selector, HOS_L2)) {
    if (HOS_L2 == output)
      return idx;
    else
      idx++;
  }
  throw SIMDException("HOSidx",
                      "Index does not exists for not selected ouputs");
}

template <int NORMALIZE, bool VARIANT, HarrisOutputSelector HOS,
          size_t SIMD_WIDTH, size_t SIMD_ALIGN, class InAddOn, class OutAddOn>
void harrisFilterCyclic(
  const SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, InAddOn> &orig,
  SIMDStack<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, OutAddOn> &output,
  const double k, const int binomialFilterCount)
{
  output.resize(HOScount(HOS), orig.w, orig.h, orig.addOn);

  SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN> X, Y, A, B, C;
  verticalEdgeFilter2(orig, X);
  horizontalEdgeFilterCyclic2(orig, Y);
  if /*constexpr*/ (HOShas(HOS, HOS_VEDGE))
    X.copyTo(output[HOSidx(HOS, HOS_VEDGE)].data);
  if /*constexpr*/ (HOShas(HOS, HOS_HEDGE))
    Y.copyTo(output[HOSidx(HOS, HOS_HEDGE)].data);

  mul(X, X, A);
  mul(Y, Y, B);
  mul(X, Y, C);
  // TODO: more cache-friendly with 3 loops?
  for (int i = 0; i < binomialFilterCount; ++i) {
    horizontalBinomialFilterCyclic(A, A);
    verticalBinomialFilter(A, A);
    horizontalBinomialFilterCyclic(B, B);
    verticalBinomialFilter(B, B);
    horizontalBinomialFilterCyclic(C, C);
    verticalBinomialFilter(C, C);
  }
  const int simd_elems = numSIMDVecElements<SIMDFloat, SIMD_WIDTH>();
  // for variant:
  SIMDVec<SIMDFloat, SIMD_WIDTH> km1_v  = set1<SIMDFloat, SIMD_WIDTH>(1.0 - k),
                                 k_v    = set1<SIMDFloat, SIMD_WIDTH>(k),
                                 two_v  = set1<SIMDFloat, SIMD_WIDTH>(2.0),
                                 zero_v = setzero<SIMDFloat, SIMD_WIDTH>();
  for (size_t p = 0; p < orig.size; p += simd_elems) {
    SIMDVec<SIMDFloat, SIMD_WIDTH> det_v, trace_v, trace2_v, A_v, B_v, C_v, R_v;
    A_v     = load<SIMD_WIDTH, SIMDFloat>(A.data + p);
    B_v     = load<SIMD_WIDTH, SIMDFloat>(B.data + p);
    C_v     = load<SIMD_WIDTH, SIMDFloat>(C.data + p);
    det_v   = A_v * B_v - C_v * C_v;
    trace_v = A_v + B_v;
    if /*constexpr*/ (HOShas(HOS, HOS_DET)) {
      if (NORMALIZE > 0)
        store(output[HOSidx(HOS, HOS_DET)].data + p, sqrt(det_v));
      else
        store(output[HOSidx(HOS, HOS_DET)].data + p, det_v);
    }
    if /*constexpr*/ (HOShas(HOS, HOS_TR)) {
      if (NORMALIZE > 0)
        store(output[HOSidx(HOS, HOS_TR)].data + p, sqrt(trace_v));
      else
        store(output[HOSidx(HOS, HOS_TR)].data + p, trace_v);
    }
    if /*constexpr*/ (HOShas(HOS, HOS_RESPONSE)) {
      trace2_v = trace_v * trace_v;
      if (VARIANT)
        // variant: (1-k)*det-k*trace^2
        R_v = km1_v * det_v - k_v * trace2_v;
      else
        // original: det-k*trace^2
        R_v = det_v - k_v * trace2_v;
      if (NORMALIZE == 1)
        // sgn(R) * sqrt(abs(R))
        R_v = sign(sqrt(abs(R_v)), R_v);
      else if (NORMALIZE == 2)
        // sgn(R) * sqrt(sqrt(abs(R)))
        R_v = sign(sqrt(sqrt(abs(R_v))), R_v);
      store(output[HOSidx(HOS, HOS_RESPONSE)].data + p, R_v);
    }
    if /*constexpr*/ (HOShas(HOS, HOS_L1) || HOShas(HOS, HOS_L2)) {
      SIMDVec<SIMDFloat, SIMD_WIDTH> sqrt_v;
      trace_v = div((trace_v), two_v); // trM/2
      //       sqrt(        (trM/2)^2       -detM  )
      sqrt_v = sqrt(sub(mul(trace_v, trace_v), det_v));
      if /*constexpr*/ (HOShas(HOS, HOS_L1)) {
        R_v = trace_v - sqrt_v; // l1 = trM/2-sqrt(trM^2/4-detM)
        if (NORMALIZE > 0)
          store(output[HOSidx(HOS, HOS_L1)].data + p, sqrt(max(R_v, zero_v)));
        else
          store(output[HOSidx(HOS, HOS_L1)].data + p, R_v);
      }
      if /*constexpr*/ (HOShas(HOS, HOS_L2)) {
        R_v = trace_v + sqrt_v; // l2 = trM/2+sqrt(trM^2/4-detM)
        if (NORMALIZE > 0)
          store(output[HOSidx(HOS, HOS_L2)].data + p, sqrt(max(R_v, zero_v)));
        else
          store(output[HOSidx(HOS, HOS_L2)].data + p, R_v);
      }
    }
  }
}

// ---------------------------------------------------------------------------
// countNonZero
// contributed by Christoph Berganski
// ---------------------------------------------------------------------------

/**
 * @brief Count non zero pixels in SIMDImage
 */
template <class Type, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AddOn>
SIMDInt countNonZero(
  const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &image)
{
  // Number of elements in SIMD vector of given width and type
  int simd_elems = SIMD_WIDTH / sizeof(Type);
  // Construct vector filled with zeros
  SIMDVec<Type, SIMD_WIDTH> zero = setzero<Type, SIMD_WIDTH>();
  // Construct vector filled with ones
  SIMDVec<Type, SIMD_WIDTH> one = set1<Type, SIMD_WIDTH>(1);
  // Zero initialize a counter vector (count ints)
  SIMDVec<SIMDInt, SIMD_WIDTH> counter = setzero<SIMDInt, SIMD_WIDTH>();
  // Uninitialized vector later used to load comparisons
  SIMDVec<Type, SIMD_WIDTH> compare;
  // Extend compare vector to SIMDInt
  SIMDVec<SIMDInt, SIMD_WIDTH>
    compare_extended[numOutputSIMDVecs<SIMDInt, Type>()];
  // Iterate image rows (row-major order)
  for (int r = 0; r < image.h; ++r) {
    // Iterate images columns in steps of simd_elems
    for (int c = 0; c < image.w; c += simd_elems) {
      // Load next simd vector and compare to zero vector. All non
      // zeros mapped to type max value
      compare = cmpeq(zero, load<SIMD_WIDTH>(&image[r][c]));
      // Map max values to 1
      compare = ifelse(compare, zero, one);
      // Extend to SIMDInt
      convert(&compare, compare_extended);
      // Iterate over extended compare vector
      for (unsigned int i = 0; i < numOutputSIMDVecs<SIMDInt, Type>(); ++i)
        // Accumulate in counter
        counter = adds(counter, compare_extended[i]);
    }
  }
  // Add all elements in the counter to get the number of non zeros in
  // the whole image
  return hadds(counter);
}

// ---------------------------------------------------------------------------
// croppedView
// contributed by Christoph Berganski
// ---------------------------------------------------------------------------

/**
 * @brief Creates a view to cropped (at top/bottom) portion of a SIMDImage.
 */
template <class Type, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AddOn = DefaultAddOn>
void croppedView(const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &src,
                 const int upper, const int lower,
                 SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &dst)
{
  // Upper part to crop
  int cropOffset = upper;
  // Height top crop of image
  int cropH = upper + lower;
  // Crop by making destination image a view into the src image portion
  dst.view(src, src.w * cropOffset, src.w, src.h - cropH, src.addOn);
}

/**
 * @brief Creates a view to cropped (at top/bottom) portion of a SIMDImage with
 * Panorama addon.
 */
template <class Type, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
void croppedView(const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, Panorama> &src,
                 const int upper, const int lower,
                 SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, Panorama> &dst)
{
  // Upper part to crop
  int cropOffset = upper;
  // Height top crop of image
  int cropH = upper + lower;
  // Panorama: Horizon after cropping
  double cropHorizon = src.addOn.horizon - cropOffset;
  // Crop by making destination image a view into the src image portion
  dst.view(src, src.w * cropOffset, src.w, src.h - cropH,
           Panorama(src.addOn.verticalResolution, cropHorizon));
}

// ---------------------------------------------------------------------------
// equalizeHist
// contributed by Christoph Berganski
// ---------------------------------------------------------------------------

/**
 * @brief Applies histogram equalization to a masked region of the input image.
 *
 * @note Similar to OpenCV cv::equalizeHist
 *
 * @param src Source SIMDImage of arbitrary type
 * @param dst Destination SIMDImage of same type as src
 * @param mask Mask SIMDImage of same type as src
 */
template <class Type, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AddOn>
void equalizeHist(const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &src,
                  SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &dst,
                  const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &mask)
{
  // Histogram equalization is only defined for SIMDByte images
  SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN, AddOn> src_byte, mask_byte;
  // Copy (convert) source and mask image to SIMDByte images
  copy(src, src_byte);
  copy(mask, mask_byte);
  // Create empty destination image as SIMDByte image
  SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN, AddOn> dst_byte(src.w, src.h,
                                                              src.addOn);
  // Use SIMDByte image implementation
  equalizeHist(src_byte, dst_byte, mask_byte);
  // Copy (convert) result back to destination (Type)
  copy(dst_byte, dst);
}

/**
 * @brief Applies histogram equalization to a masked region of the input image.
 *
 * @note Similar to OpenCV cv::equalizeHist
 *
 * @param src Source SIMDImage of arbitrary type
 * @param dst Destination SIMDImage of same type as src
 * @param mask Mask SIMDImage of same type as src
 */
template <size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AddOn>
void equalizeHist(
  const SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN, AddOn> &src,
  SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN, AddOn> &dst,
  // @formatter:off
  const SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN, AddOn> &mask)
{
  // @formatter:on
  // Mask and source image must match in size
  assert(mask.sameSize(src));
  // Resize the destination to fit source image size
  dst.resize(src.w, src.h, src.addOn);
  // Histogram and lookup table vectors
  std::vector<SIMDInt> histogram(SIMDTypeInfo<SIMDByte>::max() + 1, 0);
  std::vector<SIMDByte> lookup_table(SIMDTypeInfo<SIMDByte>::max() + 1, 0);
  // Fill histogram of pixel values
  for (int r = 0; r < src.h; ++r) {
    for (int c = 0; c < src.w; ++c) {
      if (mask[r][c]) { histogram[src[r][c]] += 1; }
    }
  }
  // Accumulate sum and scale to normalize histogram to sum 255
  SIMDFloat sum = 0.0, scale = 255.0 / countNonZero(mask);
  // Accumulate histogram and normalize to fill lookup-table
  for (std::size_t index = 0; index < histogram.size(); ++index) {
    sum += (SIMDFloat) histogram[index];
    lookup_table[index] = saturate_cast<SIMDByte>(scale * sum);
  }
  // Transform from source to destination image via lookup table
  for (int r = 0; r < src.h; ++r) {
    for (int c = 0; c < src.w; ++c) {
      // Apply transform only to masked region
      if (mask[r][c]) {
        dst[r][c] = lookup_table[src[r][c]];
      } else {
        dst[r][c] = src[r][c];
      }
    }
  }
}

/**
 * @brief Applies histogram equalization to the input image.
 *
 * @note Similar to OpenCV cv::equalizeHist
 *
 * @param src Source SIMDImage of arbitrary type
 * @param dst Destination SIMDImage of same type as src
 */
template <class Type, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AddOn>
void equalizeHist(const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &src,
                  SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &dst)
{
  // Histogram equalization is only defined for SIMDByte images
  SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN, AddOn> src_byte;
  // Copy (convert) source image to SIMDByte images
  copy(src, src_byte);
  // Create empty destination image as SIMDByte image
  SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN, AddOn> dst_byte(src.w, src.h,
                                                              src.addOn);
  // Use SIMDByte image implementation
  equalizeHist(src_byte, dst_byte);
  // Copy (convert) result back to destination (Type)
  copy(dst_byte, dst);
}

/**
 * @brief Applies histogram equalization to the input image.
 *
 * @note Similar to OpenCV cv::equalizeHist
 *
 * @param src Source SIMDImage of arbitrary type
 * @param dst Destination SIMDImage of same type as src
 */
template <size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AddOn>
void equalizeHist(const SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN, AddOn> &src,
                  SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN, AddOn> &dst)
{
  // Resize the destination to fit source image size
  dst.resize(src.w, src.h, src.addOn);
  // Histogram and lookup table vectors
  std::vector<SIMDInt> histogram(SIMDTypeInfo<SIMDByte>::max() + 1, 0);
  std::vector<SIMDByte> lookup_table(SIMDTypeInfo<SIMDByte>::max() + 1, 0);
  // Fill histogram of pixel values
  for (int r = 0; r < src.h; ++r) {
    for (int c = 0; c < src.w; ++c) { histogram[src[r][c]] += 1; }
  }
  // Accumulate sum and scale to normalize histogram to sum 255
  SIMDFloat sum = 0.0, scale = 255.0 / (src.w * src.h);
  // Accumulate histogram and normalize to fill lookup-table
  for (std::size_t index = 0; index < histogram.size(); ++index) {
    sum += (SIMDFloat) histogram[index];
    lookup_table[index] = saturate_cast<SIMDByte>(scale * sum);
  }
  // Transform from source to destination image via lookup table
  for (int r = 0; r < src.h; ++r) {
    for (int c = 0; c < src.w; ++c) { dst[r][c] = lookup_table[src[r][c]]; }
  }
}

// ---------------------------------------------------------------------------
// interpolate
// contributed by Christoph Berganski
// ---------------------------------------------------------------------------

// Substitute for apparently slow std::lround used by NEAREST interpolation
//  Rounds double to long via type-cast
static inline long fast_round(const double x)
{
  return static_cast<long>(x + std::copysign(0.5, x));
}

/**
 * @brief Interpolates pixel value of SIMDImage
 * @tparam Type Value type of the SIMDImage
 * @tparam SIMD_WIDTH Width of SIMD vectors
 * @tparam SIMD_ALIGN Memory alignment of SIMD vector
 * @tparam AddOn SIMDImage addon
 * @param src The image to interpolate from
 * @param i Pixel row index (double: might be between pixels)
 * @param j Pixel column index (double: might be between pixels)
 * @param method Interpolation method to use (NEAREST or LINEAR)
 * @param border Border value to return if the pixel is outside the image
 * @return Interpolated pixel value at (i,j) of src value Type.
 */
template <class Type, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AddOn>
static SIMD_INLINE Type
interpolate(const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &src, double i,
            double j, const Interpolation method = Interpolation::NEAREST,
            const Type border = SIMDTypeInfo<Type>::max())
{
  // Fill out of bounds with border value
  if (i < 0 || i >= src.h || j < 0 || j >= src.w) { return border; }
  // Select interpolation method
  switch (method) {
  // Nearest neighbor interpolation
  case Interpolation::NEAREST: {
    // If the pixel is out of the src after rounding...
    if (fast_round(i) >= src.h || fast_round(j) >= src.w) {
      // Fill with border value
      return border;
    }
    // Copy pixels from source to destination
    return src[fast_round(i)][fast_round(j)];
  }
    // (Bi-)Linear interpolation
  case Interpolation::LINEAR: {
    // Unit square surrounding mapping (x,y)
    int i0 = std::floor(i), i1 = (int) (std::floor(i) + 1), j0 = std::floor(j),
        j1 = (int) (std::floor(j) + 1);
    // If the pixel is out of the src after rounding...
    if (i1 >= src.h || j1 >= src.w) {
      // Fill with border value
      return border;
    }
    // Get pixels from unit square in source src surrounding
    // mapping (x,y)
    // @formatter:off
    Type f00 = src[i0][j0], f10 = src[i1][j0], f01 = src[i0][j1],
         f11 = src[i1][j1];
    // (Bi-)Linear interpolation formula on unit square
    return f00 * (1 - i + i0) * (1 - j + j0) + f10 * (i - i0) * (1 - j + j0) +
           f01 * (1 - i + i0) * (j - j0) + f11 * (i - i0) * (j - j0);
    // @formatter:on
  }
    // Unsupported method
  default: {
    // Adhoc exception class
    class Exception : public std::exception
    {
      // Returns hardcoded message
      const char *what() const noexcept override
      {
        return "Interpolation Method Not Implemented";
      }
    };
    // Throw the adhoc exception
    throw Exception();
  }
  }
}

// Specialization for SIMDImage with Panorama addon (allows horizontal wrap
// around)
template <class Type, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
static SIMD_INLINE Type interpolate(
  const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, ns_simd::Panorama> &src,
  double i, double j, const Interpolation method = Interpolation::NEAREST,
  const Type border = SIMDTypeInfo<Type>::max())
{
  // Fill out of bounds with border value
  //  NOTE: Only on bottom/top border - left/right wraps around
  if (i < 0 || i >= src.h) { return border; }
  // Select interpolation method
  switch (method) {
  // Nearest neighbor interpolation
  case Interpolation::NEAREST: {
    // If the pixel is out of the src after rounding...
    if (fast_round(i) >= src.h) {
      // Fill with border value
      return border;
    }
    // Wrap around horizontal index, avoid % operation
    j = (j >= src.w) ? (j - src.w) : ((j < 0) ? (j + src.w) : j);
    // Copy pixels from source to destination
    return src[fast_round(i)][fast_round(j)];
  }
    // (Bi-)Linear interpolation
  case Interpolation::LINEAR: {
    // Unit square surrounding mapping (x,y)
    int i0 = std::floor(i), i1 = (int) (std::floor(i) + 1), j0 = std::floor(j),
        j1 = (int) (std::floor(j) + 1);
    // If the pixel is out of the src after rounding...
    if (i1 >= src.h) {
      // Fill with border value
      return border;
    }
    // Wrap around horizontal index, avoid % operation
    j0 = (j0 >= src.w) ? (j0 - src.w) : ((j0 < 0) ? (j0 + src.w) : j0);
    j1 = (j1 >= src.w) ? (j1 - src.w) : ((j1 < 0) ? (j1 + src.w) : j1);
    // Need to wrap around the original interpolation coordinate to
    // not have exploding differences in interpolation formula.
    j = (j >= src.w) ? (j - src.w) : ((j < 0) ? (j + src.w) : j);
    // Get pixels from unit square in source src surrounding
    // mapping (x,y)
    // @formatter:off
    Type f00 = src[i0][j0], f10 = src[i1][j0], f01 = src[i0][j1],
         f11 = src[i1][j1];
    // (Bi-)Linear interpolation formula on unit square
    return f00 * (1 - i + i0) * (1 - j + j0) + f10 * (i - i0) * (1 - j + j0) +
           f01 * (1 - i + i0) * (j - j0) + f11 * (i - i0) * (j - j0);
    // @formatter:on
  }
    // Unsupported method
  default: {
    // Adhoc exception class
    class Exception : public std::exception
    {
      // Returns hardcoded message
      const char *what() const noexcept override
      {
        return "Interpolation Method Not Implemented";
      }
    };
    // Throw the adhoc exception
    throw Exception();
  }
  }
}

// ---------------------------------------------------------------------------
// maskImage
// contributed by Christoph Berganski
// ---------------------------------------------------------------------------

/**
 * @brief Blends in as mask image into a SIMDImage
 *
 * @param src SIMDImage to be masked
 * @param mask Mask with zero pixels indicating invalid (to be masked) pixels
 * @param dst Destination image (masked image is written here)
 */
template <class Type, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AddOn = DefaultAddOn>
void maskImage(const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &src,
               const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &mask,
               SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &dst)
{
  // Resize destination to fit the source image
  dst.resize(src.w, src.h, src.addOn);
  // Number of elements in SIMD vector of given width and type
  int simd_elems = SIMD_WIDTH / sizeof(Type);
  // Zero initialized vector to compare the mask pixels to (zero pixel is
  // masked)
  SIMDVec<Type, SIMD_WIDTH> zero = setzero<Type, SIMD_WIDTH>();
  // Fill vector with max value of the image Type which is used to
  // indicate invalid pixels.
  SIMDVec<Type, SIMD_WIDTH> max =
    set1<Type, SIMD_WIDTH>(SIMDTypeInfo<Type>::max());
  // Uninitialized vector later used to load comparisons
  SIMDVec<Type, SIMD_WIDTH> compare;
  // Iterate image rows (row-major order)
  for (int r = 0; r < src.h; ++r) {
    // Iterate images columns in steps of simd_elems
    for (int c = 0; c < src.w; c += simd_elems) {
      // Load next pixel block from mask and compare to zero vector.
      // All non zeros mapped to type max value
      compare = cmpeq(zero, load<SIMD_WIDTH>(&mask[r][c]));
      // Blend in max value for masked pixels
      store(&dst[r][c], ifelse(compare, max, load<SIMD_WIDTH>(&src[r][c])));
    }
  }
}

// ---------------------------------------------------------------------------
// pixelSum
// contributed by Christoph Berganski
// ---------------------------------------------------------------------------

/**
 * @brief Sums all pixel values over an image
 */
template <class SumType = SIMDInt, class Type, size_t SIMD_WIDTH,
          size_t SIMD_ALIGN, class AddOn = DefaultAddOn>
SumType pixelSum(const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &image)
{
  // Number of elements in SIMD vector of given width and type
  int simd_elems = SIMD_WIDTH / sizeof(Type);
  // Uninitialized vector for loading pixel blocks into
  SIMDVec<Type, SIMD_WIDTH> inVec;
  // Vector to hold input pixel block extended to SumType
  SIMDVec<SumType, SIMD_WIDTH>
    inVecExtended[numOutputSIMDVecs<SumType, Type>()];
  // Zero initialized vector for accumulating parts of sum
  SIMDVec<SumType, SIMD_WIDTH> sumVec = setzero<SumType, SIMD_WIDTH>();
  // Iterate image rows (row-major order)
  for (int r = 0; r < image.h; ++r) {
    // Iterate images columns in steps of simd_elems
    for (int c = 0; c < image.w; c += simd_elems) {
      // Load next pixel block
      inVec = load<SIMD_WIDTH>(&image[r][c]);
      // Extend to SumType
      convert(&inVec, inVecExtended);
      // Iterate over extended input vector
      for (unsigned int i = 0; i < numOutputSIMDVecs<SumType, Type>(); ++i)
        // Accumulate in counter
        sumVec = adds(sumVec, inVecExtended[i]);
    }
  }
  // Add all elements in the sum to get the pixel sum over the whole
  // image
  return hadds(sumVec);
}

/**
 * @brief Sums all pixel values over an image considering a mask image
 */
template <class SumType = SIMDInt, class Type, size_t SIMD_WIDTH,
          size_t SIMD_ALIGN, class AddOn = DefaultAddOn>
SumType pixelSum(const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &image,
                 const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &mask)
{
  // Number of elements in SIMD vector of given width and type
  int simd_elems = SIMD_WIDTH / sizeof(Type);
  // Uninitialized vector for loading pixel blocks into
  SIMDVec<Type, SIMD_WIDTH> inVec;
  // Vector to hold input pixel block extended to SumType
  SIMDVec<SumType, SIMD_WIDTH>
    inVecExtended[numOutputSIMDVecs<SumType, Type>()];
  // Zero initialized vector for accumulating parts of sum
  SIMDVec<SumType, SIMD_WIDTH> sumVec = setzero<SumType, SIMD_WIDTH>();
  // Zero initialized vector to compare the mask pixels to (zero pixel is
  // masked)
  SIMDVec<Type, SIMD_WIDTH> zero = setzero<Type, SIMD_WIDTH>();
  // Uninitialized vector later used to load comparisons
  SIMDVec<Type, SIMD_WIDTH> compare;
  // Iterate image rows (row-major order)
  for (int r = 0; r < image.h; ++r) {
    // Iterate images columns in steps of simd_elems
    for (int c = 0; c < image.w; c += simd_elems) {
      // Load next pixel block from mask
      compare = cmpeq(zero, load<SIMD_WIDTH>(&mask[r][c]));
      // Load next pixel block from image and set all masked pixels to
      // zero
      inVec = ifelse(compare, zero, load<SIMD_WIDTH>(&image[r][c]));
      // Extend to SumType
      convert(&inVec, inVecExtended);
      // Iterate over extended input vector
      for (unsigned int i = 0; i < numOutputSIMDVecs<SumType, Type>(); ++i)
        // Accumulate in counter
        sumVec = adds(sumVec, inVecExtended[i]);
    }
  }

  // Add all elements in the sum to get the pixel sum over the whole
  // image
  return hadds(sumVec);
}

// ---------------------------------------------------------------------------
// normalizedPixelSum
// contributed by Christoph Berganski
// ---------------------------------------------------------------------------

/**
 * @brief Sums all pixel values over an image and normalizes the result by
 * dividing by the number of pixels in the image.
 */
template <typename SumType = SIMDFloat, class Image>
SumType normalizedPixelSum(const Image &image)
{
  // Normalize by number of pixels in the image
  return pixelSum<SumType>(image) / (SumType) (image.w * image.h);
}

/**
 * @brief Sums all pixel values over an image and normalizes the result by
 * dividing by the number of not masked pixels in the image.
 */
template <typename SumType = SIMDFloat, class Image>
SumType normalizedPixelSum(const Image &image, const Image &mask)
{
  // Normalize by number of pixels in the image
  return pixelSum<SumType>(image, mask) / (SumType) countNonZero(mask);
}

// ---------------------------------------------------------------------------
// substituteValue
// contributed by Christoph Berganski
// ---------------------------------------------------------------------------

/**
 * @brief Substitutes all occurrences of a value within a SIMDImage
 *
 * @param src Source image to processed
 * @param valueIn Value to be substituted
 * @param valueOut Value used to substitute
 * @param dst Destination image (processed image is written here)
 */
template <class Type, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AddOn = DefaultAddOn>
void substituteValue(const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &src,
                     const Type valueIn, const Type valueOut,
                     SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &dst)
{
  // Resize destination to fit the source image
  dst.resize(src.w, src.h, src.addOn);
  // Number of elements in SIMD vector of given width and type
  int simd_elems = SIMD_WIDTH / sizeof(Type);
  // Fill vector with the input value (value to be replaced)
  SIMDVec<Type, SIMD_WIDTH> vecValueIn = set1<Type, SIMD_WIDTH>(valueIn);
  // Fill vector with the output value (value to replace with)
  SIMDVec<Type, SIMD_WIDTH> vecValueOut = set1<Type, SIMD_WIDTH>(valueOut);
  // Uninitialized vector to load pixel blocks into
  SIMDVec<Type, SIMD_WIDTH> vecIn;
  // Uninitialized vector later used to load comparisons
  SIMDVec<Type, SIMD_WIDTH> compare;
  // Iterate image rows (row-major order)
  for (int r = 0; r < src.h; ++r) {
    // Iterate images columns in steps of simd_elems
    for (int c = 0; c < src.w; c += simd_elems) {
      // Load next pixel block into SIMD vector
      vecIn = load<SIMD_WIDTH>(&src[r][c]);
      // Compare to input value vector
      compare = cmpeq(vecValueIn, vecIn);
      // If equal to valueIn, replace with valueOut
      store(&dst[r][c], ifelse(compare, vecValueOut, vecIn));
    }
  }
}

// ---------------------------------------------------------------------------
// SIMDImage remapping
// contributed by Christoph Berganski
// ---------------------------------------------------------------------------

// Image remapping utility
namespace Remap {
/**
 * @brief Image remapping map
 */
struct Map
{
  /**
   * @brief Width of the image mapping (width of the target image)
   */
  unsigned int w;

  /**
   * @brief Height of the image mapping (height of the target image)
   */
  unsigned int h;

  /**
   * @brief Initialized (empty) map of requested width x height
   */
  Map(const unsigned int w, const unsigned int h)
    : w {w}, h {h}, map {h, std::vector<double>(w)}
  {}

  /**
   * @brief Access mapping value at coordinates (read+write)
   */
  inline double &operator()(unsigned int x, unsigned int y)
  {
    // Delegate to std::vector []; No bound checking!
    return map[x][y];
  }

  /**
   * @brief Access mapping value at coordinates (read only)
   */
  inline double operator()(unsigned int x, unsigned int y) const
  {
    // Delegate to std::vector []; No bound checking!
    return map[x][y];
  }

private:
  // Mapping represented as 2d vector
  std::vector<std::vector<double>> map;
};
} // namespace Remap

/**
 * @brief OpenCV cv::remap like SIMDImage remapping
 * @tparam Type Value type of the SIMDImage
 * @tparam SIMD_WIDTH Width of SIMD vectors
 * @tparam SIMD_ALIGN Memory alignment of SIMD vector
 * @tparam AddOn1 SIMDImage addon of source image
 * @tparam AddOn2 SIMDImage addon of destination image
 * @param src Source image to remap
 * @param dst Destination image to map to
 * @param mapx Row coordinate mapping
 * @param mapy Column coordinate mapping
 * @param interpolation Interpolation method to use for remapping non-integer
 * coordinates
 * @param border Border value to insert if a pixel is outside the image
 */
template <class Type, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AddOn1,
          class AddOn2>
void remap(const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn1> &src,
           SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn2> &dst,
           const Remap::Map &mapx, const Remap::Map &mapy,
           const Interpolation interpolation = Interpolation::NEAREST,
           const Type border                 = SIMDTypeInfo<Type>::max())
{
  // Input and output may not be identical nor overlap
  assert(!ns_simd::same(src, dst) && !ns_simd::overlap(src, dst));
  // Map sizes for rows and columns must match
  assert(mapx.w == mapy.w && mapx.h == mapy.h);
  // Check whether output image already has requested size
  if (dst.w != (int) mapx.w || dst.h != (int) mapx.h)
    // Resize output image, keep output image addon
    dst.resize(mapx.w, mapy.h, dst.addOn);
  // Process image pixel-wise in row-major order
  for (int y = 0; y < dst.w; ++y) {
    for (int x = 0; x < dst.h; ++x) {
      // Get mapping coordinates from row/column maps
      double mx = mapx(x, y), my = mapy(x, y);
      // Copy/Interpolate pixel from source to destination
      dst[x][y] = interpolate(src, mx, my, interpolation, border);
    }
  }
}

// ---------------------------------------------------------------------------
// SIMDImage columns-/row-wise shifting (kind of special case of remapping)
// contributed by Christoph Berganski
// ---------------------------------------------------------------------------
// Image shifting utility
namespace Shift {
/**
 * @brief Row shifting map (offset table)
 */
struct ShiftRow
{
  /**
   * @brief Height/Number of rows of image to shift
   */
  unsigned int h;

  /**
   * @brief Initializes (empty) offset table of requested height
   */
  explicit ShiftRow(const unsigned int h) : h {h}, shift(h) {}

  /**
   * @brief Access shift offset value at coordinates (read+write)
   */
  inline double &operator()(unsigned int x)
  {
    // Delegate to std::vector []; No bound checking!
    return shift[x];
  }

  /**
   * @brief Access shift offset value at coordinates (read only)
   */
  inline double operator()(unsigned int x) const
  {
    // Delegate to std::vector []; No bound checking!
    return shift[x];
  }

private:
  // Shift offsets table
  std::vector<double> shift;
};

/**
 * @brief Column shifting map (offset table)
 */
struct ShiftCol
{
  /**
   * @brief Width/Number of cols of image to shift
   */
  unsigned int w;

  /**
   * @brief Initializes (empty) offset table of requested width
   */
  explicit ShiftCol(const unsigned int w) : w {w}, shift(w) {}

  /**
   * @brief Access shift offset value at coordinates (read+write)
   */
  inline double &operator()(unsigned int y)
  {
    // Delegate to std::vector []; No bound checking!
    return shift[y];
  }

  /**
   * @brief Access shift offset value at coordinates (read only)
   */
  inline double operator()(unsigned int y) const
  {
    // Delegate to std::vector []; No bound checking!
    return shift[y];
  }

private:
  // Shift offset table
  std::vector<double> shift;
};
} // namespace Shift

/**
 * @brief Shifts SIMDImage columns
 * @tparam Type Value type of the SIMDImage
 * @tparam SIMD_WIDTH Width of SIMD vectors
 * @tparam SIMD_ALIGN Memory alignment of SIMD vector
 * @tparam AddOn1 SIMDImage addon of source image
 * @tparam AddOn2 SIMDImage addon of destination image
 * @param src Source image to shift
 * @param dst Destination image to map to
 * @param shift Column shift offset table
 * @param interpolation Interpolation method to use for remapping non-integer
 * coordinates
 * @param border Border value to insert if a pixel is outside the image
 */
template <class Type, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AddOn1,
          class AddOn2>
void shift(const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn1> &src,
           SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn2> &dst,
           const Shift::ShiftCol &shift,
           const Interpolation interpolation = Interpolation::NEAREST,
           const Type border                 = SIMDTypeInfo<Type>::max())
{
  // Input and output may not be identical nor overlap
  assert(!ns_simd::same(src, dst) && !ns_simd::overlap(src, dst));
  // Offset table size must match with image height
  assert((int) shift.w == src.w);
  // Output image needs to have the same size as input
  if (dst.w != src.w || dst.h != src.h)
    // Resize output image, keep output image addon
    dst.resize(src.w, src.h, dst.addOn);
  // Process image pixel-wise in row-major order
  for (int y = 0; y < dst.w; ++y) {
    for (int x = 0; x < dst.h; ++x) {
      // Get offset from table to shift along row
      double mx = x + shift(y);
      // Copy/Interpolate pixel from source to destination
      dst[x][y] = interpolate(src, mx, y, interpolation, border);
    }
  }
}

/**
 * @brief Shifts SIMDImage rows
 * @tparam Type Value type of the SIMDImage
 * @tparam SIMD_WIDTH Width of SIMD vectors
 * @tparam SIMD_ALIGN Memory alignment of SIMD vector
 * @tparam AddOn1 SIMDImage addon of source image
 * @tparam AddOn2 SIMDImage addon of destination image
 * @param src Source image to shift
 * @param dst Destination image to map to
 * @param shift Row shift offset table
 * @param interpolation Interpolation method to use for remapping non-integer
 * coordinates
 * @param border Border value to insert if a pixel is outside the image
 */
template <class Type, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AddOn1,
          class AddOn2>
void shift(const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn1> &src,
           SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn2> &dst,
           const Shift::ShiftRow &shift,
           const Interpolation interpolation = Interpolation::NEAREST,
           const Type border                 = SIMDTypeInfo<Type>::max())
{
  // Input and output may not be identical nor overlap
  assert(!ns_simd::same(src, dst) && !ns_simd::overlap(src, dst));
  // Offset table size must match with image height
  assert((int) shift.h == src.h);
  // Output image needs to have the same size as input
  if (dst.w != src.w || dst.h != src.h)
    // Resize output image, keep output image addon
    dst.resize(src.w, src.h, dst.addOn);
  // Process image pixel-wise in row-major order
  for (int y = 0; y < dst.w; ++y) {
    for (int x = 0; x < dst.h; ++x) {
      // Get offset from table to shift along row
      double my = y + shift(x);
      // Copy/Interpolate pixel from source to destination
      dst[x][y] = interpolate(src, x, my, interpolation, border);
    }
  }
}

/**
 * @brief Computes pixel-wise absolute difference of SIMDImages
 */
template <class Type, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          class AddOn = DefaultAddOn>
void absoluteDifference(
  const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &src1,
  const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &src2,
  SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &dst)
{
  // Source images must match in size and addon
  assert(src1.w == src2.w && src1.h == src2.h && src1.addOn == src2.addOn);
  // Resize destination to fit the source image
  dst.resize(src1.w, src1.h, src1.addOn);
  // Number of elements in SIMD vector of given width and type
  int simd_elems = SIMD_WIDTH / sizeof(Type);
  // Iterate image rows (row-major order)
  for (int r = 0; r < src1.h; ++r) {
    // Iterate images columns in steps of simd_elems
    for (int c = 0; c < src1.w; c += simd_elems) {
      // Compute absolute difference of next pixel block from source
      // images and store to destination image
      store(&dst[r][c], absDiff(load<SIMD_WIDTH>(&src1[r][c]),
                                load<SIMD_WIDTH>(&src2[r][c])));
    }
  }
}
} // namespace simd

#endif

/**
 * @brief Camera calibration model interface (loading+transforming)
 * @see OCamCalib-Toolbox by Davide Scaramuzza
 */
class OCamModel
{
  // Coefficients of the camera to world mapping polynomial
  std::vector<double> cam2world_coeff;
  // Coefficients of the world to camera mapping polynomial
  std::vector<double> world2cam_coeff;
  // Center coordinates
  double center_x, center_y;
  // OCamCalib (c,d,e) parameters (?)
  double c, d, e;
  // Image width and height
  double width, height;

public:
  /**
   * @brief Loads camera calibration from text file.
   * @see OCamCalib-Toolbox by Davide Scaramuzza
   * @param filename Path to calibration file (e.g. calib_results.txt)
   * @param verbose Enables verbose loading (prints calibration file comments)
   */
  explicit OCamModel(const char *filename, const bool verbose = false)
  {
    // Adhoc exception class
    class Exception : public std::exception
    {
      // Returns hardcoded message
      const char *what() const noexcept override
      {
        return "Error while reading the calibration file";
      }
    };

    // TODO: This "parsing" should really be refactored...

    // Open the calibration file for reading
    FILE *calib = fopen(filename, "r");

    if (!calib)
      // Throw the adhoc exception
      throw Exception();

    // Read comments and empty lines into this buffer
    char buffer[1024];

    // Drop first line (comment)
    if (fscanf(calib, "\n") != 0)
      // Throw the adhoc exception
      throw Exception();

    if (!fgets(buffer, sizeof(buffer), calib))
      // Throw the adhoc exception
      throw Exception();
    if (verbose) printf("%s", buffer);

    // Drop next line (empty)
    if (fscanf(calib, "\n") != 0)
      // Throw the adhoc exception
      throw Exception();

    // Read number of polynomial coefficients for the DIRECT mapping
    // function and resize the coefficients vector
    std::size_t n_coeff;

    if (fscanf(calib, "%lu ", &n_coeff) != 1)
      // Throw the adhoc exception
      throw Exception();

    cam2world_coeff.resize(n_coeff);

    for (std::size_t idx = 0; idx < n_coeff; ++idx)
      if (fscanf(calib, "%lf ", &cam2world_coeff.at(idx)) != 1)
        // Throw the adhoc exception
        throw Exception();

    // Drop next line (comment)
    if (fscanf(calib, "\n") != 0)
      // Throw the adhoc exception
      throw Exception();

    if (!fgets(buffer, sizeof(buffer), calib))
      // Throw the adhoc exception
      throw Exception();
    if (verbose) printf("%s", buffer);

    // Drop next line (empty)
    if (fscanf(calib, "\n") != 0)
      // Throw the adhoc exception
      throw Exception();

    // Read number of polynomial coefficients for the inverse mapping
    // function and resize the coefficients vector
    if (fscanf(calib, "%lu ", &n_coeff) != 1)
      // Throw the adhoc exception
      throw Exception();

    world2cam_coeff.resize(n_coeff);

    for (std::size_t idx = 0; idx < n_coeff; ++idx)
      if (fscanf(calib, "%lf ", &world2cam_coeff.at(idx)) != 1)
        // Throw the adhoc exception
        throw Exception();

    // Drop next line (comment)
    if (fscanf(calib, "\n") != 0)
      // Throw the adhoc exception
      throw Exception();

    if (!fgets(buffer, sizeof(buffer), calib))
      // Throw the adhoc exception
      throw Exception();
    if (verbose) printf("%s", buffer);

    // Drop next line (empty)
    if (fscanf(calib, "\n") != 0)
      // Throw the adhoc exception
      throw Exception();

    // Read image center coordinates
    if (fscanf(calib, "%lf %lf\n", &center_x, &center_y) != 2)
      // Throw the adhoc exception
      throw Exception();

    // Drop next line (comment)
    if (fscanf(calib, "\n") != 0)
      // Throw the adhoc exception
      throw Exception();

    if (!fgets(buffer, sizeof(buffer), calib))
      // Throw the adhoc exception
      throw Exception();
    if (verbose) printf("%s", buffer);

    // Drop next line (empty)
    if (fscanf(calib, "\n") != 0)
      // Throw the adhoc exception
      throw Exception();

    // Read affine parameters "c", "d", "e"
    if (fscanf(calib, "%lf %lf %lf\n", &c, &d, &e) != 3)
      // Throw the adhoc exception
      throw Exception();

    // Drop next line (comment)
    if (fscanf(calib, "\n") != 0)
      // Throw the adhoc exception
      throw Exception();

    if (!fgets(buffer, sizeof(buffer), calib))
      // Throw the adhoc exception
      throw Exception();
    if (verbose) printf("%s", buffer);

    // Drop next line (empty)
    if (fscanf(calib, "\n") != 0)
      // Throw the adhoc exception
      throw Exception();

    // Read image size: "height" and "width"
    if (fscanf(calib, "%lf %lf\n", &width, &height) != 2)
      // Throw the adhoc exception
      throw Exception();

    if (fclose(calib))
      // Throw the adhoc exception
      throw Exception();
  }

  /**
   * @brief Loads camera calibration from text file.
   * @see OCamCalib-Toolbox by Davide Scaramuzza
   * @param filename Path to calibration file (e.g. calib_results.txt)
   * @param verbose Enables verbose loading (prints calibration file comments)
   */
  explicit OCamModel(const std::string &filename, const bool verbose = false)
    : OCamModel(filename.c_str(), verbose)
  {}

  /**
   * @brief World to camera coordinate mapping (inverse mapping function)
   * @see OCamCalib-Toolbox by Davide Scaramuzza
   * @param W 3d world coordinate vector
   * @param C 2d image coordinate vector (output)
   */
  void world2cam(const double W[3], double C[2]) const
  {
    // Length of the world  coordinate vector
    const double norm = std::sqrt(W[0] * W[0] + W[1] * W[1]);
    // Non-zero length vector needs proper mapping
    if (norm != 0.0) { // hm...
      // Kind of polar coordinate angle of the world coordinates
      const double theta = std::atan(W[2] / norm);
      // Inverse of the norm (length) for normalizing (scaling)
      const double invnorm = 1.0 / norm;
      // Start evaluating the polynomial with the first coefficient
      double rho = world2cam_coeff.at(0);
      // Evaluate the polynomial (starting with the highest power)
      for (std::size_t i = world2cam_coeff.size() - 1; i > 0; --i)
        rho += std::pow(theta, i) * world2cam_coeff.at(i);
      // Coordinate mapping
      const double x = W[0] * invnorm * rho;
      const double y = W[1] * invnorm * rho;
      C[0]           = x * c + y * d + center_x;
      C[1]           = x * e + y + center_y;
    } else {
      // Zero length vectors are just projected to the center
      C[0] = center_x;
      C[1] = center_y;
    }
  }

  /**
   * @brief Camera to world coordinate mapping (forward mapping function)
   * @see OCamCalib-Toolbox by Davide Scaramuzza
   * @param C 2d image coordinate vector
   * @param W 3d world coordinate vector (output)
   */
  void cam2world(const double C[2], double W[3]) const
  {
    // 1/det(A), where A = [c,d;e,1] as in the Matlab file
    const double invdet = 1 / (c - d * e);
    // ?
    double xp = invdet * ((C[0] - center_x) - d * (C[1] - center_y));
    double yp = invdet * (-e * (C[0] - center_x) + c * (C[1] - center_y));
    // distance [pixels] of  the point from the image center
    const double r = std::sqrt(xp * xp + yp * yp);
    // Start evaluating the polynomial with the first coefficient
    double zp = cam2world_coeff.at(0);
    // Evaluate the polynomial (starting with the highest power)
    for (std::size_t i = cam2world_coeff.size(); i > 0; --i)
      zp += std::pow(r, i) * cam2world_coeff.at(i);
    // Normalize
    const double invnorm = 1 / std::sqrt(xp * xp + yp * yp + zp * zp);
    // Fill normalized world coordinates (W is out parameter)
    W[0] = invnorm * xp;
    W[1] = invnorm * yp;
    W[2] = invnorm * zp;
  }
};

// WarpingSIMD / SIMDImage namespace
namespace simd {
/**
 * @brief Transforms raw input SIMDImage (camera image) to panoramic image
 * @note This include relevant masking operations to remove invalid regions from
 * the transformed image (e.g. those outside of [depr,elev]).
 * @note Pixels transformed outside of the original source image are replaced
 * with a border value (default max of the image Type, coinciding with the
 * invalid pixel mask but afterwards removed to give way for the actual mask:
 * most of the SIMDImageFunctions do not allow stray invalid pixels in the
 * middle or at the bottom of the image).
 * @tparam Type SIMDImage pixel value type
 * @tparam SIMD_WIDTH Width of SIMD vectors
 * @tparam SIMD_ALIGN Memory alignment of SIMD vector
 * @tparam AddOn SIMDImage addon of source image (ignored, not Panorama)
 * @param src Input SIMDImage to unroll
 * @param dst Destination image to put the transformed into (will be resized)
 * @param width Target width of the panoramic image
 * @param start Start angle [rad] of the panoramic image (relative to view
 * direction)
 * @param depr Depression angle [rad] (amount below the horizon to be included)
 * @param elev Elevation angle [rad] (amount above the horizon to be included)
 * @param model Camera calibration model (see OCamModel)
 * @param T Homogenous coordinate transform applied to 3d world coordinates
 * @param interpolation Interpolation method to use for remapping non-integer
 * coordinates
 * @param border Border value to insert if a pixel is outside the image
 */
template <class Type, size_t SIMD_WIDTH, size_t SIMD_ALIGN, class AddOn>
void unroll(const SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, AddOn> &src,
            SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, Panorama> &dst,
            const int width, const double start, const double depr,
            const double elev, const OCamModel &model,
            const transform::Matrix &T        = transform::Id,
            const Interpolation interpolation = Interpolation::NEAREST,
            const Type border                 = SIMDTypeInfo<Type>::max())
{
  // Compute height of mapping
  int height =
    (int) std::lround((width * (fabs(elev) + fabs(depr))) / (2 * M_PI));
  // Panorama: Compute vertical resolution (angle per pixel)
  double vr = (fabs(elev) + fabs(depr)) / height;
  // Panorama: Compute horizon
  double h = elev / vr;
  // Prepare the panorama addon
  Panorama panorama(vr, h);
  // Insert addon into destination image
  dst.addOn = panorama;
  // Set up coordinate mappings of appropriate size
  Remap::Map mapx(width, height), mapy(width, height);
  // Set up mask image of appropriate size
  SIMDImage<Type, SIMD_WIDTH, SIMD_ALIGN, Panorama> mask(width, height,
                                                         panorama);
  // Set all pixels invalid
  mask.clear();
  // Iterate the target image size in row-major order filling mask and
  // maps
  for (int i = 0; i < height; ++i) {
    // 3d world coordinates in spherical coordinates: First angle
    //  NOTE: Placed in outer loop to not recompute for each pixel
    const double alpha = -std::fabs(elev) + (i + 0.5) * vr;
    const double ca = cos(alpha), sa = sin(alpha);
    // Inner loop over image columns
    for (int j = 0; j < width; ++j) {
      // 3d world coordinates in spherical coordinates: Second angle
      const double beta = (j + 0.5) * vr + start;
      const double cb = cos(beta), sb = sin(beta);
      // Transform spherical to cartesian coordinates (unit vector)
      const double tX = std::fabs(ca) * sb;
      const double tY = std::fabs(ca) * cb;
      const double tZ = sa;
      // Make the transform:: Matrix-Vector * operator available
      using transform::operator*;
      // Apply homogenous coordinate transform to world coordinates
      auto W = T * transform::Vector {{tY, tX, tZ, 1.0}};
      // 2d vector to put image coordinates into
      double C[2] = {0, 0};
      // Project world coordinates to camera (image coordinates) using
      // calibrated camera model
      model.world2cam((double *) &W, C);
      // Compute the polar angle of the transformed coordinates
      const double polar =
        std::atan2(W[2], std::sqrt(W[0] * W[0] + W[1] * W[1]));
      // If the polar angle is within [depr,elev], this is a valid
      // pixel mapping
      if (polar < depr && polar > -elev) {
        // Fill coordinate mappings with image coordinate
        mapx(i, j) = C[0];
        mapy(i, j) = C[1];
        // Mark pixel as valid
        mask[i][j] = SIMDTypeInfo<Type>::max();
      }
    }
  }
  // Apply the remapping transformation from source to destination image
  remap(src, dst, mapx, mapy, interpolation, border);
  // Max value of image value type might be interpreted as masked
  Type max = SIMDTypeInfo<Type>::max();
  // Remove potentially masked pixels (coincidentally having
  // the mask value or due to interpolation artifacts)
  substituteValue(dst, max, (Type) (max - 1), dst);
  // Blend in the mask image
  maskImage(dst, mask, dst);
}
} // namespace simd

#endif /*OCAM_MODEL_H*/

// ===========================================================================
//
// TimeMeasurement.H --
// functions for time measurement
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

// 02. Mar 23 (Jonas Keller): added doxygen documentation

// https://
// en.wikibooks.org/wiki/C%2B%2B_Programming/Code/Design_Patterns#Factory

#ifndef TIME_MEASUREMENT_H_
#define TIME_MEASUREMENT_H_

#include <ctime>
// 20. Apr 18 (rm): thanks to Benedikt Volkmer
#include <cassert>

// 20. Sep 22 (Jonas Keller): add clock_gettime replacement implementation for
// Windows
// TODO: doesn't differentiate between CLOCK_REALTIME, CLOCK_MONOTONIC and
// CLOCK_PROCESS_CPUTIME_ID from:
// https://github.com/Alexpux/mingw-w64/blob/master/mingw-w64-libraries/winpthreads/src/clock.c
#ifdef _WIN32
#include <errno.h>
#include <stdint.h>
// windows.h typedefs PATTERN, which causes a redifinition error in
// TiltSearchDemo.C
#define PATTERN something_not_named_PATTERN
#include <windows.h>
#undef PATTERN
// max and min are defined as macros in Windows.h, which causes problems
#undef max
#undef min

#define POW10_7 10000000
#define POW10_9 1000000000

using clockid_t = int;

#define CLOCK_REALTIME           0
#define CLOCK_MONOTONIC          1
#define CLOCK_PROCESS_CPUTIME_ID 2
#define CLOCK_THREAD_CPUTIME_ID  3

/* Number of 100ns-seconds between the beginning of the Windows epoch
 * (Jan. 1, 1601) and the Unix epoch (Jan. 1, 1970)
 */
#define DELTA_EPOCH_IN_100NS INT64_C(116444736000000000)

static int lc_set_errno(int result)
{
  if (result != 0) {
    errno = result;
    return -1;
  }
  return 0;
}

/**
 * Get the time of the specified clock clock_id and stores it in the struct
 * timespec pointed to by tp.
 * @param  clock_id The clock_id argument is the identifier of the particular
 *         clock on which to act. The following clocks are supported:
 * <pre>
 *     CLOCK_REALTIME  System-wide real-time clock. Setting this clock
 *                 requires appropriate privileges.
 *     CLOCK_MONOTONIC Clock that cannot be set and represents monotonic
 *                 time since some unspecified starting point.
 *     CLOCK_PROCESS_CPUTIME_ID High-resolution per-process timer from the CPU.
 *     CLOCK_THREAD_CPUTIME_ID  Thread-specific CPU-time clock.
 * </pre>
 * @param  tp The pointer to a timespec structure to receive the time.
 * @return If the function succeeds, the return value is 0
 *         If the function fails, the return value is -1,
 *         with errno set to indicate the error.
 */
int clock_gettime(clockid_t clock_id, struct timespec *tp)
{
  uint64_t t;
  LARGE_INTEGER pf, pc;
  union {
    uint64_t u64;
    FILETIME ft;
  } ct, et, kt, ut;

  switch (clock_id) {
  case CLOCK_REALTIME: {
    GetSystemTimeAsFileTime(&ct.ft);
    t           = ct.u64 - DELTA_EPOCH_IN_100NS;
    tp->tv_sec  = t / POW10_7;
    tp->tv_nsec = ((int) (t % POW10_7)) * 100;

    return 0;
  }

  case CLOCK_MONOTONIC: {
    if (QueryPerformanceFrequency(&pf) == 0) return lc_set_errno(EINVAL);

    if (QueryPerformanceCounter(&pc) == 0) return lc_set_errno(EINVAL);

    tp->tv_sec = pc.QuadPart / pf.QuadPart;
    tp->tv_nsec =
      (int) (((pc.QuadPart % pf.QuadPart) * POW10_9 + (pf.QuadPart >> 1)) /
             pf.QuadPart);
    if (tp->tv_nsec >= POW10_9) {
      tp->tv_sec++;
      tp->tv_nsec -= POW10_9;
    }

    return 0;
  }

  case CLOCK_PROCESS_CPUTIME_ID: {
    if (0 ==
        GetProcessTimes(GetCurrentProcess(), &ct.ft, &et.ft, &kt.ft, &ut.ft))
      return lc_set_errno(EINVAL);
    t           = kt.u64 + ut.u64;
    tp->tv_sec  = t / POW10_7;
    tp->tv_nsec = ((int) (t % POW10_7)) * 100;

    return 0;
  }

  case CLOCK_THREAD_CPUTIME_ID: {
    if (0 == GetThreadTimes(GetCurrentThread(), &ct.ft, &et.ft, &kt.ft, &ut.ft))
      return lc_set_errno(EINVAL);
    t           = kt.u64 + ut.u64;
    tp->tv_sec  = t / POW10_7;
    tp->tv_nsec = ((int) (t % POW10_7)) * 100;

    return 0;
  }

  default: break;
  }

  return lc_set_errno(EINVAL);
}
#endif

namespace simd {
/**
 * @addtogroup group_time_measurements
 * @{
 */

/* long long not supported everywhere
signed long long
getTimeUsec()
{
  signed long long sec, nsec;
  struct timespec ts;
  assert(!clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts));
  sec = ts.tv_sec;
  nsec = ts.tv_nsec;
  return 1000000LL * sec + nsec / 1000LL;
}
*/

/**
 * @brief Get the current value of this processes CPU time clock.
 *
 * @warning This clock has a resolution of 100ns on some systems
 * (e.g. Windows).
 *
 * @return current value of this processes CPU time clock
 */
struct timespec getTimeSpec()
{
  struct timespec ts;
  assert(!clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &ts));
  return ts;
}

/**
 * @brief Get the current value of the system-wide real-time clock.
 *
 * @return current value of the system-wide real-time clock
 */
struct timespec getTimeSpecMonotonic()
{
  struct timespec ts;
  assert(!clock_gettime(CLOCK_MONOTONIC, &ts));
  return ts;
}

// https://www.gnu.org/
//   software/libc/manual/html_node/Calculating-Elapsed-Time.html
// adapted, computes x - y for timespec instead of timeval

/**
 * @brief Subtracts two timespecs.
 *
 * @param[in] xx first timespec
 * @param[in] yy second timespec
 * @param[out] result result of the subtraction
 * @return 1 if the difference is negative, otherwise 0
 */
int timespec_subtract(const struct timespec &xx, const struct timespec &yy,
                      struct timespec &result)
{
  struct timespec x = xx, y = yy;
  /* Perform the carry for the later subtraction by updating y. */
  if (x.tv_nsec < y.tv_nsec) {
    int nsec = (y.tv_nsec - x.tv_nsec) / 1000000000L + 1;
    y.tv_nsec -= 1000000000L * nsec;
    y.tv_sec += nsec;
  }
  if (x.tv_nsec - y.tv_nsec > 1000000000L) {
    int nsec = (x.tv_nsec - y.tv_nsec) / 1000000000L;
    y.tv_nsec += 1000000000L * nsec;
    y.tv_sec -= nsec;
  }
  /* Compute the time remaining to wait. tv_nsec is certainly positive. */
  result.tv_sec  = x.tv_sec - y.tv_sec;
  result.tv_nsec = x.tv_nsec - y.tv_nsec;
  /* Return 1 if result is negative. */
  return x.tv_sec < y.tv_sec;
}

// convert to us (intended for results of timespec_subtract!)

/**
 * @brief Converts a timespec to microseconds. Intended for results of
 * timespec_subtract.
 *
 * @param[in] x timespec to convert
 *
 * @return timespec converted to microseconds
 */
double timespec_usec(const struct timespec &x)
{
  return 1E6 * x.tv_sec + x.tv_nsec / 1E3;
}

/**
 * @brief Computes the difference between two timespec's in microseconds.
 *
 * @param x first timespec
 * @param y second timespec
 * @return difference between the two timespec's in microseconds
 */
double timeSpecDiffUsec(const struct timespec &x, const struct timespec &y)
{
  struct timespec diff;
  timespec_subtract(x, y, diff);
  return timespec_usec(diff);
}

// 09. Oct 22 (Jonas Keller): added timeSpecDiffNsec

// warning: may overflow if the difference is more than 2 seconds on platforms
// where long is 32 bits

/**
 * @brief Computes the difference between two timespec's in nanoseconds.
 *
 * @warning May overflow on platforms where long is 32 bits if the difference
 * is more than 2 seconds.
 *
 * @param x first timespec
 * @param y second timespec
 * @return difference between the two timespec's in nanoseconds
 */
long int timeSpecDiffNsec(const struct timespec &x, const struct timespec &y)
{
  struct timespec diff;
  timespec_subtract(x, y, diff);
  return 1000000000L * diff.tv_sec + diff.tv_nsec;
}

/** @} */

} // namespace simd

#endif

// ===========================================================================
//
// WarpingBundle.H --
// bundle of entire warping/min-warping functionality
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

// https://
// en.wikibooks.org/wiki/C%2B%2B_Programming/Code/Design_Patterns#Factory

#ifndef WARPING_BUNDLE_H_
#define WARPING_BUNDLE_H_

// ===========================================================================
//
// WarpingCompound.H --
// MinWarping / Warping interface
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef WARPINGCOMPOUND_H_
#define WARPINGCOMPOUND_H_

// ===========================================================================
//
// WarpingSPSComputation.H --
// abstract classes for algorithms computing the scale-plane stack
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef WARPING_SPS_COMPUTATION_H_
#define WARPING_SPS_COMPUTATION_H_

#include <cstddef>
#include <limits>
#include <tsimd.H>
#include <vector>

namespace simd {

// ===========================================================================
// WarpingSPSComputation
// ===========================================================================

// this is the abstract interface for the computation of the
// scale-plane stack; core function is computeSPS,
//
// ImgType is the type used for the input images
// ProcType is the type used for image preprocessing
// MeasType is the type used for the components of the distance measure
// SPSType is the type use to store the scale-plane stack
//
// TODO: this is specific for normalized measures, and probably only works
// TODO: for normalized measures with sum-of-abs in the denominator

template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputation
{
public:
  // ======================== ctor, dtor =========================

  WarpingSPSComputation() {}
  virtual ~WarpingSPSComputation() {}

  // ======================== virtual methods ============================

  // computation of scale-plane stack
  // (not possible to restrict ImgType to this function since
  // templates may not be virtual)
  // 27. Feb 18 (rm): vert.res. and hor. taken from images
  virtual void computeSPS(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    const std::vector<double> &scaleFactors, int interpolation,
    const std::vector<double> &pixelScale, double postScale,
    WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps) = 0;

  // given an example image, compute maximum denominator of the
  // normalized measure; a maximum over multiple such images should be
  // computed and passed to idealPixelScale
  // (not possible to restrict ImgType to this function since
  // templates may not be virtual)
  // TODO: this mechanism may not be general enough, what about
  // TODO: sumabs * sumabs in the denominator: sumabs may overflow, and
  // TODO: the product may also overflow
  virtual std::vector<double> maxDenom(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img) = 0;

  virtual int numPreprocs() const = 0;

  // if computed with real numbers, maximal value of the normalized measure
  // (used for WarpingSPSComputation::idealPostScale())
  virtual double measureMax() const = 0;

  // whether computation considers invalid pixels (default: false)
  virtual bool considersInvalidPixels() const { return false; }

  // compute a diagram showing all intermediate input images for SPS
  // 27. Feb 18 (rm): vert.res. and hor. taken from images
  virtual void computeSPSInputDiagram(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    const std::vector<double> &scaleFactors, int interpolation,
    const std::vector<double> &pixelScale, double postScale,
    WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps,
    // outputs:
    MeasType &allMax, MeasType &allMin, MeasType &allRange,
    SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN> &spsInput) = 0;

  // ===================== non-virtual methods ===========================

  // given the maximum denominator of a normalized measure, compute
  // the ideal pixel scale (scaling of pixels in transformation to
  // MeasType representation) for each preprocessing,
  // for MeasType==SIMDFloat it may be useful to pass measTypeMax instead
  // of the default argument
  std::vector<double> idealPixelScale(
    const std::vector<double> &maxDenom,
    double measTypeMax = double(SIMDTypeInfo<MeasType>::max())) const
  {
    std::vector<double> pixelScale(maxDenom.size());
    for (size_t i = 0; i < maxDenom.size(); i++)
      pixelScale[i] = measTypeMax / maxDenom[i];
    // maximum denominator of measure multiplied be
    // pixelScale, should not exceed max of MeasType
    return pixelScale;
  }

  // given the maximal value an element in the SPS is allowed to have
  // in the search phase (where there is a summation over all rows),
  // compute the ideal post scale (scaling of distance measure in
  // transformation to integer representation)
  // uses virtual measureMax()
  // for SPSType==SIMDFloat it may be useful to pass spsTypeMax instead
  // of the default argument
  double idealPostScale(
    double maxElemSearchPhase,
    double spsTypeMax = double(SIMDTypeInfo<SPSType>::max())) const
  {
    // two conditions: normalized measure is in [0,this->measureMax()],
    // therefore this->measureMax() * postScale should not exceed
    // (1) spsTypeMax, the maximum of the storage type of the SPS,
    // (2) maximum element value in summation in search phase
    //     (loose coupling to search phase, we don't know MatchType here)
    return std::min(spsTypeMax, maxElemSearchPhase) / this->measureMax();
  }
};

// ===========================================================================
// WarpingSPSComputationSingle
// ===========================================================================

// abstract interface defining preprocessing, column measure
// (applied to individual images), joint measure (applied to a pair
// of image), normalization method, for the case of a single
// preprocessed image (typically vertically edge-filtered)

template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationSingle
  : public WarpingSPSComputation<ImgType, ProcType, MeasType, SPSType,
                                 SIMD_WIDTH, SIMD_ALIGN>
{
protected:
  // computeSPS should store input images
  bool storeSPSInput;
  // input images in sps computation
  std::vector<SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama>> ssInputs,
    cvInputs;

  // ===================== non-virtual methods ===========================

  // compute SPS and intermediate input images
  // 27. Feb 18 (rm): vert.res. and horizon taken from images
  void computeSPSInput(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    const std::vector<double> &scaleFactors, int interpolation,
    const std::vector<double> &pixelScale, double postScale,
    WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps)
  {
    storeSPSInput = true;
    ssInputs.resize(scaleFactors.size());
    cvInputs.resize(scaleFactors.size());
    this->computeSPS(ss, cv, scaleFactors, interpolation, pixelScale, postScale,
                     sps);
    storeSPSInput = false;
  }

public:
  // ======================== ctor, dtor =========================

  WarpingSPSComputationSingle()
    : WarpingSPSComputation<ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH,
                            SIMD_ALIGN>(),
      storeSPSInput(false)
  {}

  virtual ~WarpingSPSComputationSingle() {}

  // ======================== virtual methods ============================

  virtual void convertImage(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &in,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &out) = 0;

  // magnify and scale image
  // 27. Feb 18 (rm): verticalResolution and horizon taken from img
  virtual void magnifyImage(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    int interpolation, double magnifyScale, double multiplyScale,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outImg) = 0;

  // copy and scale image
  virtual void copyImage(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    double multiplyScale,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outImg) = 0;

  // re-arrange image (makeView instead of pure virtual)
  virtual void reArrange(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &imgR,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // TODO: this is fast but may be dangerous, true copy may be advisable
    imgR.view(img);
    // imgR = img;
  }

  // un-re-arrange image (copy instead of pure virtual)
  // typically used for visualization, may be slow
  virtual void unReArrange(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &imgR,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // this doesn't work, true copy is needed
    // img.view(imgR);
    img = imgR;
  }

  // preprocessing applied to the input images
  virtual void preprocessing(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &output,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par) = 0;

  // measure computed over all columns of one input image
  virtual void columnMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &output,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par) = 0;

  // measure computed over pairs of columns in two input images
  // also takes raw (intermediate) column measures as input
  // and produces final column measures as output
  // (it also takes raw columns measures colMeasRaw1/2 as input
  // and computes column measures colMeas1/2 and a combined measure
  // colMeas12 (e.g a sum))
  virtual void jointMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas12,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par) = 0;

  // normalization of jointMeasure and ssMeasure/cvMeasure
  virtual void normalization(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &ssMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &cvMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &combMeasure,
    double postScale, SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par) = 0;

  // check whether input images with given width could be processed
  // this definition should be useful for many cases:
  virtual bool validForWidth(int width) const
  {
    return
      // ProcType->MeasType: uses magnifyImage, copyImage:
      ((width % numSIMDVecsElements<MeasType, ProcType, SIMD_WIDTH>() == 0) &&
       // MeasType->SPSType: uses computeScalePlaneNormalizedAdd:
       (width % numSIMDVecsElements<SPSType, MeasType, SIMD_WIDTH>() == 0));
  }

  // compute a diagram showing all intermediate input images for SPS
  // 27. Feb 18 (rm): vert.res. and hor. taken from images
  // TODO: option to leave out an "invalid" value
  // TODO: needs "max/minExceptInvalid()" etc.
  void computeSPSInputDiagram(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    const std::vector<double> &scaleFactors, int interpolation,
    const std::vector<double> &pixelScale, double postScale,
    WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps,
    // outputs:
    MeasType &allMax, MeasType &allMin, MeasType &allRange,
    SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN> &spsInput)
  {
    computeSPSInput(ss, cv, scaleFactors, interpolation, pixelScale, postScale,
                    sps);
    unsigned nPlanes = scaleFactors.size();
    MeasType invalid = SIMDTypeInfo<MeasType>::max();
    // first: determine max and min over all images
    allMax = SIMDTypeInfo<MeasType>::min();
    allMin = SIMDTypeInfo<MeasType>::max();
    for (unsigned planeIdx = 0; planeIdx < nPlanes; planeIdx++) {
      MeasType _min, _max;
      _max   = this->considersInvalidPixels() ?
                 maxExcept(ssInputs[planeIdx], invalid) :
                 max(ssInputs[planeIdx]);
      _min   = min(ssInputs[planeIdx]);
      allMax = std::max(allMax, _max);
      allMin = std::min(allMin, _min);
      _max   = this->considersInvalidPixels() ?
                 maxExcept(cvInputs[planeIdx], invalid) :
                 max(cvInputs[planeIdx]);
      _min   = min(cvInputs[planeIdx]);
      allMax = std::max(allMax, _max);
      allMin = std::max(allMin, _min);
    }
    allRange = std::max(allMax, MeasType(-allMin));
    // write into same image
    SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN> tmp;
    int w = ssInputs[0].w, h = ssInputs[0].h;
    const int margin = SIMDVec<SIMDByte, SIMD_WIDTH>::elements;
    spsInput.resize(2 * (w + margin) + margin, nPlanes * (h + margin) + margin);
    spsInput.fill(255);
    double shift = 128.0, scale = 255.0 / allRange;
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> tmpSS, tmpCV;
    for (unsigned planeIdx = 0; planeIdx < nPlanes; planeIdx++) {
      if (this->considersInvalidPixels()) {
        replace(ssInputs[planeIdx], invalid, allRange, tmpSS);
        replace(cvInputs[planeIdx], invalid, allRange, tmpCV);
      } else {
        tmpSS.view(ssInputs[planeIdx]);
        tmpCV.view(cvInputs[planeIdx]);
      }
      copyScaleAndShift(tmpSS, scale, shift, tmp);
      insert(tmp, margin, margin + planeIdx * (h + margin), spsInput);
      copyScaleAndShift(tmpCV, scale, shift, tmp);
      insert(tmp, w + 2 * margin, margin + planeIdx * (h + margin), spsInput);
    }
  }

  int numPreprocs() const { return 1; }
};

// ===========================================================================
// WarpingSPSComputationStack
// ===========================================================================

// abstract interface defining preprocessing, column measure
// (applied to individual image stacks), joint measure (applied to a pair
// of image stacks), normalization method, for the case of a stack of
// preprocessed image (typically vertically edge-filtered)

template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, int NPREPROCS, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationStack
  : public WarpingSPSComputation<ImgType, ProcType, MeasType, SPSType,
                                 SIMD_WIDTH, SIMD_ALIGN>
{
protected:
  // computeSPS should store input images
  bool storeSPSInput;
  // input images in sps computation
  std::vector<SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama>> ssInputs,
    cvInputs;

  // ===================== non-virtual methods ===========================

  // compute SPS and intermediate input images
  // 27. Feb 18 (rm): vert.res. and horizon taken from images
  void computeSPSInput(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    const std::vector<double> &scaleFactors, int interpolation,
    const std::vector<double> &pixelScale, double postScale,
    WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps)
  {
    storeSPSInput = true;
    ssInputs.resize(scaleFactors.size());
    cvInputs.resize(scaleFactors.size());
    this->computeSPS(ss, cv, scaleFactors, interpolation, pixelScale, postScale,
                     sps);
    storeSPSInput = false;
  }

public:
  // ======================== ctor, dtor =========================

  WarpingSPSComputationStack()
    : WarpingSPSComputation<ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH,
                            SIMD_ALIGN>(),
      storeSPSInput(false)
  {}

  virtual ~WarpingSPSComputationStack() {}

  // ======================== virtual methods ============================

  virtual void convertImage(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &in,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &out) = 0;

  // copy and scale image
  virtual void copyImage(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    double multiplyScale,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outImg) = 0;

  // copy and scale stack while each plane has its own multiplyScale
  // multiplyScale[NPREPROCS] is assumed
  virtual void copyStack(
    const SIMDStack<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &stk,
    const std::vector<double> &multiplyScale,
    SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outStk) = 0;

  // re-arrange image (makeView instead of pure virtual)
  virtual void reArrange(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &imgR,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // TODO: this is fast but may be dangerous, true copy may be advisable
    imgR.view(img);
    // imgR = img;
  }

  // un-re-arrange image (copy instead of pure virtual)
  // typically used for visualization, may be slow
  virtual void unReArrange(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &imgR,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // this doesn't work, true copy is needed
    // img.view(imgR);
    img = imgR;
  }

  // re-arrange image (makeView instead of pure virtual)
  virtual void reArrange(
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &stk,
    SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &stkR,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // TODO: this is fast but may be dangerous, true copy may be advisable
    // TODO: bv: enable following when SIMDStack has view function
    // stkR.view(stk);
    stkR = stk;
  }

  // un-re-arrange image (copy instead of pure virtual)
  // typically used for visualization, may be slow
  virtual void unReArrange(
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &stkR,
    SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &stk,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // this doesn't work, true copy is needed
    // stk.view(stkR);
    stk = stkR;
  }

  // preprocessing applied to the input images
  virtual void preprocessing(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDStack<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &output,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par) = 0;

  // measure computed over all columns of one input image
  virtual void columnMeasure(
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &output,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par) = 0;

  // measure computed over pairs of columns in two input images
  // also takes raw (intermediate) column measures as input
  // and produces final column measures as output
  // (it also takes raw columns measures colMeasRaw1/2 as input
  // and computes column measures colMeas1/2 and a combined measure
  // colMeas12 (e.g a sum))
  virtual void jointMeasure(
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par) = 0;

  // normalization of jointMeasure and ssMeasure/cvMeasure
  virtual void normalization(
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeasure,
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &ssMeasure,
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &cvMeasure,
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &combMeasure,
    double postScale, SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par) = 0;

  // check whether input images with given width could be processed
  // this definition should be useful for many cases:
  virtual bool validForWidth(int width) const
  {
    return
      // ProcType->MeasType: uses magnifyImage, copyImage:
      ((width % numSIMDVecsElements<MeasType, ProcType, SIMD_WIDTH>() == 0) &&
       // MeasType->SPSType: uses computeScalePlaneNormalizedAdd:
       (width % numSIMDVecsElements<SPSType, MeasType, SIMD_WIDTH>() == 0));
  }

  // compute a diagram showing all intermediate input images for SPS
  // 27. Feb 18 (rm): vert.res. and hor. taken from images
  void computeSPSInputDiagram(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    const std::vector<double> &scaleFactors, int interpolation,
    const std::vector<double> &pixelScale, double postScale,
    WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps,
    // outputs:
    MeasType &allMax, MeasType &allMin, MeasType &allRange,
    SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN> &spsInput)
  {
    // TODO: this always shows only the following preprocessing image
    computeSPSInput(ss, cv, scaleFactors, interpolation, pixelScale, postScale,
                    sps);
    unsigned nPlanes = scaleFactors.size();
    // first: determine max and min over all images
    allMax = SIMDTypeInfo<MeasType>::min();
    allMin = SIMDTypeInfo<MeasType>::max();
    for (unsigned planeIdx = 0; planeIdx < nPlanes; planeIdx++) {
      for (int d = 0; d < this->numPreprocs(); d++) {
        MeasType _min, _max;
        _max   = max(ssInputs[planeIdx][d]);
        _min   = min(ssInputs[planeIdx][d]);
        allMax = std::max(allMax, _max);
        allMin = std::min(allMin, _min);
        _max   = max(cvInputs[planeIdx][d]);
        _min   = min(cvInputs[planeIdx][d]);
        allMax = std::max(allMax, _max);
        allMin = std::max(allMin, _min);
      }
    }
    allRange = std::max(allMax, MeasType(-allMin));
    // write into same image
    SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN> tmp;
    // asserting all preprocs have same width and height
    int w = ssInputs[0][0].w, h = ssInputs[0][0].h;
    const int margin = SIMDVec<SIMDByte, SIMD_WIDTH>::elements;
    spsInput.resize(this->numPreprocs() * 2 * (w + margin) + margin,
                    nPlanes * (h + margin) + margin);
    spsInput.fill(255);
    double shift = 128.0, scale = 255.0 / allRange;
    int verticalOffset = 0;
    for (int d = 0; d < this->numPreprocs(); d++) {
      for (unsigned planeIdx = 0; planeIdx < nPlanes; planeIdx++) {
        copyScaleAndShift(ssInputs[planeIdx][d], scale, shift, tmp);
        insert(tmp, verticalOffset + margin, margin + planeIdx * (h + margin),
               spsInput);
        copyScaleAndShift(cvInputs[planeIdx][d], scale, shift, tmp);
        insert(tmp, verticalOffset + w + 2 * margin,
               margin + planeIdx * (h + margin), spsInput);
      }
      verticalOffset += 2 * w + 2 * margin;
    }
  }

  int numPreprocs() const { return NPREPROCS; }
};

} // namespace simd

#endif

// ===========================================================================
//
// WarpingSearch.H --
// class for full and partial Warping search algorithms
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef WARPING_SEARCH_H_
#define WARPING_SEARCH_H_

// ===========================================================================
//
// WarpingTemplate.H --
// template for 2D Warping
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef WARPING_TEMPLATE_H_
#define WARPING_TEMPLATE_H_

#include <cmath>
#include <limits>
#include <stdint.h>
#include <stdio.h>
#include <tsimd.H>
#include <vector>

namespace simd {

// =========================================================================
// data types for warping template
// =========================================================================

typedef uint32_t TemplateSPOffset;
typedef int32_t TemplateJY;

typedef SIMD_ATTR_PACKED_STRUCT
{
  TemplateSPOffset sp;
  TemplateJY jy;
}
WarpingTemplateEntry;

// =========================================================================
// Warping template
// =========================================================================

class WarpingTemplate
{
public:
  // width and sps width
  const int w, wSPS;
  // minimal rho, maximal rho
  const double rhoMin, rhoMax;
  // number of rho values between and including rhoMin and rhoMax
  const int nRho;
  // angular with
  const double dTheta;

  // vector storing all thresholds
  std::vector<double> thresholds;

  // rho values
  std::vector<double> rhoTable;
  // template is a vector of vectors (may not be the fastest solution)
  std::vector<std::vector<WarpingTemplateEntry>> tmplt;

  WarpingTemplate(int width, int spsWidth,
                  const std::vector<double> &scaleFactors, double rhoMin,
                  double rhoMax, int nRho)
    : w(width), wSPS(spsWidth), rhoMin(rhoMin), rhoMax(rhoMax), nRho(nRho),
      dTheta((2.0 * M_PI) / w)
  {
    // 10. Nov 11 (rm): we use TemplateSPOffset as offset (sp)
    // in the scale plane stack, this limits the size of the sps (we
    // compute it this way in order not to exceed any limits in this
    // computation, more instructive form of condition is:
    // w*w*nScalePlanes > SCALEPLANEOFFSETTYPE_MAX)
    if (std::numeric_limits<TemplateSPOffset>::max() / scaleFactors.size() <
        (unsigned int) (w * w))
      throw SIMDException("WarpingTemplate::WarpingTemplate",
                          "size of scale-plane stack exceeds offset limit");
    initializeThresholds(scaleFactors);
    createRhoTable();
    createTemplate();
  }

  virtual ~WarpingTemplate() {}

  static double warpFunc(double x, double rho)
  {
    // this special case is actually undefined (could be 0 or PI),
    // we take the intermediate value in order to avoid empty
    // entries in the template (and it is a continuation of the
    // function for rho = 1)
    if ((rho == 1.0) && (x == 0.0)) return M_PI / 2.0;
    // general case: equation (1) in Möller et al. "Three 2D-Warping
    // Schemes for Visual Robot Navigation"
    return atan2(rho * sin(x), 1.0 - rho * cos(x));
  }

  static double sigmaFunc(double x, double rho)
  {
    // equation (4) in Möller et al. "Three 2D-Warping
    // Schemes for Visual Robot Navigation"
    return std::sqrt(1.0 + rho * rho - 2.0 * rho * cos(x));
  }

  // save in human-readable form
  void save(FILE *f) const
  {
    for (int jx = 0; jx < w; jx++) {
      for (int iRho = 0; iRho < nRho; iRho++) {
        fprintf(f, "%4d %2d\t", int(tmplt[iRho][jx].jy),
                int(tmplt[iRho][jx].sp / (wSPS * w)));
      }
      fprintf(f, "\n");
    }
  }

protected:
  // thresholds are chosen in the center between neighboring scale factors
  void initializeThresholds(const std::vector<double> &scaleFactors)
  {
    int nScalePlanes = scaleFactors.size();
    thresholds.resize(nScalePlanes);
    // initialize thresholds: center between scaleFactors
    for (int i = 0; i < nScalePlanes - 1; i++)
      thresholds[i] = 0.5 * (scaleFactors[i] + scaleFactors[i + 1]);
    // upper threshold is fixed
    thresholds[nScalePlanes - 1] = std::numeric_limits<double>::max();
  }

  void createRhoTable()
  {
    if (nRho < 1)
      throw SIMDException("WarpingTemplate::createRhoTable",
                          "nRho >= 1 required");
    rhoTable.resize(nRho);
    if (nRho == 1)
      rhoTable[0] = rhoMin; // we take rhoMin
    else {
      double dRho = (rhoMax - rhoMin) / (nRho - 1), rho = rhoMin;
      for (int i = 0; i < nRho; i++, rho += dRho) rhoTable[i] = rho;
    }
  }

  void createTemplate()
  {
    tmplt.resize(nRho);
    for (int iRho = 0; iRho < nRho; iRho++) {
      tmplt[iRho].resize(w);
      double rho = rhoTable[iRho];
      for (int jx = 0; jx < w; jx++) {
        double x           = jx * dTheta;
        double y           = warpFunc(x, rho);
        int jy             = (w + TemplateJY(::round(y / dTheta))) % w;
        tmplt[iRho][jx].jy = jy;
        double sigma       = sigmaFunc(x, rho);
        if (sigma <= thresholds[thresholds.size() - 1]) {
          bool found = false;
          unsigned t;
          for (t = 0; t < thresholds.size(); t++)
            if (sigma <= thresholds[t]) {
              found = true;
              break;
            }
          if (!found)
            // shouldn't happen (see initializeThresholds())
            throw SIMDException("WarpingTemplate::createTemplate",
                                "scale plane not found");
          tmplt[iRho][jx].sp = (TemplateSPOffset) (t * w * wSPS);
        } else
          // shouldn't happen (see initializeThresholds())
          throw SIMDException("WarpingTemplate::createTemplate",
                              "sigma >= maxThreshold");
      }
    }
  }
};

} // namespace simd

#endif

#include <cstddef>

namespace simd {

// ===========================================================================
// Warping full search algorithms
// ===========================================================================

template <typename SPSType, typename MatchType, size_t SIMD_WIDTH,
          size_t SIMD_ALIGN>
class WarpingFull
{
public:
  virtual ~WarpingFull() {}
  virtual void search(
    const WarpingTemplate &warpingTemplate,
    const WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps,
    MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> &match) = 0;
};

// ===========================================================================
// Warping partial search algorithms
// ===========================================================================

template <typename SPSType, typename MatchType, size_t SIMD_WIDTH,
          size_t SIMD_ALIGN>
class WarpingPartial
{
public:
  virtual ~WarpingPartial() {}
  virtual void search(
    const WarpingTemplate &warpingTemplate,
    const WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps,
    const MinWarpingSearchRange<SPSType, SIMD_WIDTH, SIMD_ALIGN> &range,
    MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> &match,
    int jAlphaOff = 0, int jPsiOff = 0) = 0;
};

} // namespace simd

#endif

#include <cmath>
#include <cstddef>
#include <vector>

namespace simd {

// TODO: - consistency check of parameters between SPS/match/template?

class WarpingSearcherSelector
{
public:
  enum SearcherType {
    minWarpingSearcher,
    warpingSearcher,
    minWarpingSearcher1SP,
    warpingSearcher1SP
  };
};

// =========================================================================
// WarpingCompound
// =========================================================================

// template class WarpingCompound provides minWarping and warping
// variables of type ComplexSearch which are initialized with shared
// scale-plane stack, shared match arrays, and shared parameters

template <typename SPSType, typename MatchType, typename CompassType,
          size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingCompound
  : public WarpingSearcherSelector
  , public ComplexSearchSelector
{
public:
  WarpingParameter<SPSType, SIMD_WIDTH> param;
  SymmetricScaleFactors symmScaleFac;
  SingleScaleFactor singleScaleFac;
  WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> *spsArray[NUM_SPS];
  WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> *spsArray1SP[NUM_SPS];
  MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> *matchArray[NUM_MATCH];
  ComplexSearch<SPSType, MatchType, CompassType, SIMD_WIDTH, SIMD_ALIGN,
                MinWarpingTemplate>
    minWarping;
  ComplexSearch<SPSType, MatchType, CompassType, SIMD_WIDTH, SIMD_ALIGN,
                WarpingTemplate>
    warping;
  ComplexSearch<SPSType, MatchType, CompassType, SIMD_WIDTH, SIMD_ALIGN,
                MinWarpingTemplate>
    minWarping1SP;
  ComplexSearch<SPSType, MatchType, CompassType, SIMD_WIDTH, SIMD_ALIGN,
                WarpingTemplate>
    warping1SP;

  // TODO: Not copiable due to resource management unclear
  WarpingCompound(const WarpingCompound &) = delete;

  WarpingCompound(int width, int nAlpha, int nPsi, int nScalePlanes,
                  double maxScaleFactor, double maxThresholdMinWarping,
                  double rhoMinMinWarping, double rhoMaxMinWarping,
                  double rhoMinWarping, double rhoMaxWarping, int nRhoWarping)
    : param(width, nAlpha, nPsi), symmScaleFac(nScalePlanes, maxScaleFactor),
      singleScaleFac(),
      // search templates of all ComplexSearch members are deleted
      // in ~ComplexSearch
      minWarping(param, spsArray,
                 new MinWarpingTemplate(
                   width, param.wSPS, symmScaleFac.scaleFactors,
                   maxThresholdMinWarping, rhoMinMinWarping, rhoMaxMinWarping),
                 matchArray),
      warping(param, spsArray,
              new WarpingTemplate(width, param.wSPS, symmScaleFac.scaleFactors,
                                  rhoMinWarping, rhoMaxWarping, nRhoWarping),
              matchArray),
      minWarping1SP(param, spsArray1SP,
                    new MinWarpingTemplate(width, param.wSPS,
                                           singleScaleFac.scaleFactors,
                                           maxThresholdMinWarping,
                                           rhoMinMinWarping, rhoMaxMinWarping),
                    matchArray),
      warping1SP(param, spsArray1SP,
                 new WarpingTemplate(width, param.wSPS,
                                     singleScaleFac.scaleFactors, rhoMinWarping,
                                     rhoMaxWarping, nRhoWarping),
                 matchArray)
  {
    // TODO: are there any size/parameter checks needed in WarpingCompound?
    // TODO: - multi-in/multi-out cases in processing considered?
    // TODO: - checks from functions in SIMDImageFunctions.H now in
    // TODO:   WarpingSPSComputation::validForWidth
    // TODO: - which objects have to be created to do a full check?

    // create multipe scale-plane stacks and multiple match objects
    for (int i = 0; i < NUM_SPS; i++) {
      // printf("creating spsArray[%d]\n", i);
      spsArray[i] = new WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN>(
        param, symmScaleFac.scaleFactors.size());
      // printf("creating spsArrayMin[%d]\n", i);
      spsArray1SP[i] = new WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN>(
        param, singleScaleFac.scaleFactors.size());
    }
    for (int i = 0; i < NUM_MATCH; i++) {
      // printf("creating matchArray[%d]\n", i);
      matchArray[i] =
        new MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN>(nAlpha, nPsi);
      matchArray[i]->clear();
    }
  }

  virtual ~WarpingCompound()
  {
    for (int i = 0; i < NUM_SPS; i++) delete spsArray[i];
    for (int i = 0; i < NUM_SPS; i++) delete spsArray1SP[i];
    for (int i = 0; i < NUM_MATCH; i++) delete matchArray[i];
  }

  // =========================================================================
  // access to spsArray of different searchers
  // =========================================================================

  WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> **getSPSArray(int searcher)
  {
    switch (searcher) {
    case minWarpingSearcher: return minWarping.spsArray;
    case warpingSearcher: return warping.spsArray;
    case minWarpingSearcher1SP: return minWarping1SP.spsArray;
    case warpingSearcher1SP: return warping1SP.spsArray;
    default:
      throw SIMDException("WarpingCompound::getSPSArray",
                          "invalid warping searcher");
    }
  }

  // =========================================================================
  // SPS computation
  // =========================================================================

  // compute spsArray[SPS_ORIG]
  // (ImgType is last template argument since it can be deduced from ss/cv)
  // 27. Feb 18 (rm): vert.res. and hor. taken from images
  template <typename ProcType, typename MeasType, typename ImgType>
  void computeSPS(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    int interpolation, const std::vector<double> &pixelScale, double postScale,
    WarpingSPSComputation<ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH,
                          SIMD_ALIGN> &spsComp)
  {
    // printf("computeSPS(i=%d,pi=%g,po=%g\n",
    //        interpolation, pixelScale, postScale);
    spsComp.computeSPS(ss, cv, symmScaleFac.scaleFactors, interpolation,
                       pixelScale, postScale, *(spsArray[SPS_ORIG]));
  }

  // compute spsArray1SP[SPS_ORIG]
  // (ImgType is last template argument since it can be deduced from ss/cv)
  // 27. Feb 18 (rm): vert.res. and hor. taken from images
  template <typename ProcType, typename MeasType, typename ImgType>
  void computeSPS1SP(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    int interpolation, const std::vector<double> &pixelScale, double postScale,
    WarpingSPSComputation<ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH,
                          SIMD_ALIGN> &spsComp)
  {
    // printf("computeSPS1SP(i=%d,pi=%g,po=%g\n",
    //        interpolation, pixelScale, postScale);
    spsComp.computeSPS(ss, cv, symmScaleFac.scaleFactors, interpolation,
                       pixelScale, postScale, *(spsArray[SPS_ORIG]));
    spsArray[SPS_ORIG]->planeMinimum(*(spsArray1SP[SPS_ORIG]));
  }
};

} // namespace simd

#endif

// ===========================================================================
//
// WarpingFactories.H --
// factory classes for different warping sub-classes
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

// https://
// en.wikibooks.org/wiki/C%2B%2B_Programming/Code/Design_Patterns#Factory

#ifndef WARPING_FACTORIES_H_
#define WARPING_FACTORIES_H_

// 18. Apr 18 (rm): removed, not clear why this was needed
// #include "WarpingCompound.H"
// 18. Apr 18 (rm): added, thanks to Benedikt Volkmer

// ===========================================================================
//
// WarpingSPSComputationCollection.H --
// collection of different classes derived from WarpingSPSComputation
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef WARPING_SPS_COMPUTATION_COLLECTION_H_
#define WARPING_SPS_COMPUTATION_COLLECTION_H_

// 18. Apr 18 (rm): added, thanks to Benedikt Volkmer

#include <cstddef>

namespace simd {

// TODO: there is some over-/underflow in the normalized measure if
// TODO: pixelScale is too large, even though everything is in
// TODO: saturated arithmetics, check whether this over-/underflow can be
// TODO: avoided
// TODO: analyze effect of pixelScale/postScale on performance
// TODO: idea: nonlinear pixel functions?

// class hierarchy:
//
// WarpingSPSComputation
// -> WarpingSPSComputationSingle
//   -> WarpingSPSComputation1 (defines computeSPS)
//    -> WarpingSPSComputation2 (def's convertImage, magnifyImage, copyImage)
//      -> WarpingSPSComputationEdgeAbs (for edge-filtered input + abs. sum)
//        -> WarpingSPSComputationEdgeAbs1 (element-wise rewrite)
//          -> WarpingSPSComputationEdgeNSAD1 (for NSAD joint measure)
//          -> WarpingSPSComputationASC1 (for ASC joint measure)
//          -> more...
//        -> WarpingSPSComputationEdgeAbs2 (with reArrange)
//          -> WarpingSPSComputationEdgeNSAD2 (with reArrange)
//          -> WarpingSPSComputationASC2 (with reArrange)
//          -> more...
//
// contributed by Annika Hoffmann: (for images with undefined regions)
//                                 (only for unswizzled SPS)
//
// WarpingSPSComputation
// -> WarpingSPSComputationSingle
//    -> WarpingSPSComputation1
//       -> WarpingSPSComputationTilt (convert~,magnify~,copyImage)
//          -> WarpingSPSComputationAbsTilt (preprocess.,col.Meas.,maxDen.)
//             -> WarpingSPSComputationNSADTilt (jointMeas., norm., meas.Max.)
//
// contributed by Christoph Berganski: (images with undefined regions,
//                                     with edge filter)
//
// WarpingSPSComputation
// -> WarpingSPSComputationSingle
//    -> WarpingSPSComputation1
//       -> WarpingSPSComputationTilt (convert~,magnify~,copyImage)
//          -> WarpingSPSComputationEdgeAbsTilt (C.B.)
//             -> WarpingSPSComputationEdgeNSADTilt (C.B.)
//
// contributed by Benedikt Volkmer: (edge and corner detectors,
//                                   some with logistic regression)
//
// WarpingSPSComputation
// -> WarpingSPSComputationSingle
//    -> WarpingSPSComputation1Alt (computeSPS)
//       -> WarpingSPSComputation2Alt (convert~,magnify~,copyImage)
//          -> WarpingSPSComputationCornerAbs (preProc.,col.Meas.,maxDen.)
//             -> WarpingSPSComputationCornerAbs2 (reArrange,norm.)
//                -> WarpingSPSComputationCornerNSAD2 (jointM.,meas.Max.)
//          -> WarpingSPSCompuationEdgeAbsAlt (preProc.,col.Meas.,maxDen.)
//             -> WarpingSPSComputationEdgeAbs2Alt (reArrange,norm.)
//                -> WarpingSPSCompuationEdgeNSAD2Alt (jointMeas.,meas.Max.)
// -> WarpingSPSComputationStack
//    -> WarpingSPSComputationSNSAD
//      -> WarpingSPSComputationSNSADHarris

// ===========================================================================
// WarpingSPSComputation1
// ===========================================================================

// only defines method computeSPS
template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputation1
  : public WarpingSPSComputationSingle<ImgType, ProcType, MeasType, SPSType,
                                       SIMD_WIDTH, SIMD_ALIGN>
{
  // 2. Mar 18 (rm): made images used in computeSPS() members of
  // WarpingSPSComputation1 (should accelerate allocation and avoids
  // deallocation), was slower, undone

public:
  // 27. Feb 18 (rm): vert.res. and hor. now info. in images
  virtual void computeSPS(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    const std::vector<double> &scaleFactors, int interpolation,
    const std::vector<double> &pixelScale, double postScale,
    WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps)
  {
    if (pixelScale.size() != 1)
      throw SIMDException("WarpingSPSComputation1::computeSPS",
                          "invalid size of pixelScale");
    const int w = sps.param.w, h = ss.h;
    if ((h != cv.h) || (ss.w != cv.w) || (w != ss.w)) {
      char errStr[256];
      sprintf(errStr,
              "mismatch in ss, cv, sps dimensions: "
              "ss %d x %d, cv %d x %d, sps.param.w = %d",
              ss.w, ss.h, cv.w, cv.h, w);
      throw SIMDException("WarpingSPSComputation1::computeSPS", errStr);
    }
    if (ss.addOn != cv.addOn) {
      char errStr[256];
      sprintf(errStr,
              "panorama parameters of ss (%g, %g) and cv (%g, %g) differ",
              ss.addOn.verticalResolution, ss.addOn.horizon,
              cv.addOn.verticalResolution, cv.addOn.horizon);
      throw SIMDException("WarpingSPSComputation1::computeSPS", errStr);
    }
    // check validity for given image width
    if (!this->validForWidth(w))
      throw SIMDException("WarpingSPSComputation1::computeSPS",
                          "computation not possible for given image width");
    // get input images
    // convert from input type to preprocessing type
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> ssOrigF, cvOrigF;
    this->convertImage(ss, ssOrigF);
    this->convertImage(cv, cvOrigF);
    // preprocess input images
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> ssF, cvF;
    this->preprocessing(ssOrigF, ssF, sps.param);
    this->preprocessing(cvOrigF, cvF, sps.param);
    // we first process the unmagnified images since the results are needed
    // multiple times
    // 2. Mar 18 (rm): *SR images are the re-arranged versions,
    // earlier in-place re-arrange required heap operations (width differs)
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> ssS, cvS, magS, ssSR,
      cvSR, magSR, *cvSPtr, *ssSPtr;
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> ssMeasureS, cvMeasureS,
      cvMeasFinal, ssMeasFinal, combMeas, magMeasureS, jointMeas,
      *cvMeasureSPtr, *ssMeasureSPtr;
    this->copyImage(cvF, pixelScale[0], cvS);
    this->reArrange(cvS, cvSR, sps.param);
    this->columnMeasure(cvSR, cvMeasureS, sps.param);
    this->copyImage(ssF, pixelScale[0], ssS);
    this->reArrange(ssS, ssSR, sps.param);
    this->columnMeasure(ssSR, ssMeasureS, sps.param);

    // create all scale plane images
    for (unsigned int spIndex = 0; spIndex < scaleFactors.size(); spIndex++) {
      // edge images are scaled
      double scale = scaleFactors[spIndex];

      // printf("spIndex %u, scale %g\n", spIndex, scale);
      if (scale > 1.0) {
        // ===== magnify cv by 1/scale and use unmodified ss =====
        // 27. Feb 18 (rm): vert.res. and hor. taken from image
        this->magnifyImage(cvF, interpolation, 1.0 / scale, pixelScale[0],
                           magS);
        this->reArrange(magS, magSR, sps.param);
        cvSPtr = &magSR;
        this->columnMeasure(magSR, magMeasureS, sps.param);
        cvMeasureSPtr = &magMeasureS;
        ssSPtr        = &ssSR;
        ssMeasureSPtr = &ssMeasureS;

      } else if (scale < 1.0) {
        // ===== magnify ss by scale and use unmodified cv =====
        cvSPtr        = &cvSR;
        cvMeasureSPtr = &cvMeasureS;
        // 27. Feb 18 (rm): vert.res. and hor. taken from image
        this->magnifyImage(ssF, interpolation, scale, pixelScale[0], magS);
        this->reArrange(magS, magSR, sps.param);
        ssSPtr = &magSR;
        this->columnMeasure(magSR, magMeasureS, sps.param);
        ssMeasureSPtr = &magMeasureS;

      } else {
        // ===== scale = 1.0: use unmodified ss and cv =====
        cvSPtr        = &cvSR;
        cvMeasureSPtr = &cvMeasureS;
        ssSPtr        = &ssSR;
        ssMeasureSPtr = &ssMeasureS;
      }
      // store input images if requested
      if (this->storeSPSInput) {
        // 27. Jul 18 (rm)
        this->unReArrange(*ssSPtr, this->ssInputs[spIndex], sps.param);
        this->unReArrange(*cvSPtr, this->cvInputs[spIndex], sps.param);
        // this->ssInputs[spIndex] = *ssSPtr;
        // this->cvInputs[spIndex] = *cvSPtr;
      }
      // compute distance term
      this->jointMeasure(*cvSPtr, *ssSPtr, *cvMeasureSPtr, *ssMeasureSPtr,
                         jointMeas, cvMeasFinal, ssMeasFinal, combMeas,
                         sps.param);
      // compute normalized measure
      this->normalization(jointMeas, ssMeasFinal, cvMeasFinal, combMeas,
                          postScale, sps.stack[spIndex], sps.param);
    }
    sps.complement();
  }
};

// ===========================================================================
// WarpingSPSComputation2
// ===========================================================================

// defines convertImage, magnifyImage, copyImage
template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputation2
  : public WarpingSPSComputation1<ImgType, ProcType, MeasType, SPSType,
                                  SIMD_WIDTH, SIMD_ALIGN>
{
public:
  // convert image
  virtual void convertImage(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &in,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &out)
  {
    // TODO: this assignment is based on type casts, is that always ok?
    // TODO: what is actually happening between signed/unsigned types and
    // TODO: between integer/float types?
    out = in;
  }

  // magnify and scale image
  // 27. Feb 18 (rm): vert.res. and hor. taken from img
  virtual void magnifyImage(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    int interpolation, double magnifyScale, double multiplyScale,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outImg)
  {
    magnifyAndScale(img, interpolation, magnifyScale, multiplyScale, outImg);
  }

  // copy and scale image
  virtual void copyImage(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    double multiplyScale,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outImg)
  {
    copyAndScale(img, multiplyScale, outImg);
  }
};

// ===========================================================================
// WarpingSPSComputationEdgeAbs
// ===========================================================================

// only defines methods preprocessing, columnMeasure,
// maxDenom
template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationEdgeAbs
  : public WarpingSPSComputation2<ImgType, ProcType, MeasType, SPSType,
                                  SIMD_WIDTH, SIMD_ALIGN>
{
public:
  virtual void preprocessing(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &preprocessed,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    verticalEdgeFilter(input, preprocessed);
  }

  virtual void columnMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    sumOfAbs(input, colMeas);
  }

  virtual std::vector<double> maxDenom(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img)
  {
    std::vector<double> md(1);
    // all processing is done in SIMDFloat to avoid overflow
    SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, Panorama> inputImg, edgeImg;
    SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN> sumOfAbsImg;
    inputImg = img;
    verticalEdgeFilter(inputImg, edgeImg);
    sumOfAbs(edgeImg, sumOfAbsImg);
    // 2.0* : two sums are added in the denominator
    md[0] = (2.0 * max(sumOfAbsImg));
    return md;
  }
};

// ===========================================================================
// measures with element-wise rewrite to SPS (1)
// ===========================================================================

template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN, int INVERT>
class WarpingSPSComputationEdgeAbs1
  : public WarpingSPSComputationEdgeAbs<ImgType, ProcType, MeasType, SPSType,
                                        SIMD_WIDTH, SIMD_ALIGN>
{
public:
  virtual void normalization(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &ssMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &cvMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &, double postScale,
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // INVERT: false: without inversion (distance measure), true:
    // with inversion (correlation)
    computeScalePlaneNormalizedAdd1<INVERT>(jointMeasure, ssMeasure, cvMeasure,
                                            par.wSPS, par.modulo2wpw,
                                            par.shuffle, postScale, scalePlane);
  }
};

// ===========================================================================
// NSAD with edge filter (derived from WarpingSPSComputationEdgeAbs1)
// ===========================================================================

template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationEdgeNSAD1
  : public WarpingSPSComputationEdgeAbs1<ImgType, ProcType, MeasType, SPSType,
                                         SIMD_WIDTH, SIMD_ALIGN, false>
{
public:
  virtual void jointMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // puts("NSAD");
    normSumAbsDiffTerm1(input1, input2, jointMeas);
    // colMeas1 = colMeasRaw1;
    // colMeas2 = colMeasRaw2;
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  // NSAD measure is in [0,1]
  virtual double measureMax() const { return 1.0; }
};

// ===========================================================================
// ASC with edge filter (derived from WarpingSPSComputationEdgeAbs1)
// ===========================================================================

template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationEdgeASC1
  : public WarpingSPSComputationEdgeAbs1<ImgType, ProcType, MeasType, SPSType,
                                         SIMD_WIDTH, SIMD_ALIGN, true>
{
public:
  virtual void jointMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // puts("ASC");
    asc2Term1(input1, input2, jointMeas);
    // colMeas1 = colMeasRaw1;
    // colMeas2 = colMeasRaw2;
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  // ASC+ measure is in [0,2]
  virtual double measureMax() const { return 2.0; }
};

// ===========================================================================
// NSADA with edge filter (derived from WarpingSPSComputationEdgeAbs1)
// ===========================================================================

template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationEdgeNSADA1
  : public WarpingSPSComputationEdgeAbs1<ImgType, ProcType, MeasType, SPSType,
                                         SIMD_WIDTH, SIMD_ALIGN, false>
{
public:
  virtual void jointMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // puts("NSADA");
    normSumAbsDiffAbsTerm1(input1, input2, jointMeas);
    // colMeas1 = colMeasRaw1;
    // colMeas2 = colMeasRaw2;
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  // NSAD measure is in [0,1]
  virtual double measureMax() const { return 1.0; }
};

// ===========================================================================
// NSADA with edge filter (derived from WarpingSPSComputationEdgeAbs1)
// ===========================================================================

template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationEdgeNSADNSADA1
  : public WarpingSPSComputationEdgeAbs1<ImgType, ProcType, MeasType, SPSType,
                                         SIMD_WIDTH, SIMD_ALIGN, false>
{
public:
  virtual void jointMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // puts("NSAD-NSADA");
    normSumAvgAbsDiffAbsDiffAbsTerm1(input1, input2, jointMeas);
    // colMeas1 = colMeasRaw1;
    // colMeas2 = colMeasRaw2;
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  // NSAD measure is in [0,1]
  virtual double measureMax() const { return 1.0; }
};

// ===========================================================================
// measures with reArrange and block-wise rewrite to SPS (2)
// ===========================================================================

// with reArrange
template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN, int INVERT>
class WarpingSPSComputationEdgeAbs2
  : public WarpingSPSComputationEdgeAbs<ImgType, ProcType, MeasType, SPSType,
                                        SIMD_WIDTH, SIMD_ALIGN>
{
public:
  virtual void reArrange(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &imgR,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    swizzleCyclic(img, par.stepAlpha, numInputSIMDVecs<SPSType, MeasType>(),
                  imgR);
  }

  virtual void unReArrange(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &imgR,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // serial, slow!
    unSwizzleCyclic(imgR, par.stepAlpha, numInputSIMDVecs<SPSType, MeasType>(),
                    img);
  }

  virtual void normalization(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &ssMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &cvMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &, double postScale,
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // INVERT: false: without inversion (distance measure), true:
    // with inversion (correlation)
    computeScalePlaneNormalizedAdd2<INVERT>(
      jointMeasure, ssMeasure, cvMeasure, par.w, par.wSPS, par.stepAlpha,
      par.nAlpha, par.blkSize, par.modNAlpha, par.shuffleModulo, par.unshuffle,
      postScale, scalePlane);
  }
};

// ===========================================================================
// NSAD with edge filter (derived from WarpingSPSComputationEdgeAbs2)
// ===========================================================================

// with reArrange
template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationEdgeNSAD2
  : public WarpingSPSComputationEdgeAbs2<ImgType, ProcType, MeasType, SPSType,
                                         SIMD_WIDTH, SIMD_ALIGN, false>
{
public:
  virtual void jointMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    /*
    printf("input1 %d x %d (%g, %g)\n", input1.w, input1.h,
           input1.addOn.verticalResolution, input1.addOn.horizon);
    printf("input2 %d x %d (%g, %g)\n", input2.w, input2.h,
           input2.addOn.verticalResolution, input2.addOn.horizon);
    */

    // puts("NSAD");
    normSumAbsDiffTerm2(input1, input2, par.w, par.wSPS, par.stepAlpha,
                        par.nAlpha, par.blkSize, par.modNAlpha, jointMeas);
    // colMeas1 = colMeasRaw1;
    // colMeas2 = colMeasRaw2;
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  // NSAD measure is in [0,1]
  virtual double measureMax() const { return 1.0; }
};

// ===========================================================================
// ASC with edge filter (derived from WarpingSPSComputationEdgeAbs2)
// ===========================================================================

// with reArrange
template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationEdgeASC2
  : public WarpingSPSComputationEdgeAbs2<ImgType, ProcType, MeasType, SPSType,
                                         SIMD_WIDTH, SIMD_ALIGN, true>
{
public:
  virtual void jointMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // puts("ASC");
    asc2Term2(input1, input2, par.w, par.wSPS, par.stepAlpha, par.nAlpha,
              par.blkSize, par.modNAlpha, jointMeas);
    // colMeas1 = colMeasRaw1;
    // colMeas2 = colMeasRaw2;
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  // ASC+ measure is in [0,2]
  virtual double measureMax() const { return 2.0; }
};

// ===========================================================================
// ASCDirect (slow, tests only, derived from WarpingSPSComputationEdgeAbs2)
// ===========================================================================

// with reArrange
template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationEdgeASCDirect2
  : public WarpingSPSComputationEdgeAbs2<ImgType, ProcType, MeasType, SPSType,
                                         SIMD_WIDTH, SIMD_ALIGN, false>
{
public:
  virtual void jointMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    ascDirectTerm(input1, input2, par.w, par.wSPS, par.stepAlpha, par.nAlpha,
                  par.blkSize, par.modNAlpha, jointMeas);
    // colMeas1 = colMeasRaw1;
    // colMeas2 = colMeasRaw2;
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  // ASCDirect in [0,2]
  virtual double measureMax() const { return 2.0; }
};

// ===========================================================================
// NSADA with edge filter (derived from WarpingSPSComputationEdgeAbs2)
// ===========================================================================

// with reArrange
template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationEdgeNSADA2
  : public WarpingSPSComputationEdgeAbs2<ImgType, ProcType, MeasType, SPSType,
                                         SIMD_WIDTH, SIMD_ALIGN, false>
{
public:
  virtual void jointMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // puts("NSAD-NSADA");
    normSumAbsDiffAbsTerm2(input1, input2, par.w, par.wSPS, par.stepAlpha,
                           par.nAlpha, par.blkSize, par.modNAlpha, jointMeas);
    // colMeas1 = colMeasRaw1;
    // colMeas2 = colMeasRaw2;
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  // NSADA measure is in [0,1]
  virtual double measureMax() const { return 1.0; }
};

// ===========================================================================
// NSAD-NSADA mix with edge filter (deriv. from
// WarpingSPSComputationEdgeAbs2)
// ===========================================================================

// with reArrange
template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationEdgeNSADNSADA2
  : public WarpingSPSComputationEdgeAbs2<ImgType, ProcType, MeasType, SPSType,
                                         SIMD_WIDTH, SIMD_ALIGN, false>
{
public:
  virtual void jointMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // puts("NSAD-NSADA");
    normSumAvgAbsDiffAbsDiffAbsTerm2(input1, input2, par.w, par.wSPS,
                                     par.stepAlpha, par.nAlpha, par.blkSize,
                                     par.modNAlpha, jointMeas);
    // colMeas1 = colMeasRaw1;
    // colMeas2 = colMeasRaw2;
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  // NSADA measure is in [0,1]
  virtual double measureMax() const { return 1.0; }
};

// ===========================================================================
// WarpingSPSComputationTilt
// contributed by Annika Hoffmann
// ===========================================================================

// adapted functions to compute converted, magnified and scaled
// image with invalid values!
template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationTilt
  : public WarpingSPSComputation1<ImgType, ProcType, MeasType, SPSType,
                                  SIMD_WIDTH, SIMD_ALIGN>
{
public:
  bool considersInvalidPixels() const { return true; }

  // convert image: keep values from ImgType, but use invalid value
  // for proc type
  // if value is invalid (max(ImgType)) in input image, then this
  // value is set to max(ProcType)

  virtual void convertImage(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &in,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &out)
  {
    // code assumes that ProcType is larger or equal in size then ImgType
    static_assert(sizeof(ProcType) >= sizeof(ImgType), "");

    const int numElems = numSIMDVecsElements<ImgType, ProcType, SIMD_WIDTH>();
    const size_t size  = in.size;

    const int numInVecs  = numInputSIMDVecs<ProcType, ImgType>();
    const int numOutVecs = numOutputSIMDVecs<ProcType, ImgType>();

    SIMDVec<ImgType, SIMD_WIDTH> inVecs[numInVecs];
    SIMDVec<ProcType, SIMD_WIDTH> convertedInVecs[numOutVecs];
    SIMDVec<ProcType, SIMD_WIDTH> outVecs[numOutVecs];
    // the invalid value is needed in ProcType for comparison
    SIMDVec<ProcType, SIMD_WIDTH> maxVecIn;
    SIMDVec<ProcType, SIMD_WIDTH> maxVecOut;
    SIMDVec<ProcType, SIMD_WIDTH> cmp;

    maxVecIn =
      set1<ProcType, SIMD_WIDTH>((ProcType) (SIMDTypeInfo<ImgType>::max()));
    maxVecOut = set1<ProcType, SIMD_WIDTH>(SIMDTypeInfo<ProcType>::max());
    out.resize(in.w, in.h, in.addOn);

    ProcType *dst = out.data;

    for (size_t i = 0; i < size; i += numElems) {
      inVecs[0] = load<SIMD_WIDTH>(in.data + i);
      convert(inVecs, convertedInVecs);
      for (int j = 0; j < numOutVecs; j++) {
        cmp        = cmpeq(convertedInVecs[j], maxVecIn);
        outVecs[j] = ifelse(cmp, maxVecOut, convertedInVecs[j]);
      }
      store(dst, outVecs, numOutVecs);
      dst += numElems;
    }
  }

  // magnify and scale image
  virtual void magnifyImage(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    int interpolation, double magnifyScale, double multiplyScale,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outImg)
  {
    magnifyAndScaleTilt(img, interpolation, magnifyScale, multiplyScale,
                        outImg);
  }

  // copy and scale image
  virtual void copyImage(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    double multiplyScale,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outImg)
  {
    copyAndScaleTilt(img, multiplyScale, outImg);
  }
};

// ===========================================================================
// WarpingSPSComputationAbsTilt
// contributed by Annika Hoffmann
// ===========================================================================

template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationAbsTilt
  : public WarpingSPSComputationTilt<ImgType, ProcType, MeasType, SPSType,
                                     SIMD_WIDTH, SIMD_ALIGN>
{
public:
  virtual void preprocessing(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &output,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    //  verticalEdgeFilter(input, output);
    // we use the original images here:
    // images are edge-filtered in advance!
    output = input;
  }

  virtual void columnMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &output,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    sumOfAbsAccuInvalid(input, output);
  }

  virtual std::vector<double> maxDenom(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img)
  {
    std::vector<double> md(1);
    // all processing is done in SIMDFloat to avoid overflow
    SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN> inputImg, sumOfAbsImg;
    inputImg = img;
    // no edge filtering for tilted images, we use bg-edges which
    // are computed separately
    // verticalEdgeFilter(inputImg, edgeImg);
    sumOfAbsAccuInvalid(inputImg, sumOfAbsImg);
    md[0] = (2.0 * max(sumOfAbsImg));
    return md;
  }
};

// ===========================================================================
// WarpingSPSComputationNSADTilt
// contributed by Annika Hoffmann
// ===========================================================================

// NSAD with edge filter on tilted image, which include invalid pixels

template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationNSADTilt
  : public WarpingSPSComputationAbsTilt<ImgType, ProcType, MeasType, SPSType,
                                        SIMD_WIDTH, SIMD_ALIGN>
{
public:
  virtual void jointMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &output,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas12,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // with NSAD match operator
    columnPairMatchingTilt1<MeasType, SIMD_WIDTH, SIMD_ALIGN,
                            MatchAbsDiff<MeasType, SIMD_WIDTH>>(
      input1, input2, output, colMeasRaw1, colMeasRaw2, colMeas1, colMeas2,
      colMeas12);
  }

  virtual void normalization(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &combinedMeasure,
    double postScale, SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // here we only use the combined measure
    computeScalePlaneNormalizedAdd1Tilt<false>(
      jointMeasure, combinedMeasure, par.wSPS, par.modulo2wpw, par.shuffle,
      postScale, scalePlane);
  }

  // NSAD measure is in [0,1]
  virtual double measureMax() const { return 1.0; }
};

// ===========================================================================
// HarrisParameter
// contributed by Benedikt Volkmer
// ===========================================================================

class HarrisParameter
{
public:
  HarrisParameter(double k, int binomialFilterCount)
    : k(k), binomialFilterCount(binomialFilterCount)
  {}
  double k;
  int binomialFilterCount;
};

// ===========================================================================
// WarpingSPSComputation1Alt
// contributed by Benedikt Volkmer
// ===========================================================================

// only defines method computeSPS
template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          bool MAGNIFY_FIRST, bool SCALE_MAGNIFY>
class WarpingSPSComputation1Alt
  : public WarpingSPSComputationSingle<ImgType, ProcType, MeasType, SPSType,
                                       SIMD_WIDTH, SIMD_ALIGN>
{
public:
  virtual void computeSPS(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    const std::vector<double> &scaleFactors, int interpolation,
    const std::vector<double> &pixelScale, double postScale,
    WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps)
  {
    if (pixelScale.size() != 1)
      throw SIMDException("WarpingSPSComputation1Alt::computeSPS",
                          "invalid size of pixelScale");
    const int w = sps.param.w, h = ss.h;
    if ((h != cv.h) || (ss.w != cv.w) || (w != ss.w)) {
      char errStr[256];
      sprintf(errStr,
              "mismatch in ss, cv, sps dimensions: "
              "ss %d x %d, cv %d x %d, sps.param.w = %d",
              ss.w, ss.h, cv.w, cv.h, w);
      throw SIMDException("WarpingSPSComputation1Alt::computeSPS", errStr);
    }
    if (ss.addOn != cv.addOn) {
      char errStr[256];
      sprintf(errStr,
              "panorama parameters of ss (%g, %g) and cv (%g, %g) differ",
              ss.addOn.verticalResolution, ss.addOn.horizon,
              cv.addOn.verticalResolution, cv.addOn.horizon);
      throw SIMDException("WarpingSPSComputation1Alt::computeSPS", errStr);
    }
    // check validity for given image width
    if (!this->validForWidth(w))
      throw SIMDException("WarpingSPSComputation1Alt::computeSPS",
                          "computation not possible for given image width");
    // get input images
    // convert from input type to preprocessing type
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> ssOrigF, cvOrigF;
    this->convertImage(ss, ssOrigF);
    this->convertImage(cv, cvOrigF);
    // preprocess input images
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> ssF, cvF;
    this->preprocessing(ssOrigF, ssF, sps.param);
    this->preprocessing(cvOrigF, cvF, sps.param);
    // we first process the unmagnified images since the results are needed
    // multiple times
    // 2. Mar 18 (rm): *SR images are the re-arranged versions,
    // earlier in-place re-arrange required heap operations (width differs)
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> ssS, cvS, magS, ssSR,
      cvSR, magSR, *cvSPtr, *ssSPtr;
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> ssMeasureS, cvMeasureS,
      cvMeasFinal, ssMeasFinal, combMeas, magMeasureS, jointMeas,
      *cvMeasureSPtr, *ssMeasureSPtr;
    this->copyImage(cvF, pixelScale[0], cvS);
    this->reArrange(cvS, cvSR, sps.param);
    this->columnMeasure(cvSR, cvMeasureS, sps.param);
    this->copyImage(ssF, pixelScale[0], ssS);
    this->reArrange(ssS, ssSR, sps.param);
    this->columnMeasure(ssSR, ssMeasureS, sps.param);
    // create all scale plane images
    for (unsigned int spIndex = 0; spIndex < scaleFactors.size(); spIndex++) {
      // edge images are scaled
      double scale = scaleFactors[spIndex];

      // printf("spIndex %u, scale %g\n", spIndex, scale);
      if (scale > 1.0) {
        // ===== magnify cv by 1/scale and use unmodified ss =====
        if (MAGNIFY_FIRST) {
          SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> magF, magFPre;
          if (SCALE_MAGNIFY) {
            magnifyAndScale(cvOrigF, interpolation, 1.0 / scale, scale, magF);
          } else {
            magnifyAndScale(cvOrigF, interpolation, 1.0 / scale, 1.0, magF);
          }
          this->preprocessing(magF, magFPre, sps.param);
          this->copyImage(magFPre, pixelScale[0], magS);
        } else {
          this->magnifyImage(cvF, interpolation, 1.0 / scale, pixelScale[0],
                             magS);
        }
        this->reArrange(magS, magSR, sps.param);
        cvSPtr = &magSR;
        this->columnMeasure(magSR, magMeasureS, sps.param);
        cvMeasureSPtr = &magMeasureS;
        ssSPtr        = &ssSR;
        ssMeasureSPtr = &ssMeasureS;

      } else if (scale < 1.0) {
        // ===== magnify ss by scale and use unmodified cv =====
        cvSPtr        = &cvSR;
        cvMeasureSPtr = &cvMeasureS;
        if (MAGNIFY_FIRST) {
          SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> magF, magFPre;
          if (SCALE_MAGNIFY) {
            magnifyAndScale(ssOrigF, interpolation, scale, 1 / scale, magF);
          } else {
            magnifyAndScale(ssOrigF, interpolation, scale, 1, magF);
          }
          this->preprocessing(magF, magFPre, sps.param);
          this->copyImage(magFPre, pixelScale[0], magS);
        } else {
          this->magnifyImage(ssF, interpolation, scale, pixelScale[0], magS);
        }
        this->reArrange(magS, magSR, sps.param);
        ssSPtr = &magSR;
        this->columnMeasure(magSR, magMeasureS, sps.param);
        ssMeasureSPtr = &magMeasureS;

      } else {
        // ===== scale = 1.0: use unmodified ss and cv =====
        cvSPtr        = &cvSR;
        cvMeasureSPtr = &cvMeasureS;
        ssSPtr        = &ssSR;
        ssMeasureSPtr = &ssMeasureS;
      }
      // store input images if requested
      if (this->storeSPSInput) {
        // 27. Jul 18 (rm)
        this->unReArrange(*ssSPtr, this->ssInputs[spIndex], sps.param);
        this->unReArrange(*cvSPtr, this->cvInputs[spIndex], sps.param);
        // this->ssInputs[spIndex] = *ssSPtr;
        // this->cvInputs[spIndex] = *cvSPtr;
      }
      // compute distance term
      this->jointMeasure(*cvSPtr, *ssSPtr, *cvMeasureSPtr, *ssMeasureSPtr,
                         jointMeas, cvMeasFinal, ssMeasFinal, combMeas,
                         sps.param);
      // compute normalized measure
      this->normalization(jointMeas, ssMeasFinal, cvMeasFinal, combMeas,
                          postScale, sps.stack[spIndex], sps.param);
    }
    sps.complement();
  }
};

// ===========================================================================
// WarpingSPSComputation2Alt
// contributed by Benedikt Volkmer
// ===========================================================================

// defines convertImage, magnifyImage, copyImage
template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          bool MAGNIFY_FIRST, bool SCALE_MAGNIFY>
class WarpingSPSComputation2Alt
  : public WarpingSPSComputation1Alt<ImgType, ProcType, MeasType, SPSType,
                                     SIMD_WIDTH, SIMD_ALIGN, MAGNIFY_FIRST,
                                     SCALE_MAGNIFY>
{
public:
  // convert image
  virtual void convertImage(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &in,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &out)
  {
    // TODO: this assignment is based on type casts, is that always ok?
    // TODO: what is actually happening between signed/unsigned types and
    // TODO: between integer/float types?
    out = in;
  }

  // magnify and scale image
  virtual void magnifyImage(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    int interpolation, double magnifyScale, double multiplyScale,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outImg)
  {
    magnifyAndScale(img, interpolation, magnifyScale, multiplyScale, outImg);
  }

  // copy and scale image
  virtual void copyImage(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    double multiplyScale,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outImg)
  {
    copyAndScale(img, multiplyScale, outImg);
  }
};

// ===========================================================================
// WarpingSPSComputationCornerAbs
// contributed by Benedikt Volkmer
// ===========================================================================

// only defines methods preprocessing, columnMeasure,
// maxDenom

// ProcType==SIMDFloat (omitted)
template <typename ImgType, typename MeasType, typename SPSType,
          size_t SIMD_WIDTH, size_t SIMD_ALIGN, bool MAGNIFY_FIRST,
          bool SCALE_MAGNIFY, int NORMALIZE, bool VARIANT>
class WarpingSPSComputationCornerAbs
  : public WarpingSPSComputation2Alt<ImgType, SIMDFloat, MeasType, SPSType,
                                     SIMD_WIDTH, SIMD_ALIGN, MAGNIFY_FIRST,
                                     SCALE_MAGNIFY>
{
public:
  // ctor
  WarpingSPSComputationCornerAbs(const HarrisParameter &param)
    : k(param.k), binomialFilterCount(param.binomialFilterCount)
  {}

  virtual void preprocessing(
    const SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, Panorama> &jointMeas,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    harrisFilterCyclic<NORMALIZE, VARIANT>(input, jointMeas, k,
                                           binomialFilterCount);
  }

  virtual void columnMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    sumOfAbs(input, jointMeas);
  }

  virtual std::vector<double> maxDenom(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img)
  {
    std::vector<double> md(1);
    // all processing is done in SIMDFloat to avoid overflow
    SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, Panorama> inputImg, cornerImg;
    SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN> sumOfAbsImg;
    inputImg = img;
    harrisFilterCyclic<NORMALIZE, VARIANT>(inputImg, cornerImg, k,
                                           binomialFilterCount);
    sumOfAbs(cornerImg, sumOfAbsImg);
    // 2.0* : two sums are added in the denominator
    md[0] = (2.0 * max(sumOfAbsImg));
    return md;
  }

private:
  SIMDFloat k;
  int binomialFilterCount;
};

// ===========================================================================
// measures with reArrange and block-wise rewrite to SPS (2)
// contributed by Benedikt Volkmer
// ===========================================================================

// with reArrange
// ProcType==SIMDFloat (omitted)
template <typename ImgType, typename MeasType, typename SPSType,
          size_t SIMD_WIDTH, size_t SIMD_ALIGN, int INVERT, bool MAGNIFY_FIRST,
          bool SCALE_MAGNIFY, int NORMALIZE, bool VARIANT>
class WarpingSPSComputationCornerAbs2
  : public WarpingSPSComputationCornerAbs<ImgType, MeasType, SPSType,
                                          SIMD_WIDTH, SIMD_ALIGN, MAGNIFY_FIRST,
                                          SCALE_MAGNIFY, NORMALIZE, VARIANT>
{
public:
  // ctor
  WarpingSPSComputationCornerAbs2(const HarrisParameter &param)
    : WarpingSPSComputationCornerAbs<ImgType, MeasType, SPSType, SIMD_WIDTH,
                                     SIMD_ALIGN, MAGNIFY_FIRST, SCALE_MAGNIFY,
                                     NORMALIZE, VARIANT>(param)
  {}

  virtual void reArrange(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &imgR,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    swizzleCyclic(img, par.stepAlpha, numInputSIMDVecs<SPSType, MeasType>(),
                  imgR);
  }

  // 9. Aug 18 (rm): added unReArrange
  virtual void unReArrange(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &imgR,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // serial, slow!
    unSwizzleCyclic(imgR, par.stepAlpha, numInputSIMDVecs<SPSType, MeasType>(),
                    img);
  }

  virtual void normalization(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &ssMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &cvMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &, double postScale,
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // INVERT: false: without inversion (distance measure), true:
    // with inversion (correlation)
    computeScalePlaneNormalizedAdd2<INVERT>(
      jointMeasure, ssMeasure, cvMeasure, par.w, par.wSPS, par.stepAlpha,
      par.nAlpha, par.blkSize, par.modNAlpha, par.shuffleModulo, par.unshuffle,
      postScale, scalePlane);
  }
};

// ===========================================================================
// NSAD with corner filter (derived from WarpingSPSComputationCornerAbs2)
// contributed by Benedikt Volkmer
// ===========================================================================

// with reArrange
// ProcType==SIMDFloat (omitted)
template <typename ImgType, typename MeasType, typename SPSType,
          size_t SIMD_WIDTH, size_t SIMD_ALIGN, bool MAGNIFY_FIRST,
          bool SCALE_MAGNIFY, int NORMALIZE, bool VARIANT>
class WarpingSPSComputationCornerNSAD2
  : public WarpingSPSComputationCornerAbs2<
      ImgType, MeasType, SPSType, SIMD_WIDTH, SIMD_ALIGN,
      /*INVERT*/ false, MAGNIFY_FIRST, SCALE_MAGNIFY, NORMALIZE, VARIANT>
{
public:
  // ctor
  WarpingSPSComputationCornerNSAD2(const HarrisParameter &param)
    : WarpingSPSComputationCornerAbs2<
        ImgType, MeasType, SPSType, SIMD_WIDTH, SIMD_ALIGN,
        /*INVERT*/ false, MAGNIFY_FIRST, SCALE_MAGNIFY, NORMALIZE, VARIANT>(
        param)
  {}

  virtual void jointMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    /*
      printf("input1 %d x %d (%g, %g)\n", input1.w, input1.h,
      input1.addOn.verticalResolution, input1.addOn.horizon);
      printf("input2 %d x %d (%g, %g)\n", input2.w, input2.h,
      input2.addOn.verticalResolution, input2.addOn.horizon);
    */

    // puts("NSAD");
    normSumAbsDiffTerm2(input1, input2, par.w, par.wSPS, par.stepAlpha,
                        par.nAlpha, par.blkSize, par.modNAlpha, jointMeas);
    // colMeas1 = colMeasRaw1;
    // colMeas2 = colMeasRaw2;
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  // NSAD measure is in [0,1]
  virtual double measureMax() const { return 1.0; }
};

// ===========================================================================
// WarpingSPSComputationEdgeAbs
// contributed by Benedikt Volkmer
// ===========================================================================

// only defines methods preprocessing, columnMeasure,
// maxDenom
template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          bool MAGNIFY_FIRST, bool SCALE_MAGNIFY>
class WarpingSPSComputationEdgeAbsAlt
  : public WarpingSPSComputation2Alt<ImgType, ProcType, MeasType, SPSType,
                                     SIMD_WIDTH, SIMD_ALIGN, MAGNIFY_FIRST,
                                     SCALE_MAGNIFY>
{
public:
  virtual void preprocessing(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &jointMeas,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    verticalEdgeFilter(input, jointMeas);
  }

  virtual void columnMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    sumOfAbs(input, jointMeas);
  }

  virtual std::vector<double> maxDenom(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img)
  {
    std::vector<double> md(1);
    // all processing is done in SIMDFloat to avoid overflow
    SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, Panorama> inputImg, edgeImg;
    SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN> sumOfAbsImg;
    inputImg = img;
    verticalEdgeFilter(inputImg, edgeImg);
    sumOfAbs(edgeImg, sumOfAbsImg);
    // 2.0* : two sums are added in the denominator
    md[0] = (2.0 * max(sumOfAbsImg));
    return md;
  }
};

// ===========================================================================
// measures with reArrange and block-wise rewrite to SPS (2)
// contributed by Benedikt Volkmer
// ===========================================================================

// with reArrange
template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN, int INVERT,
          bool MAGNIFY_FIRST, bool SCALE_MAGNIFY>
class WarpingSPSComputationEdgeAbs2Alt
  : public WarpingSPSComputationEdgeAbsAlt<ImgType, ProcType, MeasType, SPSType,
                                           SIMD_WIDTH, SIMD_ALIGN,
                                           MAGNIFY_FIRST, SCALE_MAGNIFY>
{
public:
  virtual void reArrange(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &imgR,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    swizzleCyclic(img, par.stepAlpha, numInputSIMDVecs<SPSType, MeasType>(),
                  imgR);
  }

  virtual void normalization(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &ssMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &cvMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &, double postScale,
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // INVERT: false: without inversion (distance measure), true:
    // with inversion (correlation)
    computeScalePlaneNormalizedAdd2<INVERT>(
      jointMeasure, ssMeasure, cvMeasure, par.w, par.wSPS, par.stepAlpha,
      par.nAlpha, par.blkSize, par.modNAlpha, par.shuffleModulo, par.unshuffle,
      postScale, scalePlane);
  }
};

// ===========================================================================
// NSAD with edge filter (derived from WarpingSPSComputationEdgeAbs2)
// contributed by Benedikt Volkmer
// ===========================================================================

// with reArrange
template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN,
          bool MAGNIFY_FIRST, bool SCALE_MAGNIFY>
class WarpingSPSComputationEdgeNSAD2Alt
  : public WarpingSPSComputationEdgeAbs2Alt<ImgType, ProcType, MeasType,
                                            SPSType, SIMD_WIDTH, SIMD_ALIGN,
                                            false, MAGNIFY_FIRST, SCALE_MAGNIFY>
{
public:
  virtual void jointMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    /*
    printf("input1 %d x %d (%g, %g)\n", input1.w, input1.h,
           input1.addOn.verticalResolution, input1.addOn.horizon);
    printf("input2 %d x %d (%g, %g)\n", input2.w, input2.h,
           input2.addOn.verticalResolution, input2.addOn.horizon);
    */

    // puts("NSAD");
    normSumAbsDiffTerm2(input1, input2, par.w, par.wSPS, par.stepAlpha,
                        par.nAlpha, par.blkSize, par.modNAlpha, jointMeas);
    // colMeas1 = colMeasRaw1;
    // colMeas2 = colMeasRaw2;
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  // NSAD measure is in [0,1]
  virtual double measureMax() const { return 1.0; }
};

//===========================================================================
// Multi-Dimensional Sigmoid applied to NSADs of multiple preprocessed images
// - magnify first, preprocess second
//===========================================================================

template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN, int NPREPROCS>
class WarpingSPSComputationSNSAD
  : public WarpingSPSComputationStack<ImgType, ProcType, MeasType, SPSType,
                                      NPREPROCS, SIMD_WIDTH, SIMD_ALIGN>
{
public:
  // ctor
  WarpingSPSComputationSNSAD(const std::vector<double> &sigmoidW,
                             const std::vector<double> &sigmoidW0)
  {
    if (sigmoidW.size() != (size_t) NPREPROCS)
      throw SIMDException("WarpingSPSComputationSNSAD",
                          "invalid size of sigmoidW");
    if (sigmoidW0.size() != (size_t) NPREPROCS)
      throw SIMDException("WarpingSPSComputationSNSAD",
                          "invalid size of sigmoidW0");
    this->sigmoidW  = sigmoidW;
    this->sigmoidW0 = sigmoidW0;
  };

  // computation of scale-plane stack
  // (not possible to restrict ImgType to this function since
  // templates may not be virtual)
  void computeSPS(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    const std::vector<double> &scaleFactors, int interpolation,
    const std::vector<double> &pixelScale, double postScale,
    WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps)
  {
    if (pixelScale.size() != (size_t) NPREPROCS)
      throw SIMDException("WarpingSPSComputationSNSAD::computeSPS",
                          "pixelScale array has wrong size");
    const int w = sps.param.w, h = ss.h;
    if ((h != cv.h) || (ss.w != cv.w) || (w != ss.w)) {
      char errStr[256];
      sprintf(errStr,
              "mismatch in ss, cv, sps dimensions: "
              "ss %d x %d, cv %d x %d, sps.param.w = %d",
              ss.w, ss.h, cv.w, cv.h, w);
      throw SIMDException("WarpingSPSComputationSNSAD::computeSPS", errStr);
    }
    if (ss.addOn != cv.addOn) {
      char errStr[256];
      sprintf(errStr,
              "panorama parameters of ss (%g, %g) and cv (%g, %g) differ",
              ss.addOn.verticalResolution, ss.addOn.horizon,
              cv.addOn.verticalResolution, cv.addOn.horizon);
      throw SIMDException("WarpingSPSComputationSNSAD::computeSPS", errStr);
    }
    // check validity for given image width
    if (!this->validForWidth(w))
      throw SIMDException("WarpingSPSComputationSNSAD::computeSPS",
                          "computation not possible for given image width");
    // get input images
    // convert from input type to preprocessing type
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> ssOrigF, cvOrigF;
    this->convertImage(ss, ssOrigF);
    this->convertImage(cv, cvOrigF);
    // preprocess input images
    SIMDStack<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> ssF, cvF;
    this->preprocessing(ssOrigF, ssF, sps.param);
    this->preprocessing(cvOrigF, cvF, sps.param);
    // we first process the unmagnified images since the results are needed
    // multiple times
    // 2. Mar 18 (rm): *SR images are the re-arranged versions,
    // earlier in-place re-arrange required heap operations (width differs)
    SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> ssS, cvS, magS, ssSR,
      cvSR, magSR, *cvSPtr, *ssSPtr;
    SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> ssMeasureS, cvMeasureS,
      cvMeasFinal, ssMeasFinal, combMeas, magMeasureS, jointMeas,
      *cvMeasureSPtr, *ssMeasureSPtr;
    this->copyStack(cvF, pixelScale, cvS);
    this->reArrange(cvS, cvSR, sps.param);
    this->columnMeasure(cvSR, cvMeasureS, sps.param);
    this->copyStack(ssF, pixelScale, ssS);
    this->reArrange(ssS, ssSR, sps.param);
    this->columnMeasure(ssSR, ssMeasureS, sps.param);

    // create all scale plane images
    for (unsigned int spIndex = 0; spIndex < scaleFactors.size(); spIndex++) {
      // edge images are scaled
      double scale = scaleFactors[spIndex];

      // printf("spIndex %u, scale %g\n", spIndex, scale);
      if (scale > 1.0) {
        // ===== magnify cv by 1/scale and use unmodified ss =====
        SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> magF;
        SIMDStack<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> magFPre;
        magnifyAndScale(cvOrigF, interpolation, 1.0 / scale, 1.0, magF);
        this->preprocessing(magF, magFPre, sps.param);
        this->copyStack(magFPre, pixelScale, magS);
        this->reArrange(magS, magSR, sps.param);
        cvSPtr = &magSR;
        this->columnMeasure(magSR, magMeasureS, sps.param);
        cvMeasureSPtr = &magMeasureS;
        ssSPtr        = &ssSR;
        ssMeasureSPtr = &ssMeasureS;

      } else if (scale < 1.0) {
        // ===== magnify ss by scale and use unmodified cv =====
        cvSPtr        = &cvSR;
        cvMeasureSPtr = &cvMeasureS;
        SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> magF;
        SIMDStack<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> magFPre;
        magnifyAndScale(ssOrigF, interpolation, scale, 1, magF);
        this->preprocessing(magF, magFPre, sps.param);
        this->copyStack(magFPre, pixelScale, magS);
        this->reArrange(magS, magSR, sps.param);
        ssSPtr = &magSR;
        this->columnMeasure(magSR, magMeasureS, sps.param);
        ssMeasureSPtr = &magMeasureS;

      } else {
        // ===== scale = 1.0: use unmodified ss and cv =====
        cvSPtr        = &cvSR;
        cvMeasureSPtr = &cvMeasureS;
        ssSPtr        = &ssSR;
        ssMeasureSPtr = &ssMeasureS;
      }
      // store input images if requested
      if (this->storeSPSInput) {
        // 27. Jul 18 (rm)
        this->unReArrange(*ssSPtr, this->ssInputs[spIndex], sps.param);
        this->unReArrange(*cvSPtr, this->cvInputs[spIndex], sps.param);
        // this->ssInputs[spIndex] = *ssSPtr;
        // this->cvInputs[spIndex] = *cvSPtr;
      }
      // compute distance term
      this->jointMeasure(*cvSPtr, *ssSPtr, jointMeas, sps.param);
      // compute normalized measure
      this->normalization(jointMeas, *ssMeasureSPtr, *cvMeasureSPtr, combMeas,
                          postScale, sps.stack[spIndex], sps.param);
    }
    sps.complement();
  }

  double measureMax() const { return 1.0; }

  void convertImage(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &in,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &out)
  {
    // TODO: see WarpingSPSComputation2
    out = in;
  }

  void copyImage(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    double multiplyScale,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outImg)
  {
    copyAndScale(img, multiplyScale, outImg);
  }

  void copyStack(
    const SIMDStack<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &stk,
    const std::vector<double> &multiplyScale,
    SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outStk)
  {
    copyAndScale(stk, multiplyScale, outStk);
  }

  void columnMeasure(
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &in,
    SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // jointMeas.h == 1 i.e. one value for each column
    jointMeas.resize(in.numPlanes, in.w, 1);
    // TODO: replace loop with own functions
    for (int i = 0; i < in.numPlanes; i++) { sumOfAbs(in[i], jointMeas[i]); }
  }

  void jointMeasure(
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &inputStk1,
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &inputStk2,
    SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeasStk,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // jointMeasStk.h == input.w
    jointMeasStk.resize(inputStk1.numPlanes, inputStk1.w, inputStk1.w);
    normSumAbsDiffTerm1(inputStk1[0], inputStk2[0], jointMeasStk[0]);
    for (int i = 0; i < inputStk1.numPlanes; i++) {
      // puts("NSAD");
      normSumAbsDiffTerm1(inputStk1[i], inputStk2[i], jointMeasStk[i]);
    }
  }

  // normalization of jointMeasure and ssMeasure/cvMeasure
  void normalization(
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeasure,
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &ssMeasure,
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &cvMeasure,
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &, double postScale,
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // INVERT: false: without inversion (distance measure), true:
    // with inversion (correlation)
    computeScalePlaneSigmoidNormalizedAdd1<false, NPREPROCS>(
      jointMeasure, ssMeasure, cvMeasure, par.wSPS, par.modulo2wpw, par.shuffle,
      sigmoidW, sigmoidW0, postScale, scalePlane);
    // ns_simd::computeScalePlaneNormalizedAdd1<false>
    //   (jointMeasure[0], ssMeasure[0], cvMeasure[0], par.wSPS,
    //    par.modulo2wpw, par.shuffle, postScale, scalePlane);
  }

  static const unsigned int npreprocs = NPREPROCS;

private:
  std::vector<double> sigmoidW, sigmoidW0;
};

template <typename ImgType, typename MeasType, typename SPSType,
          size_t SIMD_WIDTH, size_t SIMD_ALIGN, HarrisOutputSelector HOS,
          int OUTPUT_COUNT>
class WarpingSPSComputationSNSADHarris
  : public WarpingSPSComputationSNSAD<ImgType, SIMDFloat, MeasType, SPSType,
                                      SIMD_WIDTH, SIMD_ALIGN, OUTPUT_COUNT>
{
public:
  // ctor
  WarpingSPSComputationSNSADHarris(const HarrisParameter &param,
                                   const std::vector<double> &sigmoidW,
                                   const std::vector<double> &sigmoidW0)
    : WarpingSPSComputationSNSAD<ImgType, SIMDFloat, MeasType, SPSType,
                                 SIMD_WIDTH, SIMD_ALIGN, OUTPUT_COUNT>(
        sigmoidW, sigmoidW0),
      k(param.k), binomialFilterCount(param.binomialFilterCount) {};

  // preprocessing applied to the input images
  void preprocessing(
    const SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDStack<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, Panorama> &output,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    harrisFilterCyclic<2, 0, HOS>(input, output, k, binomialFilterCount);
  }

  std::vector<double> maxDenom(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img)
  {
    std::vector<double> md(this->npreprocs);
    // all processing is done in SIMDFloat to avoid overflow
    SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, Panorama> inputImg;
    SIMDStack<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, Panorama> preprocStk;
    SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN> sumOfAbsImg;
    inputImg = img;
    harrisFilterCyclic<2, 0, HOS>(inputImg, preprocStk, k, binomialFilterCount);
    for (unsigned int pp = 0; pp < this->npreprocs; pp++) {
      sumOfAbs(preprocStk[pp], sumOfAbsImg);
      // 2.0* : two sums are added in the denominator
      md[pp] = 2.0 * max(sumOfAbsImg);
    }
    return md;
  }

private:
  double k;
  int binomialFilterCount;
};

//===========================================================================
// version for tilted images but with vertical edge filter
// code contributed by C. Berganski (based on code by A. Hoffmann)
//===========================================================================

template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationEdgeAbsTilt
  : public WarpingSPSComputationTilt<ImgType, ProcType, MeasType, SPSType,
                                     SIMD_WIDTH, SIMD_ALIGN>
{
public:
  virtual void preprocessing(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &output,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    verticalEdgeFilterTilt(input, output);
  }

  virtual void columnMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &output,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    sumOfAbsAccuInvalid(input, output);
  }

  // 29. Sep 19 (rm): modified
  virtual std::vector<double> maxDenom(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img)
  {
    std::vector<double> md(1);
    // all processing is done in SIMDFloat to avoid overflow
    SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, Panorama> inputImg;
    SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN> sumOfAbsImg, edgeImg;
    this->convertImage(img, inputImg);
    verticalEdgeFilter(inputImg, edgeImg);
    sumOfAbsAccuInvalid(edgeImg, sumOfAbsImg);
    md[0] = (2.0 * max(sumOfAbsImg));
    return md;
  }
};

template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationEdgeNSADTilt
  : public WarpingSPSComputationEdgeAbsTilt<ImgType, ProcType, MeasType,
                                            SPSType, SIMD_WIDTH, SIMD_ALIGN>
{
public:
  virtual void jointMeasure(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &output,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas12,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // with NSAD match operator
    columnPairMatchingTilt1<MeasType, SIMD_WIDTH, SIMD_ALIGN,
                            MatchAbsDiff<MeasType, SIMD_WIDTH>>(
      input1, input2, output, colMeasRaw1, colMeasRaw2, colMeas1, colMeas2,
      colMeas12);
  }

  virtual void normalization(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &combinedMeasure,
    double postScale, SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // here we only use the combined measure
    computeScalePlaneNormalizedAdd1Tilt<false>(
      jointMeasure, combinedMeasure, par.wSPS, par.modulo2wpw, par.shuffle,
      postScale, scalePlane);
  }

  // NSAD measure is in [0,1]
  virtual double measureMax() const { return 1.0; }
};

} // namespace simd

#endif

// ===========================================================================
//
// WarpingSPSComputationCollectionModular.H
// novel policy-based scheme for WarpingSPSComputation
// Author: Benedikt Volkmer (Bielefeld University)
// Year of creation: 2020
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Benedikt Volkmer, Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef WARPING_SPS_COMPUTATION_COLLECTION_MODULAR_H_
#define WARPING_SPS_COMPUTATION_COLLECTION_MODULAR_H_

#include <cstddef>

namespace simd {
namespace modular_sps_computation {

template <bool B>
struct Rearranged
{};
template <bool B>
struct ConsidersInvalid
{};

// ============================================================================
// Single
// ============================================================================
// Single is the base class for single preprocessing output. It is based on
// former WarpingSPSComputationSingle and WarpingSPSComputation1/Alt. It
// implements all virtual functions of WarpingSPSComputation using static
// functions of policy classes given by template parameters:
//
// - ImageOpsPolicy: (convertImage, copyImage, magnifyImage) (for both single
//                                                            and stack)
//   - Simple (former WarpingSPSComputation2/Alt) (TODO: remove if Tilt is
//                                                 universal)
//   - Invalid (former WarpingSPSComputationTilt)
// - SinglePreprocessingPolicy: (preprocessing)
//   - Edge (former WarpingSPSComputationEdgeAbs/Alt)
//   - Harris (former WarpingSPSComputationHarrisAbs)
//   - NonAccuInvalid (former WarpingSPSComputationAbsTilt)
//   - EdgeAccuInvalid (former WarpingSPSComputationEdgeAbsTilt)
// - SingleColumnMeasurePolicy: (columnMeasure)
//   - SingleColumnMeasurePolicyAbs (former WarpingSPSComputation*Abs)
//   - SingleColumnMeasurePolicyAbsAccu (former WarpingSPSComputation*AbsTilt
// - NormalizePolicy: (normalization, reArrange, unReArrange)
//   - NonRearranged (virtual, included in former WarpingSPSComputationSingle,
//                    reArrange and unReArrange just copy,
//                    normalization virtual, for both stack and single)
//     - Single*Abs (former WarpingSPSComputationEdgeAbs1)
//   - Single*AbsRearranged (former WarpingSPSComputationEdgeAbs2/Alt or
//                    WarpingSPSComputationHarrisAbs2)
// - MeasurePolicy: (jointMeasure, measureMax) (for both single and stack)
//   - NSADA (former WarpingSPSComputationEdgeNSADA1)
//   - NSADNSADA (former WarpingSPSComputationEdgeNSADNSADA1)
//   - ASCDirectRearranged (former WarpingSPSComputationASCDirect2)
//   - NSADRearranged (former WarpingSPSComputationEdgeNSAD2/Alt or
//                     WarpingSPSComputationHarrisNSAD2)
//   - NSADARearranged (former WarpingSPSComputationEdgeNSADA2)
//   - NSADNSADARearranged (former WarpingSPSComputationEdgeNSADNSADA2)
//   - NSADInvalid (former WarpingSPSComputationNSADTilt or
//                               WarpingSPSComputationEdgeNSADTilt)
//
// Example usage: Preprocess first, simple image ops, edge filtered
//                preprocessing, rearranged abs normalization (non inverted),
//                NSAD measure
// ```
// using ns_simd::modular_sps_computation;
// WarpingSPSComputation* spsComp = new Single<
//        SPS_COMPUTATION_TEMPLATE_ARGUMENTS, false,
//        ImageOpsPolicySimple<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
//        SinglePreprocessingPolicyEdge<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
//        SingleNormalizePolicyAbsRearranged<SPS_COMPUTATION_TEMPLATE_ARGUMENTS,
//                                           0>,
//        SingleMeasurePolicyNSADRearranged<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>
//        >();
// ```
// TODO: example is outdated, please consult WarpingFactories.H
#define SPS_COMPUTATION_TEMPLATE_PARAMETER                                     \
  typename ImgType, typename ProcType, typename MeasType, typename SPSType,    \
    size_t SIMD_WIDTH, size_t SIMD_ALIGN
#define SPS_COMPUTATION_TEMPLATE_ARGUMENTS                                     \
  ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH, SIMD_ALIGN

template <SPS_COMPUTATION_TEMPLATE_PARAMETER, bool MAGNIFY_FIRST,
          class ImageOpsPolicy, class SinglePreprocessingPolicy,
          class SingleNormalizePolicy, class SingleMeasurePolicy,
          class SingleColumnMeasurePolicy>
class Single : public WarpingSPSComputation<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>
{
protected:
  // computeSPS should store input images
  bool storeSPSInput;
  // input images in sps computation
  std::vector<SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama>> ssInputs,
    cvInputs;

  // compute SPS and intermediate input images
  // 27. Feb 18 (rm): vert.res. and horizon taken from images
  void computeSPSInput(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    const std::vector<double> &scaleFactors, int interpolation,
    const std::vector<double> &pixelScale, double postScale,
    WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps)
  {
    storeSPSInput = true;
    ssInputs.resize(scaleFactors.size());
    cvInputs.resize(scaleFactors.size());
    this->computeSPS(ss, cv, scaleFactors, interpolation, pixelScale, postScale,
                     sps);
    storeSPSInput = false;
  }

public:
  // ======================== ctor, dtor =========================

  Single(typename SinglePreprocessingPolicy::Parameter preproc_param)
    : WarpingSPSComputation<ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH,
                            SIMD_ALIGN>(),
      storeSPSInput(false),
      singlePreprocessingPolicy(SinglePreprocessingPolicy(preproc_param))
  {}

  virtual ~Single() {}

  virtual void computeSPS(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    const std::vector<double> &scaleFactors, int interpolation,
    const std::vector<double> &pixelScale, double postScale,
    WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps)
  {
    if (pixelScale.size() != 1)
      throw SIMDException("WarpingSPSComputation1Alt::computeSPS",
                          "invalid size of pixelScale");
    const int w = sps.param.w, h = ss.h;
    if ((h != cv.h) || (ss.w != cv.w) || (w != ss.w)) {
      char errStr[256];
      sprintf(errStr,
              "mismatch in ss, cv, sps dimensions: "
              "ss %d x %d, cv %d x %d, sps.param.w = %d",
              ss.w, ss.h, cv.w, cv.h, w);
      throw SIMDException("WarpingSPSComputation1Alt::computeSPS", errStr);
    }
    if (ss.addOn != cv.addOn) {
      char errStr[256];
      sprintf(errStr,
              "panorama parameters of ss (%g, %g) and cv (%g, %g) differ",
              ss.addOn.verticalResolution, ss.addOn.horizon,
              cv.addOn.verticalResolution, cv.addOn.horizon);
      throw SIMDException("WarpingSPSComputation1Alt::computeSPS", errStr);
    }
    // check validity for given image width
    if (!this->validForWidth(w))
      throw SIMDException("WarpingSPSComputation1Alt::computeSPS",
                          "computation not possible for given image width");
    // get input images
    // convert from input type to preprocessing type
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> ssOrigF, cvOrigF;
    ImageOpsPolicy::convertImage(ss, ssOrigF);
    ImageOpsPolicy::convertImage(cv, cvOrigF);
    // preprocess input images
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> ssF, cvF;
    singlePreprocessingPolicy.preprocessing(considersInvalid, ssOrigF, ssF);
    singlePreprocessingPolicy.preprocessing(considersInvalid, cvOrigF, cvF);
    // we first process the unmagnified images since the results are needed
    // multiple times
    // 2. Mar 18 (rm): *SR images are the re-arranged versions,
    // earlier in-place re-arrange required heap operations (width differs)
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> ssS, cvS, magS, ssSR,
      cvSR, magSR, *cvSPtr, *ssSPtr;
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> ssMeasureS, cvMeasureS,
      cvMeasFinal, ssMeasFinal, combMeas, magMeasureS, jointMeas,
      *cvMeasureSPtr, *ssMeasureSPtr;
    ImageOpsPolicy::copyImage(cvF, pixelScale[0], cvS);
    SingleNormalizePolicy::reArrange(cvS, cvSR, sps.param);
    SingleColumnMeasurePolicy::columnMeasure(considersInvalid, cvSR,
                                             cvMeasureS);
    ImageOpsPolicy::copyImage(ssF, pixelScale[0], ssS);
    SingleNormalizePolicy::reArrange(ssS, ssSR, sps.param);
    SingleColumnMeasurePolicy::columnMeasure(considersInvalid, ssSR,
                                             ssMeasureS);
    // create all scale plane images
    for (unsigned int spIndex = 0; spIndex < scaleFactors.size(); spIndex++) {
      // edge images are scaled
      double scale = scaleFactors[spIndex];

      // printf("spIndex %u, scale %g\n", spIndex, scale);
      if (scale > 1.0) {
        // ===== magnify cv by 1/scale and use unmodified ss =====
        if (MAGNIFY_FIRST) {
          SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> magF, magFPre;
          magnifyAndScale(cvOrigF, interpolation, 1.0 / scale, 1.0, magF);
          singlePreprocessingPolicy.preprocessing(considersInvalid, magF,
                                                  magFPre);
          ImageOpsPolicy::copyImage(magFPre, pixelScale[0], magS);
        } else {
          ImageOpsPolicy::magnifyImage(cvF, interpolation, 1.0 / scale,
                                       pixelScale[0], magS);
        }
        SingleNormalizePolicy::reArrange(magS, magSR, sps.param);
        cvSPtr = &magSR;
        SingleColumnMeasurePolicy::columnMeasure(considersInvalid, magSR,
                                                 magMeasureS);
        cvMeasureSPtr = &magMeasureS;
        ssSPtr        = &ssSR;
        ssMeasureSPtr = &ssMeasureS;

      } else if (scale < 1.0) {
        // ===== magnify ss by scale and use unmodified cv =====
        cvSPtr        = &cvSR;
        cvMeasureSPtr = &cvMeasureS;
        if (MAGNIFY_FIRST) {
          SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> magF, magFPre;
          magnifyAndScale(ssOrigF, interpolation, scale, 1 / scale, magF);
          singlePreprocessingPolicy.preprocessing(considersInvalid, magF,
                                                  magFPre);
          ImageOpsPolicy::copyImage(magFPre, pixelScale[0], magS);
        } else {
          ImageOpsPolicy::magnifyImage(ssF, interpolation, scale, pixelScale[0],
                                       magS);
        }
        SingleNormalizePolicy::reArrange(magS, magSR, sps.param);
        ssSPtr = &magSR;
        SingleColumnMeasurePolicy::columnMeasure(considersInvalid, magSR,
                                                 magMeasureS);
        ssMeasureSPtr = &magMeasureS;

      } else {
        // ===== scale = 1.0: use unmodified ss and cv =====
        cvSPtr        = &cvSR;
        cvMeasureSPtr = &cvMeasureS;
        ssSPtr        = &ssSR;
        ssMeasureSPtr = &ssMeasureS;
      }
      // store input images if requested
      if (this->storeSPSInput) {
        // 27. Jul 18 (rm)
        SingleNormalizePolicy::unReArrange(*ssSPtr, this->ssInputs[spIndex],
                                           sps.param);
        SingleNormalizePolicy::unReArrange(*cvSPtr, this->cvInputs[spIndex],
                                           sps.param);
        // this->ssInputs[spIndex] = *ssSPtr;
        // this->cvInputs[spIndex] = *cvSPtr;
      }
      // compute distance term
      SingleMeasurePolicy::jointMeasure(rearranged, considersInvalid, *cvSPtr,
                                        *ssSPtr, *cvMeasureSPtr, *ssMeasureSPtr,
                                        jointMeas, cvMeasFinal, ssMeasFinal,
                                        combMeas, sps.param);
      // compute normalized measure
      SingleNormalizePolicy::normalization(
        considersInvalid, jointMeas, ssMeasFinal, cvMeasFinal, combMeas,
        postScale, sps.stack[spIndex], sps.param);
    }
    sps.complement();
  }

  std::vector<double> maxDenom(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img)
  {
    std::vector<double> md(1);
    // all processing is done in SIMDFloat to avoid overflow
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> inputImg, preprocImg;
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN> measImg;
    ImageOpsPolicy::convertImage(img, inputImg);
    this->singlePreprocessingPolicy.preprocessing(considersInvalid, inputImg,
                                                  preprocImg);
    SingleColumnMeasurePolicy::columnMeasure(considersInvalid, preprocImg,
                                             measImg);
    md[0] = (2.0 * max(measImg));
    return md;
  };

  int numPreprocs() const { return 1; };

  // if computed with real numbers, maximal value of the normalized measure
  // (used for WarpingSPSComputation::idealPostScale())
  virtual double measureMax() const
  {
    return SingleMeasurePolicy::measureMax();
  };

  // compute a diagram showing all intermediate input images for SPS
  // 27. Feb 18 (rm): vert.res. and hor. taken from images
  virtual void computeSPSInputDiagram(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    const std::vector<double> &scaleFactors, int interpolation,
    const std::vector<double> &pixelScale, double postScale,
    WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps,
    // outputs:
    MeasType &allMax, MeasType &allMin, MeasType &allRange,
    SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN> &spsInput)
  {
    computeSPSInput(ss, cv, scaleFactors, interpolation, pixelScale, postScale,
                    sps);
    unsigned nPlanes = scaleFactors.size();
    MeasType invalid = SIMDTypeInfo<MeasType>::max();
    // first: determine max and min over all images
    allMax = SIMDTypeInfo<MeasType>::min();
    allMin = SIMDTypeInfo<MeasType>::max();
    for (unsigned planeIdx = 0; planeIdx < nPlanes; planeIdx++) {
      MeasType _min, _max;
      _max   = ImageOpsPolicy::considersInvalidPixels ?
                 maxExcept(ssInputs[planeIdx], invalid) :
                 max(ssInputs[planeIdx]);
      _min   = min(ssInputs[planeIdx]);
      allMax = std::max(allMax, _max);
      allMin = std::min(allMin, _min);
      _max   = ImageOpsPolicy::considersInvalidPixels ?
                 maxExcept(cvInputs[planeIdx], invalid) :
                 max(cvInputs[planeIdx]);
      _min   = min(cvInputs[planeIdx]);
      allMax = std::max(allMax, _max);
      allMin = std::max(allMin, _min);
    }
    allRange = std::max(allMax, MeasType(-allMin));
    // write into same image
    SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN> tmp;
    int w = ssInputs[0].w, h = ssInputs[0].h;
    const int margin = SIMDVec<SIMDByte, SIMD_WIDTH>::elements;
    spsInput.resize(2 * (w + margin) + margin, nPlanes * (h + margin) + margin);
    spsInput.fill(255);
    double shift = 128.0, scale = 255.0 / allRange;
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> tmpSS, tmpCV;
    for (unsigned planeIdx = 0; planeIdx < nPlanes; planeIdx++) {
      if (ImageOpsPolicy::considersInvalidPixels) {
        replace(ssInputs[planeIdx], invalid, allRange, tmpSS);
        replace(cvInputs[planeIdx], invalid, allRange, tmpCV);
      } else {
        tmpSS.view(ssInputs[planeIdx]);
        tmpCV.view(cvInputs[planeIdx]);
      }
      copyScaleAndShift(tmpSS, scale, shift, tmp);
      insert(tmp, margin, margin + planeIdx * (h + margin), spsInput);
      copyScaleAndShift(tmpCV, scale, shift, tmp);
      insert(tmp, w + 2 * margin, margin + planeIdx * (h + margin), spsInput);
    }
  }

private:
  SinglePreprocessingPolicy singlePreprocessingPolicy;

  // check whether input images with given width could be processed
  // this definition should be useful for many cases:
  virtual bool validForWidth(int width) const
  {
    return
      // ProcType->MeasType: uses magnifyImage, copyImage:
      ((width % numSIMDVecsElements<MeasType, ProcType, SIMD_WIDTH>() == 0) &&
       // MeasType->SPSType: uses computeScalePlaneNormalizedAdd:
       (width % numSIMDVecsElements<SPSType, MeasType, SIMD_WIDTH>() == 0));
  }

  static const Rearranged<SingleNormalizePolicy::isRearranged> rearranged;
  static const ConsidersInvalid<ImageOpsPolicy::considersInvalidPixels>
    considersInvalid;
};

// To prevent clang++ warning for c++98 (no instantiation of variable). Can't be
// in class, because it is static (this is relaxed in c++17). This is meant to
// (most likely) be removed with compiler optimization (empty struct and unused
// variables)
template <SPS_COMPUTATION_TEMPLATE_PARAMETER, bool MAGNIFY_FIRST,
          class ImageOpsPolicy, class SinglePreprocessingPolicy,
          class SingleNormalizePolicy, class SingleMeasurePolicy,
          class SingleColumnMeasurePolicy>
const Rearranged<SingleNormalizePolicy::isRearranged>
  Single<SPS_COMPUTATION_TEMPLATE_ARGUMENTS, MAGNIFY_FIRST, ImageOpsPolicy,
         SinglePreprocessingPolicy, SingleNormalizePolicy, SingleMeasurePolicy,
         SingleColumnMeasurePolicy>::rearranged = {};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER, bool MAGNIFY_FIRST,
          class ImageOpsPolicy, class SinglePreprocessingPolicy,
          class SingleNormalizePolicy, class SingleMeasurePolicy,
          class SingleColumnMeasurePolicy>
const ConsidersInvalid<ImageOpsPolicy::considersInvalidPixels>
  Single<SPS_COMPUTATION_TEMPLATE_ARGUMENTS, MAGNIFY_FIRST, ImageOpsPolicy,
         SinglePreprocessingPolicy, SingleNormalizePolicy, SingleMeasurePolicy,
         SingleColumnMeasurePolicy>::considersInvalid = {};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER>
class ImageOpsPolicySimple
{
public:
  static const bool considersInvalidPixels = false;

  static void convertImage(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &in,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &out)
  {
    // TODO: this assignment is based on type casts, is that always ok?
    // TODO: what is actually happening between signed/unsigned types and
    // TODO: between integer/float types?
    out = in;
  }

  static void magnifyImage(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    int interpolation, double magnifyScale, double multiplyScale,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outImg)
  {
    magnifyAndScale(img, interpolation, magnifyScale, multiplyScale, outImg);
  }

  static void copyImage(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    double multiplyScale,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outImg)
  {
    copyAndScale(img, multiplyScale, outImg);
  }

  static void copyStack(
    const SIMDStack<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &stk,
    const std::vector<double> &multiplyScale,
    SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outStk)
  {
    copyAndScale(stk, multiplyScale, outStk);
  }
};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER>
class SingleImageOpsPolicyInvalid
{
public:
  static const bool considersInvalidPixels = true;

  // convert image: keep values from ImgType, but use invalid value
  // for proc type
  // if value is invalid (max(ImgType)) in input image, then this
  // value is set to max(ProcType)

  static void convertImage(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &in,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &out)
  {
    // code assumes that ProcType is larger or equal in size then ImgType
    static_assert(sizeof(ImgType) <= sizeof(ProcType), "");

    const int numElems = numSIMDVecsElements<ImgType, ProcType, SIMD_WIDTH>();
    const size_t size  = in.size;

    const int numInVecs  = numInputSIMDVecs<ProcType, ImgType>();
    const int numOutVecs = numOutputSIMDVecs<ProcType, ImgType>();

    SIMDVec<ImgType, SIMD_WIDTH> inVecs[numInVecs];
    SIMDVec<ProcType, SIMD_WIDTH> convertedInVecs[numOutVecs];
    SIMDVec<ProcType, SIMD_WIDTH> outVecs[numOutVecs];
    // the invalid value is needed in ProcType for comparison
    SIMDVec<ProcType, SIMD_WIDTH> maxVecIn;
    SIMDVec<ProcType, SIMD_WIDTH> maxVecOut;
    SIMDVec<ProcType, SIMD_WIDTH> cmp;

    maxVecIn =
      set1<ProcType, SIMD_WIDTH>((ProcType) (SIMDTypeInfo<ImgType>::max()));
    maxVecOut = set1<ProcType, SIMD_WIDTH>(SIMDTypeInfo<ProcType>::max());
    out.resize(in.w, in.h, in.addOn);

    ProcType *dst = out.data;

    for (size_t i = 0; i < size; i += numElems) {
      inVecs[0] = load<SIMD_WIDTH>(in.data + i);
      convert(inVecs, convertedInVecs);
      for (int j = 0; j < numOutVecs; j++) {
        cmp        = cmpeq(convertedInVecs[j], maxVecIn);
        outVecs[j] = ifelse(cmp, maxVecOut, convertedInVecs[j]);
      }
      store(dst, outVecs, numOutVecs);
      dst += numElems;
    }
  }

  // magnify and scale image
  static void magnifyImage(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    int interpolation, double magnifyScale, double multiplyScale,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outImg)
  {
    magnifyAndScaleTilt(img, interpolation, magnifyScale, multiplyScale,
                        outImg);
  }

  // copy and scale image
  static void copyImage(
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    double multiplyScale,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &outImg)
  {
    copyAndScaleTilt(img, multiplyScale, outImg);
  }
};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER>
class SinglePreprocessingPolicyEdge
{
public:
  class Parameter
  {};

  // ctor
  SinglePreprocessingPolicyEdge(SinglePreprocessingPolicyEdge::Parameter) {};

  static void preprocessing(
    ConsidersInvalid<false>,
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &preprocessed)
  {
    verticalEdgeFilter(input, preprocessed);
  }

  static void preprocessing(
    ConsidersInvalid<true>,
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &output)
  {
    verticalEdgeFilterTilt(input, output);
  }
};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER>
class SinglePreprocessingPolicyNon
{
public:
  class Parameter
  {};

  // ctor
  SinglePreprocessingPolicyNon(SinglePreprocessingPolicyNon::Parameter) {};

  template <bool REARRANGED>
  static void preprocessing(
    ConsidersInvalid<REARRANGED>,
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &output)
  {
    //  verticalEdgeFilter(input, output);
    // we use the original images here:
    // images are edge-filtered in advance!
    output = input;
  }
};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER, int NORMALIZE, bool VARIANT,
          HarrisOutputSelector HOS>
class SinglePreprocessingPolicyHarris
{
public:
  class Parameter
  {
  public:
    Parameter(double k, int binomialFilterCount)
      : k(k), binomialFilterCount(binomialFilterCount)
    {}
    double k;
    int binomialFilterCount;
  };

  // ctor
  SinglePreprocessingPolicyHarris(
    SinglePreprocessingPolicyHarris::Parameter param)
    : k(param.k), binomialFilterCount(param.binomialFilterCount) {};

  void preprocessing(
    ConsidersInvalid<false>,
    const SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &jointMeas)
  {
    SIMDStack<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, Panorama> jointMeasStk(
      1, input.w, input.h);
    harrisFilterCyclic<NORMALIZE, VARIANT, HOS>(input, jointMeasStk, this->k,
                                                this->binomialFilterCount);
    jointMeas.view(jointMeasStk[0]);
  }

private:
  double k;
  int binomialFilterCount;
};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER>
class SingleColumnMeasurePolicyAbs
{
public:
  template <typename T>
  static void columnMeasure(
    ConsidersInvalid<false>,
    const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &colMeas)
  {
    sumOfAbs(input, colMeas);
  }
};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER>
class SingleColumnMeasurePolicyAbsAccu
{
public:
  template <typename T>
  static void columnMeasure(
    ConsidersInvalid<true>,
    const SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDImage<T, SIMD_WIDTH, SIMD_ALIGN> &colMeas)
  {
    sumOfAbsAccuInvalid(input, colMeas);
  }
};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER>
class NormalizePolicyNonRearranged
{
public:
  static const bool isRearranged = false;

  // re-arrange image (makeView instead of pure virtual)
  static void reArrange(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &imgR,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // TODO: this is fast but may be dangerous, true copy may be advisable
    imgR.view(img);
    // imgR = img;
  }

  // un-re-arrange image (copy instead of pure virtual)
  // typically used for visualization, may be slow
  static void unReArrange(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &imgR,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // this doesn't work, true copy is needed
    // img.view(imgR);
    img = imgR;
  }

  // re-arrange image (makeView instead of pure virtual)
  static void reArrange(
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &stk,
    SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &stkR,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // TODO: this is fast but may be dangerous, true copy may be advisable
    // TODO: bv: enable following when SIMDStack has view function
    // stkR.view(stk);
    stkR = stk;
  }

  // un-re-arrange image (copy instead of pure virtual)
  // typically used for visualization, may be slow
  static void unReArrange(
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &stkR,
    SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &stk,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // this doesn't work, true copy is needed
    // stk.view(stkR);
    stk = stkR;
  }
};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER>
class SingleNormalizePolicyAbs
  : public NormalizePolicyNonRearranged<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>
{
public:
  static void normalization(
    ConsidersInvalid<false>,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &ssMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &cvMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &, double postScale,
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    computeScalePlaneNormalizedAdd1<false>(jointMeasure, ssMeasure, cvMeasure,
                                           par.wSPS, par.modulo2wpw,
                                           par.shuffle, postScale, scalePlane);
  }

  static void normalization(
    ConsidersInvalid<true>,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &combinedMeasure,
    double postScale, SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // here we only use the combined measure
    computeScalePlaneNormalizedAdd1Tilt<false>(
      jointMeasure, combinedMeasure, par.wSPS, par.modulo2wpw, par.shuffle,
      postScale, scalePlane);
  }
};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER>
class SingleNormalizePolicyAbsRearranged
{
public:
  static const bool isRearranged = true;

  static void normalization(
    ConsidersInvalid<false>,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &ssMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &cvMeasure,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &, double postScale,
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    computeScalePlaneNormalizedAdd2<false>(
      jointMeasure, ssMeasure, cvMeasure, par.w, par.wSPS, par.stepAlpha,
      par.nAlpha, par.blkSize, par.modNAlpha, par.shuffleModulo, par.unshuffle,
      postScale, scalePlane);
  }

  static void reArrange(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &imgR,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    swizzleCyclic(img, par.stepAlpha, numInputSIMDVecs<SPSType, MeasType>(),
                  imgR);
  }

  static void unReArrange(
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &imgR,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // serial, slow!
    unSwizzleCyclic(imgR, par.stepAlpha, numInputSIMDVecs<SPSType, MeasType>(),
                    img);
  }
};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER>
class SingleMeasurePolicyNSADA
{
public:
  static void jointMeasure(
    Rearranged<false>, ConsidersInvalid<false>,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // puts("NSADA");
    normSumAbsDiffAbsTerm1(input1, input2, jointMeas);
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  static void jointMeasure(
    Rearranged<true>, ConsidersInvalid<false>,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // puts("NSADA");
    normSumAbsDiffAbsTerm2(input1, input2, par.w, par.wSPS, par.stepAlpha,
                           par.nAlpha, par.blkSize, par.modNAlpha, jointMeas);
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  // NSAD measure is in [0,1]
  static double measureMax() { return 1.0; }
};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER>
class SingleMeasurePolicyNSADNSADA
{
public:
  static void jointMeasure(
    Rearranged<false>, ConsidersInvalid<false>,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // puts("NSAD-NSADA");
    normSumAvgAbsDiffAbsDiffAbsTerm1(input1, input2, jointMeas);
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  static void jointMeasure(
    Rearranged<true>, ConsidersInvalid<false>,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // puts("NSAD-NSADA");
    normSumAvgAbsDiffAbsDiffAbsTerm2(input1, input2, par.w, par.wSPS,
                                     par.stepAlpha, par.nAlpha, par.blkSize,
                                     par.modNAlpha, jointMeas);
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  // NSAD measure is in [0,1]
  static double measureMax() { return 1.0; }
};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER>
class SingleMeasurePolicyASCDirect
{
public:
  static void jointMeasure(
    Rearranged<true>, ConsidersInvalid<false>,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    ascDirectTerm(input1, input2, par.w, par.wSPS, par.stepAlpha, par.nAlpha,
                  par.blkSize, par.modNAlpha, jointMeas);
    // colMeas1 = colMeasRaw1;
    // colMeas2 = colMeasRaw2;
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  // ASCDirect in [0,2]
  static double measureMax() { return 2.0; }
};

// ============================================================================
// Stack
// ============================================================================
// Stack is the base class for multiple preprocessing outputs. It is based on
// former WarpingSPSComputationStack and WarpingSPSComputationSNSAD. It
// implements all virtual functions of WarpingSPSComputation using static
// functions of policy classes given by template parameters:
//
// TODO: maybe split normalization and rearrange
// TODO: Preproc or magnify first?

template <SPS_COMPUTATION_TEMPLATE_PARAMETER, int NPREPROCS,
          class ImageOpsPolicy, class StackPreprocessingPolicy,
          class StackNormalizePolicy, class MeasurePolicy,
          class StackColumnMeasurePolicy>
class Stack : public WarpingSPSComputation<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>
{
protected:
  // computeSPS should store input images
  bool storeSPSInput;
  // input images in sps computation
  std::vector<SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama>> ssInputs,
    cvInputs;

  // ===================== non-virtual methods ===========================

  // compute SPS and intermediate input images
  // 27. Feb 18 (rm): vert.res. and horizon taken from images
  void computeSPSInput(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    const std::vector<double> &scaleFactors, int interpolation,
    const std::vector<double> &pixelScale, double postScale,
    WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps)
  {
    storeSPSInput = true;
    ssInputs.resize(scaleFactors.size());
    cvInputs.resize(scaleFactors.size());
    this->computeSPS(ss, cv, scaleFactors, interpolation, pixelScale, postScale,
                     sps);
    storeSPSInput = false;
  }

public:
  // ======================== ctor, dtor =========================

  Stack(typename StackPreprocessingPolicy::Parameter preproc_param,
        typename StackNormalizePolicy::Parameter normalize_param)
    : WarpingSPSComputation<ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH,
                            SIMD_ALIGN>(),
      storeSPSInput(false),
      stackPreprocessingPolicy(StackPreprocessingPolicy(preproc_param)),
      stackNormalizePolicy(StackNormalizePolicy(normalize_param))
  {}

  virtual ~Stack() {}

  // computation of scale-plane stack
  // (not possible to restrict ImgType to this function since
  // templates may not be virtual)
  void computeSPS(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    const std::vector<double> &scaleFactors, int interpolation,
    const std::vector<double> &pixelScale, double postScale,
    WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps)
  {
    if (pixelScale.size() != (size_t) NPREPROCS)
      throw SIMDException("WarpingSPSComputationSNSAD::computeSPS",
                          "pixelScale array has wrong size");
    const int w = sps.param.w, h = ss.h;
    if ((h != cv.h) || (ss.w != cv.w) || (w != ss.w)) {
      char errStr[256];
      sprintf(errStr,
              "mismatch in ss, cv, sps dimensions: "
              "ss %d x %d, cv %d x %d, sps.param.w = %d",
              ss.w, ss.h, cv.w, cv.h, w);
      throw SIMDException("WarpingSPSComputationSNSAD::computeSPS", errStr);
    }
    if (ss.addOn != cv.addOn) {
      char errStr[256];
      sprintf(errStr,
              "panorama parameters of ss (%g, %g) and cv (%g, %g) differ",
              ss.addOn.verticalResolution, ss.addOn.horizon,
              cv.addOn.verticalResolution, cv.addOn.horizon);
      throw SIMDException("WarpingSPSComputationSNSAD::computeSPS", errStr);
    }
    // check validity for given image width
    if (!this->validForWidth(w))
      throw SIMDException("WarpingSPSComputationSNSAD::computeSPS",
                          "computation not possible for given image width");
    // get input images
    // convert from input type to preprocessing type
    SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> ssOrigF, cvOrigF;
    ImageOpsPolicy::convertImage(ss, ssOrigF);
    ImageOpsPolicy::convertImage(cv, cvOrigF);
    // preprocess input images
    SIMDStack<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> ssF, cvF;
    stackPreprocessingPolicy.preprocessing(considersInvalid, ssOrigF, ssF);
    stackPreprocessingPolicy.preprocessing(considersInvalid, cvOrigF, cvF);
    // we first process the unmagnified images since the results are needed
    // multiple times
    // 2. Mar 18 (rm): *SR images are the re-arranged versions,
    // earlier in-place re-arrange required heap operations (width differs)
    SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> ssS, cvS, magS, ssSR,
      cvSR, magSR, *cvSPtr, *ssSPtr;
    SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> ssMeasureS, cvMeasureS,
      cvMeasFinal, ssMeasFinal, combMeas, magMeasureS, jointMeas,
      *cvMeasureSPtr, *ssMeasureSPtr;
    ImageOpsPolicy::copyStack(cvF, pixelScale, cvS);
    StackNormalizePolicy::reArrange(cvS, cvSR, sps.param);
    StackColumnMeasurePolicy::columnMeasure(considersInvalid, cvSR, cvMeasureS);
    ImageOpsPolicy::copyStack(ssF, pixelScale, ssS);
    StackNormalizePolicy::reArrange(ssS, ssSR, sps.param);
    StackColumnMeasurePolicy::columnMeasure(considersInvalid, ssSR, ssMeasureS);

    // create all scale plane images
    for (unsigned int spIndex = 0; spIndex < scaleFactors.size(); spIndex++) {
      // edge images are scaled
      double scale = scaleFactors[spIndex];

      // printf("spIndex %u, scale %g\n", spIndex, scale);
      if (scale > 1.0) {
        // ===== magnify cv by 1/scale and use unmodified ss =====
        SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> magF;
        SIMDStack<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> magFPre;
        magnifyAndScale(cvOrigF, interpolation, 1.0 / scale, 1.0, magF);
        stackPreprocessingPolicy.preprocessing(considersInvalid, magF, magFPre);
        ImageOpsPolicy::copyStack(magFPre, pixelScale, magS);
        StackNormalizePolicy::reArrange(magS, magSR, sps.param);
        cvSPtr = &magSR;
        StackColumnMeasurePolicy::columnMeasure(considersInvalid, magSR,
                                                magMeasureS);
        cvMeasureSPtr = &magMeasureS;
        ssSPtr        = &ssSR;
        ssMeasureSPtr = &ssMeasureS;

      } else if (scale < 1.0) {
        // ===== magnify ss by scale and use unmodified cv =====
        cvSPtr        = &cvSR;
        cvMeasureSPtr = &cvMeasureS;
        SIMDImage<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> magF;
        SIMDStack<ProcType, SIMD_WIDTH, SIMD_ALIGN, Panorama> magFPre;
        magnifyAndScale(ssOrigF, interpolation, scale, 1, magF);
        stackPreprocessingPolicy.preprocessing(considersInvalid, magF, magFPre);
        ImageOpsPolicy::copyStack(magFPre, pixelScale, magS);
        StackNormalizePolicy::reArrange(magS, magSR, sps.param);
        ssSPtr = &magSR;
        StackColumnMeasurePolicy::columnMeasure(considersInvalid, magSR,
                                                magMeasureS);
        ssMeasureSPtr = &magMeasureS;

      } else {
        // ===== scale = 1.0: use unmodified ss and cv =====
        cvSPtr        = &cvSR;
        cvMeasureSPtr = &cvMeasureS;
        ssSPtr        = &ssSR;
        ssMeasureSPtr = &ssMeasureS;
      }
      // store input images if requested
      if (this->storeSPSInput) {
        // 27. Jul 18 (rm)
        StackNormalizePolicy::unReArrange(*ssSPtr, this->ssInputs[spIndex],
                                          sps.param);
        StackNormalizePolicy::unReArrange(*cvSPtr, this->cvInputs[spIndex],
                                          sps.param);
        // this->ssInputs[spIndex] = *ssSPtr;
        // this->cvInputs[spIndex] = *cvSPtr;
      }
      // compute distance term
      MeasurePolicy::jointMeasure(rearranged, considersInvalid, *cvSPtr,
                                  *ssSPtr, jointMeas, sps.param);
      // compute normalized measure
      stackNormalizePolicy.normalization(
        considersInvalid, jointMeas, *ssMeasureSPtr, *cvMeasureSPtr, combMeas,
        postScale, sps.stack[spIndex], sps.param);
    }
    sps.complement();
  }

  // compute a diagram showing all intermediate input images for SPS
  // 27. Feb 18 (rm): vert.res. and hor. taken from images
  void computeSPSInputDiagram(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
    const std::vector<double> &scaleFactors, int interpolation,
    const std::vector<double> &pixelScale, double postScale,
    WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps,
    // outputs:
    MeasType &allMax, MeasType &allMin, MeasType &allRange,
    SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN> &spsInput)
  {
    // TODO: this always shows only the following preprocessing image
    computeSPSInput(ss, cv, scaleFactors, interpolation, pixelScale, postScale,
                    sps);
    unsigned nPlanes = scaleFactors.size();
    // first: determine max and min over all images
    allMax = SIMDTypeInfo<MeasType>::min();
    allMin = SIMDTypeInfo<MeasType>::max();
    for (unsigned planeIdx = 0; planeIdx < nPlanes; planeIdx++) {
      for (int d = 0; d < this->numPreprocs(); d++) {
        MeasType _min, _max;
        _max   = max(ssInputs[planeIdx][d]);
        _min   = min(ssInputs[planeIdx][d]);
        allMax = std::max(allMax, _max);
        allMin = std::min(allMin, _min);
        _max   = max(cvInputs[planeIdx][d]);
        _min   = min(cvInputs[planeIdx][d]);
        allMax = std::max(allMax, _max);
        allMin = std::max(allMin, _min);
      }
    }
    allRange = std::max(allMax, MeasType(-allMin));
    // write into same image
    SIMDImage<SIMDByte, SIMD_WIDTH, SIMD_ALIGN> tmp;
    // asserting all preprocs have same width and height
    int w = ssInputs[0][0].w, h = ssInputs[0][0].h;
    const int margin = SIMDVec<SIMDByte, SIMD_WIDTH>::elements;
    spsInput.resize(this->numPreprocs() * 2 * (w + margin) + margin,
                    nPlanes * (h + margin) + margin);
    spsInput.fill(255);
    double shift = 128.0, scale = 255.0 / allRange;
    int verticalOffset = 0;
    // TODO: replace numPreprocs with NPREPROCS
    for (int d = 0; d < this->numPreprocs(); d++) {
      for (unsigned planeIdx = 0; planeIdx < nPlanes; planeIdx++) {
        copyScaleAndShift(ssInputs[planeIdx][d], scale, shift, tmp);
        insert(tmp, verticalOffset + margin, margin + planeIdx * (h + margin),
               spsInput);
        copyScaleAndShift(cvInputs[planeIdx][d], scale, shift, tmp);
        insert(tmp, verticalOffset + w + 2 * margin,
               margin + planeIdx * (h + margin), spsInput);
      }
      verticalOffset += 2 * w + 2 * margin;
    }
  }

  int numPreprocs() const { return NPREPROCS; }

  std::vector<double> maxDenom(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img)
  {
    return stackPreprocessingPolicy.maxDenom(img);
  };

  // if computed with real numbers, maximal value of the normalized measure
  // (used for WarpingSPSComputation::idealPostScale())
  virtual double measureMax() const { return MeasurePolicy::measureMax(); };

private:
  // check whether input images with given width could be processed
  // this definition should be useful for many cases:
  virtual bool validForWidth(int width) const
  {
    return
      // ProcType->MeasType: uses magnifyImage, copyImage:
      ((width % numSIMDVecsElements<MeasType, ProcType, SIMD_WIDTH>() == 0) &&
       // MeasType->SPSType: uses computeScalePlaneNormalizedAdd:
       (width % numSIMDVecsElements<SPSType, MeasType, SIMD_WIDTH>() == 0));
  }

  static const Rearranged<StackNormalizePolicy::isRearranged> rearranged;
  static const ConsidersInvalid<ImageOpsPolicy::considersInvalidPixels>
    considersInvalid;

  StackPreprocessingPolicy stackPreprocessingPolicy;
  StackNormalizePolicy stackNormalizePolicy;
};

// To prevent clang++ warning for c++98 (no instantiation of variable). Can't be
// in class, because it is static (this is relaxed in c++17). This is meant to
// (most likely) be removed with compiler optimization (empty struct and unused
// variables)
template <SPS_COMPUTATION_TEMPLATE_PARAMETER, int NPREPROCS,
          class ImageOpsPolicy, class StackPreprocessingPolicy,
          class StackNormalizePolicy, class MeasurePolicy,
          class StackColumnMeasurePolicy>
const Rearranged<StackNormalizePolicy::isRearranged>
  Stack<SPS_COMPUTATION_TEMPLATE_ARGUMENTS, NPREPROCS, ImageOpsPolicy,
        StackPreprocessingPolicy, StackNormalizePolicy, MeasurePolicy,
        StackColumnMeasurePolicy>::rearranged = {};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER, int NPREPROCS,
          class ImageOpsPolicy, class StackPreprocessingPolicy,
          class StackNormalizePolicy, class MeasurePolicy,
          class StackColumnMeasurePolicy>
const ConsidersInvalid<ImageOpsPolicy::considersInvalidPixels>
  Stack<SPS_COMPUTATION_TEMPLATE_ARGUMENTS, NPREPROCS, ImageOpsPolicy,
        StackPreprocessingPolicy, StackNormalizePolicy, MeasurePolicy,
        StackColumnMeasurePolicy>::considersInvalid = {};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER, int NPREPROCS,
          HarrisOutputSelector HOS>
class StackPreprocessingPolicyHarris
{
public:
  class Parameter
  {
  public:
    Parameter(double k, int binomialFilterCount)
      : k(k), binomialFilterCount(binomialFilterCount)
    {}
    double k;
    int binomialFilterCount;
  };

  // ctor
  StackPreprocessingPolicyHarris(
    StackPreprocessingPolicyHarris::Parameter param)
    : k(param.k), binomialFilterCount(param.binomialFilterCount) {};

  // preprocessing applied to the input images
  void preprocessing(
    ConsidersInvalid<false>,
    const SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input,
    SIMDStack<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, Panorama> &output)
  {
    harrisFilterCyclic<2, 0, HOS>(input, output, k, binomialFilterCount);
  }

  std::vector<double> maxDenom(
    const SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &img)
  {
    std::vector<double> md(NPREPROCS);
    // all processing is done in SIMDFloat to avoid overflow
    SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, Panorama> inputImg;
    SIMDStack<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN, Panorama> preprocStk;
    SIMDImage<SIMDFloat, SIMD_WIDTH, SIMD_ALIGN> sumOfAbsImg;
    inputImg = img;
    harrisFilterCyclic<2, 0, HOS>(inputImg, preprocStk, k, binomialFilterCount);
    for (unsigned int pp = 0; pp < NPREPROCS; pp++) {
      sumOfAbs(preprocStk[pp], sumOfAbsImg);
      // 2.0* : two sums are added in the denominator
      md[pp] = 2.0 * max(sumOfAbsImg);
    }
    return md;
  }

private:
  double k;
  int binomialFilterCount;
};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER, int NPREPROCS>
class StackColumnMeasurePolicyAbs
{
public:
  template <typename T>
  static void columnMeasure(
    ConsidersInvalid<false>,
    const SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN, Panorama> &in,
    SIMDStack<T, SIMD_WIDTH, SIMD_ALIGN> &jointMeas)
  {
    // jointMeas.h == 1 i.e. one value for each column
    jointMeas.resize(in.numPlanes, in.w, 1);
    // TODO: replace loop with own functions
    for (int i = 0; i < in.numPlanes; i++) { sumOfAbs(in[i], jointMeas[i]); }
  }
};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER, int NPREPROCS>
class StackNormalizePolicySigmoid
  : public NormalizePolicyNonRearranged<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>
{
public:
  class Parameter
  {
  public:
    Parameter(std::vector<double> w0, std::vector<double> w) : w0(w0), w(w) {}
    std::vector<double> w0;
    std::vector<double> w;
  };

  StackNormalizePolicySigmoid(Parameter param)
    : NormalizePolicyNonRearranged<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>(),
      w0(param.w0), w(param.w)
  {}

  // normalization of jointMeasure and ssMeasure/cvMeasure
  void normalization(
    ConsidersInvalid<false>,
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeasure,
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &ssMeasure,
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &cvMeasure,
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &, double postScale,
    SIMDImage<SPSType, SIMD_WIDTH, SIMD_ALIGN> &scalePlane,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    computeScalePlaneSigmoidNormalizedAdd1<false, NPREPROCS>(
      jointMeasure, ssMeasure, cvMeasure, par.wSPS, par.modulo2wpw, par.shuffle,
      this->w, this->w0, postScale, scalePlane);
  }

private:
  const std::vector<double> w0;
  const std::vector<double> w;
};

template <SPS_COMPUTATION_TEMPLATE_PARAMETER>
class MeasurePolicyNSAD
{
public:
  static void jointMeasure(
    Rearranged<false>, ConsidersInvalid<false>,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // puts("NSAD");
    normSumAbsDiffTerm1(input1, input2, jointMeas);
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  static void jointMeasure(
    Rearranged<true>, ConsidersInvalid<false>,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeas,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &,
    const WarpingParameter<SPSType, SIMD_WIDTH> &par)
  {
    // puts("NSAD");
    normSumAbsDiffTerm2(input1, input2, par.w, par.wSPS, par.stepAlpha,
                        par.nAlpha, par.blkSize, par.modNAlpha, jointMeas);
    colMeas1.view(colMeasRaw1);
    colMeas2.view(colMeasRaw2);
  }

  static void jointMeasure(
    Rearranged<false>, ConsidersInvalid<true>,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &input2,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw1,
    const SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeasRaw2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &output,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas1,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas2,
    SIMDImage<MeasType, SIMD_WIDTH, SIMD_ALIGN> &colMeas12,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // with NSAD match operator
    columnPairMatchingTilt1<MeasType, SIMD_WIDTH, SIMD_ALIGN,
                            MatchAbsDiff<MeasType, SIMD_WIDTH>>(
      input1, input2, output, colMeasRaw1, colMeasRaw2, colMeas1, colMeas2,
      colMeas12);
  }

  // Stack variant
  static void jointMeasure(
    Rearranged<false>, ConsidersInvalid<false>,
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &inputStk1,
    const SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &inputStk2,
    SIMDStack<MeasType, SIMD_WIDTH, SIMD_ALIGN> &jointMeasStk,
    const WarpingParameter<SPSType, SIMD_WIDTH> &)
  {
    // jointMeasStk.h == input.w
    jointMeasStk.resize(inputStk1.numPlanes, inputStk1.w, inputStk1.w);
    // TODO: remove next line?
    normSumAbsDiffTerm1(inputStk1[0], inputStk2[0], jointMeasStk[0]);
    // TODO: NPREPROCS template instead of .numPlanes
    for (int i = 0; i < inputStk1.numPlanes; i++) {
      // puts("NSAD");
      normSumAbsDiffTerm1(inputStk1[i], inputStk2[i], jointMeasStk[i]);
    }
  }

  // NSAD measure is in [0,1]
  static double measureMax() { return 1.0; }
};

} // namespace modular_sps_computation

} // namespace simd

#endif

// ===========================================================================
//
// WarpingSearchCollection.H --
// collection of search algorithms for warping
//
// This source code file is part of the following software:
//
//    - the low-level C++ template SIMD library
//    - the SIMD implementation of the MinWarping and the 2D-Warping methods
//      for local visual homing.
//
// The software is provided based on the accompanying license agreement in the
// file LICENSE.md.
// The software is provided "as is" without any warranty by the licensor and
// without any liability of the licensor, and the software may not be
// distributed by the licensee; see the license agreement for details.
//
// (C) Ralf Möller
//     Computer Engineering
//     Faculty of Technology
//     Bielefeld University
//     www.ti.uni-bielefeld.de
//
// ===========================================================================

#ifndef WARPING_SEARCH_COLLECTION_H_
#define WARPING_SEARCH_COLLECTION_H_

#include <cstddef>
#include <tsimd.H>

namespace simd {

// ###########################################################################
// full matching
// ###########################################################################

// ===========================================================================
// PARX
// ===========================================================================

// PARX denotes search order: psi, alpha, rho, x
template <typename SPSType, typename MatchType, size_t SIMD_WIDTH,
          size_t SIMD_ALIGN>
class WarpingFull_PARX
  : public WarpingFull<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>
{
  virtual void search(const WarpingTemplate &warpTemplate,
                      const WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps,
                      MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> &match)
  {
    // we assume that sizeof(SPSType) <= sizeof(MatchType)
    // (since we add up SPSType elements in MatchType sum)
    // (just to provide the user with a clear compiler message)
    static_assert(sizeof(SPSType) <= sizeof(MatchType), "");

    // 30. Sep 14 (rm): local copies (somewhat faster, surprisingly)
    //  1. Jun 15 (rm): now const
    const int w = warpTemplate.w, nRho = warpTemplate.nRho;
    const int nPsi = sps.param.nPsi, nAlpha = sps.param.nAlpha;
    int *const shuffleModulo = sps.param.shuffleModulo;
    int *const modulo2wpw    = sps.param.modulo2wpw;
    int *const jPsiVec       = sps.param.jPsiVec;
    int *const jAlphaVec     = sps.param.jAlphaVec;
    MatchType *const _match  = match.match.data;
    SPSType *const _stack    = sps.stack.data;
    const int simd_sps_elems = sps.param.simd_sps_elems;
    const MatchType maxMatch = SIMDTypeInfo<MatchType>::max();
    // faster if not defined inside loops?
    SIMDVec<SPSType, SIMD_WIDTH> v;
    SIMDVecs<NumSIMDVecs<MatchType, SPSType>::out, MatchType, SIMD_WIDTH>
      minSum, sum;

    // we write simd_sps_elems results to match array in one go
    if (nAlpha % simd_sps_elems != 0)
      throw SIMDException("WarpingFull_PARX::search",
                          "nAlpha has to be a multiple of simd_sps_elems");
    // here the match array is accumulated
    // TODO: entire clear in the beginning or split (when needed) - which
    // TODO: is faster?
    match.clear();
    MatchType *matchp = _match;
    // go through all psi parameters
    for (int iPsi = 0; iPsi < nPsi; iPsi++) {
      // precompute part of (jY - jPsi) % w (times wSPS)
      int *modulo2wpwMinusPsi = modulo2wpw - jPsiVec[iPsi];
      // go through all alpha parameters
      for (int iAlpha = 0; iAlpha < nAlpha; iAlpha += simd_sps_elems) {
        // precompute part of shuffled (jX + jAlpha) % w
        int *shuffleModuloPlusAlpha = shuffleModulo + jAlphaVec[iAlpha];
        // minimal sum over all rhos
        set1(minSum, maxMatch);
        // go through all rho parameters
        for (int iRho = 0; iRho < nRho; iRho++) {
          // initialize sum to zero
          setzero(sum);
          // go through all x values
          for (int jX = 0; jX < w; jX++) {
            TemplateSPOffset sp = warpTemplate.tmplt[iRho][jX].sp;
            TemplateJY jY       = warpTemplate.tmplt[iRho][jX].jy;
            // compute address in scale-plane stack
            SPSType *vp = _stack                       // sps
                          + sp                         // sp in sps
                          + shuffleModuloPlusAlpha[jX] // column in sp
                          + modulo2wpwMinusPsi[jY];    // element in column
            // load (unaligned!)
            v = loadu<SIMD_WIDTH>(vp);
            // extend and sum up
            sum = adds(sum, extend<MatchType>(v));
          }
          // update minimum
          minSum = min(minSum, sum);
        }
        store(matchp, minSum);
        matchp += simd_sps_elems;
      }
    }
  }
};

// ###########################################################################
// warping curve (structure taken from full-PARX, but no SIMD code)
// ###########################################################################

template <typename SPSType, typename MatchType, size_t SIMD_WIDTH,
          size_t SIMD_ALIGN>
void warpingCurve(const WarpingTemplate &warpTemplate,
                  const WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps,
                  int iAlpha, int iPsi, std::vector<int> &jDeltaVec,
                  std::vector<int> &planeIndexVec, int &iRhoMin,
                  MatchType &matchSumMin)
{
  // 30. Sep 14 (rm): local copies (somewhat faster, surprisingly)
  //  1. Jun 15 (rm): now const
  const int w = warpTemplate.w, wSPS = warpTemplate.wSPS;
  const int nRho           = warpTemplate.nRho;
  int *const modulo        = sps.param.modulo;
  int *const shuffleModulo = sps.param.shuffleModulo;
  int *const modulopw      = sps.param.modulopw;
  SPSType *const _stack    = sps.stack.data;
  const MatchType maxMatch = SIMDTypeInfo<MatchType>::max();
  // resize result vectors
  jDeltaVec.resize(w);
  planeIndexVec.resize(w);
  // jAlpha, jPsi:
  const int jAlpha = sps.param.jAlphaVec[iAlpha];
  const int jPsi   = sps.param.jPsiVec[iPsi];
  // minimal values
  matchSumMin = maxMatch;
  iRhoMin     = -1;
  // go through all rho values
  for (int iRho = 0; iRho < nRho; iRho++) {
    // initialize sum to zero
    MatchType sum = 0;
    // go through all x values
    for (int jX = 0; jX < w; jX++) {
      TemplateSPOffset sp = warpTemplate.tmplt[iRho][jX].sp;
      TemplateJY jY       = warpTemplate.tmplt[iRho][jX].jy;
      // compute address in scale-plane stack
      SPSType *vp = _stack                              // sps
                    + sp                                // sp in sps
                    + shuffleModulo[jX + jAlpha]        // column in sp
                    + wSPS * modulopw[(int) jY - jPsi]; // element in column
      // extend and sum up
      sum += MatchType(*vp);
    }
    // update minimum
    if (sum < matchSumMin) {
      matchSumMin = sum;
      iRhoMin     = iRho;
    }
  }
  // this should never happen
  assert(iRhoMin != -1);
  // copy row from warp-template
  for (int jX = 0; jX < w; jX++) {
    int jTheta = modulo[jX + jAlpha];
    jDeltaVec[jTheta] =
      modulopw[(int) warpTemplate.tmplt[iRhoMin][jX].jy - jPsi];
    planeIndexVec[jTheta] = warpTemplate.tmplt[iRhoMin][jX].sp / (wSPS * w);
  }
}

// ###########################################################################
// partial matching
// ###########################################################################

// ===========================================================================
// PARX
// ===========================================================================

// PARX denotes search order: psi, alpha, rho, x
template <typename SPSType, typename MatchType, size_t SIMD_WIDTH,
          size_t SIMD_ALIGN>
class WarpingPartial_PARX
  : public WarpingPartial<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>
{
public:
  virtual void search(
    const WarpingTemplate &warpTemplate,
    const WarpingSPS<SPSType, SIMD_WIDTH, SIMD_ALIGN> &sps,
    const MinWarpingSearchRange<SPSType, SIMD_WIDTH, SIMD_ALIGN> &range,
    MinWarpingMatch<MatchType, SIMD_WIDTH, SIMD_ALIGN> &match, int jAlphaOff,
    int jPsiOff)
  {
    // we assume that sizeof(SPSType) <= sizeof(MatchType)
    // (since we add up SPSType elements in MatchType sum)
    // (just to provide the user with a clear compiler message)
    static_assert(sizeof(SPSType) <= sizeof(MatchType), "");

    //  1. Oct 14 (rm): local copies (sometimes faster, not here though)
    //  3. Jun 15 (rm): now const
    const int w = warpTemplate.w, nRho = warpTemplate.nRho;
    const int nAlpha           = sps.param.nAlpha;
    int *const shuffleModuloPW = sps.param.shuffleModuloPW;
    int *const modulo2wpw      = sps.param.modulo2wpw;
    int *const jAlphaVec       = sps.param.jAlphaVec;
    int *const jPsiVec         = sps.param.jPsiVec;
    MatchType *const _match    = match.match.data;
    SPSType *const _stack      = sps.stack.data;
    const int simd_sps_elems   = sps.param.simd_sps_elems;
    const MatchType maxMatch   = SIMDTypeInfo<MatchType>::max();
    // faster if not defined inside loops
    SIMDVec<SPSType, SIMD_WIDTH> v;
    SIMDVecs<NumSIMDVecs<MatchType, SPSType>::out, MatchType, SIMD_WIDTH> zero,
      minSum, sum;

    setzero(zero);
    // we write simd_sps_elems results to match array in one go
    if (nAlpha % simd_sps_elems != 0)
      throw SIMDException("WarpingPartial_PARX::search",
                          "nAlpha has to be a multiple of simd_sps_elems");

    // this is a bit more complicated than in the PAXY version: since we
    // accumulate in the match array, we need to initialize all match
    // elements which will not be touched later with invalid (e.g. 0xffff)
    // and all elements which will be touched with 0x0000,
    // all untouched elements in alpha-psi array (match) are invalid
    // (e.g. 0xffff)
    match.fillInvalid();
    // the elements which will be touched are zeroed out
    // go through all psi parameters
    for (unsigned int kPsi = 0; kPsi < range.psiIndices.size(); kPsi++) {
      int iPsi            = range.psiIndices[kPsi];
      MatchType *matchRow = _match + iPsi * nAlpha;
      // go through all alpha parameters
      // note that alphaIndices contain indices with a spacing of
      // simd_sps_elems!
      for (unsigned int kAlpha = 0; kAlpha < range.alphaIndices.size();
           kAlpha++) {
        int iAlpha = range.alphaIndices[kAlpha];
        // set consecutive values to 0
        store(matchRow + iAlpha, zero);
      }
    }
    // go through all psi parameters
    for (unsigned int kPsi = 0; kPsi < range.psiIndices.size(); kPsi++) {
      // get index
      int iPsi = range.psiIndices[kPsi];
      // precompute part of (jY - jPsi) % w (times wSPS)
      // 20. Nov 15 (rm): offset added
      int *modulo2wpwMinusPsi = modulo2wpw - (jPsiVec[iPsi] + jPsiOff);
      // pointer into match row
      MatchType *matchRow = _match + iPsi * nAlpha;
      // go through all alpha parameters
      // go through all alpha parameters
      // note that alphaIndices contain indices with a spacing of 8!
      for (unsigned int kAlpha = 0; kAlpha < range.alphaIndices.size();
           kAlpha++) {
        // get index
        int iAlpha = range.alphaIndices[kAlpha];
        // precompute part of shuffled (jX + jAlpha) % w
        // 20. Nov 15 (rm): shuffleModuloPW instead of shuffleModulo,
        // offset added
        int *shuffleModuloPlusAlpha =
          shuffleModuloPW + jAlphaVec[iAlpha] + jAlphaOff;
        // minimal sum over all rhos
        set1(minSum, maxMatch);
        // go through all rho parameters
        for (int iRho = 0; iRho < nRho; iRho++) {
          // initialize sum to zero
          setzero(sum);
          // go through all x values
          for (int jX = 0; jX < w; jX++) {
            TemplateSPOffset sp = warpTemplate.tmplt[iRho][jX].sp;
            TemplateJY jY       = warpTemplate.tmplt[iRho][jX].jy;
            // compute address in scale-plane stack
            SPSType *vp = _stack                       // sps
                          + sp                         // sp in sps
                          + shuffleModuloPlusAlpha[jX] // column in sp
                          + modulo2wpwMinusPsi[jY];    // element in column
            // load (unaligned!)
            v = loadu<SIMD_WIDTH>(vp);
            // extend and sum up
            sum = adds(sum, extend<MatchType>(v));
          }
          // update minimum
          minSum = min(minSum, sum);
        }
        MatchType *matchp = matchRow + iAlpha;
        store(matchp, minSum);
      }
    }
  }
};

} // namespace simd

#endif

#include <cstddef>

namespace simd {

// -------------------------------------------------------------------------
// factory for WarpingSPSComputation
// -------------------------------------------------------------------------

// simplifies access to enum constants (no need to pass template
// arguments), class keeps it out of the global scope
class WarpingSPSComputationSelector
{
public:
  enum FirstPhaseType {
    firstPhaseASC1,       // 0  approximated sequential correlation
    firstPhaseNSAD1,      // 1  normalized sum of absolute differences
    firstPhaseASC2,       // 2  swizzled version (faster on AVX)
    firstPhaseNSAD2,      // 3  swizzled version (faster on AVX)
    firstPhaseNSADA1,     // 4  NSADA
    firstPhaseNSADNSADA1, // 5  NSAD-NSADA mix
    firstPhaseNSADA2,     // 6  swizzled version (faster on AVX)
    firstPhaseNSADNSADA2, // 7  swizzled version (faster on AVX)
    firstPhaseASCDirect1, // 8  unused, reserved for ASCDirect1
    firstPhaseASCDirect2, // 9  experimental: ASCDirect2
    firstPhaseNSADTilt,   // 10 NSAD considering invalid pixels
    // Alternative version of NSAD with magnify/preprocess order switched
    // contributed by Benedikt Volkmer
    firstPhaseNSAD2EM, // 11 magnify first
    firstPhaseNSAD2EP, // 12 preprocess first
    // Corner filtered versions of NSADA2
    // contributed by Benedikt Volkmer
    firstPhaseNSAD2CP,   // 13 no normalization, preprocess first
    firstPhaseNSAD2CPN,  // 14 normalized (sqrt-sqrt), preprocess first
    firstPhaseNSAD2CM,   // 15 no normalization, magnify first
    firstPhaseNSAD2CMN,  // 16 normalized (sqrt-sqrt), magnify first
    firstPhaseNSAD2CMNV, // 17 normalized (sqrt-sqrt), magnify first, (1-k)
    firstPhaseNSAD2CMNS, // 18 normalized (sqrt-sqrt), mag. first, scale mag
    firstPhaseNSAD2CPn,  // 19 normalized (sqrt), preprocess first
    firstPhaseNSAD2CMn,  // 20 normalized (sqrt), magnify first
    firstPhaseSNSADEHL1, // 21 sigmoid on NSAD of edge, harris response and
                         //    harris l1
    firstPhaseSNSADE,    // 22 sigmoid on NSAD of edge
    // version of firstPhaseNSADTilt with edge filter (C. Berganski)
    firstPhaseEdgeNSADTilt, // 23 NSAD considering invalid pixels
    // Modular versions (Benedikt Volkmer)
    firstPhaseModularNSAD,        // 24 (-> 1)
    firstPhaseModularNSAD2,       // 25 (-> 3)
    firstPhaseModularNSADA,       // 26 (-> 4)
    firstPhaseModularNSADNSADA,   // 27 (-> 5)
    firstPhaseModularNSADA2,      // 28 (-> 6)
    firstPhaseModularNSADNSADA2,  // 29 (-> 7)
    firstPhaseModularASCDirect2,  // 30 (-> 9)
    firstPhaseModularNSADTilt,    // 31 (-> 10)
    firstPhaseModularNSADCM,      // 32 (-> 16)
    firstPhaseModularSNSAD_EHL1,  // 33 (-> 21)
    firstPhaseModularEdgeNSADTilt // 34 (-> 23)
  };
};

template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingSPSComputationFactory : public WarpingSPSComputationSelector
{
public:
  static WarpingSPSComputation<ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH,
                               SIMD_ALIGN> *
  create(int firstPhase, const HarrisParameter &harrisPar,
         const std::vector<double> &sigmoidW,
         const std::vector<double> &sigmoidW0)
  {
    switch (static_cast<FirstPhaseType>(firstPhase)) {
    case firstPhaseASC1:
      return new WarpingSPSComputationEdgeASC1<
        ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH, SIMD_ALIGN>();
      break;

    case firstPhaseNSAD1:
      return new WarpingSPSComputationEdgeNSAD1<
        ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH, SIMD_ALIGN>();
      break;

    case firstPhaseASC2:
      return new WarpingSPSComputationEdgeASC2<
        ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH, SIMD_ALIGN>();
      break;

    case firstPhaseNSAD2:
      return new WarpingSPSComputationEdgeNSAD2<
        ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH, SIMD_ALIGN>();
      break;

    case firstPhaseNSADA1:
      return new WarpingSPSComputationEdgeNSADA1<
        ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH, SIMD_ALIGN>();
      break;

    case firstPhaseNSADA2:
      return new WarpingSPSComputationEdgeNSADA2<
        ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH, SIMD_ALIGN>();
      break;

    case firstPhaseNSADNSADA1:
      return new WarpingSPSComputationEdgeNSADNSADA1<
        ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH, SIMD_ALIGN>();
      break;

    case firstPhaseNSADNSADA2:
      return new WarpingSPSComputationEdgeNSADNSADA2<
        ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH, SIMD_ALIGN>();
      break;

    case firstPhaseASCDirect2:
      return new WarpingSPSComputationEdgeASCDirect2<
        ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH, SIMD_ALIGN>();
      break;

    case firstPhaseNSADTilt:
      return new WarpingSPSComputationNSADTilt<
        ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH, SIMD_ALIGN>();
      break;

    case firstPhaseNSAD2EM:
      return new WarpingSPSComputationEdgeNSAD2Alt<ImgType, ProcType, MeasType,
                                                   SPSType, SIMD_WIDTH,
                                                   SIMD_ALIGN, true, false>();
      break;

    case firstPhaseNSAD2EP:
      return new WarpingSPSComputationEdgeNSAD2Alt<ImgType, ProcType, MeasType,
                                                   SPSType, SIMD_WIDTH,
                                                   SIMD_ALIGN, false, false>();
      break;

    case firstPhaseNSAD2CP:
      return new WarpingSPSComputationCornerNSAD2<ImgType, MeasType, SPSType,
                                                  SIMD_WIDTH, SIMD_ALIGN, false,
                                                  false, 0, false>(harrisPar);
      break;

    case firstPhaseNSAD2CPn:
      return new WarpingSPSComputationCornerNSAD2<ImgType, MeasType, SPSType,
                                                  SIMD_WIDTH, SIMD_ALIGN, false,
                                                  false, 1, false>(harrisPar);
      break;

    case firstPhaseNSAD2CPN:
      return new WarpingSPSComputationCornerNSAD2<ImgType, MeasType, SPSType,
                                                  SIMD_WIDTH, SIMD_ALIGN, false,
                                                  false, 2, false>(harrisPar);
      break;

    case firstPhaseNSAD2CM:
      return new WarpingSPSComputationCornerNSAD2<ImgType, MeasType, SPSType,
                                                  SIMD_WIDTH, SIMD_ALIGN, true,
                                                  false, 0, false>(harrisPar);
      break;

    case firstPhaseNSAD2CMn:
      return new WarpingSPSComputationCornerNSAD2<ImgType, MeasType, SPSType,
                                                  SIMD_WIDTH, SIMD_ALIGN, true,
                                                  false, 1, false>(harrisPar);
      break;

    case firstPhaseNSAD2CMN:
      return new WarpingSPSComputationCornerNSAD2<ImgType, MeasType, SPSType,
                                                  SIMD_WIDTH, SIMD_ALIGN, true,
                                                  false, 2, false>(harrisPar);
      break;

    case firstPhaseNSAD2CMNV:
      return new WarpingSPSComputationCornerNSAD2<ImgType, MeasType, SPSType,
                                                  SIMD_WIDTH, SIMD_ALIGN, true,
                                                  false, 2, true>(harrisPar);
      break;

    case firstPhaseNSAD2CMNS:
      return new WarpingSPSComputationCornerNSAD2<ImgType, MeasType, SPSType,
                                                  SIMD_WIDTH, SIMD_ALIGN, true,
                                                  true, 2, false>(harrisPar);
      break;

    case firstPhaseSNSADEHL1: {
      const int n = 3;
      if ((sigmoidW.size() != n) || (sigmoidW0.size() != n))
        throw SIMDException("WarpingSPSComputationFactory::create",
                            "sigmoidW/W0 has wrong size");
      // double sigmoidW_a[n], sigmoidW0_a[n];
      // std::copy(sigmoidW.begin(), sigmoidW.end(), sigmoidW_a);
      // std::copy(sigmoidW0.begin(), sigmoidW0.end(), sigmoidW0_a);
      return new WarpingSPSComputationSNSADHarris < ImgType, MeasType, SPSType,
             SIMD_WIDTH, SIMD_ALIGN, HOS_VEDGE | HOS_RESPONSE | HOS_L1,
             n >
               // (harrisPar, sigmoidW_a, sigmoidW0_a);
               (harrisPar, sigmoidW, sigmoidW0);
      break;
    }

    case firstPhaseSNSADE: {
      const int n = 1;
      if ((sigmoidW.size() != n) || (sigmoidW0.size() != n))
        throw SIMDException("WarpingSPSComputationFactory::create",
                            "sigmoidW/W0 has wrong size");
      // double sigmoidW_a[n], sigmoidW0_a[n];
      // std::copy(sigmoidW.begin(), sigmoidW.end(), sigmoidW_a);
      // std::copy(sigmoidW0.begin(), sigmoidW0.end(), sigmoidW0_a);
      return new WarpingSPSComputationSNSADHarris<
        ImgType, MeasType, SPSType, SIMD_WIDTH, SIMD_ALIGN, HOS_VEDGE, n>
        // (harrisPar, sigmoidW_a, sigmoidW0_a);
        (harrisPar, sigmoidW, sigmoidW0);
      break;
    }

    case firstPhaseEdgeNSADTilt:
      return new WarpingSPSComputationEdgeNSADTilt<
        ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH, SIMD_ALIGN>();
      break;

    case firstPhaseModularNSAD: {
      using namespace modular_sps_computation;
      typedef SinglePreprocessingPolicyEdge<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>
        PreprocPolicy;
      return new Single<
        SPS_COMPUTATION_TEMPLATE_ARGUMENTS, false,
        ImageOpsPolicySimple<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>, PreprocPolicy,
        SingleNormalizePolicyAbs<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        MeasurePolicyNSAD<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        SingleColumnMeasurePolicyAbs<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>>(
        typename PreprocPolicy::Parameter());
      break;
    }

    case firstPhaseModularNSAD2: {
      using namespace modular_sps_computation;
      typedef SinglePreprocessingPolicyEdge<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>
        PreprocPolicy;
      return new Single<
        SPS_COMPUTATION_TEMPLATE_ARGUMENTS, false,
        ImageOpsPolicySimple<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>, PreprocPolicy,
        SingleNormalizePolicyAbsRearranged<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        MeasurePolicyNSAD<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        SingleColumnMeasurePolicyAbs<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>>(
        typename PreprocPolicy::Parameter());
      break;
    }

    case firstPhaseModularNSADA: {
      using namespace modular_sps_computation;
      typedef SinglePreprocessingPolicyEdge<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>
        PreprocPolicy;
      return new Single<
        SPS_COMPUTATION_TEMPLATE_ARGUMENTS, false,
        ImageOpsPolicySimple<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>, PreprocPolicy,
        SingleNormalizePolicyAbs<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        SingleMeasurePolicyNSADA<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        SingleColumnMeasurePolicyAbs<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>>(
        typename PreprocPolicy::Parameter());
      break;
    }

    case firstPhaseModularNSADA2: {
      using namespace modular_sps_computation;
      typedef SinglePreprocessingPolicyEdge<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>
        PreprocPolicy;
      return new Single<
        SPS_COMPUTATION_TEMPLATE_ARGUMENTS, false,
        ImageOpsPolicySimple<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>, PreprocPolicy,
        SingleNormalizePolicyAbsRearranged<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        SingleMeasurePolicyNSADA<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        SingleColumnMeasurePolicyAbs<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>>(
        typename PreprocPolicy::Parameter());
      break;
    }

    case firstPhaseModularNSADNSADA: {
      using namespace modular_sps_computation;
      typedef SinglePreprocessingPolicyEdge<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>
        PreprocPolicy;
      return new Single<
        SPS_COMPUTATION_TEMPLATE_ARGUMENTS, false,
        ImageOpsPolicySimple<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>, PreprocPolicy,
        SingleNormalizePolicyAbs<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        SingleMeasurePolicyNSADNSADA<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        SingleColumnMeasurePolicyAbs<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>>(
        typename PreprocPolicy::Parameter());
      break;
    }

    case firstPhaseModularNSADNSADA2: {
      using namespace modular_sps_computation;
      typedef SinglePreprocessingPolicyEdge<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>
        PreprocPolicy;
      return new Single<
        SPS_COMPUTATION_TEMPLATE_ARGUMENTS, false,
        ImageOpsPolicySimple<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>, PreprocPolicy,
        SingleNormalizePolicyAbsRearranged<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        SingleMeasurePolicyNSADNSADA<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        SingleColumnMeasurePolicyAbs<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>>(
        typename PreprocPolicy::Parameter());
      break;
    }

    case firstPhaseModularASCDirect2: {
      using namespace modular_sps_computation;
      typedef SinglePreprocessingPolicyEdge<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>
        PreprocPolicy;
      return new Single<
        SPS_COMPUTATION_TEMPLATE_ARGUMENTS, false,
        ImageOpsPolicySimple<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>, PreprocPolicy,
        SingleNormalizePolicyAbsRearranged<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        SingleMeasurePolicyASCDirect<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        SingleColumnMeasurePolicyAbs<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>>(
        typename PreprocPolicy::Parameter());
      break;
    }

    case firstPhaseModularNSADTilt: {
      using namespace modular_sps_computation;
      typedef SinglePreprocessingPolicyNon<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>
        PreprocPolicy;
      return new Single<
        SPS_COMPUTATION_TEMPLATE_ARGUMENTS, false,
        SingleImageOpsPolicyInvalid<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        PreprocPolicy,
        SingleNormalizePolicyAbs<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        MeasurePolicyNSAD<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        SingleColumnMeasurePolicyAbsAccu<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>>(
        typename PreprocPolicy::Parameter());
      break;
    }

    case firstPhaseModularEdgeNSADTilt: {
      using namespace modular_sps_computation;
      typedef SinglePreprocessingPolicyEdge<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>
        PreprocPolicy;
      return new Single<
        SPS_COMPUTATION_TEMPLATE_ARGUMENTS, false,
        SingleImageOpsPolicyInvalid<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        PreprocPolicy,
        SingleNormalizePolicyAbs<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        MeasurePolicyNSAD<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        SingleColumnMeasurePolicyAbsAccu<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>>(
        typename PreprocPolicy::Parameter());
      break;
    }

    case firstPhaseModularNSADCM: {
      using namespace modular_sps_computation;
      typedef SinglePreprocessingPolicyHarris<
        SPS_COMPUTATION_TEMPLATE_ARGUMENTS, 0, false, HOS_RESPONSE>
        PreprocPolicy;
      return new Single<
        SPS_COMPUTATION_TEMPLATE_ARGUMENTS, false,
        ImageOpsPolicySimple<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>, PreprocPolicy,
        SingleNormalizePolicyAbs<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        MeasurePolicyNSAD<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        SingleColumnMeasurePolicyAbs<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>>(
        typename PreprocPolicy::Parameter(harrisPar.k,
                                          harrisPar.binomialFilterCount));
      break;
    }

    case firstPhaseModularSNSAD_EHL1: {
      using namespace modular_sps_computation;
      const int n = 3;
      if (sigmoidW.size() != n)
        throw SIMDException("WarpingSPSComputationFactory::create",
                            "sigmoidW has wrong size");
      typedef StackPreprocessingPolicyHarris<SPS_COMPUTATION_TEMPLATE_ARGUMENTS,
                                             n,
                                             HOS_VEDGE | HOS_RESPONSE | HOS_L1>
        PreprocPolicy;
      typedef StackNormalizePolicySigmoid<SPS_COMPUTATION_TEMPLATE_ARGUMENTS, n>
        NormalizePolicy;
      return new Stack<
        SPS_COMPUTATION_TEMPLATE_ARGUMENTS, n,
        ImageOpsPolicySimple<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>, PreprocPolicy,
        NormalizePolicy, MeasurePolicyNSAD<SPS_COMPUTATION_TEMPLATE_ARGUMENTS>,
        StackColumnMeasurePolicyAbs<SPS_COMPUTATION_TEMPLATE_ARGUMENTS, n>>(
        typename PreprocPolicy::Parameter(harrisPar.k,
                                          harrisPar.binomialFilterCount),
        typename NormalizePolicy::Parameter(sigmoidW0, sigmoidW));
      break;
    }

    default:
      throw SIMDException("WarpingSPSComputationFactory::create",
                          "invalid firstPhase argument");
    }
  }
};

// -------------------------------------------------------------------------
// factory for WarpingFull, WarpingPartial
// -------------------------------------------------------------------------

class WarpingSearchSelector
{
public:
  enum SearchMethodType { searchMethodWarpingPARX };
};

template <typename SPSType, typename MatchType, size_t SIMD_WIDTH,
          size_t SIMD_ALIGN>
class WarpingFullFactory : public WarpingSearchSelector
{
public:
  static WarpingFull<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN> *create(
    int searchMethod)
  {
    switch (static_cast<SearchMethodType>(searchMethod)) {
    case searchMethodWarpingPARX:
      return new WarpingFull_PARX<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>();
      break;
    default:
      throw SIMDException("WarpingFullFactory::create",
                          "invalid searchMethod argument");
    }
  }
};

template <typename SPSType, typename MatchType, size_t SIMD_WIDTH,
          size_t SIMD_ALIGN>
class WarpingPartialFactory : public WarpingSearchSelector
{
public:
  static WarpingPartial<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN> *create(
    int searchMethod)
  {
    switch (static_cast<SearchMethodType>(searchMethod)) {
    case searchMethodWarpingPARX:
      return new WarpingPartial_PARX<SPSType, MatchType, SIMD_WIDTH,
                                     SIMD_ALIGN>();
      break;
    default:
      throw SIMDException("WarpingPartialFactory::create",
                          "invalid searchMethod argument");
    }
  }
};

// -------------------------------------------------------------------------
// factory for MinWarpingFull, MinWarpingPartial
// -------------------------------------------------------------------------

class MinWarpingSearchSelector
{
public:
  enum SearchMethodType { searchMethodMinWarpingXPAY };
};

template <typename SPSType, typename MatchType, size_t SIMD_WIDTH,
          size_t SIMD_ALIGN>
class MinWarpingFullFactory : public MinWarpingSearchSelector
{
public:
  static MinWarpingFull<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN> *create(
    int searchMethod)
  {
    switch (static_cast<SearchMethodType>(searchMethod)) {
    case searchMethodMinWarpingXPAY:
      return new MinWarpingFull_XPAY<SPSType, MatchType, SIMD_WIDTH,
                                     SIMD_ALIGN>();
      break;
    default:
      throw SIMDException("MinWarpingFullFactory::create",
                          "invalid searchMethod argument");
    }
  }
};

template <typename SPSType, typename MatchType, size_t SIMD_WIDTH,
          size_t SIMD_ALIGN>
class MinWarpingPartialFactory : public MinWarpingSearchSelector
{
public:
  static MinWarpingPartial<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN> *create(
    int searchMethod)
  {
    switch (static_cast<SearchMethodType>(searchMethod)) {
    case searchMethodMinWarpingXPAY:
      return new MinWarpingPartial_XPAY<SPSType, MatchType, SIMD_WIDTH,
                                        SIMD_ALIGN>();
      break;
    default:
      throw SIMDException("MinWarpingPartialFactory::create",
                          "invalid searchMethod argument");
    }
  }
};

} // namespace simd

#endif

#include <cstddef>
#include <ostream>
#include <vector>

namespace simd {

template <typename ImgType, typename ProcType, typename MeasType,
          typename SPSType, typename MatchType, typename CompassType,
          size_t SIMD_WIDTH, size_t SIMD_ALIGN>
class WarpingBundle
  : public WarpingSearcherSelector
  , public ComplexSearchSelector
{
public:
  WarpingCompound<SPSType, MatchType, CompassType, SIMD_WIDTH, SIMD_ALIGN> *wsc;
  WarpingSPSComputation<ImgType, ProcType, MeasType, SPSType, SIMD_WIDTH,
                        SIMD_ALIGN> *spsComp;
  MinWarpingFull<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>
    *fullSearcherMinWarping;
  MinWarpingPartial<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>
    *partialSearcherMinWarping;
  WarpingFull<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN> *fullSearcherWarping;
  WarpingPartial<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>
    *partialSearcherWarping;

  WarpingBundle(int w, int nAlpha, int nPsi, int nScalePlanes,
                double maxScaleFactor, double maxThresholdMinWarping,
                double rhoMinMinWarping, double rhoMaxMinWarping,
                double rhoMinWarping, double rhoMaxWarping, int nRhoWarping,
                int firstPhase, int searchMethodWarping,
                int searchMethodMinWarping, const HarrisParameter &harrisPar,
                const std::vector<double> &sigmoidW,
                const std::vector<double> &sigmoidW0)
  {
    // create first phase computation
    spsComp =
      WarpingSPSComputationFactory<ImgType, ProcType, MeasType, SPSType,
                                   SIMD_WIDTH, SIMD_ALIGN>::create(firstPhase,
                                                                   harrisPar,
                                                                   sigmoidW,
                                                                   sigmoidW0);
    // the same type of searcher (e.g. PAXY) is created for both the
    // full and the partial search
    // Warping
    fullSearcherWarping =
      WarpingFullFactory<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>::create(
        searchMethodWarping);
    partialSearcherWarping =
      WarpingPartialFactory<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>::create(
        searchMethodWarping);
    // MinWarping
    fullSearcherMinWarping =
      MinWarpingFullFactory<SPSType, MatchType, SIMD_WIDTH, SIMD_ALIGN>::create(
        searchMethodMinWarping);
    partialSearcherMinWarping =
      MinWarpingPartialFactory<SPSType, MatchType, SIMD_WIDTH,
                               SIMD_ALIGN>::create(searchMethodMinWarping);
    // create compound
    wsc = new WarpingCompound<SPSType, MatchType, CompassType, SIMD_WIDTH,
                              SIMD_ALIGN>(
      w, nAlpha, nPsi, nScalePlanes, maxScaleFactor, maxThresholdMinWarping,
      rhoMinMinWarping, rhoMaxMinWarping, rhoMinWarping, rhoMaxWarping,
      nRhoWarping);
  }

  // TODO: Not copiable due to resource management unclear
  WarpingBundle(const WarpingBundle &) = delete;

  ~WarpingBundle()
  {
    delete wsc;
    delete spsComp;
    delete fullSearcherMinWarping;
    delete partialSearcherMinWarping;
    delete fullSearcherWarping;
    delete partialSearcherWarping;
  }

  // compute best match between ss and cv under azimuthal rotation
  // (compass), can be used for localization
  // adapted from code provided by Michael Horst
  // 27. Feb 18 (rm): vert.res. and horizon taken from images
  void compassMatch(SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
                    SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
                    int interpolation, const std::vector<double> &pixelScale,
                    double postScale, double &dMin, double &t1)
  {
    struct timespec ts0, ts1;
    ts0 = getTimeSpec();
    wsc->computeSPS(ss, cv, interpolation, pixelScale, postScale, *spsComp);
    SIMDImage<CompassType, SIMD_WIDTH, SIMD_ALIGN> compass;
    wsc->spsArray[SPS_ORIG]->compassEstimate(compass);
    dMin = min(compass);
    ts1  = getTimeSpec();
    t1   = timeSpecDiffUsec(ts1, ts0);
  }

  // run warping / min-warping computation; compute home vector and
  // some additional information
  // 27. Feb 18 (rm): vert.res. and horizon taken from images
  void run(SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
           SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
           int interpolation, const std::vector<double> &pixelScale,
           double postScale, double alphaEst, double psiEst, int searcher,
           int compassAcceleration, double psiFraction,
           double quantilCompassFraction, int partialSearch, double alphaRad,
           double psiRad, int partialFullSearch, int doubleSearch,
           int fineSearch, int doubleSearchFine, int fineSearchSurround,
           double &alphaMin, double &psiMin, double &dMin, int &iAlphaMin,
           int &iPsiMin, int &iAlphaMinInv, int &iPsiMinInv, int &jAlphaOff,
           int &jPsiOff, SIMDImage<MatchType, 1, 1> &fineMatch, double &t1,
           double &t2)
  {
    // ----- first phase -----
    // signed long long t0;
    // t0 = getTimeUsec();
    struct timespec ts0, ts1, ts2;
    ts0 = getTimeSpec();
    // <ProcType,MeasType> not needed, defined through spsComp
    switch (searcher) {
    case minWarpingSearcher:
    case warpingSearcher:
      wsc->computeSPS(ss, cv, interpolation, pixelScale, postScale, *spsComp);
      break;

    case minWarpingSearcher1SP:
    case warpingSearcher1SP:
      wsc->computeSPS1SP(ss, cv, interpolation, pixelScale, postScale,
                         *spsComp);
      break;

    default:
      throw SIMDException("WarpingBundle::run", "invalid warping searcher");
    };

    ts1 = getTimeSpec();
    t1  = timeSpecDiffUsec(ts1, ts0);
    // ----- second phase -----
    switch (searcher) {
    case minWarpingSearcher:
      // MinWarping
      wsc->minWarping.search(
        *fullSearcherMinWarping, *partialSearcherMinWarping, alphaEst, psiEst,
        compassAcceleration, psiFraction, quantilCompassFraction, partialSearch,
        alphaRad, psiRad, partialFullSearch, doubleSearch, fineSearch,
        doubleSearchFine, fineSearchSurround, alphaMin, psiMin, dMin, iAlphaMin,
        iPsiMin, iAlphaMinInv, iPsiMinInv, jAlphaOff, jPsiOff, fineMatch);
      break;

    case warpingSearcher:
      // Warping
      wsc->warping.search(
        *fullSearcherWarping, *partialSearcherWarping, alphaEst, psiEst,
        compassAcceleration, psiFraction, quantilCompassFraction, partialSearch,
        alphaRad, psiRad, partialFullSearch, doubleSearch, fineSearch,
        doubleSearchFine, fineSearchSurround, alphaMin, psiMin, dMin, iAlphaMin,
        iPsiMin, iAlphaMinInv, iPsiMinInv, jAlphaOff, jPsiOff, fineMatch);
      break;

    case minWarpingSearcher1SP:
      // MinWarping1SP
      wsc->minWarping1SP.search(
        *fullSearcherMinWarping,    // may change
        *partialSearcherMinWarping, // may change
        alphaEst, psiEst, compassAcceleration, psiFraction,
        quantilCompassFraction, partialSearch, alphaRad, psiRad,
        partialFullSearch, doubleSearch, fineSearch, doubleSearchFine,
        fineSearchSurround, alphaMin, psiMin, dMin, iAlphaMin, iPsiMin,
        iAlphaMinInv, iPsiMinInv, jAlphaOff, jPsiOff, fineMatch);
      break;

    case warpingSearcher1SP:
      // Warping1SP
      wsc->warping1SP.search(
        *fullSearcherWarping,    // may change
        *partialSearcherWarping, // may change
        alphaEst, psiEst, compassAcceleration, psiFraction,
        quantilCompassFraction, partialSearch, alphaRad, psiRad,
        partialFullSearch, doubleSearch, fineSearch, doubleSearchFine,
        fineSearchSurround, alphaMin, psiMin, dMin, iAlphaMin, iPsiMin,
        iAlphaMinInv, iPsiMinInv, jAlphaOff, jPsiOff, fineMatch);
      break;

    default:
      throw SIMDException("WarpingBundle::run", "invalid warping searcher");
    }
    ts2 = getTimeSpec();
    t2  = timeSpecDiffUsec(ts2, ts1);
  }

  // -----------------------------------------------------------------------
  // Condensed interface to get cleaner code for wrapping tilt search
  // -----------------------------------------------------------------------
  // Expose the image type (template argument)
  using ImageType = ImgType;
  // Expose the MatchType (template argument)
  using MATCH_TYPE = MatchType;
  // SIMDImage to use with this bundle instance
  using Image = SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama>;

  /**
   * @brief Bundles WarpingBundle::run parameter structure (with defaults)
   */
  struct Parameters
  {
    // NOTE: Comments taken from warpingSIMDTest.C

    /**
     * @brief First phase (scale-plane stack computation) interpolation
     */
    int interpolation = 0;

    /**
     * @brief Pixel scale parameter for scale plane stack computation
     */
    std::vector<double> pixelScale = {16};

    /**
     * @brief Post scale parameter for scale plane stack computation
     */
    double postScale = 200;

    // TODO: ???
    double alphaEst = 0;
    double psiEst   = 0;

    /**
     * @brief Select search method
     */
    int searcher = ns_simd::WarpingSearcherSelector::minWarpingSearcher;

    /**
     * @brief Second Phase: Kind of compass acceleration to use 1=sum,
     * 2=quantile
     */
    int compassAcceleration = 0;

    /**
     * @brief Parameter for compass acceleration
     */
    double psiFraction = 0.3;

    /**
     * @brief Quantile fraction for quantile-based compass acceleration
     */
    double quantileCompassFraction = 0.2;

    /**
     * @brief Switch for partial search (otherwise full search)
     */
    int partialSearch = 0;

    /**
     * @brief Search radii for partial search
     */
    double alphaRad = M_PI / 4.0;

    /**
     * @brief Search radii for partial search
     */
    double psiRad = M_PI / 4.0;

    /**
     * @brief Partial searcher, but full search range (tests only)
     */
    int partialFullSearch = 0;

    /**
     * @brief Switch for double search (second run with exchanged
     *  snapshot/current view) affects both partial and full search
     */
    int doubleSearch = 0;

    /**
     * @brief Fine search is executed
     */
    int fineSearch = 0;

    /**
     * @brief Fine search uses double search
     */
    int doubleSearchFine = 0;

    /**
     * @brief Fine search only uses immediate surroundings
     */
    int fineSearchSurround = 0;
  };

  /**
   * @brief Bundled WarpingBundle::run results structure
   */
  struct Result
  {
    // Warping angle estimates
    double alpha {}, psi {}; // Maybe strong type?
    // Distance under the warp curve
    // NOTE: Default initializing this to infinity is important to make
    // constrained optimization of the warping objective work:
    // std::numeric_limits<>::infinity() returns a default initialized
    // value in case of custom/non-specialized types.
    double d = std::numeric_limits<double>::infinity();
    // Indices corresponding to warping angle estimates
    int iAlpha {}, iPsi {}, iAlphaInv {}, iPsiInv {}, jAlphaOff {}, jPsiOff {};
    // Fine match
    ns_simd::SIMDImage<MatchType, 1, 1> fineMatch;

    /**
     * @brief Converts the warping result to a scalar value of type
     * double.
     * @note For now, this is sufficient to enable arithmetic and
     * comparison operators via implicit conversion to use the warping
     * result as the objective of the search methods.
     * @return Distance under the warp curve d as double
     */
    operator double() const
    { // NOLINT: Intentional implicit
      return d;
    }

    // TODO: Add proper implementation of arithmetic and comparison
    //  operators. Note however, arithmetic is rather difficult to define
    //  for the angle (alpha, psi) index and fineMatch members...

    /**
     * @brief Inserts warping result into an output stream
     * @note This inserts alpha, psi and d
     * @param rhs Output stream to insert the result representation into
     * @param lhs Result to insert
     * @return Reference to the modified output stream
     */
    friend std::ostream &operator<<(std::ostream &rhs, const Result &lhs)
    {
      return rhs << lhs.alpha << " " << lhs.psi << " " << lhs.d;
    }
  };

  // Simplified run interface bundling parameters and results
  void run(SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
           SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
           const Parameters &params, Result &result, double &t1, double &t2)
  {
    run(ss, cv,
        // Unpack the parameter bundle
        params.interpolation, params.pixelScale, params.postScale,
        params.alphaEst, params.psiEst, params.searcher,
        params.compassAcceleration, params.psiFraction,
        params.quantileCompassFraction, params.partialSearch, params.alphaRad,
        params.psiRad, params.partialFullSearch, params.doubleSearch,
        params.fineSearch, params.doubleSearchFine, params.fineSearchSurround,
        // Results written to variables passed by reference
        result.alpha, result.psi, result.d, result.iAlpha, result.iPsi,
        result.iAlphaInv, result.iPsiInv, result.jAlphaOff, result.jPsiOff,
        result.fineMatch, t1, t2);
  }

  // Simplified interface omitting the time measurement
  void run(SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &ss,
           SIMDImage<ImgType, SIMD_WIDTH, SIMD_ALIGN, Panorama> &cv,
           const Parameters &params, Result &result)
  {
    // Dummies to write times into
    double t1 = 0, t2 = 0;
    // Delegate to the already simplified interface (hopefully inlined)
    run(ss, cv, params, result, t1, t2);
  }
};

} // namespace simd

#endif

#endif
