/*************************************************************************
    OpenGD - Open source Geometry Dash.
    Copyright (C) 2023  OpenGD Team

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License    
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*************************************************************************/

#pragma once

#include "2d/CCLayer.h"

enum Transitions
{
	kNone,
	kScaleUp
};

class PopupLayer : public ax::LayerColor {
public:
	ax::Layer* _mainLayer;

	virtual void setup() {};
	
	bool init();
	void keyBackClicked();

	virtual void show(Transitions = kScaleUp);
	virtual void showOnLayer(ax::Node*, Transitions = kScaleUp);
	virtual void close();
};
