/***********************************************************************
IsosurfaceCaseTableTesseract - Specialized versions of
IsosurfaceCaseTable for two- and three-dimensional tesseracts.
Copyright (c) 2005-2007 Oliver Kreylos

This file is part of the 3D Data Visualizer (Visualizer).

The 3D Data Visualizer is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License as published
by the Free Software Foundation; either version 2 of the License, or (at
your option) any later version.

The 3D Data Visualizer is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License along
with the 3D Data Visualizer; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
***********************************************************************/

#include <Templatized/IsosurfaceCaseTableTesseract.h>

namespace Visualization {

namespace Templatized {

/***********************************************************
Static elements of class IsosurfaceCaseTable<Tesseract<3> >:
***********************************************************/

const int IsosurfaceCaseTable<Tesseract<3> >::triangleEdgeIndices[256][16]=
	{
	{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  4,  8, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  9,  5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 5,  4,  8,  9,  5,  8, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 4,  1, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  1, 10,  8,  0, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 5,  0,  9,  1, 10,  4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 5,  1, 10,  5, 10,  9,  9, 10,  8, -1, -1, -1, -1, -1, -1, -1},
	{ 5, 11,  1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  4,  8,  5, 11,  1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 9, 11,  1,  0,  9,  1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 1,  4,  8,  1,  8, 11, 11,  8,  9, -1, -1, -1, -1, -1, -1, -1},
	{ 4,  5, 11, 10,  4, 11, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  5, 11,  0, 11,  8,  8, 11, 10, -1, -1, -1, -1, -1, -1, -1},
	{ 4,  0,  9,  4,  9, 10, 10,  9, 11, -1, -1, -1, -1, -1, -1, -1},
	{ 9, 11,  8, 11, 10,  8, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 2,  8,  6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 2,  0,  4,  6,  2,  4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  9,  5,  8,  6,  2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 2,  9,  5,  2,  5,  6,  6,  5,  4, -1, -1, -1, -1, -1, -1, -1},
	{ 8,  6,  2,  4,  1, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{10,  6,  2, 10,  2,  1,  1,  2,  0, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  5,  0,  8,  6,  2,  1, 10,  4, -1, -1, -1, -1, -1, -1, -1},
	{ 2, 10,  6,  9, 10,  2,  9,  1, 10,  9,  5,  1, -1, -1, -1, -1},
	{ 5, 11,  1,  8,  6,  2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 4,  6,  2,  4,  2,  0,  5, 11,  1, -1, -1, -1, -1, -1, -1, -1},
	{ 9, 11,  1,  9,  1,  0,  8,  6,  2, -1, -1, -1, -1, -1, -1, -1},
	{ 1,  9, 11,  1,  6,  9,  1,  4,  6,  6,  2,  9, -1, -1, -1, -1},
	{ 4,  5, 11,  4, 11, 10,  6,  2,  8, -1, -1, -1, -1, -1, -1, -1},
	{ 5, 11, 10,  5, 10,  2,  5,  2,  0,  6,  2, 10, -1, -1, -1, -1},
	{ 2,  8,  6,  9, 10,  0,  9, 11, 10, 10,  4,  0, -1, -1, -1, -1},
	{ 2, 10,  6,  2,  9, 10,  9, 11, 10, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  2,  7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  2,  7,  0,  4,  8, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  2,  7,  5,  0,  7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 8,  2,  7,  8,  7,  4,  4,  7,  5, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  2,  7,  1, 10,  4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  1, 10,  0, 10,  8,  2,  7,  9, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  2,  7,  0,  7,  5,  1, 10,  4, -1, -1, -1, -1, -1, -1, -1},
	{ 1,  7,  5,  1,  8,  7,  1, 10,  8,  2,  7,  8, -1, -1, -1, -1},
	{ 5, 11,  1,  9,  2,  7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 4,  8,  0,  5, 11,  1,  2,  7,  9, -1, -1, -1, -1, -1, -1, -1},
	{ 7, 11,  1,  7,  1,  2,  2,  1,  0, -1, -1, -1, -1, -1, -1, -1},
	{ 1,  7, 11,  4,  7,  1,  4,  2,  7,  4,  8,  2, -1, -1, -1, -1},
	{11, 10,  4, 11,  4,  5,  9,  2,  7, -1, -1, -1, -1, -1, -1, -1},
	{ 2,  7,  9,  0,  5,  8,  8,  5, 11,  8, 11, 10, -1, -1, -1, -1},
	{ 7,  0,  2,  7, 10,  0,  7, 11, 10, 10,  4,  0, -1, -1, -1, -1},
	{ 7,  8,  2,  7, 11,  8, 11, 10,  8, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  8,  6,  7,  9,  6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  0,  4,  9,  4,  7,  7,  4,  6, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  8,  6,  0,  6,  5,  5,  6,  7, -1, -1, -1, -1, -1, -1, -1},
	{ 5,  4,  7,  4,  6,  7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 6,  7,  9,  6,  9,  8,  4,  1, 10, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  6,  7,  9,  1,  6,  9,  0,  1,  1, 10,  6, -1, -1, -1, -1},
	{ 1, 10,  4,  0,  8,  5,  5,  8,  6,  5,  6,  7, -1, -1, -1, -1},
	{10,  5,  1, 10,  6,  5,  6,  7,  5, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  8,  6,  9,  6,  7, 11,  1,  5, -1, -1, -1, -1, -1, -1, -1},
	{11,  1,  5,  9,  0,  7,  7,  0,  4,  7,  4,  6, -1, -1, -1, -1},
	{ 8,  1,  0,  8,  7,  1,  8,  6,  7, 11,  1,  7, -1, -1, -1, -1},
	{ 1,  7, 11,  1,  4,  7,  4,  6,  7, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  8,  7,  8,  6,  7, 11,  4,  5, 11, 10,  4, -1, -1, -1, -1},
	{ 7,  0,  6,  7,  9,  0,  6,  0, 10,  5, 11,  0, 10,  0, 11, -1},
	{10,  0, 11, 10,  4,  0, 11,  0,  7,  8,  6,  0,  7,  0,  6, -1},
	{10,  7, 11,  6,  7, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 6, 10,  3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 4,  8,  0, 10,  3,  6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  9,  5, 10,  3,  6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 8,  9,  5,  8,  5,  4, 10,  3,  6, -1, -1, -1, -1, -1, -1, -1},
	{ 6,  4,  1,  3,  6,  1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 6,  8,  0,  6,  0,  3,  3,  0,  1, -1, -1, -1, -1, -1, -1, -1},
	{ 1,  3,  6,  1,  6,  4,  0,  9,  5, -1, -1, -1, -1, -1, -1, -1},
	{ 5,  1,  3,  5,  3,  8,  5,  8,  9,  8,  3,  6, -1, -1, -1, -1},
	{11,  1,  5,  3,  6, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 5, 11,  1,  4,  8,  0,  3,  6, 10, -1, -1, -1, -1, -1, -1, -1},
	{ 1,  0,  9,  1,  9, 11,  3,  6, 10, -1, -1, -1, -1, -1, -1, -1},
	{ 3,  6, 10,  1,  4, 11, 11,  4,  8, 11,  8,  9, -1, -1, -1, -1},
	{11,  3,  6, 11,  6,  5,  5,  6,  4, -1, -1, -1, -1, -1, -1, -1},
	{11,  3,  6,  5, 11,  6,  5,  6,  8,  5,  8,  0, -1, -1, -1, -1},
	{ 0,  6,  4,  0, 11,  6,  0,  9, 11,  3,  6, 11, -1, -1, -1, -1},
	{ 6, 11,  3,  6,  8, 11,  8,  9, 11, -1, -1, -1, -1, -1, -1, -1},
	{ 3,  2,  8, 10,  3,  8, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 4, 10,  3,  4,  3,  0,  0,  3,  2, -1, -1, -1, -1, -1, -1, -1},
	{ 8, 10,  3,  8,  3,  2,  9,  5,  0, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  3,  2,  9,  4,  3,  9,  5,  4, 10,  3,  4, -1, -1, -1, -1},
	{ 8,  4,  1,  8,  1,  2,  2,  1,  3, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  1,  2,  2,  1,  3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 5,  0,  9,  1,  2,  4,  1,  3,  2,  2,  8,  4, -1, -1, -1, -1},
	{ 5,  2,  9,  5,  1,  2,  1,  3,  2, -1, -1, -1, -1, -1, -1, -1},
	{ 3,  2,  8,  3,  8, 10,  1,  5, 11, -1, -1, -1, -1, -1, -1, -1},
	{ 5, 11,  1,  4, 10,  0,  0, 10,  3,  0,  3,  2, -1, -1, -1, -1},
	{ 2,  8, 10,  2, 10,  3,  0,  9,  1,  1,  9, 11, -1, -1, -1, -1},
	{11,  4,  9, 11,  1,  4,  9,  4,  2, 10,  3,  4,  2,  4,  3, -1},
	{ 8,  4,  5,  8,  5,  3,  8,  3,  2,  3,  5, 11, -1, -1, -1, -1},
	{11,  0,  5, 11,  3,  0,  3,  2,  0, -1, -1, -1, -1, -1, -1, -1},
	{ 2,  4,  3,  2,  8,  4,  3,  4, 11,  0,  9,  4, 11,  4,  9, -1},
	{11,  2,  9,  3,  2, 11, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 2,  7,  9,  6, 10,  3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  4,  8,  2,  7,  9, 10,  3,  6, -1, -1, -1, -1, -1, -1, -1},
	{ 7,  5,  0,  7,  0,  2,  6, 10,  3, -1, -1, -1, -1, -1, -1, -1},
	{10,  3,  6,  8,  2,  4,  4,  2,  7,  4,  7,  5, -1, -1, -1, -1},
	{ 6,  4,  1,  6,  1,  3,  7,  9,  2, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  2,  7,  0,  3,  8,  0,  1,  3,  3,  6,  8, -1, -1, -1, -1},
	{ 4,  1,  3,  4,  3,  6,  5,  0,  7,  7,  0,  2, -1, -1, -1, -1},
	{ 3,  8,  1,  3,  6,  8,  1,  8,  5,  2,  7,  8,  5,  8,  7, -1},
	{ 9,  2,  7, 11,  1,  5,  6, 10,  3, -1, -1, -1, -1, -1, -1, -1},
	{ 3,  6, 10,  5, 11,  1,  0,  4,  8,  2,  7,  9, -1, -1, -1, -1},
	{ 6, 10,  3,  7, 11,  2,  2, 11,  1,  2,  1,  0, -1, -1, -1, -1},
	{ 4,  8,  2,  4,  2,  7,  4,  7,  1, 11,  1,  7, 10,  3,  6, -1},
	{ 9,  2,  7, 11,  3,  5,  5,  3,  6,  5,  6,  4, -1, -1, -1, -1},
	{ 5, 11,  3,  5,  3,  6,  5,  6,  0,  8,  0,  6,  9,  2,  7, -1},
	{ 2, 11,  0,  2,  7, 11,  0, 11,  4,  3,  6, 11,  4, 11,  6, -1},
	{ 6, 11,  3,  6,  8, 11,  7, 11,  2,  2, 11,  8, -1, -1, -1, -1},
	{ 3,  7,  9,  3,  9, 10, 10,  9,  8, -1, -1, -1, -1, -1, -1, -1},
	{ 4, 10,  3,  0,  4,  3,  0,  3,  7,  0,  7,  9, -1, -1, -1, -1},
	{ 0,  8, 10,  0, 10,  7,  0,  7,  5,  7, 10,  3, -1, -1, -1, -1},
	{ 3,  4, 10,  3,  7,  4,  7,  5,  4, -1, -1, -1, -1, -1, -1, -1},
	{ 7,  9,  8,  7,  8,  1,  7,  1,  3,  4,  1,  8, -1, -1, -1, -1},
	{ 9,  3,  7,  9,  0,  3,  0,  1,  3, -1, -1, -1, -1, -1, -1, -1},
	{ 5,  8,  7,  5,  0,  8,  7,  8,  3,  4,  1,  8,  3,  8,  1, -1},
	{ 5,  3,  7,  1,  3,  5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 5, 11,  1,  9, 10,  7,  9,  8, 10, 10,  3,  7, -1, -1, -1, -1},
	{ 0,  4, 10,  0, 10,  3,  0,  3,  9,  7,  9,  3,  5, 11,  1, -1},
	{10,  7,  8, 10,  3,  7,  8,  7,  0, 11,  1,  7,  0,  7,  1, -1},
	{ 3,  4, 10,  3,  7,  4,  1,  4, 11, 11,  4,  7, -1, -1, -1, -1},
	{ 5,  3,  4,  5, 11,  3,  4,  3,  8,  7,  9,  3,  8,  3,  9, -1},
	{11,  0,  5, 11,  3,  0,  9,  0,  7,  7,  0,  3, -1, -1, -1, -1},
	{ 0,  8,  4,  7, 11,  3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{11,  3,  7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{11,  7,  3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  4,  8,  7,  3, 11, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  5,  0,  7,  3, 11, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 5,  4,  8,  5,  8,  9,  7,  3, 11, -1, -1, -1, -1, -1, -1, -1},
	{ 1, 10,  4, 11,  7,  3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{10,  8,  0, 10,  0,  1, 11,  7,  3, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  9,  5,  1, 10,  4,  7,  3, 11, -1, -1, -1, -1, -1, -1, -1},
	{ 7,  3, 11,  5,  1,  9,  9,  1, 10,  9, 10,  8, -1, -1, -1, -1},
	{ 5,  7,  3,  1,  5,  3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 5,  7,  3,  5,  3,  1,  4,  8,  0, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  7,  3,  9,  3,  0,  0,  3,  1, -1, -1, -1, -1, -1, -1, -1},
	{ 7,  8,  9,  7,  1,  8,  7,  3,  1,  4,  8,  1, -1, -1, -1, -1},
	{ 3, 10,  4,  3,  4,  7,  7,  4,  5, -1, -1, -1, -1, -1, -1, -1},
	{ 0, 10,  8,  0,  7, 10,  0,  5,  7,  7,  3, 10, -1, -1, -1, -1},
	{ 4,  3, 10,  0,  3,  4,  0,  7,  3,  0,  9,  7, -1, -1, -1, -1},
	{ 3,  9,  7,  3, 10,  9, 10,  8,  9, -1, -1, -1, -1, -1, -1, -1},
	{ 7,  3, 11,  2,  8,  6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 2,  0,  4,  2,  4,  6,  3, 11,  7, -1, -1, -1, -1, -1, -1, -1},
	{ 5,  0,  9,  7,  3, 11,  8,  6,  2, -1, -1, -1, -1, -1, -1, -1},
	{11,  7,  3,  5,  6,  9,  5,  4,  6,  6,  2,  9, -1, -1, -1, -1},
	{ 4,  1, 10,  6,  2,  8, 11,  7,  3, -1, -1, -1, -1, -1, -1, -1},
	{ 7,  3, 11,  2,  1,  6,  2,  0,  1,  1, 10,  6, -1, -1, -1, -1},
	{ 0,  9,  5,  2,  8,  6,  1, 10,  4,  7,  3, 11, -1, -1, -1, -1},
	{ 9,  5,  1,  9,  1, 10,  9, 10,  2,  6,  2, 10,  7,  3, 11, -1},
	{ 3,  1,  5,  3,  5,  7,  2,  8,  6, -1, -1, -1, -1, -1, -1, -1},
	{ 5,  7,  1,  7,  3,  1,  4,  2,  0,  4,  6,  2, -1, -1, -1, -1},
	{ 8,  6,  2,  9,  7,  0,  0,  7,  3,  0,  3,  1, -1, -1, -1, -1},
	{ 6,  9,  4,  6,  2,  9,  4,  9,  1,  7,  3,  9,  1,  9,  3, -1},
	{ 8,  6,  2,  4,  7, 10,  4,  5,  7,  7,  3, 10, -1, -1, -1, -1},
	{ 7, 10,  5,  7,  3, 10,  5, 10,  0,  6,  2, 10,  0, 10,  2, -1},
	{ 0,  9,  7,  0,  7,  3,  0,  3,  4, 10,  4,  3,  8,  6,  2, -1},
	{ 3,  9,  7,  3, 10,  9,  2,  9,  6,  6,  9, 10, -1, -1, -1, -1},
	{11,  9,  2,  3, 11,  2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 2,  3, 11,  2, 11,  9,  0,  4,  8, -1, -1, -1, -1, -1, -1, -1},
	{11,  5,  0, 11,  0,  3,  3,  0,  2, -1, -1, -1, -1, -1, -1, -1},
	{ 8,  5,  4,  8,  3,  5,  8,  2,  3,  3, 11,  5, -1, -1, -1, -1},
	{11,  9,  2, 11,  2,  3, 10,  4,  1, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  1,  8,  1, 10,  8,  2, 11,  9,  2,  3, 11, -1, -1, -1, -1},
	{ 4,  1, 10,  0,  3,  5,  0,  2,  3,  3, 11,  5, -1, -1, -1, -1},
	{ 3,  5,  2,  3, 11,  5,  2,  5,  8,  1, 10,  5,  8,  5, 10, -1},
	{ 5,  9,  2,  5,  2,  1,  1,  2,  3, -1, -1, -1, -1, -1, -1, -1},
	{ 4,  8,  0,  5,  9,  1,  1,  9,  2,  1,  2,  3, -1, -1, -1, -1},
	{ 0,  2,  1,  2,  3,  1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 8,  1,  4,  8,  2,  1,  2,  3,  1, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  2,  3,  9,  3,  4,  9,  4,  5, 10,  4,  3, -1, -1, -1, -1},
	{ 8,  5, 10,  8,  0,  5, 10,  5,  3,  9,  2,  5,  3,  5,  2, -1},
	{ 4,  3, 10,  4,  0,  3,  0,  2,  3, -1, -1, -1, -1, -1, -1, -1},
	{ 3,  8,  2, 10,  8,  3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 6,  3, 11,  6, 11,  8,  8, 11,  9, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  4,  6,  0,  6, 11,  0, 11,  9,  3, 11,  6, -1, -1, -1, -1},
	{11,  6,  3,  5,  6, 11,  5,  8,  6,  5,  0,  8, -1, -1, -1, -1},
	{11,  6,  3, 11,  5,  6,  5,  4,  6, -1, -1, -1, -1, -1, -1, -1},
	{ 1, 10,  4, 11,  8,  3, 11,  9,  8,  8,  6,  3, -1, -1, -1, -1},
	{ 1,  6,  0,  1, 10,  6,  0,  6,  9,  3, 11,  6,  9,  6, 11, -1},
	{ 5,  0,  8,  5,  8,  6,  5,  6, 11,  3, 11,  6,  1, 10,  4, -1},
	{10,  5,  1, 10,  6,  5, 11,  5,  3,  3,  5,  6, -1, -1, -1, -1},
	{ 5,  3,  1,  5,  8,  3,  5,  9,  8,  8,  6,  3, -1, -1, -1, -1},
	{ 1,  9,  3,  1,  5,  9,  3,  9,  6,  0,  4,  9,  6,  9,  4, -1},
	{ 6,  0,  8,  6,  3,  0,  3,  1,  0, -1, -1, -1, -1, -1, -1, -1},
	{ 6,  1,  4,  3,  1,  6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 8,  3,  9,  8,  6,  3,  9,  3,  5, 10,  4,  3,  5,  3,  4, -1},
	{ 0,  5,  9, 10,  6,  3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 6,  0,  8,  6,  3,  0,  4,  0, 10, 10,  0,  3, -1, -1, -1, -1},
	{ 6,  3, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{10, 11,  7,  6, 10,  7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{10, 11,  7, 10,  7,  6,  8,  0,  4, -1, -1, -1, -1, -1, -1, -1},
	{ 7,  6, 10,  7, 10, 11,  5,  0,  9, -1, -1, -1, -1, -1, -1, -1},
	{11,  7,  6, 11,  6, 10,  9,  5,  8,  8,  5,  4, -1, -1, -1, -1},
	{ 1, 11,  7,  1,  7,  4,  4,  7,  6, -1, -1, -1, -1, -1, -1, -1},
	{ 8,  0,  1,  8,  1,  7,  8,  7,  6, 11,  7,  1, -1, -1, -1, -1},
	{ 9,  5,  0,  7,  4, 11,  7,  6,  4,  4,  1, 11, -1, -1, -1, -1},
	{ 9,  1,  8,  9,  5,  1,  8,  1,  6, 11,  7,  1,  6,  1,  7, -1},
	{10,  1,  5, 10,  5,  6,  6,  5,  7, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  4,  8,  5,  6,  1,  5,  7,  6,  6, 10,  1, -1, -1, -1, -1},
	{ 9,  7,  6,  9,  6,  1,  9,  1,  0,  1,  6, 10, -1, -1, -1, -1},
	{ 6,  1,  7,  6, 10,  1,  7,  1,  9,  4,  8,  1,  9,  1,  8, -1},
	{ 5,  7,  4,  4,  7,  6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  6,  8,  0,  5,  6,  5,  7,  6, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  4,  0,  9,  7,  4,  7,  6,  4, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  6,  8,  7,  6,  9, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 7,  2,  8,  7,  8, 11, 11,  8, 10, -1, -1, -1, -1, -1, -1, -1},
	{ 7,  2,  0,  7,  0, 10,  7, 10, 11, 10,  0,  4, -1, -1, -1, -1},
	{ 0,  9,  5,  8, 11,  2,  8, 10, 11, 11,  7,  2, -1, -1, -1, -1},
	{11,  2, 10, 11,  7,  2, 10,  2,  4,  9,  5,  2,  4,  2,  5, -1},
	{ 1, 11,  7,  4,  1,  7,  4,  7,  2,  4,  2,  8, -1, -1, -1, -1},
	{ 7,  1, 11,  7,  2,  1,  2,  0,  1, -1, -1, -1, -1, -1, -1, -1},
	{ 4,  1, 11,  4, 11,  7,  4,  7,  8,  2,  8,  7,  0,  9,  5, -1},
	{ 7,  1, 11,  7,  2,  1,  5,  1,  9,  9,  1,  2, -1, -1, -1, -1},
	{ 1,  5,  7,  1,  7,  8,  1,  8, 10,  2,  8,  7, -1, -1, -1, -1},
	{ 0, 10,  2,  0,  4, 10,  2, 10,  7,  1,  5, 10,  7, 10,  5, -1},
	{ 0,  7,  1,  0,  9,  7,  1,  7, 10,  2,  8,  7, 10,  7,  8, -1},
	{ 9,  7,  2,  1,  4, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 8,  7,  2,  8,  4,  7,  4,  5,  7, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  7,  2,  5,  7,  0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 8,  7,  2,  8,  4,  7,  9,  7,  0,  0,  7,  4, -1, -1, -1, -1},
	{ 9,  7,  2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 2,  6, 10,  2, 10,  9,  9, 10, 11, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  4,  8,  2,  6,  9,  9,  6, 10,  9, 10, 11, -1, -1, -1, -1},
	{ 5, 10, 11,  5,  2, 10,  5,  0,  2,  6, 10,  2, -1, -1, -1, -1},
	{ 4,  2,  5,  4,  8,  2,  5,  2, 11,  6, 10,  2, 11,  2, 10, -1},
	{ 1, 11,  9,  1,  9,  6,  1,  6,  4,  6,  9,  2, -1, -1, -1, -1},
	{ 9,  6, 11,  9,  2,  6, 11,  6,  1,  8,  0,  6,  1,  6,  0, -1},
	{ 4, 11,  6,  4,  1, 11,  6, 11,  2,  5,  0, 11,  2, 11,  0, -1},
	{ 5,  1, 11,  8,  2,  6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 2,  6, 10,  9,  2, 10,  9, 10,  1,  9,  1,  5, -1, -1, -1, -1},
	{ 9,  2,  6,  9,  6, 10,  9, 10,  5,  1,  5, 10,  0,  4,  8, -1},
	{10,  2,  6, 10,  1,  2,  1,  0,  2, -1, -1, -1, -1, -1, -1, -1},
	{10,  2,  6, 10,  1,  2,  8,  2,  4,  4,  2,  1, -1, -1, -1, -1},
	{ 2,  5,  9,  2,  6,  5,  6,  4,  5, -1, -1, -1, -1, -1, -1, -1},
	{ 2,  5,  9,  2,  6,  5,  0,  5,  8,  8,  5,  6, -1, -1, -1, -1},
	{ 2,  4,  0,  6,  4,  2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 2,  6,  8, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  8, 11, 11,  8, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 4,  9,  0,  4, 10,  9, 10, 11,  9, -1, -1, -1, -1, -1, -1, -1},
	{ 0, 11,  5,  0,  8, 11,  8, 10, 11, -1, -1, -1, -1, -1, -1, -1},
	{ 4, 11,  5, 10, 11,  4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 1,  8,  4,  1, 11,  8, 11,  9,  8, -1, -1, -1, -1, -1, -1, -1},
	{ 9,  1, 11,  0,  1,  9, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 1,  8,  4,  1, 11,  8,  0,  8,  5,  5,  8, 11, -1, -1, -1, -1},
	{ 5,  1, 11, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 5, 10,  1,  5,  9, 10,  9,  8, 10, -1, -1, -1, -1, -1, -1, -1},
	{ 4,  9,  0,  4, 10,  9,  5,  9,  1,  1,  9, 10, -1, -1, -1, -1},
	{ 0, 10,  1,  8, 10,  0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 4, 10,  1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 5,  8,  4,  9,  8,  5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  5,  9, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{ 0,  8,  4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1},
	{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}
	};

const int IsosurfaceCaseTable<Tesseract<3> >::edgeMasks[256]=
	{
	0x0000, 0x0111, 0x0221, 0x0330, 0x0412, 0x0503, 0x0633, 0x0722,
	0x0822, 0x0933, 0x0a03, 0x0b12, 0x0c30, 0x0d21, 0x0e11, 0x0f00,
	0x0144, 0x0055, 0x0365, 0x0274, 0x0556, 0x0447, 0x0777, 0x0666,
	0x0966, 0x0877, 0x0b47, 0x0a56, 0x0d74, 0x0c65, 0x0f55, 0x0e44,
	0x0284, 0x0395, 0x00a5, 0x01b4, 0x0696, 0x0787, 0x04b7, 0x05a6,
	0x0aa6, 0x0bb7, 0x0887, 0x0996, 0x0eb4, 0x0fa5, 0x0c95, 0x0d84,
	0x03c0, 0x02d1, 0x01e1, 0x00f0, 0x07d2, 0x06c3, 0x05f3, 0x04e2,
	0x0be2, 0x0af3, 0x09c3, 0x08d2, 0x0ff0, 0x0ee1, 0x0dd1, 0x0cc0,
	0x0448, 0x0559, 0x0669, 0x0778, 0x005a, 0x014b, 0x027b, 0x036a,
	0x0c6a, 0x0d7b, 0x0e4b, 0x0f5a, 0x0878, 0x0969, 0x0a59, 0x0b48,
	0x050c, 0x041d, 0x072d, 0x063c, 0x011e, 0x000f, 0x033f, 0x022e,
	0x0d2e, 0x0c3f, 0x0f0f, 0x0e1e, 0x093c, 0x082d, 0x0b1d, 0x0a0c,
	0x06cc, 0x07dd, 0x04ed, 0x05fc, 0x02de, 0x03cf, 0x00ff, 0x01ee,
	0x0eee, 0x0fff, 0x0ccf, 0x0dde, 0x0afc, 0x0bed, 0x08dd, 0x09cc,
	0x0788, 0x0699, 0x05a9, 0x04b8, 0x039a, 0x028b, 0x01bb, 0x00aa,
	0x0faa, 0x0ebb, 0x0d8b, 0x0c9a, 0x0bb8, 0x0aa9, 0x0999, 0x0888,
	0x0888, 0x0999, 0x0aa9, 0x0bb8, 0x0c9a, 0x0d8b, 0x0ebb, 0x0faa,
	0x00aa, 0x01bb, 0x028b, 0x039a, 0x04b8, 0x05a9, 0x0699, 0x0788,
	0x09cc, 0x08dd, 0x0bed, 0x0afc, 0x0dde, 0x0ccf, 0x0fff, 0x0eee,
	0x01ee, 0x00ff, 0x03cf, 0x02de, 0x05fc, 0x04ed, 0x07dd, 0x06cc,
	0x0a0c, 0x0b1d, 0x082d, 0x093c, 0x0e1e, 0x0f0f, 0x0c3f, 0x0d2e,
	0x022e, 0x033f, 0x000f, 0x011e, 0x063c, 0x072d, 0x041d, 0x050c,
	0x0b48, 0x0a59, 0x0969, 0x0878, 0x0f5a, 0x0e4b, 0x0d7b, 0x0c6a,
	0x036a, 0x027b, 0x014b, 0x005a, 0x0778, 0x0669, 0x0559, 0x0448,
	0x0cc0, 0x0dd1, 0x0ee1, 0x0ff0, 0x08d2, 0x09c3, 0x0af3, 0x0be2,
	0x04e2, 0x05f3, 0x06c3, 0x07d2, 0x00f0, 0x01e1, 0x02d1, 0x03c0,
	0x0d84, 0x0c95, 0x0fa5, 0x0eb4, 0x0996, 0x0887, 0x0bb7, 0x0aa6,
	0x05a6, 0x04b7, 0x0787, 0x0696, 0x01b4, 0x00a5, 0x0395, 0x0284,
	0x0e44, 0x0f55, 0x0c65, 0x0d74, 0x0a56, 0x0b47, 0x0877, 0x0966,
	0x0666, 0x0777, 0x0447, 0x0556, 0x0274, 0x0365, 0x0055, 0x0144,
	0x0f00, 0x0e11, 0x0d21, 0x0c30, 0x0b12, 0x0a03, 0x0933, 0x0822,
	0x0722, 0x0633, 0x0503, 0x0412, 0x0330, 0x0221, 0x0111, 0x0000
	};

const int IsosurfaceCaseTable<Tesseract<3> >::neighbourMasks[256]=
	{
	0x0000, 0x0015, 0x0016, 0x0017, 0x0019, 0x001d, 0x001f, 0x001f,
	0x001a, 0x001f, 0x001e, 0x001f, 0x001b, 0x001f, 0x001f, 0x000f,
	0x0025, 0x0035, 0x0037, 0x0037, 0x003d, 0x003d, 0x003f, 0x003f,
	0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x002f,
	0x0026, 0x0037, 0x0036, 0x0037, 0x003f, 0x003f, 0x003f, 0x003f,
	0x003e, 0x003f, 0x003e, 0x003f, 0x003f, 0x003f, 0x003f, 0x002f,
	0x0027, 0x0037, 0x0037, 0x0033, 0x003f, 0x003f, 0x003f, 0x003b,
	0x003f, 0x003f, 0x003f, 0x003b, 0x003f, 0x003f, 0x003f, 0x002b,
	0x0029, 0x003d, 0x003f, 0x003f, 0x0039, 0x003d, 0x003f, 0x003f,
	0x003b, 0x003f, 0x003f, 0x003f, 0x003b, 0x003f, 0x003f, 0x002f,
	0x002d, 0x003d, 0x003f, 0x003f, 0x003d, 0x003c, 0x003f, 0x003e,
	0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003e, 0x003f, 0x002e,
	0x002f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f,
	0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x002f,
	0x002f, 0x003f, 0x003f, 0x003b, 0x003f, 0x003e, 0x003f, 0x003a,
	0x003f, 0x003f, 0x003f, 0x003b, 0x003f, 0x003e, 0x003f, 0x002a,
	0x002a, 0x003f, 0x003e, 0x003f, 0x003b, 0x003f, 0x003f, 0x003f,
	0x003a, 0x003f, 0x003e, 0x003f, 0x003b, 0x003f, 0x003f, 0x002f,
	0x002f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f,
	0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x002f,
	0x002e, 0x003f, 0x003e, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f,
	0x003e, 0x003f, 0x003c, 0x003d, 0x003f, 0x003f, 0x003d, 0x002d,
	0x002f, 0x003f, 0x003f, 0x003b, 0x003f, 0x003f, 0x003f, 0x003b,
	0x003f, 0x003f, 0x003d, 0x0039, 0x003f, 0x003f, 0x003d, 0x0029,
	0x002b, 0x003f, 0x003f, 0x003f, 0x003b, 0x003f, 0x003f, 0x003f,
	0x003b, 0x003f, 0x003f, 0x003f, 0x0033, 0x0037, 0x0037, 0x0027,
	0x002f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003e, 0x003f, 0x003e,
	0x003f, 0x003f, 0x003f, 0x003f, 0x0037, 0x0036, 0x0037, 0x0026,
	0x002f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f,
	0x003f, 0x003f, 0x003d, 0x003d, 0x0037, 0x0037, 0x0035, 0x0025,
	0x000f, 0x001f, 0x001f, 0x001b, 0x001f, 0x001e, 0x001f, 0x001a,
	0x001f, 0x001f, 0x001d, 0x0019, 0x0017, 0x0016, 0x0015, 0x0000
	};

}

}
