// -*- mode: c++; c-indent-level: 4; c++-member-init-indent: 8; comment-column: 35; -*-

//-----------------------------------------------------------------------------
// eoAtomRandom.h
//   Increments or decrements by one a single element
// (c) GeNeura Team, 1998
/* 
    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    Contact: todos@geneura.ugr.es, http://geneura.ugr.es
 */
//-----------------------------------------------------------------------------
#ifndef _EOATOMCREEP_H
#define _EOATOMCREEP_H

#include <eoRandom.h>

/** Modifies using a random number generator, that is entered in the ctor.
    The RNG must return positive or negative numbers, whatever.
*/
template <class T>
class eoAtomRandom: public eoAtomMutator<T> {
public:

  /// 
  eoAtomRandom( eoRandom& _rng): rng( _rng ) {};
  
  ///
  virtual ~eoAtomRandom() {};
  
  ///
  virtual void operator()( T& _val ) const {
    _val += rng();
  }
  
  /** @name Methods from eoObject
  */  
  //@{
  /** Inherited from eoObject 
      @see eoObject
  */
  string className() const {return "eoAtomRandom";};
  //@}

private:
  eoRandom rng;

};


#endif
