/*
 * Copyright (C) 2005-2011 MaNGOS <http://www.getmangos.com/>
 *
 * Copyright (C) 2008-2011 Trinity <http://www.trinitycore.org/>
 *
 * Copyright (C) 2006-2011 ScriptDev2 <http://www.scriptdev2.com/>
 *
 * Copyright (C) 2010-2011 ProjectSkyfire <http://www.projectskyfire.org/>
 * 
 * Copyright (C) 2010-2012 Project-StarGate-Emu
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef DEF_HALLS_OF_STONE_H
#define DEF_HALLS_OF_STONE_H
enum Data {
	DATA_KRYSTALLUS_EVENT,
	DATA_MAIDEN_OF_GRIEF_EVENT,
	DATA_SJONNIR_EVENT,
	DATA_BRANN_EVENT
};
enum Data64 {
	DATA_KRYSTALLUS,
	DATA_MAIDEN_OF_GRIEF,
	DATA_SJONNIR,
	DATA_KADDRAK,
	DATA_MARNAK,
	DATA_ABEDNEUM,
	DATA_GO_TRIBUNAL_CONSOLE,
	DATA_GO_KADDRAK,
	DATA_GO_MARNAK,
	DATA_GO_ABEDNEUM,
	DATA_GO_SKY_FLOOR,
	DATA_SJONNIR_DOOR,
	DATA_MAIDEN_DOOR
};
enum Creatures {
	CREATURE_MAIDEN = 27975,
	CREATURE_KRYSTALLUS = 27977,
	CREATURE_SJONNIR = 27978,
	CREATURE_MARNAK = 30897,
	CREATURE_KADDRAK = 30898,
	CREATURE_ABEDNEUM = 30899,
	CREATURE_BRANN = 28070
};
enum GameObjects {
	GO_ABEDNEUM = 191669,
	GO_MARNAK = 192170,
	GO_KADDRAK = 192171,
	GO_MAIDEN_DOOR = 191292,
	GO_BRANN_DOOR = 191295,
	GO_SJONNIR_DOOR = 191296,
	GO_TRIBUNAL_CONSOLE = 193907,
	GO_TRIBUNAL_CHEST = 190586,
	GO_TRIBUNAL_CHEST_HERO = 193996
};
#endif
