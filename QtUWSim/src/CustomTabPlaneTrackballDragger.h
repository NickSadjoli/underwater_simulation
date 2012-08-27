/* -*-c++-*- OpenSceneGraph - Copyright (C) 1998-2006 Robert Osfield
 *
 * This library is open source and may be redistributed and/or modified under
 * the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or
 * (at your option) any later version.  The full license is in LICENSE file
 * included with this distribution, and on the openscenegraph.org website.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * OpenSceneGraph Public License for more details.
*/
//osgManipulator - Copyright (C) 2007 Fugro-Jason B.V.
//Customized for QtUWSim

#ifndef OSGMANIPULATOR_CUSTOMTABPLANETRACKBALLDRAGGER
#define OSGMANIPULATOR_CUSTOMTABPLANETRACKBALLDRAGGER 1

#include "CustomTrackballDragger.h"
#include <osgManipulator/TabPlaneDragger>

namespace osgManipulator {

/**
 * Dragger for performing rotation in all axes.
 */
class OSGMANIPULATOR_EXPORT CustomTabPlaneTrackballDragger : public CompositeDragger
{
    public:

        CustomTabPlaneTrackballDragger();

        META_OSGMANIPULATOR_Object(osgManipulator,CustomTabPlaneTrackballDragger)

        /** Setup default geometry for dragger. */
        void setupDefaultGeometry();

        void setPlaneColor(const osg::Vec4& color) { _tabPlaneDragger->setPlaneColor(color); }

    protected:

        virtual ~CustomTabPlaneTrackballDragger();

    public:
        osg::ref_ptr<CustomTrackballDragger> _trackballDragger;
        osg::ref_ptr<TabPlaneDragger>  _tabPlaneDragger;
};


}

#endif
