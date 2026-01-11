#include "../config.h"
#include "../../include/global.h"
#include "../../include/constants/maps.h"
#include "../../include/wild_encounter.h"
#include "../../include/constants/region_map_sections.h"
#include "../../include/constants/species.h"
/*
wild_encounter_tables.c
	day/night and/or regular map wild encounter species
tables to edit:
	gWildMonMorningHeaders
	gWildMonEveningHeaders
	gWildMonNightHeaders
	gSwarmTable
*/
#ifndef UNBOUND //Modify this section
// トキワのもり
static const struct WildPokemon sViridianForest_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sViridianForest_LandMonsInfoDay = {20, sViridianForest_LandMonsDay};
static const struct WildPokemon sViridianForest_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sViridianForest_WaterMonsInfoDay = {20, sViridianForest_WaterMonsDay};
static const struct WildPokemon sViridianForest_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sViridianForest_FishingMonsInfoDay = {20, sViridianForest_FishingMonsDay};
// おつきみやま 1F
static const struct WildPokemon sMtMoon1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtMoon1F_LandMonsInfoDay = {20, sMtMoon1F_LandMonsDay};
static const struct WildPokemon sMtMoon1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sMtMoon1F_WaterMonsInfoDay = {20, sMtMoon1F_WaterMonsDay};
static const struct WildPokemon sMtMoon1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtMoon1F_FishingMonsInfoDay = {20, sMtMoon1F_FishingMonsDay};
// おつきみやま B1F
static const struct WildPokemon sMtMoonB1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtMoonB1F_LandMonsInfoDay = {20, sMtMoonB1F_LandMonsDay};
static const struct WildPokemon sMtMoonB1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sMtMoonB1F_WaterMonsInfoDay = {20, sMtMoonB1F_WaterMonsDay};
static const struct WildPokemon sMtMoonB1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtMoonB1F_FishingMonsInfoDay = {20, sMtMoonB1F_FishingMonsDay};
// おつきみやま B2F
static const struct WildPokemon sMtMoonB2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtMoonB2F_LandMonsInfoDay = {20, sMtMoonB2F_LandMonsDay};
static const struct WildPokemon sMtMoonB2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sMtMoonB2F_WaterMonsInfoDay = {20, sMtMoonB2F_WaterMonsDay};
static const struct WildPokemon sMtMoonB2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtMoonB2F_FishingMonsInfoDay = {20, sMtMoonB2F_FishingMonsDay};
// サント・アンヌごう（外観）
static const struct WildPokemon sSsAnneExterior_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneExterior_LandMonsInfoDay = {20, sSsAnneExterior_LandMonsDay};
static const struct WildPokemon sSsAnneExterior_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnneExterior_WaterMonsInfoDay = {20, sSsAnneExterior_WaterMonsDay};
static const struct WildPokemon sSsAnneExterior_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneExterior_FishingMonsInfoDay = {20, sSsAnneExterior_FishingMonsDay};
// サント・アンヌごう 1F つうろ
static const struct WildPokemon sSsAnne1FCorridor_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne1FCorridor_LandMonsInfoDay = {20, sSsAnne1FCorridor_LandMonsDay};
static const struct WildPokemon sSsAnne1FCorridor_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnne1FCorridor_WaterMonsInfoDay = {20, sSsAnne1FCorridor_WaterMonsDay};
static const struct WildPokemon sSsAnne1FCorridor_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne1FCorridor_FishingMonsInfoDay = {20, sSsAnne1FCorridor_FishingMonsDay};
// サント・アンヌごう 2F つうろ
static const struct WildPokemon sSsAnne2FCorridor_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne2FCorridor_LandMonsInfoDay = {20, sSsAnne2FCorridor_LandMonsDay};
static const struct WildPokemon sSsAnne2FCorridor_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnne2FCorridor_WaterMonsInfoDay = {20, sSsAnne2FCorridor_WaterMonsDay};
static const struct WildPokemon sSsAnne2FCorridor_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne2FCorridor_FishingMonsInfoDay = {20, sSsAnne2FCorridor_FishingMonsDay};
// サント・アンヌごう 3F つうろ
static const struct WildPokemon sSsAnne3FCorridor_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne3FCorridor_LandMonsInfoDay = {20, sSsAnne3FCorridor_LandMonsDay};
static const struct WildPokemon sSsAnne3FCorridor_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnne3FCorridor_WaterMonsInfoDay = {20, sSsAnne3FCorridor_WaterMonsDay};
static const struct WildPokemon sSsAnne3FCorridor_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne3FCorridor_FishingMonsInfoDay = {20, sSsAnne3FCorridor_FishingMonsDay};
// サント・アンヌごう B1F つうろ
static const struct WildPokemon sSsAnneB1FCorridor_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneB1FCorridor_LandMonsInfoDay = {20, sSsAnneB1FCorridor_LandMonsDay};
static const struct WildPokemon sSsAnneB1FCorridor_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnneB1FCorridor_WaterMonsInfoDay = {20, sSsAnneB1FCorridor_WaterMonsDay};
static const struct WildPokemon sSsAnneB1FCorridor_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneB1FCorridor_FishingMonsInfoDay = {20, sSsAnneB1FCorridor_FishingMonsDay};
// サント・アンヌごう デッキ
static const struct WildPokemon sSsAnneDeck_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneDeck_LandMonsInfoDay = {20, sSsAnneDeck_LandMonsDay};
static const struct WildPokemon sSsAnneDeck_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnneDeck_WaterMonsInfoDay = {20, sSsAnneDeck_WaterMonsDay};
static const struct WildPokemon sSsAnneDeck_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneDeck_FishingMonsInfoDay = {20, sSsAnneDeck_FishingMonsDay};
// サント・アンヌごう キッチン
static const struct WildPokemon sSsAnneKitchen_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneKitchen_LandMonsInfoDay = {20, sSsAnneKitchen_LandMonsDay};
static const struct WildPokemon sSsAnneKitchen_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnneKitchen_WaterMonsInfoDay = {20, sSsAnneKitchen_WaterMonsDay};
static const struct WildPokemon sSsAnneKitchen_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneKitchen_FishingMonsInfoDay = {20, sSsAnneKitchen_FishingMonsDay};
// サント・アンヌごう せんちょうしつ
static const struct WildPokemon sSsAnneCaptainsOffice_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneCaptainsOffice_LandMonsInfoDay = {20, sSsAnneCaptainsOffice_LandMonsDay};
static const struct WildPokemon sSsAnneCaptainsOffice_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnneCaptainsOffice_WaterMonsInfoDay = {20, sSsAnneCaptainsOffice_WaterMonsDay};
static const struct WildPokemon sSsAnneCaptainsOffice_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneCaptainsOffice_FishingMonsInfoDay = {20, sSsAnneCaptainsOffice_FishingMonsDay};
// サント・アンヌごう 1F へや1
static const struct WildPokemon sSsAnne1FRoom1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne1FRoom1_LandMonsInfoDay = {20, sSsAnne1FRoom1_LandMonsDay};
static const struct WildPokemon sSsAnne1FRoom1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnne1FRoom1_WaterMonsInfoDay = {20, sSsAnne1FRoom1_WaterMonsDay};
static const struct WildPokemon sSsAnne1FRoom1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne1FRoom1_FishingMonsInfoDay = {20, sSsAnne1FRoom1_FishingMonsDay};
// サント・アンヌごう 1F へや2
static const struct WildPokemon sSsAnne1FRoom2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne1FRoom2_LandMonsInfoDay = {20, sSsAnne1FRoom2_LandMonsDay};
static const struct WildPokemon sSsAnne1FRoom2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnne1FRoom2_WaterMonsInfoDay = {20, sSsAnne1FRoom2_WaterMonsDay};
static const struct WildPokemon sSsAnne1FRoom2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne1FRoom2_FishingMonsInfoDay = {20, sSsAnne1FRoom2_FishingMonsDay};
// サント・アンヌごう 1F へや3
static const struct WildPokemon sSsAnne1FRoom3_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne1FRoom3_LandMonsInfoDay = {20, sSsAnne1FRoom3_LandMonsDay};
static const struct WildPokemon sSsAnne1FRoom3_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnne1FRoom3_WaterMonsInfoDay = {20, sSsAnne1FRoom3_WaterMonsDay};
static const struct WildPokemon sSsAnne1FRoom3_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne1FRoom3_FishingMonsInfoDay = {20, sSsAnne1FRoom3_FishingMonsDay};
// サント・アンヌごう 1F へや4
static const struct WildPokemon sSsAnne1FRoom4_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne1FRoom4_LandMonsInfoDay = {20, sSsAnne1FRoom4_LandMonsDay};
static const struct WildPokemon sSsAnne1FRoom4_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnne1FRoom4_WaterMonsInfoDay = {20, sSsAnne1FRoom4_WaterMonsDay};
static const struct WildPokemon sSsAnne1FRoom4_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne1FRoom4_FishingMonsInfoDay = {20, sSsAnne1FRoom4_FishingMonsDay};
// サント・アンヌごう 1F へや5
static const struct WildPokemon sSsAnne1FRoom5_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne1FRoom5_LandMonsInfoDay = {20, sSsAnne1FRoom5_LandMonsDay};
static const struct WildPokemon sSsAnne1FRoom5_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnne1FRoom5_WaterMonsInfoDay = {20, sSsAnne1FRoom5_WaterMonsDay};
static const struct WildPokemon sSsAnne1FRoom5_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne1FRoom5_FishingMonsInfoDay = {20, sSsAnne1FRoom5_FishingMonsDay};
// サント・アンヌごう 1F へや7
static const struct WildPokemon sSsAnne1FRoom7_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne1FRoom7_LandMonsInfoDay = {20, sSsAnne1FRoom7_LandMonsDay};
static const struct WildPokemon sSsAnne1FRoom7_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnne1FRoom7_WaterMonsInfoDay = {20, sSsAnne1FRoom7_WaterMonsDay};
static const struct WildPokemon sSsAnne1FRoom7_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne1FRoom7_FishingMonsInfoDay = {20, sSsAnne1FRoom7_FishingMonsDay};
// サント・アンヌごう 2F へや1
static const struct WildPokemon sSsAnne2FRoom1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne2FRoom1_LandMonsInfoDay = {20, sSsAnne2FRoom1_LandMonsDay};
static const struct WildPokemon sSsAnne2FRoom1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnne2FRoom1_WaterMonsInfoDay = {20, sSsAnne2FRoom1_WaterMonsDay};
static const struct WildPokemon sSsAnne2FRoom1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne2FRoom1_FishingMonsInfoDay = {20, sSsAnne2FRoom1_FishingMonsDay};
// サント・アンヌごう 2F へや2
static const struct WildPokemon sSsAnne2FRoom2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne2FRoom2_LandMonsInfoDay = {20, sSsAnne2FRoom2_LandMonsDay};
static const struct WildPokemon sSsAnne2FRoom2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnne2FRoom2_WaterMonsInfoDay = {20, sSsAnne2FRoom2_WaterMonsDay};
static const struct WildPokemon sSsAnne2FRoom2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne2FRoom2_FishingMonsInfoDay = {20, sSsAnne2FRoom2_FishingMonsDay};
// サント・アンヌごう 2F へや3
static const struct WildPokemon sSsAnne2FRoom3_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne2FRoom3_LandMonsInfoDay = {20, sSsAnne2FRoom3_LandMonsDay};
static const struct WildPokemon sSsAnne2FRoom3_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnne2FRoom3_WaterMonsInfoDay = {20, sSsAnne2FRoom3_WaterMonsDay};
static const struct WildPokemon sSsAnne2FRoom3_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne2FRoom3_FishingMonsInfoDay = {20, sSsAnne2FRoom3_FishingMonsDay};
// サント・アンヌごう 2F へや4
static const struct WildPokemon sSsAnne2FRoom4_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne2FRoom4_LandMonsInfoDay = {20, sSsAnne2FRoom4_LandMonsDay};
static const struct WildPokemon sSsAnne2FRoom4_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnne2FRoom4_WaterMonsInfoDay = {20, sSsAnne2FRoom4_WaterMonsDay};
static const struct WildPokemon sSsAnne2FRoom4_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne2FRoom4_FishingMonsInfoDay = {20, sSsAnne2FRoom4_FishingMonsDay};
// サント・アンヌごう 2F へや5
static const struct WildPokemon sSsAnne2FRoom5_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne2FRoom5_LandMonsInfoDay = {20, sSsAnne2FRoom5_LandMonsDay};
static const struct WildPokemon sSsAnne2FRoom5_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnne2FRoom5_WaterMonsInfoDay = {20, sSsAnne2FRoom5_WaterMonsDay};
static const struct WildPokemon sSsAnne2FRoom5_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne2FRoom5_FishingMonsInfoDay = {20, sSsAnne2FRoom5_FishingMonsDay};
// サント・アンヌごう 2F へや6
static const struct WildPokemon sSsAnne2FRoom6_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne2FRoom6_LandMonsInfoDay = {20, sSsAnne2FRoom6_LandMonsDay};
static const struct WildPokemon sSsAnne2FRoom6_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnne2FRoom6_WaterMonsInfoDay = {20, sSsAnne2FRoom6_WaterMonsDay};
static const struct WildPokemon sSsAnne2FRoom6_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne2FRoom6_FishingMonsInfoDay = {20, sSsAnne2FRoom6_FishingMonsDay};
// サント・アンヌごう B1F へや1
static const struct WildPokemon sSsAnneB1FRoom1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneB1FRoom1_LandMonsInfoDay = {20, sSsAnneB1FRoom1_LandMonsDay};
static const struct WildPokemon sSsAnneB1FRoom1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnneB1FRoom1_WaterMonsInfoDay = {20, sSsAnneB1FRoom1_WaterMonsDay};
static const struct WildPokemon sSsAnneB1FRoom1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneB1FRoom1_FishingMonsInfoDay = {20, sSsAnneB1FRoom1_FishingMonsDay};
// サント・アンヌごう B1F へや2
static const struct WildPokemon sSsAnneB1FRoom2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneB1FRoom2_LandMonsInfoDay = {20, sSsAnneB1FRoom2_LandMonsDay};
static const struct WildPokemon sSsAnneB1FRoom2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnneB1FRoom2_WaterMonsInfoDay = {20, sSsAnneB1FRoom2_WaterMonsDay};
static const struct WildPokemon sSsAnneB1FRoom2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneB1FRoom2_FishingMonsInfoDay = {20, sSsAnneB1FRoom2_FishingMonsDay};
// サント・アンヌごう B1F へや3
static const struct WildPokemon sSsAnneB1FRoom3_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneB1FRoom3_LandMonsInfoDay = {20, sSsAnneB1FRoom3_LandMonsDay};
static const struct WildPokemon sSsAnneB1FRoom3_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnneB1FRoom3_WaterMonsInfoDay = {20, sSsAnneB1FRoom3_WaterMonsDay};
static const struct WildPokemon sSsAnneB1FRoom3_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneB1FRoom3_FishingMonsInfoDay = {20, sSsAnneB1FRoom3_FishingMonsDay};
// サント・アンヌごう B1F へや4
static const struct WildPokemon sSsAnneB1FRoom4_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneB1FRoom4_LandMonsInfoDay = {20, sSsAnneB1FRoom4_LandMonsDay};
static const struct WildPokemon sSsAnneB1FRoom4_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnneB1FRoom4_WaterMonsInfoDay = {20, sSsAnneB1FRoom4_WaterMonsDay};
static const struct WildPokemon sSsAnneB1FRoom4_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneB1FRoom4_FishingMonsInfoDay = {20, sSsAnneB1FRoom4_FishingMonsDay};
// サント・アンヌごう B1F へや5
static const struct WildPokemon sSsAnneB1FRoom5_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneB1FRoom5_LandMonsInfoDay = {20, sSsAnneB1FRoom5_LandMonsDay};
static const struct WildPokemon sSsAnneB1FRoom5_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnneB1FRoom5_WaterMonsInfoDay = {20, sSsAnneB1FRoom5_WaterMonsDay};
static const struct WildPokemon sSsAnneB1FRoom5_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnneB1FRoom5_FishingMonsInfoDay = {20, sSsAnneB1FRoom5_FishingMonsDay};
// サント・アンヌごう 1F へや6
static const struct WildPokemon sSsAnne1FRoom6_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne1FRoom6_LandMonsInfoDay = {20, sSsAnne1FRoom6_LandMonsDay};
static const struct WildPokemon sSsAnne1FRoom6_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSsAnne1FRoom6_WaterMonsInfoDay = {20, sSsAnne1FRoom6_WaterMonsDay};
static const struct WildPokemon sSsAnne1FRoom6_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSsAnne1FRoom6_FishingMonsInfoDay = {20, sSsAnne1FRoom6_FishingMonsDay};
// ちかつうろ（5-6）きた
static const struct WildPokemon sUndergroundPathNorthEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sUndergroundPathNorthEntrance_LandMonsInfoDay = {20, sUndergroundPathNorthEntrance_LandMonsDay};
static const struct WildPokemon sUndergroundPathNorthEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sUndergroundPathNorthEntrance_WaterMonsInfoDay = {20, sUndergroundPathNorthEntrance_WaterMonsDay};
static const struct WildPokemon sUndergroundPathNorthEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sUndergroundPathNorthEntrance_FishingMonsInfoDay = {20, sUndergroundPathNorthEntrance_FishingMonsDay};
// ちかつうろ（5-6）
static const struct WildPokemon sUndergroundPathNorthSouthTunnel_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sUndergroundPathNorthSouthTunnel_LandMonsInfoDay = {20, sUndergroundPathNorthSouthTunnel_LandMonsDay};
static const struct WildPokemon sUndergroundPathNorthSouthTunnel_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sUndergroundPathNorthSouthTunnel_WaterMonsInfoDay = {20, sUndergroundPathNorthSouthTunnel_WaterMonsDay};
static const struct WildPokemon sUndergroundPathNorthSouthTunnel_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sUndergroundPathNorthSouthTunnel_FishingMonsInfoDay = {20, sUndergroundPathNorthSouthTunnel_FishingMonsDay};
// ちかつうろ（5-6）みなみ
static const struct WildPokemon sUndergroundPathSouthEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sUndergroundPathSouthEntrance_LandMonsInfoDay = {20, sUndergroundPathSouthEntrance_LandMonsDay};
static const struct WildPokemon sUndergroundPathSouthEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sUndergroundPathSouthEntrance_WaterMonsInfoDay = {20, sUndergroundPathSouthEntrance_WaterMonsDay};
static const struct WildPokemon sUndergroundPathSouthEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sUndergroundPathSouthEntrance_FishingMonsInfoDay = {20, sUndergroundPathSouthEntrance_FishingMonsDay};
// ちかつうろ（7-8）にし
static const struct WildPokemon sUndergroundPathWestEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sUndergroundPathWestEntrance_LandMonsInfoDay = {20, sUndergroundPathWestEntrance_LandMonsDay};
static const struct WildPokemon sUndergroundPathWestEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sUndergroundPathWestEntrance_WaterMonsInfoDay = {20, sUndergroundPathWestEntrance_WaterMonsDay};
static const struct WildPokemon sUndergroundPathWestEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sUndergroundPathWestEntrance_FishingMonsInfoDay = {20, sUndergroundPathWestEntrance_FishingMonsDay};
// ちかつうろ（7-8）
static const struct WildPokemon sUndergroundPathEastWestTunnel_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sUndergroundPathEastWestTunnel_LandMonsInfoDay = {20, sUndergroundPathEastWestTunnel_LandMonsDay};
static const struct WildPokemon sUndergroundPathEastWestTunnel_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sUndergroundPathEastWestTunnel_WaterMonsInfoDay = {20, sUndergroundPathEastWestTunnel_WaterMonsDay};
static const struct WildPokemon sUndergroundPathEastWestTunnel_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sUndergroundPathEastWestTunnel_FishingMonsInfoDay = {20, sUndergroundPathEastWestTunnel_FishingMonsDay};
// ちかつうろ（7-8）ひがし
static const struct WildPokemon sUndergroundPathEastEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sUndergroundPathEastEntrance_LandMonsInfoDay = {20, sUndergroundPathEastEntrance_LandMonsDay};
static const struct WildPokemon sUndergroundPathEastEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sUndergroundPathEastEntrance_WaterMonsInfoDay = {20, sUndergroundPathEastEntrance_WaterMonsDay};
static const struct WildPokemon sUndergroundPathEastEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sUndergroundPathEastEntrance_FishingMonsInfoDay = {20, sUndergroundPathEastEntrance_FishingMonsDay};
// ディグダのあな（きたのいりぐち）
static const struct WildPokemon sDiglettsCaveNorthEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sDiglettsCaveNorthEntrance_LandMonsInfoDay = {20, sDiglettsCaveNorthEntrance_LandMonsDay};
static const struct WildPokemon sDiglettsCaveNorthEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sDiglettsCaveNorthEntrance_WaterMonsInfoDay = {20, sDiglettsCaveNorthEntrance_WaterMonsDay};
static const struct WildPokemon sDiglettsCaveNorthEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sDiglettsCaveNorthEntrance_FishingMonsInfoDay = {20, sDiglettsCaveNorthEntrance_FishingMonsDay};
// ディグダのあな
static const struct WildPokemon sDiglettsCaveB1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sDiglettsCaveB1F_LandMonsInfoDay = {20, sDiglettsCaveB1F_LandMonsDay};
static const struct WildPokemon sDiglettsCaveB1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sDiglettsCaveB1F_WaterMonsInfoDay = {20, sDiglettsCaveB1F_WaterMonsDay};
static const struct WildPokemon sDiglettsCaveB1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sDiglettsCaveB1F_FishingMonsInfoDay = {20, sDiglettsCaveB1F_FishingMonsDay};
// ディグダのあな（みなみのいりぐち）
static const struct WildPokemon sDiglettsCaveSouthEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sDiglettsCaveSouthEntrance_LandMonsInfoDay = {20, sDiglettsCaveSouthEntrance_LandMonsDay};
static const struct WildPokemon sDiglettsCaveSouthEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sDiglettsCaveSouthEntrance_WaterMonsInfoDay = {20, sDiglettsCaveSouthEntrance_WaterMonsDay};
static const struct WildPokemon sDiglettsCaveSouthEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sDiglettsCaveSouthEntrance_FishingMonsInfoDay = {20, sDiglettsCaveSouthEntrance_FishingMonsDay};
// チャンピオンロード 1F
static const struct WildPokemon sVictoryRoad1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVictoryRoad1F_LandMonsInfoDay = {20, sVictoryRoad1F_LandMonsDay};
static const struct WildPokemon sVictoryRoad1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sVictoryRoad1F_WaterMonsInfoDay = {20, sVictoryRoad1F_WaterMonsDay};
static const struct WildPokemon sVictoryRoad1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVictoryRoad1F_FishingMonsInfoDay = {20, sVictoryRoad1F_FishingMonsDay};
// チャンピオンロード 2F
static const struct WildPokemon sVictoryRoad2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVictoryRoad2F_LandMonsInfoDay = {20, sVictoryRoad2F_LandMonsDay};
static const struct WildPokemon sVictoryRoad2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sVictoryRoad2F_WaterMonsInfoDay = {20, sVictoryRoad2F_WaterMonsDay};
static const struct WildPokemon sVictoryRoad2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVictoryRoad2F_FishingMonsInfoDay = {20, sVictoryRoad2F_FishingMonsDay};
// チャンピオンロード 3F
static const struct WildPokemon sVictoryRoad3F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVictoryRoad3F_LandMonsInfoDay = {20, sVictoryRoad3F_LandMonsDay};
static const struct WildPokemon sVictoryRoad3F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sVictoryRoad3F_WaterMonsInfoDay = {20, sVictoryRoad3F_WaterMonsDay};
static const struct WildPokemon sVictoryRoad3F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVictoryRoad3F_FishingMonsInfoDay = {20, sVictoryRoad3F_FishingMonsDay};
// ロケットだんアジト B1F
static const struct WildPokemon sRocketHideoutB1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRocketHideoutB1F_LandMonsInfoDay = {20, sRocketHideoutB1F_LandMonsDay};
static const struct WildPokemon sRocketHideoutB1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRocketHideoutB1F_WaterMonsInfoDay = {20, sRocketHideoutB1F_WaterMonsDay};
static const struct WildPokemon sRocketHideoutB1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRocketHideoutB1F_FishingMonsInfoDay = {20, sRocketHideoutB1F_FishingMonsDay};
// ロケットだんアジト B2F
static const struct WildPokemon sRocketHideoutB2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRocketHideoutB2F_LandMonsInfoDay = {20, sRocketHideoutB2F_LandMonsDay};
static const struct WildPokemon sRocketHideoutB2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRocketHideoutB2F_WaterMonsInfoDay = {20, sRocketHideoutB2F_WaterMonsDay};
static const struct WildPokemon sRocketHideoutB2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRocketHideoutB2F_FishingMonsInfoDay = {20, sRocketHideoutB2F_FishingMonsDay};
// ロケットだんアジト B3F
static const struct WildPokemon sRocketHideoutB3F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRocketHideoutB3F_LandMonsInfoDay = {20, sRocketHideoutB3F_LandMonsDay};
static const struct WildPokemon sRocketHideoutB3F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRocketHideoutB3F_WaterMonsInfoDay = {20, sRocketHideoutB3F_WaterMonsDay};
static const struct WildPokemon sRocketHideoutB3F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRocketHideoutB3F_FishingMonsInfoDay = {20, sRocketHideoutB3F_FishingMonsDay};
// ロケットだんアジト B4F
static const struct WildPokemon sRocketHideoutB4F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRocketHideoutB4F_LandMonsInfoDay = {20, sRocketHideoutB4F_LandMonsDay};
static const struct WildPokemon sRocketHideoutB4F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRocketHideoutB4F_WaterMonsInfoDay = {20, sRocketHideoutB4F_WaterMonsDay};
static const struct WildPokemon sRocketHideoutB4F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRocketHideoutB4F_FishingMonsInfoDay = {20, sRocketHideoutB4F_FishingMonsDay};
// ロケットだんアジト エレベーター
static const struct WildPokemon sRocketHideoutElevator_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRocketHideoutElevator_LandMonsInfoDay = {20, sRocketHideoutElevator_LandMonsDay};
static const struct WildPokemon sRocketHideoutElevator_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRocketHideoutElevator_WaterMonsInfoDay = {20, sRocketHideoutElevator_WaterMonsDay};
static const struct WildPokemon sRocketHideoutElevator_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRocketHideoutElevator_FishingMonsInfoDay = {20, sRocketHideoutElevator_FishingMonsDay};
// シルフカンパニー 1F
static const struct WildPokemon sSilphCo1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo1F_LandMonsInfoDay = {20, sSilphCo1F_LandMonsDay};
static const struct WildPokemon sSilphCo1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSilphCo1F_WaterMonsInfoDay = {20, sSilphCo1F_WaterMonsDay};
static const struct WildPokemon sSilphCo1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo1F_FishingMonsInfoDay = {20, sSilphCo1F_FishingMonsDay};
// シルフカンパニー 2F
static const struct WildPokemon sSilphCo2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo2F_LandMonsInfoDay = {20, sSilphCo2F_LandMonsDay};
static const struct WildPokemon sSilphCo2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSilphCo2F_WaterMonsInfoDay = {20, sSilphCo2F_WaterMonsDay};
static const struct WildPokemon sSilphCo2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo2F_FishingMonsInfoDay = {20, sSilphCo2F_FishingMonsDay};
// シルフカンパニー 3F
static const struct WildPokemon sSilphCo3F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo3F_LandMonsInfoDay = {20, sSilphCo3F_LandMonsDay};
static const struct WildPokemon sSilphCo3F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSilphCo3F_WaterMonsInfoDay = {20, sSilphCo3F_WaterMonsDay};
static const struct WildPokemon sSilphCo3F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo3F_FishingMonsInfoDay = {20, sSilphCo3F_FishingMonsDay};
// シルフカンパニー 4F
static const struct WildPokemon sSilphCo4F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo4F_LandMonsInfoDay = {20, sSilphCo4F_LandMonsDay};
static const struct WildPokemon sSilphCo4F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSilphCo4F_WaterMonsInfoDay = {20, sSilphCo4F_WaterMonsDay};
static const struct WildPokemon sSilphCo4F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo4F_FishingMonsInfoDay = {20, sSilphCo4F_FishingMonsDay};
// シルフカンパニー 5F
static const struct WildPokemon sSilphCo5F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo5F_LandMonsInfoDay = {20, sSilphCo5F_LandMonsDay};
static const struct WildPokemon sSilphCo5F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSilphCo5F_WaterMonsInfoDay = {20, sSilphCo5F_WaterMonsDay};
static const struct WildPokemon sSilphCo5F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo5F_FishingMonsInfoDay = {20, sSilphCo5F_FishingMonsDay};
// シルフカンパニー 6F
static const struct WildPokemon sSilphCo6F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo6F_LandMonsInfoDay = {20, sSilphCo6F_LandMonsDay};
static const struct WildPokemon sSilphCo6F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSilphCo6F_WaterMonsInfoDay = {20, sSilphCo6F_WaterMonsDay};
static const struct WildPokemon sSilphCo6F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo6F_FishingMonsInfoDay = {20, sSilphCo6F_FishingMonsDay};
// シルフカンパニー 7F
static const struct WildPokemon sSilphCo7F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo7F_LandMonsInfoDay = {20, sSilphCo7F_LandMonsDay};
static const struct WildPokemon sSilphCo7F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSilphCo7F_WaterMonsInfoDay = {20, sSilphCo7F_WaterMonsDay};
static const struct WildPokemon sSilphCo7F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo7F_FishingMonsInfoDay = {20, sSilphCo7F_FishingMonsDay};
// シルフカンパニー 8F
static const struct WildPokemon sSilphCo8F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo8F_LandMonsInfoDay = {20, sSilphCo8F_LandMonsDay};
static const struct WildPokemon sSilphCo8F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSilphCo8F_WaterMonsInfoDay = {20, sSilphCo8F_WaterMonsDay};
static const struct WildPokemon sSilphCo8F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo8F_FishingMonsInfoDay = {20, sSilphCo8F_FishingMonsDay};
// シルフカンパニー 9F
static const struct WildPokemon sSilphCo9F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo9F_LandMonsInfoDay = {20, sSilphCo9F_LandMonsDay};
static const struct WildPokemon sSilphCo9F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSilphCo9F_WaterMonsInfoDay = {20, sSilphCo9F_WaterMonsDay};
static const struct WildPokemon sSilphCo9F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo9F_FishingMonsInfoDay = {20, sSilphCo9F_FishingMonsDay};
// シルフカンパニー 10F
static const struct WildPokemon sSilphCo10F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo10F_LandMonsInfoDay = {20, sSilphCo10F_LandMonsDay};
static const struct WildPokemon sSilphCo10F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSilphCo10F_WaterMonsInfoDay = {20, sSilphCo10F_WaterMonsDay};
static const struct WildPokemon sSilphCo10F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo10F_FishingMonsInfoDay = {20, sSilphCo10F_FishingMonsDay};
// シルフカンパニー 11F
static const struct WildPokemon sSilphCo11F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo11F_LandMonsInfoDay = {20, sSilphCo11F_LandMonsDay};
static const struct WildPokemon sSilphCo11F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSilphCo11F_WaterMonsInfoDay = {20, sSilphCo11F_WaterMonsDay};
static const struct WildPokemon sSilphCo11F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCo11F_FishingMonsInfoDay = {20, sSilphCo11F_FishingMonsDay};
// シルフカンパニー エレベーター
static const struct WildPokemon sSilphCoElevator_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCoElevator_LandMonsInfoDay = {20, sSilphCoElevator_LandMonsDay};
static const struct WildPokemon sSilphCoElevator_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSilphCoElevator_WaterMonsInfoDay = {20, sSilphCoElevator_WaterMonsDay};
static const struct WildPokemon sSilphCoElevator_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSilphCoElevator_FishingMonsInfoDay = {20, sSilphCoElevator_FishingMonsDay};
// ポケモンやしき 1F
static const struct WildPokemon sPokemonMansion1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonMansion1F_LandMonsInfoDay = {20, sPokemonMansion1F_LandMonsDay};
static const struct WildPokemon sPokemonMansion1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonMansion1F_WaterMonsInfoDay = {20, sPokemonMansion1F_WaterMonsDay};
static const struct WildPokemon sPokemonMansion1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonMansion1F_FishingMonsInfoDay = {20, sPokemonMansion1F_FishingMonsDay};
// ポケモンやしき 2F
static const struct WildPokemon sPokemonMansion2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonMansion2F_LandMonsInfoDay = {20, sPokemonMansion2F_LandMonsDay};
static const struct WildPokemon sPokemonMansion2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonMansion2F_WaterMonsInfoDay = {20, sPokemonMansion2F_WaterMonsDay};
static const struct WildPokemon sPokemonMansion2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonMansion2F_FishingMonsInfoDay = {20, sPokemonMansion2F_FishingMonsDay};
// ポケモンやしき 3F
static const struct WildPokemon sPokemonMansion3F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonMansion3F_LandMonsInfoDay = {20, sPokemonMansion3F_LandMonsDay};
static const struct WildPokemon sPokemonMansion3F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonMansion3F_WaterMonsInfoDay = {20, sPokemonMansion3F_WaterMonsDay};
static const struct WildPokemon sPokemonMansion3F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonMansion3F_FishingMonsInfoDay = {20, sPokemonMansion3F_FishingMonsDay};
// ポケモンやしき B1F
static const struct WildPokemon sPokemonMansionB1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonMansionB1F_LandMonsInfoDay = {20, sPokemonMansionB1F_LandMonsDay};
static const struct WildPokemon sPokemonMansionB1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonMansionB1F_WaterMonsInfoDay = {20, sPokemonMansionB1F_WaterMonsDay};
static const struct WildPokemon sPokemonMansionB1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonMansionB1F_FishingMonsInfoDay = {20, sPokemonMansionB1F_FishingMonsDay};
// サファリゾーン（ちゅうおう）
static const struct WildPokemon sSafariZoneCenter_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneCenter_LandMonsInfoDay = {20, sSafariZoneCenter_LandMonsDay};
static const struct WildPokemon sSafariZoneCenter_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSafariZoneCenter_WaterMonsInfoDay = {20, sSafariZoneCenter_WaterMonsDay};
static const struct WildPokemon sSafariZoneCenter_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneCenter_FishingMonsInfoDay = {20, sSafariZoneCenter_FishingMonsDay};
// サファリゾーン（ひがし）
static const struct WildPokemon sSafariZoneEast_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneEast_LandMonsInfoDay = {20, sSafariZoneEast_LandMonsDay};
static const struct WildPokemon sSafariZoneEast_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSafariZoneEast_WaterMonsInfoDay = {20, sSafariZoneEast_WaterMonsDay};
static const struct WildPokemon sSafariZoneEast_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneEast_FishingMonsInfoDay = {20, sSafariZoneEast_FishingMonsDay};
// サファリゾーン（きた）
static const struct WildPokemon sSafariZoneNorth_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneNorth_LandMonsInfoDay = {20, sSafariZoneNorth_LandMonsDay};
static const struct WildPokemon sSafariZoneNorth_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSafariZoneNorth_WaterMonsInfoDay = {20, sSafariZoneNorth_WaterMonsDay};
static const struct WildPokemon sSafariZoneNorth_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneNorth_FishingMonsInfoDay = {20, sSafariZoneNorth_FishingMonsDay};
// サファリゾーン（にし）
static const struct WildPokemon sSafariZoneWest_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneWest_LandMonsInfoDay = {20, sSafariZoneWest_LandMonsDay};
static const struct WildPokemon sSafariZoneWest_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSafariZoneWest_WaterMonsInfoDay = {20, sSafariZoneWest_WaterMonsDay};
static const struct WildPokemon sSafariZoneWest_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneWest_FishingMonsInfoDay = {20, sSafariZoneWest_FishingMonsDay};
// サファリゾーン きゅうけいじょ1
static const struct WildPokemon sSafariZoneBuilding1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneBuilding1_LandMonsInfoDay = {20, sSafariZoneBuilding1_LandMonsDay};
static const struct WildPokemon sSafariZoneBuilding1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSafariZoneBuilding1_WaterMonsInfoDay = {20, sSafariZoneBuilding1_WaterMonsDay};
static const struct WildPokemon sSafariZoneBuilding1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneBuilding1_FishingMonsInfoDay = {20, sSafariZoneBuilding1_FishingMonsDay};
// サファリゾーン きゅうけいじょ2
static const struct WildPokemon sSafariZoneBuilding2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneBuilding2_LandMonsInfoDay = {20, sSafariZoneBuilding2_LandMonsDay};
static const struct WildPokemon sSafariZoneBuilding2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSafariZoneBuilding2_WaterMonsInfoDay = {20, sSafariZoneBuilding2_WaterMonsDay};
static const struct WildPokemon sSafariZoneBuilding2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneBuilding2_FishingMonsInfoDay = {20, sSafariZoneBuilding2_FishingMonsDay};
// サファリゾーン きゅうけいじょ3
static const struct WildPokemon sSafariZoneBuilding3_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneBuilding3_LandMonsInfoDay = {20, sSafariZoneBuilding3_LandMonsDay};
static const struct WildPokemon sSafariZoneBuilding3_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSafariZoneBuilding3_WaterMonsInfoDay = {20, sSafariZoneBuilding3_WaterMonsDay};
static const struct WildPokemon sSafariZoneBuilding3_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneBuilding3_FishingMonsInfoDay = {20, sSafariZoneBuilding3_FishingMonsDay};
// サファリゾーン きゅうけいじょ4
static const struct WildPokemon sSafariZoneBuilding4_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneBuilding4_LandMonsInfoDay = {20, sSafariZoneBuilding4_LandMonsDay};
static const struct WildPokemon sSafariZoneBuilding4_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSafariZoneBuilding4_WaterMonsInfoDay = {20, sSafariZoneBuilding4_WaterMonsDay};
static const struct WildPokemon sSafariZoneBuilding4_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneBuilding4_FishingMonsInfoDay = {20, sSafariZoneBuilding4_FishingMonsDay};
// サファリゾーン ひみつのいえ
static const struct WildPokemon sSafariZoneSecretHouse_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneSecretHouse_LandMonsInfoDay = {20, sSafariZoneSecretHouse_LandMonsDay};
static const struct WildPokemon sSafariZoneSecretHouse_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSafariZoneSecretHouse_WaterMonsInfoDay = {20, sSafariZoneSecretHouse_WaterMonsDay};
static const struct WildPokemon sSafariZoneSecretHouse_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSafariZoneSecretHouse_FishingMonsInfoDay = {20, sSafariZoneSecretHouse_FishingMonsDay};
// ハナダのどうくつ 1F
static const struct WildPokemon sCeruleanCave1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCave1F_LandMonsInfoDay = {20, sCeruleanCave1F_LandMonsDay};
static const struct WildPokemon sCeruleanCave1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeruleanCave1F_WaterMonsInfoDay = {20, sCeruleanCave1F_WaterMonsDay};
static const struct WildPokemon sCeruleanCave1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCave1F_FishingMonsInfoDay = {20, sCeruleanCave1F_FishingMonsDay};
// ハナダのどうくつ 2F
static const struct WildPokemon sCeruleanCave2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCave2F_LandMonsInfoDay = {20, sCeruleanCave2F_LandMonsDay};
static const struct WildPokemon sCeruleanCave2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeruleanCave2F_WaterMonsInfoDay = {20, sCeruleanCave2F_WaterMonsDay};
static const struct WildPokemon sCeruleanCave2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCave2F_FishingMonsInfoDay = {20, sCeruleanCave2F_FishingMonsDay};
// ハナダのどうくつ B1F
static const struct WildPokemon sCeruleanCaveB1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCaveB1F_LandMonsInfoDay = {20, sCeruleanCaveB1F_LandMonsDay};
static const struct WildPokemon sCeruleanCaveB1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeruleanCaveB1F_WaterMonsInfoDay = {20, sCeruleanCaveB1F_WaterMonsDay};
static const struct WildPokemon sCeruleanCaveB1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCaveB1F_FishingMonsInfoDay = {20, sCeruleanCaveB1F_FishingMonsDay};
// ポケモンリーグ カンナのへや
static const struct WildPokemon sPokemonLeagueLoreleisRoom_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonLeagueLoreleisRoom_LandMonsInfoDay = {20, sPokemonLeagueLoreleisRoom_LandMonsDay};
static const struct WildPokemon sPokemonLeagueLoreleisRoom_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonLeagueLoreleisRoom_WaterMonsInfoDay = {20, sPokemonLeagueLoreleisRoom_WaterMonsDay};
static const struct WildPokemon sPokemonLeagueLoreleisRoom_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonLeagueLoreleisRoom_FishingMonsInfoDay = {20, sPokemonLeagueLoreleisRoom_FishingMonsDay};
// ポケモンリーグ シバのへや
static const struct WildPokemon sPokemonLeagueBrunosRoom_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonLeagueBrunosRoom_LandMonsInfoDay = {20, sPokemonLeagueBrunosRoom_LandMonsDay};
static const struct WildPokemon sPokemonLeagueBrunosRoom_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonLeagueBrunosRoom_WaterMonsInfoDay = {20, sPokemonLeagueBrunosRoom_WaterMonsDay};
static const struct WildPokemon sPokemonLeagueBrunosRoom_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonLeagueBrunosRoom_FishingMonsInfoDay = {20, sPokemonLeagueBrunosRoom_FishingMonsDay};
// ポケモンリーグ キクコのへや
static const struct WildPokemon sPokemonLeagueAgathasRoom_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonLeagueAgathasRoom_LandMonsInfoDay = {20, sPokemonLeagueAgathasRoom_LandMonsDay};
static const struct WildPokemon sPokemonLeagueAgathasRoom_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonLeagueAgathasRoom_WaterMonsInfoDay = {20, sPokemonLeagueAgathasRoom_WaterMonsDay};
static const struct WildPokemon sPokemonLeagueAgathasRoom_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonLeagueAgathasRoom_FishingMonsInfoDay = {20, sPokemonLeagueAgathasRoom_FishingMonsDay};
// ポケモンリーグ ワタルのへや
static const struct WildPokemon sPokemonLeagueLancesRoom_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonLeagueLancesRoom_LandMonsInfoDay = {20, sPokemonLeagueLancesRoom_LandMonsDay};
static const struct WildPokemon sPokemonLeagueLancesRoom_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonLeagueLancesRoom_WaterMonsInfoDay = {20, sPokemonLeagueLancesRoom_WaterMonsDay};
static const struct WildPokemon sPokemonLeagueLancesRoom_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonLeagueLancesRoom_FishingMonsInfoDay = {20, sPokemonLeagueLancesRoom_FishingMonsDay};
// ポケモンリーグ チャンピオンのへや
static const struct WildPokemon sPokemonLeagueChampionsRoom_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonLeagueChampionsRoom_LandMonsInfoDay = {20, sPokemonLeagueChampionsRoom_LandMonsDay};
static const struct WildPokemon sPokemonLeagueChampionsRoom_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonLeagueChampionsRoom_WaterMonsInfoDay = {20, sPokemonLeagueChampionsRoom_WaterMonsDay};
static const struct WildPokemon sPokemonLeagueChampionsRoom_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonLeagueChampionsRoom_FishingMonsInfoDay = {20, sPokemonLeagueChampionsRoom_FishingMonsDay};
// でんどういり
static const struct WildPokemon sPokemonLeagueHallOfFame_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonLeagueHallOfFame_LandMonsInfoDay = {20, sPokemonLeagueHallOfFame_LandMonsDay};
static const struct WildPokemon sPokemonLeagueHallOfFame_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonLeagueHallOfFame_WaterMonsInfoDay = {20, sPokemonLeagueHallOfFame_WaterMonsDay};
static const struct WildPokemon sPokemonLeagueHallOfFame_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonLeagueHallOfFame_FishingMonsInfoDay = {20, sPokemonLeagueHallOfFame_FishingMonsDay};
// イワヤマトンネル 1F
static const struct WildPokemon sRockTunnel1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRockTunnel1F_LandMonsInfoDay = {20, sRockTunnel1F_LandMonsDay};
static const struct WildPokemon sRockTunnel1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRockTunnel1F_WaterMonsInfoDay = {20, sRockTunnel1F_WaterMonsDay};
static const struct WildPokemon sRockTunnel1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRockTunnel1F_FishingMonsInfoDay = {20, sRockTunnel1F_FishingMonsDay};
// イワヤマトンネル B1F
static const struct WildPokemon sRockTunnelB1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRockTunnelB1F_LandMonsInfoDay = {20, sRockTunnelB1F_LandMonsDay};
static const struct WildPokemon sRockTunnelB1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRockTunnelB1F_WaterMonsInfoDay = {20, sRockTunnelB1F_WaterMonsDay};
static const struct WildPokemon sRockTunnelB1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRockTunnelB1F_FishingMonsInfoDay = {20, sRockTunnelB1F_FishingMonsDay};
// ふたごじま 1F
static const struct WildPokemon sSeafoamIslands1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSeafoamIslands1F_LandMonsInfoDay = {20, sSeafoamIslands1F_LandMonsDay};
static const struct WildPokemon sSeafoamIslands1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSeafoamIslands1F_WaterMonsInfoDay = {20, sSeafoamIslands1F_WaterMonsDay};
static const struct WildPokemon sSeafoamIslands1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSeafoamIslands1F_FishingMonsInfoDay = {20, sSeafoamIslands1F_FishingMonsDay};
// ふたごじま B1F
static const struct WildPokemon sSeafoamIslandsB1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSeafoamIslandsB1F_LandMonsInfoDay = {20, sSeafoamIslandsB1F_LandMonsDay};
static const struct WildPokemon sSeafoamIslandsB1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSeafoamIslandsB1F_WaterMonsInfoDay = {20, sSeafoamIslandsB1F_WaterMonsDay};
static const struct WildPokemon sSeafoamIslandsB1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSeafoamIslandsB1F_FishingMonsInfoDay = {20, sSeafoamIslandsB1F_FishingMonsDay};
// ふたごじま B2F
static const struct WildPokemon sSeafoamIslandsB2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSeafoamIslandsB2F_LandMonsInfoDay = {20, sSeafoamIslandsB2F_LandMonsDay};
static const struct WildPokemon sSeafoamIslandsB2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSeafoamIslandsB2F_WaterMonsInfoDay = {20, sSeafoamIslandsB2F_WaterMonsDay};
static const struct WildPokemon sSeafoamIslandsB2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSeafoamIslandsB2F_FishingMonsInfoDay = {20, sSeafoamIslandsB2F_FishingMonsDay};
// ふたごじま B3F
static const struct WildPokemon sSeafoamIslandsB3F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSeafoamIslandsB3F_LandMonsInfoDay = {20, sSeafoamIslandsB3F_LandMonsDay};
static const struct WildPokemon sSeafoamIslandsB3F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSeafoamIslandsB3F_WaterMonsInfoDay = {20, sSeafoamIslandsB3F_WaterMonsDay};
static const struct WildPokemon sSeafoamIslandsB3F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSeafoamIslandsB3F_FishingMonsInfoDay = {20, sSeafoamIslandsB3F_FishingMonsDay};
// ふたごじま B4F
static const struct WildPokemon sSeafoamIslandsB4F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSeafoamIslandsB4F_LandMonsInfoDay = {20, sSeafoamIslandsB4F_LandMonsDay};
static const struct WildPokemon sSeafoamIslandsB4F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSeafoamIslandsB4F_WaterMonsInfoDay = {20, sSeafoamIslandsB4F_WaterMonsDay};
static const struct WildPokemon sSeafoamIslandsB4F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSeafoamIslandsB4F_FishingMonsInfoDay = {20, sSeafoamIslandsB4F_FishingMonsDay};
// ポケモンタワー 1F
static const struct WildPokemon sPokemonTower1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonTower1F_LandMonsInfoDay = {20, sPokemonTower1F_LandMonsDay};
static const struct WildPokemon sPokemonTower1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonTower1F_WaterMonsInfoDay = {20, sPokemonTower1F_WaterMonsDay};
static const struct WildPokemon sPokemonTower1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonTower1F_FishingMonsInfoDay = {20, sPokemonTower1F_FishingMonsDay};
// ポケモンタワー 2F
static const struct WildPokemon sPokemonTower2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonTower2F_LandMonsInfoDay = {20, sPokemonTower2F_LandMonsDay};
static const struct WildPokemon sPokemonTower2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonTower2F_WaterMonsInfoDay = {20, sPokemonTower2F_WaterMonsDay};
static const struct WildPokemon sPokemonTower2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonTower2F_FishingMonsInfoDay = {20, sPokemonTower2F_FishingMonsDay};
// ポケモンタワー 3F
static const struct WildPokemon sPokemonTower3F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonTower3F_LandMonsInfoDay = {20, sPokemonTower3F_LandMonsDay};
static const struct WildPokemon sPokemonTower3F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonTower3F_WaterMonsInfoDay = {20, sPokemonTower3F_WaterMonsDay};
static const struct WildPokemon sPokemonTower3F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonTower3F_FishingMonsInfoDay = {20, sPokemonTower3F_FishingMonsDay};
// ポケモンタワー 4F
static const struct WildPokemon sPokemonTower4F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonTower4F_LandMonsInfoDay = {20, sPokemonTower4F_LandMonsDay};
static const struct WildPokemon sPokemonTower4F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonTower4F_WaterMonsInfoDay = {20, sPokemonTower4F_WaterMonsDay};
static const struct WildPokemon sPokemonTower4F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonTower4F_FishingMonsInfoDay = {20, sPokemonTower4F_FishingMonsDay};
// ポケモンタワー 5F
static const struct WildPokemon sPokemonTower5F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonTower5F_LandMonsInfoDay = {20, sPokemonTower5F_LandMonsDay};
static const struct WildPokemon sPokemonTower5F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonTower5F_WaterMonsInfoDay = {20, sPokemonTower5F_WaterMonsDay};
static const struct WildPokemon sPokemonTower5F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonTower5F_FishingMonsInfoDay = {20, sPokemonTower5F_FishingMonsDay};
// ポケモンタワー 6F
static const struct WildPokemon sPokemonTower6F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonTower6F_LandMonsInfoDay = {20, sPokemonTower6F_LandMonsDay};
static const struct WildPokemon sPokemonTower6F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonTower6F_WaterMonsInfoDay = {20, sPokemonTower6F_WaterMonsDay};
static const struct WildPokemon sPokemonTower6F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonTower6F_FishingMonsInfoDay = {20, sPokemonTower6F_FishingMonsDay};
// ポケモンタワー 7F
static const struct WildPokemon sPokemonTower7F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonTower7F_LandMonsInfoDay = {20, sPokemonTower7F_LandMonsDay};
static const struct WildPokemon sPokemonTower7F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPokemonTower7F_WaterMonsInfoDay = {20, sPokemonTower7F_WaterMonsDay};
static const struct WildPokemon sPokemonTower7F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPokemonTower7F_FishingMonsInfoDay = {20, sPokemonTower7F_FishingMonsDay};
// むじんはつでんしょ
static const struct WildPokemon sPowerPlant_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPowerPlant_LandMonsInfoDay = {20, sPowerPlant_LandMonsDay};
static const struct WildPokemon sPowerPlant_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPowerPlant_WaterMonsInfoDay = {20, sPowerPlant_WaterMonsDay};
static const struct WildPokemon sPowerPlant_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPowerPlant_FishingMonsInfoDay = {20, sPowerPlant_FishingMonsDay};
// ともしびやま ルビのみち B4F
static const struct WildPokemon sMtEmberRubyPathB4F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberRubyPathB4F_LandMonsInfoDay = {20, sMtEmberRubyPathB4F_LandMonsDay};
static const struct WildPokemon sMtEmberRubyPathB4F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sMtEmberRubyPathB4F_WaterMonsInfoDay = {20, sMtEmberRubyPathB4F_WaterMonsDay};
static const struct WildPokemon sMtEmberRubyPathB4F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberRubyPathB4F_FishingMonsInfoDay = {20, sMtEmberRubyPathB4F_FishingMonsDay};
// ともしびやま（外）
static const struct WildPokemon sMtEmberExterior_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberExterior_LandMonsInfoDay = {20, sMtEmberExterior_LandMonsDay};
static const struct WildPokemon sMtEmberExterior_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sMtEmberExterior_WaterMonsInfoDay = {20, sMtEmberExterior_WaterMonsDay};
static const struct WildPokemon sMtEmberExterior_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberExterior_FishingMonsInfoDay = {20, sMtEmberExterior_FishingMonsDay};
// ともしびやま（さんちょうへのみち）1F
static const struct WildPokemon sMtEmberSummitPath1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberSummitPath1F_LandMonsInfoDay = {20, sMtEmberSummitPath1F_LandMonsDay};
static const struct WildPokemon sMtEmberSummitPath1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sMtEmberSummitPath1F_WaterMonsInfoDay = {20, sMtEmberSummitPath1F_WaterMonsDay};
static const struct WildPokemon sMtEmberSummitPath1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberSummitPath1F_FishingMonsInfoDay = {20, sMtEmberSummitPath1F_FishingMonsDay};
// ともしびやま（さんちょうへのみち）2F
static const struct WildPokemon sMtEmberSummitPath2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberSummitPath2F_LandMonsInfoDay = {20, sMtEmberSummitPath2F_LandMonsDay};
static const struct WildPokemon sMtEmberSummitPath2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sMtEmberSummitPath2F_WaterMonsInfoDay = {20, sMtEmberSummitPath2F_WaterMonsDay};
static const struct WildPokemon sMtEmberSummitPath2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberSummitPath2F_FishingMonsInfoDay = {20, sMtEmberSummitPath2F_FishingMonsDay};
// ともしびやま（さんちょうへのみち）3F
static const struct WildPokemon sMtEmberSummitPath3F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberSummitPath3F_LandMonsInfoDay = {20, sMtEmberSummitPath3F_LandMonsDay};
static const struct WildPokemon sMtEmberSummitPath3F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sMtEmberSummitPath3F_WaterMonsInfoDay = {20, sMtEmberSummitPath3F_WaterMonsDay};
static const struct WildPokemon sMtEmberSummitPath3F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberSummitPath3F_FishingMonsInfoDay = {20, sMtEmberSummitPath3F_FishingMonsDay};
// ともしびやま さんちょう
static const struct WildPokemon sMtEmberSummit_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberSummit_LandMonsInfoDay = {20, sMtEmberSummit_LandMonsDay};
static const struct WildPokemon sMtEmberSummit_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sMtEmberSummit_WaterMonsInfoDay = {20, sMtEmberSummit_WaterMonsDay};
static const struct WildPokemon sMtEmberSummit_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberSummit_FishingMonsInfoDay = {20, sMtEmberSummit_FishingMonsDay};
// ともしびやま ルビのみち B5F
static const struct WildPokemon sMtEmberRubyPathB5F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberRubyPathB5F_LandMonsInfoDay = {20, sMtEmberRubyPathB5F_LandMonsDay};
static const struct WildPokemon sMtEmberRubyPathB5F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sMtEmberRubyPathB5F_WaterMonsInfoDay = {20, sMtEmberRubyPathB5F_WaterMonsDay};
static const struct WildPokemon sMtEmberRubyPathB5F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberRubyPathB5F_FishingMonsInfoDay = {20, sMtEmberRubyPathB5F_FishingMonsDay};
// ともしびやま ルビのみち 1F
static const struct WildPokemon sMtEmberRubyPath1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberRubyPath1F_LandMonsInfoDay = {20, sMtEmberRubyPath1F_LandMonsDay};
static const struct WildPokemon sMtEmberRubyPath1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sMtEmberRubyPath1F_WaterMonsInfoDay = {20, sMtEmberRubyPath1F_WaterMonsDay};
static const struct WildPokemon sMtEmberRubyPath1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberRubyPath1F_FishingMonsInfoDay = {20, sMtEmberRubyPath1F_FishingMonsDay};
// ともしびやま ルビのみち B1F
static const struct WildPokemon sMtEmberRubyPathB1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberRubyPathB1F_LandMonsInfoDay = {20, sMtEmberRubyPathB1F_LandMonsDay};
static const struct WildPokemon sMtEmberRubyPathB1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sMtEmberRubyPathB1F_WaterMonsInfoDay = {20, sMtEmberRubyPathB1F_WaterMonsDay};
static const struct WildPokemon sMtEmberRubyPathB1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberRubyPathB1F_FishingMonsInfoDay = {20, sMtEmberRubyPathB1F_FishingMonsDay};
// ともしびやま ルビのみち B2F
static const struct WildPokemon sMtEmberRubyPathB2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberRubyPathB2F_LandMonsInfoDay = {20, sMtEmberRubyPathB2F_LandMonsDay};
static const struct WildPokemon sMtEmberRubyPathB2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sMtEmberRubyPathB2F_WaterMonsInfoDay = {20, sMtEmberRubyPathB2F_WaterMonsDay};
static const struct WildPokemon sMtEmberRubyPathB2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberRubyPathB2F_FishingMonsInfoDay = {20, sMtEmberRubyPathB2F_FishingMonsDay};
// ともしびやま ルビのみち B3F
static const struct WildPokemon sMtEmberRubyPathB3F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberRubyPathB3F_LandMonsInfoDay = {20, sMtEmberRubyPathB3F_LandMonsDay};
static const struct WildPokemon sMtEmberRubyPathB3F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sMtEmberRubyPathB3F_WaterMonsInfoDay = {20, sMtEmberRubyPathB3F_WaterMonsDay};
static const struct WildPokemon sMtEmberRubyPathB3F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberRubyPathB3F_FishingMonsInfoDay = {20, sMtEmberRubyPathB3F_FishingMonsDay};
// ともしびやま ルビのみち B1F（かいだん）
static const struct WildPokemon sMtEmberRubyPathB1FStairs_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberRubyPathB1FStairs_LandMonsInfoDay = {20, sMtEmberRubyPathB1FStairs_LandMonsDay};
static const struct WildPokemon sMtEmberRubyPathB1FStairs_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sMtEmberRubyPathB1FStairs_WaterMonsInfoDay = {20, sMtEmberRubyPathB1FStairs_WaterMonsDay};
static const struct WildPokemon sMtEmberRubyPathB1FStairs_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberRubyPathB1FStairs_FishingMonsInfoDay = {20, sMtEmberRubyPathB1FStairs_FishingMonsDay};
// ともしびやま ルビのみち B2F（かいだん）
static const struct WildPokemon sMtEmberRubyPathB2FStairs_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberRubyPathB2FStairs_LandMonsInfoDay = {20, sMtEmberRubyPathB2FStairs_LandMonsDay};
static const struct WildPokemon sMtEmberRubyPathB2FStairs_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sMtEmberRubyPathB2FStairs_WaterMonsInfoDay = {20, sMtEmberRubyPathB2FStairs_WaterMonsDay};
static const struct WildPokemon sMtEmberRubyPathB2FStairs_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sMtEmberRubyPathB2FStairs_FishingMonsInfoDay = {20, sMtEmberRubyPathB2FStairs_FishingMonsDay};
// きのみのもり
static const struct WildPokemon sThreeIslandBerryForest_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandBerryForest_LandMonsInfoDay = {20, sThreeIslandBerryForest_LandMonsDay};
static const struct WildPokemon sThreeIslandBerryForest_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sThreeIslandBerryForest_WaterMonsInfoDay = {20, sThreeIslandBerryForest_WaterMonsDay};
static const struct WildPokemon sThreeIslandBerryForest_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandBerryForest_FishingMonsInfoDay = {20, sThreeIslandBerryForest_FishingMonsDay};
// 4のしま いてだきのどうくつ（いりぐち）
static const struct WildPokemon sFourIslandIcefallCaveEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandIcefallCaveEntrance_LandMonsInfoDay = {20, sFourIslandIcefallCaveEntrance_LandMonsDay};
static const struct WildPokemon sFourIslandIcefallCaveEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFourIslandIcefallCaveEntrance_WaterMonsInfoDay = {20, sFourIslandIcefallCaveEntrance_WaterMonsDay};
static const struct WildPokemon sFourIslandIcefallCaveEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandIcefallCaveEntrance_FishingMonsInfoDay = {20, sFourIslandIcefallCaveEntrance_FishingMonsDay};
// 4のしま いてだきのどうくつ 1F
static const struct WildPokemon sFourIslandIcefallCave1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandIcefallCave1F_LandMonsInfoDay = {20, sFourIslandIcefallCave1F_LandMonsDay};
static const struct WildPokemon sFourIslandIcefallCave1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFourIslandIcefallCave1F_WaterMonsInfoDay = {20, sFourIslandIcefallCave1F_WaterMonsDay};
static const struct WildPokemon sFourIslandIcefallCave1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandIcefallCave1F_FishingMonsInfoDay = {20, sFourIslandIcefallCave1F_FishingMonsDay};
// 4のしま いてだきのどうくつ B1F
static const struct WildPokemon sFourIslandIcefallCaveB1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandIcefallCaveB1F_LandMonsInfoDay = {20, sFourIslandIcefallCaveB1F_LandMonsDay};
static const struct WildPokemon sFourIslandIcefallCaveB1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFourIslandIcefallCaveB1F_WaterMonsInfoDay = {20, sFourIslandIcefallCaveB1F_WaterMonsDay};
static const struct WildPokemon sFourIslandIcefallCaveB1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandIcefallCaveB1F_FishingMonsInfoDay = {20, sFourIslandIcefallCaveB1F_FishingMonsDay};
// 4のしま いてだきのどうくつ（うら）
static const struct WildPokemon sFourIslandIcefallCaveBack_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandIcefallCaveBack_LandMonsInfoDay = {20, sFourIslandIcefallCaveBack_LandMonsDay};
static const struct WildPokemon sFourIslandIcefallCaveBack_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFourIslandIcefallCaveBack_WaterMonsInfoDay = {20, sFourIslandIcefallCaveBack_WaterMonsDay};
static const struct WildPokemon sFourIslandIcefallCaveBack_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandIcefallCaveBack_FishingMonsInfoDay = {20, sFourIslandIcefallCaveBack_FishingMonsDay};
// ロケットだんそうこ
static const struct WildPokemon sFiveIslandRocketWarehouse_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandRocketWarehouse_LandMonsInfoDay = {20, sFiveIslandRocketWarehouse_LandMonsDay};
static const struct WildPokemon sFiveIslandRocketWarehouse_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandRocketWarehouse_WaterMonsInfoDay = {20, sFiveIslandRocketWarehouse_WaterMonsDay};
static const struct WildPokemon sFiveIslandRocketWarehouse_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandRocketWarehouse_FishingMonsInfoDay = {20, sFiveIslandRocketWarehouse_FishingMonsDay};
// てんのあな 1F
static const struct WildPokemon sSixIslandDottedHole1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandDottedHole1F_LandMonsInfoDay = {20, sSixIslandDottedHole1F_LandMonsDay};
static const struct WildPokemon sSixIslandDottedHole1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandDottedHole1F_WaterMonsInfoDay = {20, sSixIslandDottedHole1F_WaterMonsDay};
static const struct WildPokemon sSixIslandDottedHole1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandDottedHole1F_FishingMonsInfoDay = {20, sSixIslandDottedHole1F_FishingMonsDay};
// てんのあな B1F
static const struct WildPokemon sSixIslandDottedHoleB1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandDottedHoleB1F_LandMonsInfoDay = {20, sSixIslandDottedHoleB1F_LandMonsDay};
static const struct WildPokemon sSixIslandDottedHoleB1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandDottedHoleB1F_WaterMonsInfoDay = {20, sSixIslandDottedHoleB1F_WaterMonsDay};
static const struct WildPokemon sSixIslandDottedHoleB1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandDottedHoleB1F_FishingMonsInfoDay = {20, sSixIslandDottedHoleB1F_FishingMonsDay};
// てんのあな B2F
static const struct WildPokemon sSixIslandDottedHoleB2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandDottedHoleB2F_LandMonsInfoDay = {20, sSixIslandDottedHoleB2F_LandMonsDay};
static const struct WildPokemon sSixIslandDottedHoleB2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandDottedHoleB2F_WaterMonsInfoDay = {20, sSixIslandDottedHoleB2F_WaterMonsDay};
static const struct WildPokemon sSixIslandDottedHoleB2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandDottedHoleB2F_FishingMonsInfoDay = {20, sSixIslandDottedHoleB2F_FishingMonsDay};
// てんのあな B3F
static const struct WildPokemon sSixIslandDottedHoleB3F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandDottedHoleB3F_LandMonsInfoDay = {20, sSixIslandDottedHoleB3F_LandMonsDay};
static const struct WildPokemon sSixIslandDottedHoleB3F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandDottedHoleB3F_WaterMonsInfoDay = {20, sSixIslandDottedHoleB3F_WaterMonsDay};
static const struct WildPokemon sSixIslandDottedHoleB3F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandDottedHoleB3F_FishingMonsInfoDay = {20, sSixIslandDottedHoleB3F_FishingMonsDay};
// てんのあな B4F
static const struct WildPokemon sSixIslandDottedHoleB4F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandDottedHoleB4F_LandMonsInfoDay = {20, sSixIslandDottedHoleB4F_LandMonsDay};
static const struct WildPokemon sSixIslandDottedHoleB4F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandDottedHoleB4F_WaterMonsInfoDay = {20, sSixIslandDottedHoleB4F_WaterMonsDay};
static const struct WildPokemon sSixIslandDottedHoleB4F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandDottedHoleB4F_FishingMonsInfoDay = {20, sSixIslandDottedHoleB4F_FishingMonsDay};
// てんのあな（サファイアのへや）
static const struct WildPokemon sSixIslandDottedHoleSapphireRoom_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandDottedHoleSapphireRoom_LandMonsInfoDay = {20, sSixIslandDottedHoleSapphireRoom_LandMonsDay};
static const struct WildPokemon sSixIslandDottedHoleSapphireRoom_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandDottedHoleSapphireRoom_WaterMonsInfoDay = {20, sSixIslandDottedHoleSapphireRoom_WaterMonsDay};
static const struct WildPokemon sSixIslandDottedHoleSapphireRoom_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandDottedHoleSapphireRoom_FishingMonsInfoDay = {20, sSixIslandDottedHoleSapphireRoom_FishingMonsDay};
// しるしのはやし
static const struct WildPokemon sSixIslandPatternBush_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandPatternBush_LandMonsInfoDay = {20, sSixIslandPatternBush_LandMonsDay};
static const struct WildPokemon sSixIslandPatternBush_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandPatternBush_WaterMonsInfoDay = {20, sSixIslandPatternBush_WaterMonsDay};
static const struct WildPokemon sSixIslandPatternBush_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandPatternBush_FishingMonsInfoDay = {20, sSixIslandPatternBush_FishingMonsDay};
// へんげのどうくつ
static const struct WildPokemon sSixIslandAlteringCave_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandAlteringCave_LandMonsInfoDay = {20, sSixIslandAlteringCave_LandMonsDay};
static const struct WildPokemon sSixIslandAlteringCave_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandAlteringCave_WaterMonsInfoDay = {20, sSixIslandAlteringCave_WaterMonsDay};
static const struct WildPokemon sSixIslandAlteringCave_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandAlteringCave_FishingMonsInfoDay = {20, sSixIslandAlteringCave_FishingMonsDay};
// へそのいわ（外）
static const struct WildPokemon sNavelRockExterior_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockExterior_LandMonsInfoDay = {20, sNavelRockExterior_LandMonsDay};
static const struct WildPokemon sNavelRockExterior_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockExterior_WaterMonsInfoDay = {20, sNavelRockExterior_WaterMonsDay};
static const struct WildPokemon sNavelRockExterior_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockExterior_FishingMonsInfoDay = {20, sNavelRockExterior_FishingMonsDay};
// トレーナータワー 1F
static const struct WildPokemon sSevenIslandTrainerTower1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower1F_LandMonsInfoDay = {20, sSevenIslandTrainerTower1F_LandMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower1F_WaterMonsInfoDay = {20, sSevenIslandTrainerTower1F_WaterMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower1F_FishingMonsInfoDay = {20, sSevenIslandTrainerTower1F_FishingMonsDay};
// トレーナータワー 2F
static const struct WildPokemon sSevenIslandTrainerTower2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower2F_LandMonsInfoDay = {20, sSevenIslandTrainerTower2F_LandMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower2F_WaterMonsInfoDay = {20, sSevenIslandTrainerTower2F_WaterMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower2F_FishingMonsInfoDay = {20, sSevenIslandTrainerTower2F_FishingMonsDay};
// トレーナータワー 3F
static const struct WildPokemon sSevenIslandTrainerTower3F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower3F_LandMonsInfoDay = {20, sSevenIslandTrainerTower3F_LandMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower3F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower3F_WaterMonsInfoDay = {20, sSevenIslandTrainerTower3F_WaterMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower3F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower3F_FishingMonsInfoDay = {20, sSevenIslandTrainerTower3F_FishingMonsDay};
// トレーナータワー 4F
static const struct WildPokemon sSevenIslandTrainerTower4F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower4F_LandMonsInfoDay = {20, sSevenIslandTrainerTower4F_LandMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower4F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower4F_WaterMonsInfoDay = {20, sSevenIslandTrainerTower4F_WaterMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower4F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower4F_FishingMonsInfoDay = {20, sSevenIslandTrainerTower4F_FishingMonsDay};
// トレーナータワー 5F
static const struct WildPokemon sSevenIslandTrainerTower5F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower5F_LandMonsInfoDay = {20, sSevenIslandTrainerTower5F_LandMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower5F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower5F_WaterMonsInfoDay = {20, sSevenIslandTrainerTower5F_WaterMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower5F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower5F_FishingMonsInfoDay = {20, sSevenIslandTrainerTower5F_FishingMonsDay};
// トレーナータワー 6F
static const struct WildPokemon sSevenIslandTrainerTower6F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower6F_LandMonsInfoDay = {20, sSevenIslandTrainerTower6F_LandMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower6F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower6F_WaterMonsInfoDay = {20, sSevenIslandTrainerTower6F_WaterMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower6F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower6F_FishingMonsInfoDay = {20, sSevenIslandTrainerTower6F_FishingMonsDay};
// トレーナータワー 7F
static const struct WildPokemon sSevenIslandTrainerTower7F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower7F_LandMonsInfoDay = {20, sSevenIslandTrainerTower7F_LandMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower7F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower7F_WaterMonsInfoDay = {20, sSevenIslandTrainerTower7F_WaterMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower7F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower7F_FishingMonsInfoDay = {20, sSevenIslandTrainerTower7F_FishingMonsDay};
// トレーナータワー 8F
static const struct WildPokemon sSevenIslandTrainerTower8F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower8F_LandMonsInfoDay = {20, sSevenIslandTrainerTower8F_LandMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower8F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower8F_WaterMonsInfoDay = {20, sSevenIslandTrainerTower8F_WaterMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower8F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower8F_FishingMonsInfoDay = {20, sSevenIslandTrainerTower8F_FishingMonsDay};
// トレーナータワー やね
static const struct WildPokemon sSevenIslandTrainerTowerRoof_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTowerRoof_LandMonsInfoDay = {20, sSevenIslandTrainerTowerRoof_LandMonsDay};
static const struct WildPokemon sSevenIslandTrainerTowerRoof_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTrainerTowerRoof_WaterMonsInfoDay = {20, sSevenIslandTrainerTowerRoof_WaterMonsDay};
static const struct WildPokemon sSevenIslandTrainerTowerRoof_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTowerRoof_FishingMonsInfoDay = {20, sSevenIslandTrainerTowerRoof_FishingMonsDay};
// トレーナータワー ロビー
static const struct WildPokemon sSevenIslandTrainerTowerLobby_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTowerLobby_LandMonsInfoDay = {20, sSevenIslandTrainerTowerLobby_LandMonsDay};
static const struct WildPokemon sSevenIslandTrainerTowerLobby_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTrainerTowerLobby_WaterMonsInfoDay = {20, sSevenIslandTrainerTowerLobby_WaterMonsDay};
static const struct WildPokemon sSevenIslandTrainerTowerLobby_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTowerLobby_FishingMonsInfoDay = {20, sSevenIslandTrainerTowerLobby_FishingMonsDay};
// トレーナータワー エレベーター
static const struct WildPokemon sSevenIslandTrainerTowerElevator_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTowerElevator_LandMonsInfoDay = {20, sSevenIslandTrainerTowerElevator_LandMonsDay};
static const struct WildPokemon sSevenIslandTrainerTowerElevator_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTrainerTowerElevator_WaterMonsInfoDay = {20, sSevenIslandTrainerTowerElevator_WaterMonsDay};
static const struct WildPokemon sSevenIslandTrainerTowerElevator_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTowerElevator_FishingMonsInfoDay = {20, sSevenIslandTrainerTowerElevator_FishingMonsDay};
// かえらずのあな（いりぐち）
static const struct WildPokemon sFiveIslandLostCaveEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveEntrance_LandMonsInfoDay = {20, sFiveIslandLostCaveEntrance_LandMonsDay};
static const struct WildPokemon sFiveIslandLostCaveEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandLostCaveEntrance_WaterMonsInfoDay = {20, sFiveIslandLostCaveEntrance_WaterMonsDay};
static const struct WildPokemon sFiveIslandLostCaveEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveEntrance_FishingMonsInfoDay = {20, sFiveIslandLostCaveEntrance_FishingMonsDay};
// かえらずのあな へや1
static const struct WildPokemon sFiveIslandLostCaveRoom1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom1_LandMonsInfoDay = {20, sFiveIslandLostCaveRoom1_LandMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom1_WaterMonsInfoDay = {20, sFiveIslandLostCaveRoom1_WaterMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom1_FishingMonsInfoDay = {20, sFiveIslandLostCaveRoom1_FishingMonsDay};
// かえらずのあな へや2
static const struct WildPokemon sFiveIslandLostCaveRoom2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom2_LandMonsInfoDay = {20, sFiveIslandLostCaveRoom2_LandMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom2_WaterMonsInfoDay = {20, sFiveIslandLostCaveRoom2_WaterMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom2_FishingMonsInfoDay = {20, sFiveIslandLostCaveRoom2_FishingMonsDay};
// かえらずのあな へや3
static const struct WildPokemon sFiveIslandLostCaveRoom3_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom3_LandMonsInfoDay = {20, sFiveIslandLostCaveRoom3_LandMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom3_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom3_WaterMonsInfoDay = {20, sFiveIslandLostCaveRoom3_WaterMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom3_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom3_FishingMonsInfoDay = {20, sFiveIslandLostCaveRoom3_FishingMonsDay};
// かえらずのあな へや4
static const struct WildPokemon sFiveIslandLostCaveRoom4_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom4_LandMonsInfoDay = {20, sFiveIslandLostCaveRoom4_LandMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom4_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom4_WaterMonsInfoDay = {20, sFiveIslandLostCaveRoom4_WaterMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom4_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom4_FishingMonsInfoDay = {20, sFiveIslandLostCaveRoom4_FishingMonsDay};
// かえらずのあな へや5
static const struct WildPokemon sFiveIslandLostCaveRoom5_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom5_LandMonsInfoDay = {20, sFiveIslandLostCaveRoom5_LandMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom5_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom5_WaterMonsInfoDay = {20, sFiveIslandLostCaveRoom5_WaterMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom5_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom5_FishingMonsInfoDay = {20, sFiveIslandLostCaveRoom5_FishingMonsDay};
// かえらずのあな へや6
static const struct WildPokemon sFiveIslandLostCaveRoom6_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom6_LandMonsInfoDay = {20, sFiveIslandLostCaveRoom6_LandMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom6_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom6_WaterMonsInfoDay = {20, sFiveIslandLostCaveRoom6_WaterMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom6_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom6_FishingMonsInfoDay = {20, sFiveIslandLostCaveRoom6_FishingMonsDay};
// かえらずのあな へや7
static const struct WildPokemon sFiveIslandLostCaveRoom7_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom7_LandMonsInfoDay = {20, sFiveIslandLostCaveRoom7_LandMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom7_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom7_WaterMonsInfoDay = {20, sFiveIslandLostCaveRoom7_WaterMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom7_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom7_FishingMonsInfoDay = {20, sFiveIslandLostCaveRoom7_FishingMonsDay};
// かえらずのあな へや8
static const struct WildPokemon sFiveIslandLostCaveRoom8_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom8_LandMonsInfoDay = {20, sFiveIslandLostCaveRoom8_LandMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom8_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom8_WaterMonsInfoDay = {20, sFiveIslandLostCaveRoom8_WaterMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom8_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom8_FishingMonsInfoDay = {20, sFiveIslandLostCaveRoom8_FishingMonsDay};
// かえらずのあな へや9
static const struct WildPokemon sFiveIslandLostCaveRoom9_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom9_LandMonsInfoDay = {20, sFiveIslandLostCaveRoom9_LandMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom9_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom9_WaterMonsInfoDay = {20, sFiveIslandLostCaveRoom9_WaterMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom9_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom9_FishingMonsInfoDay = {20, sFiveIslandLostCaveRoom9_FishingMonsDay};
// かえらずのあな へや10
static const struct WildPokemon sFiveIslandLostCaveRoom10_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom10_LandMonsInfoDay = {20, sFiveIslandLostCaveRoom10_LandMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom10_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom10_WaterMonsInfoDay = {20, sFiveIslandLostCaveRoom10_WaterMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom10_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom10_FishingMonsInfoDay = {20, sFiveIslandLostCaveRoom10_FishingMonsDay};
// かえらずのあな へや11
static const struct WildPokemon sFiveIslandLostCaveRoom11_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom11_LandMonsInfoDay = {20, sFiveIslandLostCaveRoom11_LandMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom11_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom11_WaterMonsInfoDay = {20, sFiveIslandLostCaveRoom11_WaterMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom11_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom11_FishingMonsInfoDay = {20, sFiveIslandLostCaveRoom11_FishingMonsDay};
// かえらずのあな へや12
static const struct WildPokemon sFiveIslandLostCaveRoom12_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom12_LandMonsInfoDay = {20, sFiveIslandLostCaveRoom12_LandMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom12_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom12_WaterMonsInfoDay = {20, sFiveIslandLostCaveRoom12_WaterMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom12_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom12_FishingMonsInfoDay = {20, sFiveIslandLostCaveRoom12_FishingMonsDay};
// かえらずのあな へや13
static const struct WildPokemon sFiveIslandLostCaveRoom13_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom13_LandMonsInfoDay = {20, sFiveIslandLostCaveRoom13_LandMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom13_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom13_WaterMonsInfoDay = {20, sFiveIslandLostCaveRoom13_WaterMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom13_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom13_FishingMonsInfoDay = {20, sFiveIslandLostCaveRoom13_FishingMonsDay};
// かえらずのあな へや14
static const struct WildPokemon sFiveIslandLostCaveRoom14_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom14_LandMonsInfoDay = {20, sFiveIslandLostCaveRoom14_LandMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom14_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom14_WaterMonsInfoDay = {20, sFiveIslandLostCaveRoom14_WaterMonsDay};
static const struct WildPokemon sFiveIslandLostCaveRoom14_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandLostCaveRoom14_FishingMonsInfoDay = {20, sFiveIslandLostCaveRoom14_FishingMonsDay};
// アスカナいせき オリフのせきしつ
static const struct WildPokemon sSevenIslandTanobyRuinsMoneanChamber_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsMoneanChamber_LandMonsInfoDay = {20, sSevenIslandTanobyRuinsMoneanChamber_LandMonsDay};
static const struct WildPokemon sSevenIslandTanobyRuinsMoneanChamber_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsMoneanChamber_WaterMonsInfoDay = {20, sSevenIslandTanobyRuinsMoneanChamber_WaterMonsDay};
static const struct WildPokemon sSevenIslandTanobyRuinsMoneanChamber_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsMoneanChamber_FishingMonsInfoDay = {20, sSevenIslandTanobyRuinsMoneanChamber_FishingMonsDay};
// アスカナいせき アヌザのせきしつ
static const struct WildPokemon sSevenIslandTanobyRuinsLiptooChamber_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsLiptooChamber_LandMonsInfoDay = {20, sSevenIslandTanobyRuinsLiptooChamber_LandMonsDay};
static const struct WildPokemon sSevenIslandTanobyRuinsLiptooChamber_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsLiptooChamber_WaterMonsInfoDay = {20, sSevenIslandTanobyRuinsLiptooChamber_WaterMonsDay};
static const struct WildPokemon sSevenIslandTanobyRuinsLiptooChamber_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsLiptooChamber_FishingMonsInfoDay = {20, sSevenIslandTanobyRuinsLiptooChamber_FishingMonsDay};
// アスカナいせき コトーのせきしつ
static const struct WildPokemon sSevenIslandTanobyRuinsWeepthChamber_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsWeepthChamber_LandMonsInfoDay = {20, sSevenIslandTanobyRuinsWeepthChamber_LandMonsDay};
static const struct WildPokemon sSevenIslandTanobyRuinsWeepthChamber_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsWeepthChamber_WaterMonsInfoDay = {20, sSevenIslandTanobyRuinsWeepthChamber_WaterMonsDay};
static const struct WildPokemon sSevenIslandTanobyRuinsWeepthChamber_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsWeepthChamber_FishingMonsInfoDay = {20, sSevenIslandTanobyRuinsWeepthChamber_FishingMonsDay};
// アスカナいせき アレボカのせきしつ
static const struct WildPokemon sSevenIslandTanobyRuinsDilfordChamber_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsDilfordChamber_LandMonsInfoDay = {20, sSevenIslandTanobyRuinsDilfordChamber_LandMonsDay};
static const struct WildPokemon sSevenIslandTanobyRuinsDilfordChamber_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsDilfordChamber_WaterMonsInfoDay = {20, sSevenIslandTanobyRuinsDilfordChamber_WaterMonsDay};
static const struct WildPokemon sSevenIslandTanobyRuinsDilfordChamber_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsDilfordChamber_FishingMonsInfoDay = {20, sSevenIslandTanobyRuinsDilfordChamber_FishingMonsDay};
// アスカナいせき ユゴのせきしつ
static const struct WildPokemon sSevenIslandTanobyRuinsScufibChamber_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsScufibChamber_LandMonsInfoDay = {20, sSevenIslandTanobyRuinsScufibChamber_LandMonsDay};
static const struct WildPokemon sSevenIslandTanobyRuinsScufibChamber_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsScufibChamber_WaterMonsInfoDay = {20, sSevenIslandTanobyRuinsScufibChamber_WaterMonsDay};
static const struct WildPokemon sSevenIslandTanobyRuinsScufibChamber_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsScufibChamber_FishingMonsInfoDay = {20, sSevenIslandTanobyRuinsScufibChamber_FishingMonsDay};
// アスカナいせき ナザンのせきしつ
static const struct WildPokemon sSevenIslandTanobyRuinsRixyChamber_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsRixyChamber_LandMonsInfoDay = {20, sSevenIslandTanobyRuinsRixyChamber_LandMonsDay};
static const struct WildPokemon sSevenIslandTanobyRuinsRixyChamber_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsRixyChamber_WaterMonsInfoDay = {20, sSevenIslandTanobyRuinsRixyChamber_WaterMonsDay};
static const struct WildPokemon sSevenIslandTanobyRuinsRixyChamber_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsRixyChamber_FishingMonsInfoDay = {20, sSevenIslandTanobyRuinsRixyChamber_FishingMonsDay};
// アスカナいせき イレスのせきしつ
static const struct WildPokemon sSevenIslandTanobyRuinsViapoisChamber_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsViapoisChamber_LandMonsInfoDay = {20, sSevenIslandTanobyRuinsViapoisChamber_LandMonsDay};
static const struct WildPokemon sSevenIslandTanobyRuinsViapoisChamber_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsViapoisChamber_WaterMonsInfoDay = {20, sSevenIslandTanobyRuinsViapoisChamber_WaterMonsDay};
static const struct WildPokemon sSevenIslandTanobyRuinsViapoisChamber_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuinsViapoisChamber_FishingMonsInfoDay = {20, sSevenIslandTanobyRuinsViapoisChamber_FishingMonsDay};
// 3のしま よこあな
static const struct WildPokemon sThreeIslandDunsparceTunnel_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandDunsparceTunnel_LandMonsInfoDay = {20, sThreeIslandDunsparceTunnel_LandMonsDay};
static const struct WildPokemon sThreeIslandDunsparceTunnel_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sThreeIslandDunsparceTunnel_WaterMonsInfoDay = {20, sThreeIslandDunsparceTunnel_WaterMonsDay};
static const struct WildPokemon sThreeIslandDunsparceTunnel_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandDunsparceTunnel_FishingMonsInfoDay = {20, sThreeIslandDunsparceTunnel_FishingMonsDay};
// アスカナのかぎ
static const struct WildPokemon sSevenIslandSevaultCanyonTanobyKey_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandSevaultCanyonTanobyKey_LandMonsInfoDay = {20, sSevenIslandSevaultCanyonTanobyKey_LandMonsDay};
static const struct WildPokemon sSevenIslandSevaultCanyonTanobyKey_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandSevaultCanyonTanobyKey_WaterMonsInfoDay = {20, sSevenIslandSevaultCanyonTanobyKey_WaterMonsDay};
static const struct WildPokemon sSevenIslandSevaultCanyonTanobyKey_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandSevaultCanyonTanobyKey_FishingMonsInfoDay = {20, sSevenIslandSevaultCanyonTanobyKey_FishingMonsDay};
// へそのいわ 1F
static const struct WildPokemon sNavelRock1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRock1F_LandMonsInfoDay = {20, sNavelRock1F_LandMonsDay};
static const struct WildPokemon sNavelRock1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRock1F_WaterMonsInfoDay = {20, sNavelRock1F_WaterMonsDay};
static const struct WildPokemon sNavelRock1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRock1F_FishingMonsInfoDay = {20, sNavelRock1F_FishingMonsDay};
// へそのいわ さんちょう
static const struct WildPokemon sNavelRockSummit_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockSummit_LandMonsInfoDay = {20, sNavelRockSummit_LandMonsDay};
static const struct WildPokemon sNavelRockSummit_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockSummit_WaterMonsInfoDay = {20, sNavelRockSummit_WaterMonsDay};
static const struct WildPokemon sNavelRockSummit_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockSummit_FishingMonsInfoDay = {20, sNavelRockSummit_FishingMonsDay};
// へそのいわ さいかいそう
static const struct WildPokemon sNavelRockBase_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBase_LandMonsInfoDay = {20, sNavelRockBase_LandMonsDay};
static const struct WildPokemon sNavelRockBase_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockBase_WaterMonsInfoDay = {20, sNavelRockBase_WaterMonsDay};
static const struct WildPokemon sNavelRockBase_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBase_FishingMonsInfoDay = {20, sNavelRockBase_FishingMonsDay};
// へそのいわ（さんちょうへのみち）2F
static const struct WildPokemon sNavelRockSummitPath2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockSummitPath2F_LandMonsInfoDay = {20, sNavelRockSummitPath2F_LandMonsDay};
static const struct WildPokemon sNavelRockSummitPath2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockSummitPath2F_WaterMonsInfoDay = {20, sNavelRockSummitPath2F_WaterMonsDay};
static const struct WildPokemon sNavelRockSummitPath2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockSummitPath2F_FishingMonsInfoDay = {20, sNavelRockSummitPath2F_FishingMonsDay};
// へそのいわ（さんちょうへのみち）3F
static const struct WildPokemon sNavelRockSummitPath3F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockSummitPath3F_LandMonsInfoDay = {20, sNavelRockSummitPath3F_LandMonsDay};
static const struct WildPokemon sNavelRockSummitPath3F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockSummitPath3F_WaterMonsInfoDay = {20, sNavelRockSummitPath3F_WaterMonsDay};
static const struct WildPokemon sNavelRockSummitPath3F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockSummitPath3F_FishingMonsInfoDay = {20, sNavelRockSummitPath3F_FishingMonsDay};
// へそのいわ（さんちょうへのみち）4F
static const struct WildPokemon sNavelRockSummitPath4F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockSummitPath4F_LandMonsInfoDay = {20, sNavelRockSummitPath4F_LandMonsDay};
static const struct WildPokemon sNavelRockSummitPath4F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockSummitPath4F_WaterMonsInfoDay = {20, sNavelRockSummitPath4F_WaterMonsDay};
static const struct WildPokemon sNavelRockSummitPath4F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockSummitPath4F_FishingMonsInfoDay = {20, sNavelRockSummitPath4F_FishingMonsDay};
// へそのいわ（さんちょうへのみち）5F
static const struct WildPokemon sNavelRockSummitPath5F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockSummitPath5F_LandMonsInfoDay = {20, sNavelRockSummitPath5F_LandMonsDay};
static const struct WildPokemon sNavelRockSummitPath5F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockSummitPath5F_WaterMonsInfoDay = {20, sNavelRockSummitPath5F_WaterMonsDay};
static const struct WildPokemon sNavelRockSummitPath5F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockSummitPath5F_FishingMonsInfoDay = {20, sNavelRockSummitPath5F_FishingMonsDay};
// へそのいわ（さいかいそうへのみち）B1F
static const struct WildPokemon sNavelRockBasePathB1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB1F_LandMonsInfoDay = {20, sNavelRockBasePathB1F_LandMonsDay};
static const struct WildPokemon sNavelRockBasePathB1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockBasePathB1F_WaterMonsInfoDay = {20, sNavelRockBasePathB1F_WaterMonsDay};
static const struct WildPokemon sNavelRockBasePathB1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB1F_FishingMonsInfoDay = {20, sNavelRockBasePathB1F_FishingMonsDay};
// へそのいわ（さいかいそうへのみち）B2F
static const struct WildPokemon sNavelRockBasePathB2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB2F_LandMonsInfoDay = {20, sNavelRockBasePathB2F_LandMonsDay};
static const struct WildPokemon sNavelRockBasePathB2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockBasePathB2F_WaterMonsInfoDay = {20, sNavelRockBasePathB2F_WaterMonsDay};
static const struct WildPokemon sNavelRockBasePathB2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB2F_FishingMonsInfoDay = {20, sNavelRockBasePathB2F_FishingMonsDay};
// へそのいわ（さいかいそうへのみち）B3F
static const struct WildPokemon sNavelRockBasePathB3F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB3F_LandMonsInfoDay = {20, sNavelRockBasePathB3F_LandMonsDay};
static const struct WildPokemon sNavelRockBasePathB3F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockBasePathB3F_WaterMonsInfoDay = {20, sNavelRockBasePathB3F_WaterMonsDay};
static const struct WildPokemon sNavelRockBasePathB3F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB3F_FishingMonsInfoDay = {20, sNavelRockBasePathB3F_FishingMonsDay};
// へそのいわ（さいかいそうへのみち）B4F
static const struct WildPokemon sNavelRockBasePathB4F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB4F_LandMonsInfoDay = {20, sNavelRockBasePathB4F_LandMonsDay};
static const struct WildPokemon sNavelRockBasePathB4F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockBasePathB4F_WaterMonsInfoDay = {20, sNavelRockBasePathB4F_WaterMonsDay};
static const struct WildPokemon sNavelRockBasePathB4F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB4F_FishingMonsInfoDay = {20, sNavelRockBasePathB4F_FishingMonsDay};
// へそのいわ（さいかいそうへのみち）B5F
static const struct WildPokemon sNavelRockBasePathB5F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB5F_LandMonsInfoDay = {20, sNavelRockBasePathB5F_LandMonsDay};
static const struct WildPokemon sNavelRockBasePathB5F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockBasePathB5F_WaterMonsInfoDay = {20, sNavelRockBasePathB5F_WaterMonsDay};
static const struct WildPokemon sNavelRockBasePathB5F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB5F_FishingMonsInfoDay = {20, sNavelRockBasePathB5F_FishingMonsDay};
// へそのいわ（さいかいそうへのみち）B6F
static const struct WildPokemon sNavelRockBasePathB6F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB6F_LandMonsInfoDay = {20, sNavelRockBasePathB6F_LandMonsDay};
static const struct WildPokemon sNavelRockBasePathB6F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockBasePathB6F_WaterMonsInfoDay = {20, sNavelRockBasePathB6F_WaterMonsDay};
static const struct WildPokemon sNavelRockBasePathB6F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB6F_FishingMonsInfoDay = {20, sNavelRockBasePathB6F_FishingMonsDay};
// へそのいわ（さいかいそうへのみち）B7F
static const struct WildPokemon sNavelRockBasePathB7F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB7F_LandMonsInfoDay = {20, sNavelRockBasePathB7F_LandMonsDay};
static const struct WildPokemon sNavelRockBasePathB7F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockBasePathB7F_WaterMonsInfoDay = {20, sNavelRockBasePathB7F_WaterMonsDay};
static const struct WildPokemon sNavelRockBasePathB7F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB7F_FishingMonsInfoDay = {20, sNavelRockBasePathB7F_FishingMonsDay};
// へそのいわ（さいかいそうへのみち）B8F
static const struct WildPokemon sNavelRockBasePathB8F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB8F_LandMonsInfoDay = {20, sNavelRockBasePathB8F_LandMonsDay};
static const struct WildPokemon sNavelRockBasePathB8F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockBasePathB8F_WaterMonsInfoDay = {20, sNavelRockBasePathB8F_WaterMonsDay};
static const struct WildPokemon sNavelRockBasePathB8F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB8F_FishingMonsInfoDay = {20, sNavelRockBasePathB8F_FishingMonsDay};
// へそのいわ（さいかいそうへのみち）B9F
static const struct WildPokemon sNavelRockBasePathB9F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB9F_LandMonsInfoDay = {20, sNavelRockBasePathB9F_LandMonsDay};
static const struct WildPokemon sNavelRockBasePathB9F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockBasePathB9F_WaterMonsInfoDay = {20, sNavelRockBasePathB9F_WaterMonsDay};
static const struct WildPokemon sNavelRockBasePathB9F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB9F_FishingMonsInfoDay = {20, sNavelRockBasePathB9F_FishingMonsDay};
// へそのいわ（さいかいそうへのみち）B10F
static const struct WildPokemon sNavelRockBasePathB10F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB10F_LandMonsInfoDay = {20, sNavelRockBasePathB10F_LandMonsDay};
static const struct WildPokemon sNavelRockBasePathB10F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockBasePathB10F_WaterMonsInfoDay = {20, sNavelRockBasePathB10F_WaterMonsDay};
static const struct WildPokemon sNavelRockBasePathB10F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB10F_FishingMonsInfoDay = {20, sNavelRockBasePathB10F_FishingMonsDay};
// へそのいわ（さいかいそうへのみち）B11F
static const struct WildPokemon sNavelRockBasePathB11F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB11F_LandMonsInfoDay = {20, sNavelRockBasePathB11F_LandMonsDay};
static const struct WildPokemon sNavelRockBasePathB11F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockBasePathB11F_WaterMonsInfoDay = {20, sNavelRockBasePathB11F_WaterMonsDay};
static const struct WildPokemon sNavelRockBasePathB11F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockBasePathB11F_FishingMonsInfoDay = {20, sNavelRockBasePathB11F_FishingMonsDay};
// へそのいわ B1F
static const struct WildPokemon sNavelRockB1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockB1F_LandMonsInfoDay = {20, sNavelRockB1F_LandMonsDay};
static const struct WildPokemon sNavelRockB1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockB1F_WaterMonsInfoDay = {20, sNavelRockB1F_WaterMonsDay};
static const struct WildPokemon sNavelRockB1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockB1F_FishingMonsInfoDay = {20, sNavelRockB1F_FishingMonsDay};
// へそのいわ（ぶんき）
static const struct WildPokemon sNavelRockFork_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockFork_LandMonsInfoDay = {20, sNavelRockFork_LandMonsDay};
static const struct WildPokemon sNavelRockFork_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockFork_WaterMonsInfoDay = {20, sNavelRockFork_WaterMonsDay};
static const struct WildPokemon sNavelRockFork_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockFork_FishingMonsInfoDay = {20, sNavelRockFork_FishingMonsDay};
// たんじょうのしま（外）
static const struct WildPokemon sBirthIslandExterior_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sBirthIslandExterior_LandMonsInfoDay = {20, sBirthIslandExterior_LandMonsDay};
static const struct WildPokemon sBirthIslandExterior_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sBirthIslandExterior_WaterMonsInfoDay = {20, sBirthIslandExterior_WaterMonsDay};
static const struct WildPokemon sBirthIslandExterior_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sBirthIslandExterior_FishingMonsInfoDay = {20, sBirthIslandExterior_FishingMonsDay};
// ともしびおんせん
static const struct WildPokemon sOneIslandKindleRoadEmberSpa_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIslandKindleRoadEmberSpa_LandMonsInfoDay = {20, sOneIslandKindleRoadEmberSpa_LandMonsDay};
static const struct WildPokemon sOneIslandKindleRoadEmberSpa_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sOneIslandKindleRoadEmberSpa_WaterMonsInfoDay = {20, sOneIslandKindleRoadEmberSpa_WaterMonsDay};
static const struct WildPokemon sOneIslandKindleRoadEmberSpa_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIslandKindleRoadEmberSpa_FishingMonsInfoDay = {20, sOneIslandKindleRoadEmberSpa_FishingMonsDay};
// たんじょうのしま（みなと）
static const struct WildPokemon sBirthIslandHarbor_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sBirthIslandHarbor_LandMonsInfoDay = {20, sBirthIslandHarbor_LandMonsDay};
static const struct WildPokemon sBirthIslandHarbor_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sBirthIslandHarbor_WaterMonsInfoDay = {20, sBirthIslandHarbor_WaterMonsDay};
static const struct WildPokemon sBirthIslandHarbor_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sBirthIslandHarbor_FishingMonsInfoDay = {20, sBirthIslandHarbor_FishingMonsDay};
// へそのいわ（みなと）
static const struct WildPokemon sNavelRockHarbor_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockHarbor_LandMonsInfoDay = {20, sNavelRockHarbor_LandMonsDay};
static const struct WildPokemon sNavelRockHarbor_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sNavelRockHarbor_WaterMonsInfoDay = {20, sNavelRockHarbor_WaterMonsDay};
static const struct WildPokemon sNavelRockHarbor_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sNavelRockHarbor_FishingMonsInfoDay = {20, sNavelRockHarbor_FishingMonsDay};
// マサラタウン
static const struct WildPokemon sPalletTown_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPalletTown_LandMonsInfoDay = {20, sPalletTown_LandMonsDay};
static const struct WildPokemon sPalletTown_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPalletTown_WaterMonsInfoDay = {20, sPalletTown_WaterMonsDay};
static const struct WildPokemon sPalletTown_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPalletTown_FishingMonsInfoDay = {20, sPalletTown_FishingMonsDay};
// トキワシティ
static const struct WildPokemon sViridianCity_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sViridianCity_LandMonsInfoDay = {20, sViridianCity_LandMonsDay};
static const struct WildPokemon sViridianCity_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sViridianCity_WaterMonsInfoDay = {20, sViridianCity_WaterMonsDay};
static const struct WildPokemon sViridianCity_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sViridianCity_FishingMonsInfoDay = {20, sViridianCity_FishingMonsDay};
// ニビシティ
static const struct WildPokemon sPewterCity_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCity_LandMonsInfoDay = {20, sPewterCity_LandMonsDay};
static const struct WildPokemon sPewterCity_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPewterCity_WaterMonsInfoDay = {20, sPewterCity_WaterMonsDay};
static const struct WildPokemon sPewterCity_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCity_FishingMonsInfoDay = {20, sPewterCity_FishingMonsDay};
// ハナダシティ
static const struct WildPokemon sCeruleanCity_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCity_LandMonsInfoDay = {20, sCeruleanCity_LandMonsDay};
static const struct WildPokemon sCeruleanCity_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeruleanCity_WaterMonsInfoDay = {20, sCeruleanCity_WaterMonsDay};
static const struct WildPokemon sCeruleanCity_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCity_FishingMonsInfoDay = {20, sCeruleanCity_FishingMonsDay};
// シオンタウン
static const struct WildPokemon sLavenderTown_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sLavenderTown_LandMonsInfoDay = {20, sLavenderTown_LandMonsDay};
static const struct WildPokemon sLavenderTown_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sLavenderTown_WaterMonsInfoDay = {20, sLavenderTown_WaterMonsDay};
static const struct WildPokemon sLavenderTown_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sLavenderTown_FishingMonsInfoDay = {20, sLavenderTown_FishingMonsDay};
// クチバシティ
static const struct WildPokemon sVermilionCity_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCity_LandMonsInfoDay = {20, sVermilionCity_LandMonsDay};
static const struct WildPokemon sVermilionCity_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sVermilionCity_WaterMonsInfoDay = {20, sVermilionCity_WaterMonsDay};
static const struct WildPokemon sVermilionCity_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCity_FishingMonsInfoDay = {20, sVermilionCity_FishingMonsDay};
// タマムシシティ
static const struct WildPokemon sCeladonCity_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCity_LandMonsInfoDay = {20, sCeladonCity_LandMonsDay};
static const struct WildPokemon sCeladonCity_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCity_WaterMonsInfoDay = {20, sCeladonCity_WaterMonsDay};
static const struct WildPokemon sCeladonCity_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCity_FishingMonsInfoDay = {20, sCeladonCity_FishingMonsDay};
// セキチクシティ
static const struct WildPokemon sFuchsiaCity_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCity_LandMonsInfoDay = {20, sFuchsiaCity_LandMonsDay};
static const struct WildPokemon sFuchsiaCity_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFuchsiaCity_WaterMonsInfoDay = {20, sFuchsiaCity_WaterMonsDay};
static const struct WildPokemon sFuchsiaCity_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCity_FishingMonsInfoDay = {20, sFuchsiaCity_FishingMonsDay};
// グレンじま
static const struct WildPokemon sCinnabarIsland_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIsland_LandMonsInfoDay = {20, sCinnabarIsland_LandMonsDay};
static const struct WildPokemon sCinnabarIsland_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCinnabarIsland_WaterMonsInfoDay = {20, sCinnabarIsland_WaterMonsDay};
static const struct WildPokemon sCinnabarIsland_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIsland_FishingMonsInfoDay = {20, sCinnabarIsland_FishingMonsDay};
// セキエイこうげん
static const struct WildPokemon sIndigoPlateauExterior_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sIndigoPlateauExterior_LandMonsInfoDay = {20, sIndigoPlateauExterior_LandMonsDay};
static const struct WildPokemon sIndigoPlateauExterior_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sIndigoPlateauExterior_WaterMonsInfoDay = {20, sIndigoPlateauExterior_WaterMonsDay};
static const struct WildPokemon sIndigoPlateauExterior_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sIndigoPlateauExterior_FishingMonsInfoDay = {20, sIndigoPlateauExterior_FishingMonsDay};
// ヤマブキシティ
static const struct WildPokemon sSaffronCity_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCity_LandMonsInfoDay = {20, sSaffronCity_LandMonsDay};
static const struct WildPokemon sSaffronCity_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSaffronCity_WaterMonsInfoDay = {20, sSaffronCity_WaterMonsDay};
static const struct WildPokemon sSaffronCity_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCity_FishingMonsInfoDay = {20, sSaffronCity_FishingMonsDay};
// ヤマブキシティ（クラシック）
static const struct WildPokemon sSaffronCityClassic_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityClassic_LandMonsInfoDay = {20, sSaffronCityClassic_LandMonsDay};
static const struct WildPokemon sSaffronCityClassic_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSaffronCityClassic_WaterMonsInfoDay = {20, sSaffronCityClassic_WaterMonsDay};
static const struct WildPokemon sSaffronCityClassic_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityClassic_FishingMonsInfoDay = {20, sSaffronCityClassic_FishingMonsDay};
// 1のしま
static const struct WildPokemon sOneIsland_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIsland_LandMonsInfoDay = {20, sOneIsland_LandMonsDay};
static const struct WildPokemon sOneIsland_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sOneIsland_WaterMonsInfoDay = {20, sOneIsland_WaterMonsDay};
static const struct WildPokemon sOneIsland_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIsland_FishingMonsInfoDay = {20, sOneIsland_FishingMonsDay};
// 2のしま
static const struct WildPokemon sTwoIsland_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sTwoIsland_LandMonsInfoDay = {20, sTwoIsland_LandMonsDay};
static const struct WildPokemon sTwoIsland_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sTwoIsland_WaterMonsInfoDay = {20, sTwoIsland_WaterMonsDay};
static const struct WildPokemon sTwoIsland_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sTwoIsland_FishingMonsInfoDay = {20, sTwoIsland_FishingMonsDay};
// 3のしま
static const struct WildPokemon sThreeIsland_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIsland_LandMonsInfoDay = {20, sThreeIsland_LandMonsDay};
static const struct WildPokemon sThreeIsland_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sThreeIsland_WaterMonsInfoDay = {20, sThreeIsland_WaterMonsDay};
static const struct WildPokemon sThreeIsland_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIsland_FishingMonsInfoDay = {20, sThreeIsland_FishingMonsDay};
// 4のしま
static const struct WildPokemon sFourIsland_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIsland_LandMonsInfoDay = {20, sFourIsland_LandMonsDay};
static const struct WildPokemon sFourIsland_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFourIsland_WaterMonsInfoDay = {20, sFourIsland_WaterMonsDay};
static const struct WildPokemon sFourIsland_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIsland_FishingMonsInfoDay = {20, sFourIsland_FishingMonsDay};
// 5のしま
static const struct WildPokemon sFiveIsland_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIsland_LandMonsInfoDay = {20, sFiveIsland_LandMonsDay};
static const struct WildPokemon sFiveIsland_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIsland_WaterMonsInfoDay = {20, sFiveIsland_WaterMonsDay};
static const struct WildPokemon sFiveIsland_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIsland_FishingMonsInfoDay = {20, sFiveIsland_FishingMonsDay};
// 7のしま
static const struct WildPokemon sSevenIsland_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIsland_LandMonsInfoDay = {20, sSevenIsland_LandMonsDay};
static const struct WildPokemon sSevenIsland_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIsland_WaterMonsInfoDay = {20, sSevenIsland_WaterMonsDay};
static const struct WildPokemon sSevenIsland_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIsland_FishingMonsInfoDay = {20, sSevenIsland_FishingMonsDay};
// 6のしま
static const struct WildPokemon sSixIsland_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIsland_LandMonsInfoDay = {20, sSixIsland_LandMonsDay};
static const struct WildPokemon sSixIsland_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIsland_WaterMonsInfoDay = {20, sSixIsland_WaterMonsDay};
static const struct WildPokemon sSixIsland_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIsland_FishingMonsInfoDay = {20, sSixIsland_FishingMonsDay};

// 1ばんどうろ
static const struct WildPokemon sRoute1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute1_LandMonsInfoDay = {20, sRoute1_LandMonsDay};
static const struct WildPokemon sRoute1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute1_WaterMonsInfoDay = {20, sRoute1_WaterMonsDay};
static const struct WildPokemon sRoute1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute1_FishingMonsInfoDay = {20, sRoute1_FishingMonsDay};

// 2ばんどうろ
static const struct WildPokemon sRoute2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute2_LandMonsInfoDay = {20, sRoute2_LandMonsDay};
static const struct WildPokemon sRoute2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute2_WaterMonsInfoDay = {20, sRoute2_WaterMonsDay};
static const struct WildPokemon sRoute2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute2_FishingMonsInfoDay = {20, sRoute2_FishingMonsDay};
// 3ばんどうろ
static const struct WildPokemon sRoute3_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute3_LandMonsInfoDay = {20, sRoute3_LandMonsDay};
static const struct WildPokemon sRoute3_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute3_WaterMonsInfoDay = {20, sRoute3_WaterMonsDay};
static const struct WildPokemon sRoute3_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute3_FishingMonsInfoDay = {20, sRoute3_FishingMonsDay};
// 4ばんどうろ
static const struct WildPokemon sRoute4_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute4_LandMonsInfoDay = {20, sRoute4_LandMonsDay};
static const struct WildPokemon sRoute4_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute4_WaterMonsInfoDay = {20, sRoute4_WaterMonsDay};
static const struct WildPokemon sRoute4_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute4_FishingMonsInfoDay = {20, sRoute4_FishingMonsDay};
// 5ばんどうろ
static const struct WildPokemon sRoute5_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute5_LandMonsInfoDay = {20, sRoute5_LandMonsDay};
static const struct WildPokemon sRoute5_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute5_WaterMonsInfoDay = {20, sRoute5_WaterMonsDay};
static const struct WildPokemon sRoute5_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute5_FishingMonsInfoDay = {20, sRoute5_FishingMonsDay};
// 6ばんどうろ
static const struct WildPokemon sRoute6_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute6_LandMonsInfoDay = {20, sRoute6_LandMonsDay};
static const struct WildPokemon sRoute6_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute6_WaterMonsInfoDay = {20, sRoute6_WaterMonsDay};
static const struct WildPokemon sRoute6_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute6_FishingMonsInfoDay = {20, sRoute6_FishingMonsDay};
// 7ばんどうろ
static const struct WildPokemon sRoute7_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute7_LandMonsInfoDay = {20, sRoute7_LandMonsDay};
static const struct WildPokemon sRoute7_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute7_WaterMonsInfoDay = {20, sRoute7_WaterMonsDay};
static const struct WildPokemon sRoute7_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute7_FishingMonsInfoDay = {20, sRoute7_FishingMonsDay};
// 8ばんどうろ
static const struct WildPokemon sRoute8_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute8_LandMonsInfoDay = {20, sRoute8_LandMonsDay};
static const struct WildPokemon sRoute8_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute8_WaterMonsInfoDay = {20, sRoute8_WaterMonsDay};
static const struct WildPokemon sRoute8_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute8_FishingMonsInfoDay = {20, sRoute8_FishingMonsDay};
// 9ばんどうろ
static const struct WildPokemon sRoute9_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute9_LandMonsInfoDay = {20, sRoute9_LandMonsDay};
static const struct WildPokemon sRoute9_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute9_WaterMonsInfoDay = {20, sRoute9_WaterMonsDay};
static const struct WildPokemon sRoute9_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute9_FishingMonsInfoDay = {20, sRoute9_FishingMonsDay};
// 10ばんどうろ
static const struct WildPokemon sRoute10_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute10_LandMonsInfoDay = {20, sRoute10_LandMonsDay};
static const struct WildPokemon sRoute10_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute10_WaterMonsInfoDay = {20, sRoute10_WaterMonsDay};
static const struct WildPokemon sRoute10_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute10_FishingMonsInfoDay = {20, sRoute10_FishingMonsDay};
// 11ばんどうろ
static const struct WildPokemon sRoute11_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute11_LandMonsInfoDay = {20, sRoute11_LandMonsDay};
static const struct WildPokemon sRoute11_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute11_WaterMonsInfoDay = {20, sRoute11_WaterMonsDay};
static const struct WildPokemon sRoute11_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute11_FishingMonsInfoDay = {20, sRoute11_FishingMonsDay};
// 12ばんどうろ
static const struct WildPokemon sRoute12_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute12_LandMonsInfoDay = {20, sRoute12_LandMonsDay};
static const struct WildPokemon sRoute12_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute12_WaterMonsInfoDay = {20, sRoute12_WaterMonsDay};
static const struct WildPokemon sRoute12_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute12_FishingMonsInfoDay = {20, sRoute12_FishingMonsDay};
// 13ばんどうろ
static const struct WildPokemon sRoute13_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute13_LandMonsInfoDay = {20, sRoute13_LandMonsDay};
static const struct WildPokemon sRoute13_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute13_WaterMonsInfoDay = {20, sRoute13_WaterMonsDay};
static const struct WildPokemon sRoute13_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute13_FishingMonsInfoDay = {20, sRoute13_FishingMonsDay};
// 14ばんどうろ
static const struct WildPokemon sRoute14_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute14_LandMonsInfoDay = {20, sRoute14_LandMonsDay};
static const struct WildPokemon sRoute14_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute14_WaterMonsInfoDay = {20, sRoute14_WaterMonsDay};
static const struct WildPokemon sRoute14_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute14_FishingMonsInfoDay = {20, sRoute14_FishingMonsDay};
// 15ばんどうろ
static const struct WildPokemon sRoute15_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute15_LandMonsInfoDay = {20, sRoute15_LandMonsDay};
static const struct WildPokemon sRoute15_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute15_WaterMonsInfoDay = {20, sRoute15_WaterMonsDay};
static const struct WildPokemon sRoute15_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute15_FishingMonsInfoDay = {20, sRoute15_FishingMonsDay};
// 16ばんどうろ
static const struct WildPokemon sRoute16_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute16_LandMonsInfoDay = {20, sRoute16_LandMonsDay};
static const struct WildPokemon sRoute16_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute16_WaterMonsInfoDay = {20, sRoute16_WaterMonsDay};
static const struct WildPokemon sRoute16_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute16_FishingMonsInfoDay = {20, sRoute16_FishingMonsDay};
// 17ばんどうろ
static const struct WildPokemon sRoute17_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute17_LandMonsInfoDay = {20, sRoute17_LandMonsDay};
static const struct WildPokemon sRoute17_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute17_WaterMonsInfoDay = {20, sRoute17_WaterMonsDay};
static const struct WildPokemon sRoute17_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute17_FishingMonsInfoDay = {20, sRoute17_FishingMonsDay};
// 18ばんどうろ
static const struct WildPokemon sRoute18_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute18_LandMonsInfoDay = {20, sRoute18_LandMonsDay};
static const struct WildPokemon sRoute18_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute18_WaterMonsInfoDay = {20, sRoute18_WaterMonsDay};
static const struct WildPokemon sRoute18_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute18_FishingMonsInfoDay = {20, sRoute18_FishingMonsDay};
// 19ばんすいどう
static const struct WildPokemon sRoute19_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute19_LandMonsInfoDay = {20, sRoute19_LandMonsDay};
static const struct WildPokemon sRoute19_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute19_WaterMonsInfoDay = {20, sRoute19_WaterMonsDay};
static const struct WildPokemon sRoute19_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute19_FishingMonsInfoDay = {20, sRoute19_FishingMonsDay};
// 20ばんすいどう
static const struct WildPokemon sRoute20_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute20_LandMonsInfoDay = {20, sRoute20_LandMonsDay};
static const struct WildPokemon sRoute20_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute20_WaterMonsInfoDay = {20, sRoute20_WaterMonsDay};
static const struct WildPokemon sRoute20_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute20_FishingMonsInfoDay = {20, sRoute20_FishingMonsDay};
// 21ばんすいどう（A）
static const struct WildPokemon sRoute21A_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute21A_LandMonsInfoDay = {20, sRoute21A_LandMonsDay};
static const struct WildPokemon sRoute21A_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute21A_WaterMonsInfoDay = {20, sRoute21A_WaterMonsDay};
static const struct WildPokemon sRoute21A_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute21A_FishingMonsInfoDay = {20, sRoute21A_FishingMonsDay};
// 21ばんすいどう（B）
static const struct WildPokemon sRoute21B_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute21B_LandMonsInfoDay = {20, sRoute21B_LandMonsDay};
static const struct WildPokemon sRoute21B_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute21B_WaterMonsInfoDay = {20, sRoute21B_WaterMonsDay};
static const struct WildPokemon sRoute21B_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute21B_FishingMonsInfoDay = {20, sRoute21B_FishingMonsDay};
// 22ばんどうろ
static const struct WildPokemon sRoute22_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute22_LandMonsInfoDay = {20, sRoute22_LandMonsDay};
static const struct WildPokemon sRoute22_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute22_WaterMonsInfoDay = {20, sRoute22_WaterMonsDay};
static const struct WildPokemon sRoute22_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute22_FishingMonsInfoDay = {20, sRoute22_FishingMonsDay};
// 23ばんどうろ
static const struct WildPokemon sRoute23_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute23_LandMonsInfoDay = {20, sRoute23_LandMonsDay};
static const struct WildPokemon sRoute23_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute23_WaterMonsInfoDay = {20, sRoute23_WaterMonsDay};
static const struct WildPokemon sRoute23_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute23_FishingMonsInfoDay = {20, sRoute23_FishingMonsDay};
// 24ばんどうろ
static const struct WildPokemon sRoute24_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute24_LandMonsInfoDay = {20, sRoute24_LandMonsDay};
static const struct WildPokemon sRoute24_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute24_WaterMonsInfoDay = {20, sRoute24_WaterMonsDay};
static const struct WildPokemon sRoute24_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute24_FishingMonsInfoDay = {20, sRoute24_FishingMonsDay};
// 25ばんどうろ
static const struct WildPokemon sRoute25_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute25_LandMonsInfoDay = {20, sRoute25_LandMonsDay};
static const struct WildPokemon sRoute25_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute25_WaterMonsInfoDay = {20, sRoute25_WaterMonsDay};
static const struct WildPokemon sRoute25_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute25_FishingMonsInfoDay = {20, sRoute25_FishingMonsDay};
// ほてりのみち
static const struct WildPokemon sOneIslandKindleRoad_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIslandKindleRoad_LandMonsInfoDay = {20, sOneIslandKindleRoad_LandMonsDay};
static const struct WildPokemon sOneIslandKindleRoad_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sOneIslandKindleRoad_WaterMonsInfoDay = {20, sOneIslandKindleRoad_WaterMonsDay};
static const struct WildPokemon sOneIslandKindleRoad_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIslandKindleRoad_FishingMonsInfoDay = {20, sOneIslandKindleRoad_FishingMonsDay};
// たからのはま
static const struct WildPokemon sOneIslandTreasureBeach_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIslandTreasureBeach_LandMonsInfoDay = {20, sOneIslandTreasureBeach_LandMonsDay};
static const struct WildPokemon sOneIslandTreasureBeach_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sOneIslandTreasureBeach_WaterMonsInfoDay = {20, sOneIslandTreasureBeach_WaterMonsDay};
static const struct WildPokemon sOneIslandTreasureBeach_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIslandTreasureBeach_FishingMonsInfoDay = {20, sOneIslandTreasureBeach_FishingMonsDay};
// きわのみさき
static const struct WildPokemon sTwoIslandCapeBrink_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sTwoIslandCapeBrink_LandMonsInfoDay = {20, sTwoIslandCapeBrink_LandMonsDay};
static const struct WildPokemon sTwoIslandCapeBrink_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sTwoIslandCapeBrink_WaterMonsInfoDay = {20, sTwoIslandCapeBrink_WaterMonsDay};
static const struct WildPokemon sTwoIslandCapeBrink_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sTwoIslandCapeBrink_FishingMonsInfoDay = {20, sTwoIslandCapeBrink_FishingMonsDay};
// きずなばし
static const struct WildPokemon sThreeIslandBondBridge_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandBondBridge_LandMonsInfoDay = {20, sThreeIslandBondBridge_LandMonsDay};
static const struct WildPokemon sThreeIslandBondBridge_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sThreeIslandBondBridge_WaterMonsInfoDay = {20, sThreeIslandBondBridge_WaterMonsDay};
static const struct WildPokemon sThreeIslandBondBridge_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandBondBridge_FishingMonsInfoDay = {20, sThreeIslandBondBridge_FishingMonsDay};
// 3のしま みなと
static const struct WildPokemon sThreeIslandPort_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandPort_LandMonsInfoDay = {20, sThreeIslandPort_LandMonsDay};
static const struct WildPokemon sThreeIslandPort_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sThreeIslandPort_WaterMonsInfoDay = {20, sThreeIslandPort_WaterMonsDay};
static const struct WildPokemon sThreeIslandPort_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandPort_FishingMonsInfoDay = {20, sThreeIslandPort_FishingMonsDay};
// ゴージャスリゾート
static const struct WildPokemon sFiveIslandResortGorgeous_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandResortGorgeous_LandMonsInfoDay = {20, sFiveIslandResortGorgeous_LandMonsDay};
static const struct WildPokemon sFiveIslandResortGorgeous_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandResortGorgeous_WaterMonsInfoDay = {20, sFiveIslandResortGorgeous_WaterMonsDay};
static const struct WildPokemon sFiveIslandResortGorgeous_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandResortGorgeous_FishingMonsInfoDay = {20, sFiveIslandResortGorgeous_FishingMonsDay};
// みずのめいろ
static const struct WildPokemon sFiveIslandWaterLabyrinth_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandWaterLabyrinth_LandMonsInfoDay = {20, sFiveIslandWaterLabyrinth_LandMonsDay};
static const struct WildPokemon sFiveIslandWaterLabyrinth_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandWaterLabyrinth_WaterMonsInfoDay = {20, sFiveIslandWaterLabyrinth_WaterMonsDay};
static const struct WildPokemon sFiveIslandWaterLabyrinth_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandWaterLabyrinth_FishingMonsInfoDay = {20, sFiveIslandWaterLabyrinth_FishingMonsDay};
// 5のしま あきち
static const struct WildPokemon sFiveIslandMeadow_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandMeadow_LandMonsInfoDay = {20, sFiveIslandMeadow_LandMonsDay};
static const struct WildPokemon sFiveIslandMeadow_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandMeadow_WaterMonsInfoDay = {20, sFiveIslandMeadow_WaterMonsDay};
static const struct WildPokemon sFiveIslandMeadow_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandMeadow_FishingMonsInfoDay = {20, sFiveIslandMeadow_FishingMonsDay};
// おもいでのとう
static const struct WildPokemon sFiveIslandMemorialPillar_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandMemorialPillar_LandMonsInfoDay = {20, sFiveIslandMemorialPillar_LandMonsDay};
static const struct WildPokemon sFiveIslandMemorialPillar_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandMemorialPillar_WaterMonsInfoDay = {20, sFiveIslandMemorialPillar_WaterMonsDay};
static const struct WildPokemon sFiveIslandMemorialPillar_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandMemorialPillar_FishingMonsInfoDay = {20, sFiveIslandMemorialPillar_FishingMonsDay};
// はずれのしま
static const struct WildPokemon sSixIslandOutcastIsland_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandOutcastIsland_LandMonsInfoDay = {20, sSixIslandOutcastIsland_LandMonsDay};
static const struct WildPokemon sSixIslandOutcastIsland_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandOutcastIsland_WaterMonsInfoDay = {20, sSixIslandOutcastIsland_WaterMonsDay};
static const struct WildPokemon sSixIslandOutcastIsland_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandOutcastIsland_FishingMonsInfoDay = {20, sSixIslandOutcastIsland_FishingMonsDay};
// みどりのさんぽみち
static const struct WildPokemon sSixIslandGreenPath_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandGreenPath_LandMonsInfoDay = {20, sSixIslandGreenPath_LandMonsDay};
static const struct WildPokemon sSixIslandGreenPath_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandGreenPath_WaterMonsInfoDay = {20, sSixIslandGreenPath_WaterMonsDay};
static const struct WildPokemon sSixIslandGreenPath_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandGreenPath_FishingMonsInfoDay = {20, sSixIslandGreenPath_FishingMonsDay};
// みずのさんぽみち
static const struct WildPokemon sSixIslandWaterPath_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandWaterPath_LandMonsInfoDay = {20, sSixIslandWaterPath_LandMonsDay};
static const struct WildPokemon sSixIslandWaterPath_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandWaterPath_WaterMonsInfoDay = {20, sSixIslandWaterPath_WaterMonsDay};
static const struct WildPokemon sSixIslandWaterPath_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandWaterPath_FishingMonsInfoDay = {20, sSixIslandWaterPath_FishingMonsDay};
// いせきのたに
static const struct WildPokemon sSixIslandRuinValley_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandRuinValley_LandMonsInfoDay = {20, sSixIslandRuinValley_LandMonsDay};
static const struct WildPokemon sSixIslandRuinValley_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandRuinValley_WaterMonsInfoDay = {20, sSixIslandRuinValley_WaterMonsDay};
static const struct WildPokemon sSixIslandRuinValley_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandRuinValley_FishingMonsInfoDay = {20, sSixIslandRuinValley_FishingMonsDay};
// トレーナータワー
static const struct WildPokemon sSevenIslandTrainerTower_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower_LandMonsInfoDay = {20, sSevenIslandTrainerTower_LandMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower_WaterMonsInfoDay = {20, sSevenIslandTrainerTower_WaterMonsDay};
static const struct WildPokemon sSevenIslandTrainerTower_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTrainerTower_FishingMonsInfoDay = {20, sSevenIslandTrainerTower_FishingMonsDay};
// けいこくいりぐち
static const struct WildPokemon sSevenIslandSevaultCanyonEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandSevaultCanyonEntrance_LandMonsInfoDay = {20, sSevenIslandSevaultCanyonEntrance_LandMonsDay};
static const struct WildPokemon sSevenIslandSevaultCanyonEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandSevaultCanyonEntrance_WaterMonsInfoDay = {20, sSevenIslandSevaultCanyonEntrance_WaterMonsDay};
static const struct WildPokemon sSevenIslandSevaultCanyonEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandSevaultCanyonEntrance_FishingMonsInfoDay = {20, sSevenIslandSevaultCanyonEntrance_FishingMonsDay};
// しっぽうけいこく
static const struct WildPokemon sSevenIslandSevaultCanyon_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandSevaultCanyon_LandMonsInfoDay = {20, sSevenIslandSevaultCanyon_LandMonsDay};
static const struct WildPokemon sSevenIslandSevaultCanyon_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandSevaultCanyon_WaterMonsInfoDay = {20, sSevenIslandSevaultCanyon_WaterMonsDay};
static const struct WildPokemon sSevenIslandSevaultCanyon_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandSevaultCanyon_FishingMonsInfoDay = {20, sSevenIslandSevaultCanyon_FishingMonsDay};
// アスカナいせき
static const struct WildPokemon sSevenIslandTanobyRuins_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuins_LandMonsInfoDay = {20, sSevenIslandTanobyRuins_LandMonsDay};
static const struct WildPokemon sSevenIslandTanobyRuins_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuins_WaterMonsInfoDay = {20, sSevenIslandTanobyRuins_WaterMonsDay};
static const struct WildPokemon sSevenIslandTanobyRuins_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandTanobyRuins_FishingMonsInfoDay = {20, sSevenIslandTanobyRuins_FishingMonsDay};
// マサラタウン じぶんのいえ 1F
static const struct WildPokemon sPalletTownPlayersHouse1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPalletTownPlayersHouse1F_LandMonsInfoDay = {20, sPalletTownPlayersHouse1F_LandMonsDay};
static const struct WildPokemon sPalletTownPlayersHouse1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPalletTownPlayersHouse1F_WaterMonsInfoDay = {20, sPalletTownPlayersHouse1F_WaterMonsDay};
static const struct WildPokemon sPalletTownPlayersHouse1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPalletTownPlayersHouse1F_FishingMonsInfoDay = {20, sPalletTownPlayersHouse1F_FishingMonsDay};
// マサラタウン じぶんのいえ 2F
static const struct WildPokemon sPalletTownPlayersHouse2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPalletTownPlayersHouse2F_LandMonsInfoDay = {20, sPalletTownPlayersHouse2F_LandMonsDay};
static const struct WildPokemon sPalletTownPlayersHouse2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPalletTownPlayersHouse2F_WaterMonsInfoDay = {20, sPalletTownPlayersHouse2F_WaterMonsDay};
static const struct WildPokemon sPalletTownPlayersHouse2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPalletTownPlayersHouse2F_FishingMonsInfoDay = {20, sPalletTownPlayersHouse2F_FishingMonsDay};
// マサラタウン ライバルのいえ
static const struct WildPokemon sPalletTownGarysHouse_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPalletTownGarysHouse_LandMonsInfoDay = {20, sPalletTownGarysHouse_LandMonsDay};
static const struct WildPokemon sPalletTownGarysHouse_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPalletTownGarysHouse_WaterMonsInfoDay = {20, sPalletTownGarysHouse_WaterMonsDay};
static const struct WildPokemon sPalletTownGarysHouse_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPalletTownGarysHouse_FishingMonsInfoDay = {20, sPalletTownGarysHouse_FishingMonsDay};
// オーキドはかせのけんきゅうじょ
static const struct WildPokemon sPalletTownProfessorOaksLab_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPalletTownProfessorOaksLab_LandMonsInfoDay = {20, sPalletTownProfessorOaksLab_LandMonsDay};
static const struct WildPokemon sPalletTownProfessorOaksLab_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPalletTownProfessorOaksLab_WaterMonsInfoDay = {20, sPalletTownProfessorOaksLab_WaterMonsDay};
static const struct WildPokemon sPalletTownProfessorOaksLab_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPalletTownProfessorOaksLab_FishingMonsInfoDay = {20, sPalletTownProfessorOaksLab_FishingMonsDay};
// トキワシティ 民家1
static const struct WildPokemon sViridianCityHouse1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sViridianCityHouse1_LandMonsInfoDay = {20, sViridianCityHouse1_LandMonsDay};
static const struct WildPokemon sViridianCityHouse1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sViridianCityHouse1_WaterMonsInfoDay = {20, sViridianCityHouse1_WaterMonsDay};
static const struct WildPokemon sViridianCityHouse1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sViridianCityHouse1_FishingMonsInfoDay = {20, sViridianCityHouse1_FishingMonsDay};
// トキワシティ ジム
static const struct WildPokemon sViridianCityGym_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sViridianCityGym_LandMonsInfoDay = {20, sViridianCityGym_LandMonsDay};
static const struct WildPokemon sViridianCityGym_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sViridianCityGym_WaterMonsInfoDay = {20, sViridianCityGym_WaterMonsDay};
static const struct WildPokemon sViridianCityGym_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sViridianCityGym_FishingMonsInfoDay = {20, sViridianCityGym_FishingMonsDay};
// トキワシティ 民家2
static const struct WildPokemon sViridianCityHouse2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sViridianCityHouse2_LandMonsInfoDay = {20, sViridianCityHouse2_LandMonsDay};
static const struct WildPokemon sViridianCityHouse2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sViridianCityHouse2_WaterMonsInfoDay = {20, sViridianCityHouse2_WaterMonsDay};
static const struct WildPokemon sViridianCityHouse2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sViridianCityHouse2_FishingMonsInfoDay = {20, sViridianCityHouse2_FishingMonsDay};
// トキワシティ フレンドリィショップ
static const struct WildPokemon sViridianCityMart_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sViridianCityMart_LandMonsInfoDay = {20, sViridianCityMart_LandMonsDay};
static const struct WildPokemon sViridianCityMart_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sViridianCityMart_WaterMonsInfoDay = {20, sViridianCityMart_WaterMonsDay};
static const struct WildPokemon sViridianCityMart_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sViridianCityMart_FishingMonsInfoDay = {20, sViridianCityMart_FishingMonsDay};
// トキワシティ ポケモンセンター 1F
static const struct WildPokemon sViridianCityPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sViridianCityPokemonCenter1F_LandMonsInfoDay = {20, sViridianCityPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sViridianCityPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sViridianCityPokemonCenter1F_WaterMonsInfoDay = {20, sViridianCityPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sViridianCityPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sViridianCityPokemonCenter1F_FishingMonsInfoDay = {20, sViridianCityPokemonCenter1F_FishingMonsDay};
// トキワシティ ポケモンセンター 2F
static const struct WildPokemon sViridianCityPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sViridianCityPokemonCenter2F_LandMonsInfoDay = {20, sViridianCityPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sViridianCityPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sViridianCityPokemonCenter2F_WaterMonsInfoDay = {20, sViridianCityPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sViridianCityPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sViridianCityPokemonCenter2F_FishingMonsInfoDay = {20, sViridianCityPokemonCenter2F_FishingMonsDay};
// ニビシティ はくぶつかん 1F
static const struct WildPokemon sPewterCityMuseum1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCityMuseum1F_LandMonsInfoDay = {20, sPewterCityMuseum1F_LandMonsDay};
static const struct WildPokemon sPewterCityMuseum1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPewterCityMuseum1F_WaterMonsInfoDay = {20, sPewterCityMuseum1F_WaterMonsDay};
static const struct WildPokemon sPewterCityMuseum1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCityMuseum1F_FishingMonsInfoDay = {20, sPewterCityMuseum1F_FishingMonsDay};
// ニビシティ はくぶつかん 2F
static const struct WildPokemon sPewterCityMuseum2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCityMuseum2F_LandMonsInfoDay = {20, sPewterCityMuseum2F_LandMonsDay};
static const struct WildPokemon sPewterCityMuseum2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPewterCityMuseum2F_WaterMonsInfoDay = {20, sPewterCityMuseum2F_WaterMonsDay};
static const struct WildPokemon sPewterCityMuseum2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCityMuseum2F_FishingMonsInfoDay = {20, sPewterCityMuseum2F_FishingMonsDay};
// ニビシティ ジム
static const struct WildPokemon sPewterCityGym_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCityGym_LandMonsInfoDay = {20, sPewterCityGym_LandMonsDay};
static const struct WildPokemon sPewterCityGym_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPewterCityGym_WaterMonsInfoDay = {20, sPewterCityGym_WaterMonsDay};
static const struct WildPokemon sPewterCityGym_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCityGym_FishingMonsInfoDay = {20, sPewterCityGym_FishingMonsDay};
// ニビシティ フレンドリィショップ
static const struct WildPokemon sPewterCityMart_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCityMart_LandMonsInfoDay = {20, sPewterCityMart_LandMonsDay};
static const struct WildPokemon sPewterCityMart_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPewterCityMart_WaterMonsInfoDay = {20, sPewterCityMart_WaterMonsDay};
static const struct WildPokemon sPewterCityMart_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCityMart_FishingMonsInfoDay = {20, sPewterCityMart_FishingMonsDay};
// ニビシティ 民家1
static const struct WildPokemon sPewterCityHouse1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCityHouse1_LandMonsInfoDay = {20, sPewterCityHouse1_LandMonsDay};
static const struct WildPokemon sPewterCityHouse1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPewterCityHouse1_WaterMonsInfoDay = {20, sPewterCityHouse1_WaterMonsDay};
static const struct WildPokemon sPewterCityHouse1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCityHouse1_FishingMonsInfoDay = {20, sPewterCityHouse1_FishingMonsDay};
// ニビシティ ポケモンセンター 1F
static const struct WildPokemon sPewterCityPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCityPokemonCenter1F_LandMonsInfoDay = {20, sPewterCityPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sPewterCityPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPewterCityPokemonCenter1F_WaterMonsInfoDay = {20, sPewterCityPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sPewterCityPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCityPokemonCenter1F_FishingMonsInfoDay = {20, sPewterCityPokemonCenter1F_FishingMonsDay};
// ニビシティ ポケモンセンター 2F
static const struct WildPokemon sPewterCityPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCityPokemonCenter2F_LandMonsInfoDay = {20, sPewterCityPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sPewterCityPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPewterCityPokemonCenter2F_WaterMonsInfoDay = {20, sPewterCityPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sPewterCityPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCityPokemonCenter2F_FishingMonsInfoDay = {20, sPewterCityPokemonCenter2F_FishingMonsDay};
// ニビシティ 民家2
static const struct WildPokemon sPewterCityHouse2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCityHouse2_LandMonsInfoDay = {20, sPewterCityHouse2_LandMonsDay};
static const struct WildPokemon sPewterCityHouse2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sPewterCityHouse2_WaterMonsInfoDay = {20, sPewterCityHouse2_WaterMonsDay};
static const struct WildPokemon sPewterCityHouse2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sPewterCityHouse2_FishingMonsInfoDay = {20, sPewterCityHouse2_FishingMonsDay};
// ハナダシティ 民家1
static const struct WildPokemon sCeruleanCityHouse1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityHouse1_LandMonsInfoDay = {20, sCeruleanCityHouse1_LandMonsDay};
static const struct WildPokemon sCeruleanCityHouse1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeruleanCityHouse1_WaterMonsInfoDay = {20, sCeruleanCityHouse1_WaterMonsDay};
static const struct WildPokemon sCeruleanCityHouse1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityHouse1_FishingMonsInfoDay = {20, sCeruleanCityHouse1_FishingMonsDay};
// ハナダシティ 民家2
static const struct WildPokemon sCeruleanCityHouse2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityHouse2_LandMonsInfoDay = {20, sCeruleanCityHouse2_LandMonsDay};
static const struct WildPokemon sCeruleanCityHouse2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeruleanCityHouse2_WaterMonsInfoDay = {20, sCeruleanCityHouse2_WaterMonsDay};
static const struct WildPokemon sCeruleanCityHouse2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityHouse2_FishingMonsInfoDay = {20, sCeruleanCityHouse2_FishingMonsDay};
// ハナダシティ 民家3
static const struct WildPokemon sCeruleanCityHouse3_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityHouse3_LandMonsInfoDay = {20, sCeruleanCityHouse3_LandMonsDay};
static const struct WildPokemon sCeruleanCityHouse3_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeruleanCityHouse3_WaterMonsInfoDay = {20, sCeruleanCityHouse3_WaterMonsDay};
static const struct WildPokemon sCeruleanCityHouse3_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityHouse3_FishingMonsInfoDay = {20, sCeruleanCityHouse3_FishingMonsDay};
// ハナダシティ ポケモンセンター 1F
static const struct WildPokemon sCeruleanCityPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityPokemonCenter1F_LandMonsInfoDay = {20, sCeruleanCityPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sCeruleanCityPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeruleanCityPokemonCenter1F_WaterMonsInfoDay = {20, sCeruleanCityPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sCeruleanCityPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityPokemonCenter1F_FishingMonsInfoDay = {20, sCeruleanCityPokemonCenter1F_FishingMonsDay};
// ハナダシティ ポケモンセンター 2F
static const struct WildPokemon sCeruleanCityPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityPokemonCenter2F_LandMonsInfoDay = {20, sCeruleanCityPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sCeruleanCityPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeruleanCityPokemonCenter2F_WaterMonsInfoDay = {20, sCeruleanCityPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sCeruleanCityPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityPokemonCenter2F_FishingMonsInfoDay = {20, sCeruleanCityPokemonCenter2F_FishingMonsDay};
// ハナダシティ ジム
static const struct WildPokemon sCeruleanCityGym_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityGym_LandMonsInfoDay = {20, sCeruleanCityGym_LandMonsDay};
static const struct WildPokemon sCeruleanCityGym_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeruleanCityGym_WaterMonsInfoDay = {20, sCeruleanCityGym_WaterMonsDay};
static const struct WildPokemon sCeruleanCityGym_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityGym_FishingMonsInfoDay = {20, sCeruleanCityGym_FishingMonsDay};
// ハナダシティ じてんしゃや
static const struct WildPokemon sCeruleanCityBikeShop_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityBikeShop_LandMonsInfoDay = {20, sCeruleanCityBikeShop_LandMonsDay};
static const struct WildPokemon sCeruleanCityBikeShop_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeruleanCityBikeShop_WaterMonsInfoDay = {20, sCeruleanCityBikeShop_WaterMonsDay};
static const struct WildPokemon sCeruleanCityBikeShop_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityBikeShop_FishingMonsInfoDay = {20, sCeruleanCityBikeShop_FishingMonsDay};
// ハナダシティ フレンドリィショップ
static const struct WildPokemon sCeruleanCityMart_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityMart_LandMonsInfoDay = {20, sCeruleanCityMart_LandMonsDay};
static const struct WildPokemon sCeruleanCityMart_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeruleanCityMart_WaterMonsInfoDay = {20, sCeruleanCityMart_WaterMonsDay};
static const struct WildPokemon sCeruleanCityMart_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityMart_FishingMonsInfoDay = {20, sCeruleanCityMart_FishingMonsDay};
// ハナダシティ 民家4
static const struct WildPokemon sCeruleanCityHouse4_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityHouse4_LandMonsInfoDay = {20, sCeruleanCityHouse4_LandMonsDay};
static const struct WildPokemon sCeruleanCityHouse4_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeruleanCityHouse4_WaterMonsInfoDay = {20, sCeruleanCityHouse4_WaterMonsDay};
static const struct WildPokemon sCeruleanCityHouse4_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityHouse4_FishingMonsInfoDay = {20, sCeruleanCityHouse4_FishingMonsDay};
// ハナダシティ 民家5
static const struct WildPokemon sCeruleanCityHouse5_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityHouse5_LandMonsInfoDay = {20, sCeruleanCityHouse5_LandMonsDay};
static const struct WildPokemon sCeruleanCityHouse5_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeruleanCityHouse5_WaterMonsInfoDay = {20, sCeruleanCityHouse5_WaterMonsDay};
static const struct WildPokemon sCeruleanCityHouse5_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeruleanCityHouse5_FishingMonsInfoDay = {20, sCeruleanCityHouse5_FishingMonsDay};
// シオンタウン ポケモンセンター 1F
static const struct WildPokemon sLavenderTownPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sLavenderTownPokemonCenter1F_LandMonsInfoDay = {20, sLavenderTownPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sLavenderTownPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sLavenderTownPokemonCenter1F_WaterMonsInfoDay = {20, sLavenderTownPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sLavenderTownPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sLavenderTownPokemonCenter1F_FishingMonsInfoDay = {20, sLavenderTownPokemonCenter1F_FishingMonsDay};
// シオンタウン ポケモンセンター 2F
static const struct WildPokemon sLavenderTownPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sLavenderTownPokemonCenter2F_LandMonsInfoDay = {20, sLavenderTownPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sLavenderTownPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sLavenderTownPokemonCenter2F_WaterMonsInfoDay = {20, sLavenderTownPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sLavenderTownPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sLavenderTownPokemonCenter2F_FishingMonsInfoDay = {20, sLavenderTownPokemonCenter2F_FishingMonsDay};
// ポケモンボランティアのいえ
static const struct WildPokemon sLavenderTownVolunteerPokemonHouse_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sLavenderTownVolunteerPokemonHouse_LandMonsInfoDay = {20, sLavenderTownVolunteerPokemonHouse_LandMonsDay};
static const struct WildPokemon sLavenderTownVolunteerPokemonHouse_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sLavenderTownVolunteerPokemonHouse_WaterMonsInfoDay = {20, sLavenderTownVolunteerPokemonHouse_WaterMonsDay};
static const struct WildPokemon sLavenderTownVolunteerPokemonHouse_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sLavenderTownVolunteerPokemonHouse_FishingMonsInfoDay = {20, sLavenderTownVolunteerPokemonHouse_FishingMonsDay};
// シオンタウン 民家1
static const struct WildPokemon sLavenderTownHouse1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sLavenderTownHouse1_LandMonsInfoDay = {20, sLavenderTownHouse1_LandMonsDay};
static const struct WildPokemon sLavenderTownHouse1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sLavenderTownHouse1_WaterMonsInfoDay = {20, sLavenderTownHouse1_WaterMonsDay};
static const struct WildPokemon sLavenderTownHouse1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sLavenderTownHouse1_FishingMonsInfoDay = {20, sLavenderTownHouse1_FishingMonsDay};
// シオンタウン 民家2
static const struct WildPokemon sLavenderTownHouse2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sLavenderTownHouse2_LandMonsInfoDay = {20, sLavenderTownHouse2_LandMonsDay};
static const struct WildPokemon sLavenderTownHouse2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sLavenderTownHouse2_WaterMonsInfoDay = {20, sLavenderTownHouse2_WaterMonsDay};
static const struct WildPokemon sLavenderTownHouse2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sLavenderTownHouse2_FishingMonsInfoDay = {20, sLavenderTownHouse2_FishingMonsDay};
// シオンタウン フレンドリィショップ
static const struct WildPokemon sLavenderTownMart_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sLavenderTownMart_LandMonsInfoDay = {20, sLavenderTownMart_LandMonsDay};
static const struct WildPokemon sLavenderTownMart_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sLavenderTownMart_WaterMonsInfoDay = {20, sLavenderTownMart_WaterMonsDay};
static const struct WildPokemon sLavenderTownMart_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sLavenderTownMart_FishingMonsInfoDay = {20, sLavenderTownMart_FishingMonsDay};
// クチバシティ 民家1
static const struct WildPokemon sVermilionCityHouse1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCityHouse1_LandMonsInfoDay = {20, sVermilionCityHouse1_LandMonsDay};
static const struct WildPokemon sVermilionCityHouse1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sVermilionCityHouse1_WaterMonsInfoDay = {20, sVermilionCityHouse1_WaterMonsDay};
static const struct WildPokemon sVermilionCityHouse1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCityHouse1_FishingMonsInfoDay = {20, sVermilionCityHouse1_FishingMonsDay};
// クチバシティ ポケモンセンター 1F
static const struct WildPokemon sVermilionCityPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCityPokemonCenter1F_LandMonsInfoDay = {20, sVermilionCityPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sVermilionCityPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sVermilionCityPokemonCenter1F_WaterMonsInfoDay = {20, sVermilionCityPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sVermilionCityPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCityPokemonCenter1F_FishingMonsInfoDay = {20, sVermilionCityPokemonCenter1F_FishingMonsDay};
// クチバシティ ポケモンセンター 2F
static const struct WildPokemon sVermilionCityPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCityPokemonCenter2F_LandMonsInfoDay = {20, sVermilionCityPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sVermilionCityPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sVermilionCityPokemonCenter2F_WaterMonsInfoDay = {20, sVermilionCityPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sVermilionCityPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCityPokemonCenter2F_FishingMonsInfoDay = {20, sVermilionCityPokemonCenter2F_FishingMonsDay};
// ポケモンだいすきクラブ
static const struct WildPokemon sVermilionCityPokemonFanClub_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCityPokemonFanClub_LandMonsInfoDay = {20, sVermilionCityPokemonFanClub_LandMonsDay};
static const struct WildPokemon sVermilionCityPokemonFanClub_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sVermilionCityPokemonFanClub_WaterMonsInfoDay = {20, sVermilionCityPokemonFanClub_WaterMonsDay};
static const struct WildPokemon sVermilionCityPokemonFanClub_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCityPokemonFanClub_FishingMonsInfoDay = {20, sVermilionCityPokemonFanClub_FishingMonsDay};
// クチバシティ 民家2
static const struct WildPokemon sVermilionCityHouse2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCityHouse2_LandMonsInfoDay = {20, sVermilionCityHouse2_LandMonsDay};
static const struct WildPokemon sVermilionCityHouse2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sVermilionCityHouse2_WaterMonsInfoDay = {20, sVermilionCityHouse2_WaterMonsDay};
static const struct WildPokemon sVermilionCityHouse2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCityHouse2_FishingMonsInfoDay = {20, sVermilionCityHouse2_FishingMonsDay};
// クチバシティ フレンドリィショップ
static const struct WildPokemon sVermilionCityMart_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCityMart_LandMonsInfoDay = {20, sVermilionCityMart_LandMonsDay};
static const struct WildPokemon sVermilionCityMart_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sVermilionCityMart_WaterMonsInfoDay = {20, sVermilionCityMart_WaterMonsDay};
static const struct WildPokemon sVermilionCityMart_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCityMart_FishingMonsInfoDay = {20, sVermilionCityMart_FishingMonsDay};
// クチバシティ ジム
static const struct WildPokemon sVermilionCityGym_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCityGym_LandMonsInfoDay = {20, sVermilionCityGym_LandMonsDay};
static const struct WildPokemon sVermilionCityGym_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sVermilionCityGym_WaterMonsInfoDay = {20, sVermilionCityGym_WaterMonsDay};
static const struct WildPokemon sVermilionCityGym_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCityGym_FishingMonsInfoDay = {20, sVermilionCityGym_FishingMonsDay};
// クチバシティ 民家3
static const struct WildPokemon sVermilionCityHouse3_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCityHouse3_LandMonsInfoDay = {20, sVermilionCityHouse3_LandMonsDay};
static const struct WildPokemon sVermilionCityHouse3_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sVermilionCityHouse3_WaterMonsInfoDay = {20, sVermilionCityHouse3_WaterMonsDay};
static const struct WildPokemon sVermilionCityHouse3_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sVermilionCityHouse3_FishingMonsInfoDay = {20, sVermilionCityHouse3_FishingMonsDay};
// タマムシデパート 1F
static const struct WildPokemon sCeladonCityDepartmentStore1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStore1F_LandMonsInfoDay = {20, sCeladonCityDepartmentStore1F_LandMonsDay};
static const struct WildPokemon sCeladonCityDepartmentStore1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStore1F_WaterMonsInfoDay = {20, sCeladonCityDepartmentStore1F_WaterMonsDay};
static const struct WildPokemon sCeladonCityDepartmentStore1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStore1F_FishingMonsInfoDay = {20, sCeladonCityDepartmentStore1F_FishingMonsDay};
// タマムシデパート 2F
static const struct WildPokemon sCeladonCityDepartmentStore2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStore2F_LandMonsInfoDay = {20, sCeladonCityDepartmentStore2F_LandMonsDay};
static const struct WildPokemon sCeladonCityDepartmentStore2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStore2F_WaterMonsInfoDay = {20, sCeladonCityDepartmentStore2F_WaterMonsDay};
static const struct WildPokemon sCeladonCityDepartmentStore2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStore2F_FishingMonsInfoDay = {20, sCeladonCityDepartmentStore2F_FishingMonsDay};
// タマムシデパート 3F
static const struct WildPokemon sCeladonCityDepartmentStore3F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStore3F_LandMonsInfoDay = {20, sCeladonCityDepartmentStore3F_LandMonsDay};
static const struct WildPokemon sCeladonCityDepartmentStore3F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStore3F_WaterMonsInfoDay = {20, sCeladonCityDepartmentStore3F_WaterMonsDay};
static const struct WildPokemon sCeladonCityDepartmentStore3F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStore3F_FishingMonsInfoDay = {20, sCeladonCityDepartmentStore3F_FishingMonsDay};
// タマムシデパート 4F
static const struct WildPokemon sCeladonCityDepartmentStore4F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStore4F_LandMonsInfoDay = {20, sCeladonCityDepartmentStore4F_LandMonsDay};
static const struct WildPokemon sCeladonCityDepartmentStore4F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStore4F_WaterMonsInfoDay = {20, sCeladonCityDepartmentStore4F_WaterMonsDay};
static const struct WildPokemon sCeladonCityDepartmentStore4F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStore4F_FishingMonsInfoDay = {20, sCeladonCityDepartmentStore4F_FishingMonsDay};
// タマムシデパート 5F
static const struct WildPokemon sCeladonCityDepartmentStore5F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStore5F_LandMonsInfoDay = {20, sCeladonCityDepartmentStore5F_LandMonsDay};
static const struct WildPokemon sCeladonCityDepartmentStore5F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStore5F_WaterMonsInfoDay = {20, sCeladonCityDepartmentStore5F_WaterMonsDay};
static const struct WildPokemon sCeladonCityDepartmentStore5F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStore5F_FishingMonsInfoDay = {20, sCeladonCityDepartmentStore5F_FishingMonsDay};
// タマムシデパート やね
static const struct WildPokemon sCeladonCityDepartmentStoreRoof_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStoreRoof_LandMonsInfoDay = {20, sCeladonCityDepartmentStoreRoof_LandMonsDay};
static const struct WildPokemon sCeladonCityDepartmentStoreRoof_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStoreRoof_WaterMonsInfoDay = {20, sCeladonCityDepartmentStoreRoof_WaterMonsDay};
static const struct WildPokemon sCeladonCityDepartmentStoreRoof_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStoreRoof_FishingMonsInfoDay = {20, sCeladonCityDepartmentStoreRoof_FishingMonsDay};
// タマムシデパート エレベーター
static const struct WildPokemon sCeladonCityDepartmentStoreElevator_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStoreElevator_LandMonsInfoDay = {20, sCeladonCityDepartmentStoreElevator_LandMonsDay};
static const struct WildPokemon sCeladonCityDepartmentStoreElevator_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStoreElevator_WaterMonsInfoDay = {20, sCeladonCityDepartmentStoreElevator_WaterMonsDay};
static const struct WildPokemon sCeladonCityDepartmentStoreElevator_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityDepartmentStoreElevator_FishingMonsInfoDay = {20, sCeladonCityDepartmentStoreElevator_FishingMonsDay};
// タマムシマンション 1F
static const struct WildPokemon sCeladonCityCondominiums1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityCondominiums1F_LandMonsInfoDay = {20, sCeladonCityCondominiums1F_LandMonsDay};
static const struct WildPokemon sCeladonCityCondominiums1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityCondominiums1F_WaterMonsInfoDay = {20, sCeladonCityCondominiums1F_WaterMonsDay};
static const struct WildPokemon sCeladonCityCondominiums1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityCondominiums1F_FishingMonsInfoDay = {20, sCeladonCityCondominiums1F_FishingMonsDay};
// タマムシマンション 2F
static const struct WildPokemon sCeladonCityCondominiums2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityCondominiums2F_LandMonsInfoDay = {20, sCeladonCityCondominiums2F_LandMonsDay};
static const struct WildPokemon sCeladonCityCondominiums2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityCondominiums2F_WaterMonsInfoDay = {20, sCeladonCityCondominiums2F_WaterMonsDay};
static const struct WildPokemon sCeladonCityCondominiums2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityCondominiums2F_FishingMonsInfoDay = {20, sCeladonCityCondominiums2F_FishingMonsDay};
// タマムシマンション 3F
static const struct WildPokemon sCeladonCityCondominiums3F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityCondominiums3F_LandMonsInfoDay = {20, sCeladonCityCondominiums3F_LandMonsDay};
static const struct WildPokemon sCeladonCityCondominiums3F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityCondominiums3F_WaterMonsInfoDay = {20, sCeladonCityCondominiums3F_WaterMonsDay};
static const struct WildPokemon sCeladonCityCondominiums3F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityCondominiums3F_FishingMonsInfoDay = {20, sCeladonCityCondominiums3F_FishingMonsDay};
// タマムシマンション やね
static const struct WildPokemon sCeladonCityCondominiumsRoof_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityCondominiumsRoof_LandMonsInfoDay = {20, sCeladonCityCondominiumsRoof_LandMonsDay};
static const struct WildPokemon sCeladonCityCondominiumsRoof_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityCondominiumsRoof_WaterMonsInfoDay = {20, sCeladonCityCondominiumsRoof_WaterMonsDay};
static const struct WildPokemon sCeladonCityCondominiumsRoof_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityCondominiumsRoof_FishingMonsInfoDay = {20, sCeladonCityCondominiumsRoof_FishingMonsDay};
// タマムシマンション やねうら
static const struct WildPokemon sCeladonCityCondominiumsRoofRoom_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityCondominiumsRoofRoom_LandMonsInfoDay = {20, sCeladonCityCondominiumsRoofRoom_LandMonsDay};
static const struct WildPokemon sCeladonCityCondominiumsRoofRoom_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityCondominiumsRoofRoom_WaterMonsInfoDay = {20, sCeladonCityCondominiumsRoofRoom_WaterMonsDay};
static const struct WildPokemon sCeladonCityCondominiumsRoofRoom_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityCondominiumsRoofRoom_FishingMonsInfoDay = {20, sCeladonCityCondominiumsRoofRoom_FishingMonsDay};
// タマムシシティ ポケモンセンター 1F
static const struct WildPokemon sCeladonCityPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityPokemonCenter1F_LandMonsInfoDay = {20, sCeladonCityPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sCeladonCityPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityPokemonCenter1F_WaterMonsInfoDay = {20, sCeladonCityPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sCeladonCityPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityPokemonCenter1F_FishingMonsInfoDay = {20, sCeladonCityPokemonCenter1F_FishingMonsDay};
// タマムシシティ ポケモンセンター 2F
static const struct WildPokemon sCeladonCityPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityPokemonCenter2F_LandMonsInfoDay = {20, sCeladonCityPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sCeladonCityPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityPokemonCenter2F_WaterMonsInfoDay = {20, sCeladonCityPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sCeladonCityPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityPokemonCenter2F_FishingMonsInfoDay = {20, sCeladonCityPokemonCenter2F_FishingMonsDay};
// ゲームコーナー
static const struct WildPokemon sCeladonCityGameCorner_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityGameCorner_LandMonsInfoDay = {20, sCeladonCityGameCorner_LandMonsDay};
static const struct WildPokemon sCeladonCityGameCorner_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityGameCorner_WaterMonsInfoDay = {20, sCeladonCityGameCorner_WaterMonsDay};
static const struct WildPokemon sCeladonCityGameCorner_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityGameCorner_FishingMonsInfoDay = {20, sCeladonCityGameCorner_FishingMonsDay};
// ゲームコーナー けいひんこうかんじょ
static const struct WildPokemon sCeladonCityGameCornerPrizeRoom_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityGameCornerPrizeRoom_LandMonsInfoDay = {20, sCeladonCityGameCornerPrizeRoom_LandMonsDay};
static const struct WildPokemon sCeladonCityGameCornerPrizeRoom_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityGameCornerPrizeRoom_WaterMonsInfoDay = {20, sCeladonCityGameCornerPrizeRoom_WaterMonsDay};
static const struct WildPokemon sCeladonCityGameCornerPrizeRoom_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityGameCornerPrizeRoom_FishingMonsInfoDay = {20, sCeladonCityGameCornerPrizeRoom_FishingMonsDay};
// タマムシシティ ジム
static const struct WildPokemon sCeladonCityGym_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityGym_LandMonsInfoDay = {20, sCeladonCityGym_LandMonsDay};
static const struct WildPokemon sCeladonCityGym_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityGym_WaterMonsInfoDay = {20, sCeladonCityGym_WaterMonsDay};
static const struct WildPokemon sCeladonCityGym_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityGym_FishingMonsInfoDay = {20, sCeladonCityGym_FishingMonsDay};
// レストラン
static const struct WildPokemon sCeladonCityRestaurant_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityRestaurant_LandMonsInfoDay = {20, sCeladonCityRestaurant_LandMonsDay};
static const struct WildPokemon sCeladonCityRestaurant_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityRestaurant_WaterMonsInfoDay = {20, sCeladonCityRestaurant_WaterMonsDay};
static const struct WildPokemon sCeladonCityRestaurant_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityRestaurant_FishingMonsInfoDay = {20, sCeladonCityRestaurant_FishingMonsDay};
// タマムシシティ 民家1
static const struct WildPokemon sCeladonCityHouse1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityHouse1_LandMonsInfoDay = {20, sCeladonCityHouse1_LandMonsDay};
static const struct WildPokemon sCeladonCityHouse1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityHouse1_WaterMonsInfoDay = {20, sCeladonCityHouse1_WaterMonsDay};
static const struct WildPokemon sCeladonCityHouse1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityHouse1_FishingMonsInfoDay = {20, sCeladonCityHouse1_FishingMonsDay};
// タマムシシティ ホテル
static const struct WildPokemon sCeladonCityHotel_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityHotel_LandMonsInfoDay = {20, sCeladonCityHotel_LandMonsDay};
static const struct WildPokemon sCeladonCityHotel_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCeladonCityHotel_WaterMonsInfoDay = {20, sCeladonCityHotel_WaterMonsDay};
static const struct WildPokemon sCeladonCityHotel_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCeladonCityHotel_FishingMonsInfoDay = {20, sCeladonCityHotel_FishingMonsDay};
// サファリゾーン いりぐち
static const struct WildPokemon sFuchsiaCitySafariZoneEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCitySafariZoneEntrance_LandMonsInfoDay = {20, sFuchsiaCitySafariZoneEntrance_LandMonsDay};
static const struct WildPokemon sFuchsiaCitySafariZoneEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFuchsiaCitySafariZoneEntrance_WaterMonsInfoDay = {20, sFuchsiaCitySafariZoneEntrance_WaterMonsDay};
static const struct WildPokemon sFuchsiaCitySafariZoneEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCitySafariZoneEntrance_FishingMonsInfoDay = {20, sFuchsiaCitySafariZoneEntrance_FishingMonsDay};
// セキチクシティ フレンドリィショップ
static const struct WildPokemon sFuchsiaCityMart_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityMart_LandMonsInfoDay = {20, sFuchsiaCityMart_LandMonsDay};
static const struct WildPokemon sFuchsiaCityMart_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFuchsiaCityMart_WaterMonsInfoDay = {20, sFuchsiaCityMart_WaterMonsDay};
static const struct WildPokemon sFuchsiaCityMart_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityMart_FishingMonsInfoDay = {20, sFuchsiaCityMart_FishingMonsDay};
// セキチクシティ どうぶつえん
static const struct WildPokemon sFuchsiaCityZooBuilding_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityZooBuilding_LandMonsInfoDay = {20, sFuchsiaCityZooBuilding_LandMonsDay};
static const struct WildPokemon sFuchsiaCityZooBuilding_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFuchsiaCityZooBuilding_WaterMonsInfoDay = {20, sFuchsiaCityZooBuilding_WaterMonsDay};
static const struct WildPokemon sFuchsiaCityZooBuilding_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityZooBuilding_FishingMonsInfoDay = {20, sFuchsiaCityZooBuilding_FishingMonsDay};
// セキチクシティ ジム
static const struct WildPokemon sFuchsiaCityGym_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityGym_LandMonsInfoDay = {20, sFuchsiaCityGym_LandMonsDay};
static const struct WildPokemon sFuchsiaCityGym_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFuchsiaCityGym_WaterMonsInfoDay = {20, sFuchsiaCityGym_WaterMonsDay};
static const struct WildPokemon sFuchsiaCityGym_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityGym_FishingMonsInfoDay = {20, sFuchsiaCityGym_FishingMonsDay};
// セキチクシティ 民家1
static const struct WildPokemon sFuchsiaCityHouse1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityHouse1_LandMonsInfoDay = {20, sFuchsiaCityHouse1_LandMonsDay};
static const struct WildPokemon sFuchsiaCityHouse1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFuchsiaCityHouse1_WaterMonsInfoDay = {20, sFuchsiaCityHouse1_WaterMonsDay};
static const struct WildPokemon sFuchsiaCityHouse1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityHouse1_FishingMonsInfoDay = {20, sFuchsiaCityHouse1_FishingMonsDay};
// セキチクシティ ポケモンセンター 1F
static const struct WildPokemon sFuchsiaCityPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityPokemonCenter1F_LandMonsInfoDay = {20, sFuchsiaCityPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sFuchsiaCityPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFuchsiaCityPokemonCenter1F_WaterMonsInfoDay = {20, sFuchsiaCityPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sFuchsiaCityPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityPokemonCenter1F_FishingMonsInfoDay = {20, sFuchsiaCityPokemonCenter1F_FishingMonsDay};
// セキチクシティ ポケモンセンター 2F
static const struct WildPokemon sFuchsiaCityPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityPokemonCenter2F_LandMonsInfoDay = {20, sFuchsiaCityPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sFuchsiaCityPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFuchsiaCityPokemonCenter2F_WaterMonsInfoDay = {20, sFuchsiaCityPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sFuchsiaCityPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityPokemonCenter2F_FishingMonsInfoDay = {20, sFuchsiaCityPokemonCenter2F_FishingMonsDay};
// セキチクシティ たてもの1
static const struct WildPokemon sFuchsiaCityBuilding1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityBuilding1_LandMonsInfoDay = {20, sFuchsiaCityBuilding1_LandMonsDay};
static const struct WildPokemon sFuchsiaCityBuilding1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFuchsiaCityBuilding1_WaterMonsInfoDay = {20, sFuchsiaCityBuilding1_WaterMonsDay};
static const struct WildPokemon sFuchsiaCityBuilding1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityBuilding1_FishingMonsInfoDay = {20, sFuchsiaCityBuilding1_FishingMonsDay};
// セキチクシティ 民家2
static const struct WildPokemon sFuchsiaCityHouse2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityHouse2_LandMonsInfoDay = {20, sFuchsiaCityHouse2_LandMonsDay};
static const struct WildPokemon sFuchsiaCityHouse2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFuchsiaCityHouse2_WaterMonsInfoDay = {20, sFuchsiaCityHouse2_WaterMonsDay};
static const struct WildPokemon sFuchsiaCityHouse2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityHouse2_FishingMonsInfoDay = {20, sFuchsiaCityHouse2_FishingMonsDay};
// セキチクシティ 民家3
static const struct WildPokemon sFuchsiaCityHouse3_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityHouse3_LandMonsInfoDay = {20, sFuchsiaCityHouse3_LandMonsDay};
static const struct WildPokemon sFuchsiaCityHouse3_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFuchsiaCityHouse3_WaterMonsInfoDay = {20, sFuchsiaCityHouse3_WaterMonsDay};
static const struct WildPokemon sFuchsiaCityHouse3_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFuchsiaCityHouse3_FishingMonsInfoDay = {20, sFuchsiaCityHouse3_FishingMonsDay};
// グレンじま ジム
static const struct WildPokemon sCinnabarIslandGym_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIslandGym_LandMonsInfoDay = {20, sCinnabarIslandGym_LandMonsDay};
static const struct WildPokemon sCinnabarIslandGym_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCinnabarIslandGym_WaterMonsInfoDay = {20, sCinnabarIslandGym_WaterMonsDay};
static const struct WildPokemon sCinnabarIslandGym_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIslandGym_FishingMonsInfoDay = {20, sCinnabarIslandGym_FishingMonsDay};
// ポケモンけんきゅうじょ いりぐち
static const struct WildPokemon sCinnabarIslandPokemonLabEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonLabEntrance_LandMonsInfoDay = {20, sCinnabarIslandPokemonLabEntrance_LandMonsDay};
static const struct WildPokemon sCinnabarIslandPokemonLabEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonLabEntrance_WaterMonsInfoDay = {20, sCinnabarIslandPokemonLabEntrance_WaterMonsDay};
static const struct WildPokemon sCinnabarIslandPokemonLabEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonLabEntrance_FishingMonsInfoDay = {20, sCinnabarIslandPokemonLabEntrance_FishingMonsDay};
// ポケモンけんきゅうじょ ロビー
static const struct WildPokemon sCinnabarIslandPokemonLabLounge_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonLabLounge_LandMonsInfoDay = {20, sCinnabarIslandPokemonLabLounge_LandMonsDay};
static const struct WildPokemon sCinnabarIslandPokemonLabLounge_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonLabLounge_WaterMonsInfoDay = {20, sCinnabarIslandPokemonLabLounge_WaterMonsDay};
static const struct WildPokemon sCinnabarIslandPokemonLabLounge_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonLabLounge_FishingMonsInfoDay = {20, sCinnabarIslandPokemonLabLounge_FishingMonsDay};
// ポケモンけんきゅうじょ けんきゅうしつ
static const struct WildPokemon sCinnabarIslandPokemonLabResearchRoom_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonLabResearchRoom_LandMonsInfoDay = {20, sCinnabarIslandPokemonLabResearchRoom_LandMonsDay};
static const struct WildPokemon sCinnabarIslandPokemonLabResearchRoom_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonLabResearchRoom_WaterMonsInfoDay = {20, sCinnabarIslandPokemonLabResearchRoom_WaterMonsDay};
static const struct WildPokemon sCinnabarIslandPokemonLabResearchRoom_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonLabResearchRoom_FishingMonsInfoDay = {20, sCinnabarIslandPokemonLabResearchRoom_FishingMonsDay};
// ポケモンけんきゅうじょ じっけんしつ
static const struct WildPokemon sCinnabarIslandPokemonLabExperimentRoom_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonLabExperimentRoom_LandMonsInfoDay = {20, sCinnabarIslandPokemonLabExperimentRoom_LandMonsDay};
static const struct WildPokemon sCinnabarIslandPokemonLabExperimentRoom_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonLabExperimentRoom_WaterMonsInfoDay = {20, sCinnabarIslandPokemonLabExperimentRoom_WaterMonsDay};
static const struct WildPokemon sCinnabarIslandPokemonLabExperimentRoom_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonLabExperimentRoom_FishingMonsInfoDay = {20, sCinnabarIslandPokemonLabExperimentRoom_FishingMonsDay};
// グレンじま ポケモンセンター 1F
static const struct WildPokemon sCinnabarIslandPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonCenter1F_LandMonsInfoDay = {20, sCinnabarIslandPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sCinnabarIslandPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonCenter1F_WaterMonsInfoDay = {20, sCinnabarIslandPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sCinnabarIslandPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonCenter1F_FishingMonsInfoDay = {20, sCinnabarIslandPokemonCenter1F_FishingMonsDay};
// グレンじま ポケモンセンター 2F
static const struct WildPokemon sCinnabarIslandPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonCenter2F_LandMonsInfoDay = {20, sCinnabarIslandPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sCinnabarIslandPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonCenter2F_WaterMonsInfoDay = {20, sCinnabarIslandPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sCinnabarIslandPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIslandPokemonCenter2F_FishingMonsInfoDay = {20, sCinnabarIslandPokemonCenter2F_FishingMonsDay};
// グレンじま フレンドリィショップ
static const struct WildPokemon sCinnabarIslandMart_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIslandMart_LandMonsInfoDay = {20, sCinnabarIslandMart_LandMonsDay};
static const struct WildPokemon sCinnabarIslandMart_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sCinnabarIslandMart_WaterMonsInfoDay = {20, sCinnabarIslandMart_WaterMonsDay};
static const struct WildPokemon sCinnabarIslandMart_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sCinnabarIslandMart_FishingMonsInfoDay = {20, sCinnabarIslandMart_FishingMonsDay};
// セキエイこうげん ポケモンセンター 1F
static const struct WildPokemon sIndigoPlateauPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sIndigoPlateauPokemonCenter1F_LandMonsInfoDay = {20, sIndigoPlateauPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sIndigoPlateauPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sIndigoPlateauPokemonCenter1F_WaterMonsInfoDay = {20, sIndigoPlateauPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sIndigoPlateauPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sIndigoPlateauPokemonCenter1F_FishingMonsInfoDay = {20, sIndigoPlateauPokemonCenter1F_FishingMonsDay};
// セキエイこうげん ポケモンセンター 2F
static const struct WildPokemon sIndigoPlateauPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sIndigoPlateauPokemonCenter2F_LandMonsInfoDay = {20, sIndigoPlateauPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sIndigoPlateauPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sIndigoPlateauPokemonCenter2F_WaterMonsInfoDay = {20, sIndigoPlateauPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sIndigoPlateauPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sIndigoPlateauPokemonCenter2F_FishingMonsInfoDay = {20, sIndigoPlateauPokemonCenter2F_FishingMonsDay};
// ヤマブキシティ 民家1 1F
static const struct WildPokemon sSaffronCityHouse11F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityHouse11F_LandMonsInfoDay = {20, sSaffronCityHouse11F_LandMonsDay};
static const struct WildPokemon sSaffronCityHouse11F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSaffronCityHouse11F_WaterMonsInfoDay = {20, sSaffronCityHouse11F_WaterMonsDay};
static const struct WildPokemon sSaffronCityHouse11F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityHouse11F_FishingMonsInfoDay = {20, sSaffronCityHouse11F_FishingMonsDay};
// ヤマブキシティ 民家1 2F
static const struct WildPokemon sSaffronCityHouse12F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityHouse12F_LandMonsInfoDay = {20, sSaffronCityHouse12F_LandMonsDay};
static const struct WildPokemon sSaffronCityHouse12F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSaffronCityHouse12F_WaterMonsInfoDay = {20, sSaffronCityHouse12F_WaterMonsDay};
static const struct WildPokemon sSaffronCityHouse12F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityHouse12F_FishingMonsInfoDay = {20, sSaffronCityHouse12F_FishingMonsDay};
// ヤマブキシティ かくとうどうじょう
static const struct WildPokemon sSaffronCityDojo_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityDojo_LandMonsInfoDay = {20, sSaffronCityDojo_LandMonsDay};
static const struct WildPokemon sSaffronCityDojo_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSaffronCityDojo_WaterMonsInfoDay = {20, sSaffronCityDojo_WaterMonsDay};
static const struct WildPokemon sSaffronCityDojo_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityDojo_FishingMonsInfoDay = {20, sSaffronCityDojo_FishingMonsDay};
// ヤマブキシティ ジム
static const struct WildPokemon sSaffronCityGym_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityGym_LandMonsInfoDay = {20, sSaffronCityGym_LandMonsDay};
static const struct WildPokemon sSaffronCityGym_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSaffronCityGym_WaterMonsInfoDay = {20, sSaffronCityGym_WaterMonsDay};
static const struct WildPokemon sSaffronCityGym_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityGym_FishingMonsInfoDay = {20, sSaffronCityGym_FishingMonsDay};
// ヤマブキシティ 民家2
static const struct WildPokemon sSaffronCityHouse2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityHouse2_LandMonsInfoDay = {20, sSaffronCityHouse2_LandMonsDay};
static const struct WildPokemon sSaffronCityHouse2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSaffronCityHouse2_WaterMonsInfoDay = {20, sSaffronCityHouse2_WaterMonsDay};
static const struct WildPokemon sSaffronCityHouse2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityHouse2_FishingMonsInfoDay = {20, sSaffronCityHouse2_FishingMonsDay};
// ヤマブキシティ フレンドリィショップ
static const struct WildPokemon sSaffronCityMart_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityMart_LandMonsInfoDay = {20, sSaffronCityMart_LandMonsDay};
static const struct WildPokemon sSaffronCityMart_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSaffronCityMart_WaterMonsInfoDay = {20, sSaffronCityMart_WaterMonsDay};
static const struct WildPokemon sSaffronCityMart_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityMart_FishingMonsInfoDay = {20, sSaffronCityMart_FishingMonsDay};
// ヤマブキシティ ポケモンセンター 1F
static const struct WildPokemon sSaffronCityPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityPokemonCenter1F_LandMonsInfoDay = {20, sSaffronCityPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sSaffronCityPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSaffronCityPokemonCenter1F_WaterMonsInfoDay = {20, sSaffronCityPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sSaffronCityPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityPokemonCenter1F_FishingMonsInfoDay = {20, sSaffronCityPokemonCenter1F_FishingMonsDay};
// ヤマブキシティ ポケモンセンター 2F
static const struct WildPokemon sSaffronCityPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityPokemonCenter2F_LandMonsInfoDay = {20, sSaffronCityPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sSaffronCityPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSaffronCityPokemonCenter2F_WaterMonsInfoDay = {20, sSaffronCityPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sSaffronCityPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityPokemonCenter2F_FishingMonsInfoDay = {20, sSaffronCityPokemonCenter2F_FishingMonsDay};
// ヤマブキシティ 民家3
static const struct WildPokemon sSaffronCityHouse3_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityHouse3_LandMonsInfoDay = {20, sSaffronCityHouse3_LandMonsDay};
static const struct WildPokemon sSaffronCityHouse3_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSaffronCityHouse3_WaterMonsInfoDay = {20, sSaffronCityHouse3_WaterMonsDay};
static const struct WildPokemon sSaffronCityHouse3_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityHouse3_FishingMonsInfoDay = {20, sSaffronCityHouse3_FishingMonsDay};
// トレーナーだいすきクラブ
static const struct WildPokemon sSaffronCityPokemonTrainerFanClub_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityPokemonTrainerFanClub_LandMonsInfoDay = {20, sSaffronCityPokemonTrainerFanClub_LandMonsDay};
static const struct WildPokemon sSaffronCityPokemonTrainerFanClub_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSaffronCityPokemonTrainerFanClub_WaterMonsInfoDay = {20, sSaffronCityPokemonTrainerFanClub_WaterMonsDay};
static const struct WildPokemon sSaffronCityPokemonTrainerFanClub_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSaffronCityPokemonTrainerFanClub_FishingMonsInfoDay = {20, sSaffronCityPokemonTrainerFanClub_FishingMonsDay};
// 2ばんどうろ トキワのもり みなみゲート
static const struct WildPokemon sRoute2ViridianForestSouthEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute2ViridianForestSouthEntrance_LandMonsInfoDay = {20, sRoute2ViridianForestSouthEntrance_LandMonsDay};
static const struct WildPokemon sRoute2ViridianForestSouthEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute2ViridianForestSouthEntrance_WaterMonsInfoDay = {20, sRoute2ViridianForestSouthEntrance_WaterMonsDay};
static const struct WildPokemon sRoute2ViridianForestSouthEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute2ViridianForestSouthEntrance_FishingMonsInfoDay = {20, sRoute2ViridianForestSouthEntrance_FishingMonsDay};
// 2ばんどうろ 民家
static const struct WildPokemon sRoute2House_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute2House_LandMonsInfoDay = {20, sRoute2House_LandMonsDay};
static const struct WildPokemon sRoute2House_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute2House_WaterMonsInfoDay = {20, sRoute2House_WaterMonsDay};
static const struct WildPokemon sRoute2House_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute2House_FishingMonsInfoDay = {20, sRoute2House_FishingMonsDay};
// 2ばんどうろ ひがしゲート
static const struct WildPokemon sRoute2EastBuilding_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute2EastBuilding_LandMonsInfoDay = {20, sRoute2EastBuilding_LandMonsDay};
static const struct WildPokemon sRoute2EastBuilding_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute2EastBuilding_WaterMonsInfoDay = {20, sRoute2EastBuilding_WaterMonsDay};
static const struct WildPokemon sRoute2EastBuilding_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute2EastBuilding_FishingMonsInfoDay = {20, sRoute2EastBuilding_FishingMonsDay};
// 2ばんどうろ トキワのもり きたゲート
static const struct WildPokemon sRoute2ViridianForestNorthEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute2ViridianForestNorthEntrance_LandMonsInfoDay = {20, sRoute2ViridianForestNorthEntrance_LandMonsDay};
static const struct WildPokemon sRoute2ViridianForestNorthEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute2ViridianForestNorthEntrance_WaterMonsInfoDay = {20, sRoute2ViridianForestNorthEntrance_WaterMonsDay};
static const struct WildPokemon sRoute2ViridianForestNorthEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute2ViridianForestNorthEntrance_FishingMonsInfoDay = {20, sRoute2ViridianForestNorthEntrance_FishingMonsDay};
// 4ばんどうろ ポケモンセンター 1F
static const struct WildPokemon sRoute4PokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute4PokemonCenter1F_LandMonsInfoDay = {20, sRoute4PokemonCenter1F_LandMonsDay};
static const struct WildPokemon sRoute4PokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute4PokemonCenter1F_WaterMonsInfoDay = {20, sRoute4PokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sRoute4PokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute4PokemonCenter1F_FishingMonsInfoDay = {20, sRoute4PokemonCenter1F_FishingMonsDay};
// 4ばんどうろ ポケモンセンター 2F
static const struct WildPokemon sRoute4PokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute4PokemonCenter2F_LandMonsInfoDay = {20, sRoute4PokemonCenter2F_LandMonsDay};
static const struct WildPokemon sRoute4PokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute4PokemonCenter2F_WaterMonsInfoDay = {20, sRoute4PokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sRoute4PokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute4PokemonCenter2F_FishingMonsInfoDay = {20, sRoute4PokemonCenter2F_FishingMonsDay};
// 5ばんどうろ そだてや
static const struct WildPokemon sRoute5PokemonDayCare_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute5PokemonDayCare_LandMonsInfoDay = {20, sRoute5PokemonDayCare_LandMonsDay};
static const struct WildPokemon sRoute5PokemonDayCare_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute5PokemonDayCare_WaterMonsInfoDay = {20, sRoute5PokemonDayCare_WaterMonsDay};
static const struct WildPokemon sRoute5PokemonDayCare_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute5PokemonDayCare_FishingMonsInfoDay = {20, sRoute5PokemonDayCare_FishingMonsDay};
// 5ばんどうろ みなみゲート
static const struct WildPokemon sRoute5SouthEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute5SouthEntrance_LandMonsInfoDay = {20, sRoute5SouthEntrance_LandMonsDay};
static const struct WildPokemon sRoute5SouthEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute5SouthEntrance_WaterMonsInfoDay = {20, sRoute5SouthEntrance_WaterMonsDay};
static const struct WildPokemon sRoute5SouthEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute5SouthEntrance_FishingMonsInfoDay = {20, sRoute5SouthEntrance_FishingMonsDay};
// 6ばんどうろ きたゲート
static const struct WildPokemon sRoute6NorthEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute6NorthEntrance_LandMonsInfoDay = {20, sRoute6NorthEntrance_LandMonsDay};
static const struct WildPokemon sRoute6NorthEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute6NorthEntrance_WaterMonsInfoDay = {20, sRoute6NorthEntrance_WaterMonsDay};
static const struct WildPokemon sRoute6NorthEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute6NorthEntrance_FishingMonsInfoDay = {20, sRoute6NorthEntrance_FishingMonsDay};
// 7ばんどうろ ひがしゲート
static const struct WildPokemon sRoute7EastEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute7EastEntrance_LandMonsInfoDay = {20, sRoute7EastEntrance_LandMonsDay};
static const struct WildPokemon sRoute7EastEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute7EastEntrance_WaterMonsInfoDay = {20, sRoute7EastEntrance_WaterMonsDay};
static const struct WildPokemon sRoute7EastEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute7EastEntrance_FishingMonsInfoDay = {20, sRoute7EastEntrance_FishingMonsDay};
// 8ばんどうろ にしゲート
static const struct WildPokemon sRoute8WestEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute8WestEntrance_LandMonsInfoDay = {20, sRoute8WestEntrance_LandMonsDay};
static const struct WildPokemon sRoute8WestEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute8WestEntrance_WaterMonsInfoDay = {20, sRoute8WestEntrance_WaterMonsDay};
static const struct WildPokemon sRoute8WestEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute8WestEntrance_FishingMonsInfoDay = {20, sRoute8WestEntrance_FishingMonsDay};
// 10ばんどうろ ポケモンセンター 1F
static const struct WildPokemon sRoute10PokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute10PokemonCenter1F_LandMonsInfoDay = {20, sRoute10PokemonCenter1F_LandMonsDay};
static const struct WildPokemon sRoute10PokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute10PokemonCenter1F_WaterMonsInfoDay = {20, sRoute10PokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sRoute10PokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute10PokemonCenter1F_FishingMonsInfoDay = {20, sRoute10PokemonCenter1F_FishingMonsDay};
// 10ばんどうろ ポケモンセンター 2F
static const struct WildPokemon sRoute10PokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute10PokemonCenter2F_LandMonsInfoDay = {20, sRoute10PokemonCenter2F_LandMonsDay};
static const struct WildPokemon sRoute10PokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute10PokemonCenter2F_WaterMonsInfoDay = {20, sRoute10PokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sRoute10PokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute10PokemonCenter2F_FishingMonsInfoDay = {20, sRoute10PokemonCenter2F_FishingMonsDay};
// 11ばんどうろ ひがしゲート 1F
static const struct WildPokemon sRoute11EastEntrance1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute11EastEntrance1F_LandMonsInfoDay = {20, sRoute11EastEntrance1F_LandMonsDay};
static const struct WildPokemon sRoute11EastEntrance1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute11EastEntrance1F_WaterMonsInfoDay = {20, sRoute11EastEntrance1F_WaterMonsDay};
static const struct WildPokemon sRoute11EastEntrance1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute11EastEntrance1F_FishingMonsInfoDay = {20, sRoute11EastEntrance1F_FishingMonsDay};
// 11ばんどうろ ひがしゲート 2F
static const struct WildPokemon sRoute11EastEntrance2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute11EastEntrance2F_LandMonsInfoDay = {20, sRoute11EastEntrance2F_LandMonsDay};
static const struct WildPokemon sRoute11EastEntrance2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute11EastEntrance2F_WaterMonsInfoDay = {20, sRoute11EastEntrance2F_WaterMonsDay};
static const struct WildPokemon sRoute11EastEntrance2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute11EastEntrance2F_FishingMonsInfoDay = {20, sRoute11EastEntrance2F_FishingMonsDay};
// 12ばんどうろ きたゲート 1F
static const struct WildPokemon sRoute12NorthEntrance1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute12NorthEntrance1F_LandMonsInfoDay = {20, sRoute12NorthEntrance1F_LandMonsDay};
static const struct WildPokemon sRoute12NorthEntrance1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute12NorthEntrance1F_WaterMonsInfoDay = {20, sRoute12NorthEntrance1F_WaterMonsDay};
static const struct WildPokemon sRoute12NorthEntrance1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute12NorthEntrance1F_FishingMonsInfoDay = {20, sRoute12NorthEntrance1F_FishingMonsDay};
// 12ばんどうろ きたゲート 2F
static const struct WildPokemon sRoute12NorthEntrance2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute12NorthEntrance2F_LandMonsInfoDay = {20, sRoute12NorthEntrance2F_LandMonsDay};
static const struct WildPokemon sRoute12NorthEntrance2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute12NorthEntrance2F_WaterMonsInfoDay = {20, sRoute12NorthEntrance2F_WaterMonsDay};
static const struct WildPokemon sRoute12NorthEntrance2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute12NorthEntrance2F_FishingMonsInfoDay = {20, sRoute12NorthEntrance2F_FishingMonsDay};
// 12ばんどうろ つりおやじのいえ
static const struct WildPokemon sRoute12FishingHouse_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute12FishingHouse_LandMonsInfoDay = {20, sRoute12FishingHouse_LandMonsDay};
static const struct WildPokemon sRoute12FishingHouse_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute12FishingHouse_WaterMonsInfoDay = {20, sRoute12FishingHouse_WaterMonsDay};
static const struct WildPokemon sRoute12FishingHouse_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute12FishingHouse_FishingMonsInfoDay = {20, sRoute12FishingHouse_FishingMonsDay};
// 15ばんどうろ にしゲート 1F
static const struct WildPokemon sRoute15WestEntrance1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute15WestEntrance1F_LandMonsInfoDay = {20, sRoute15WestEntrance1F_LandMonsDay};
static const struct WildPokemon sRoute15WestEntrance1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute15WestEntrance1F_WaterMonsInfoDay = {20, sRoute15WestEntrance1F_WaterMonsDay};
static const struct WildPokemon sRoute15WestEntrance1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute15WestEntrance1F_FishingMonsInfoDay = {20, sRoute15WestEntrance1F_FishingMonsDay};
// 15ばんどうろ にしゲート 2F
static const struct WildPokemon sRoute15WestEntrance2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute15WestEntrance2F_LandMonsInfoDay = {20, sRoute15WestEntrance2F_LandMonsDay};
static const struct WildPokemon sRoute15WestEntrance2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute15WestEntrance2F_WaterMonsInfoDay = {20, sRoute15WestEntrance2F_WaterMonsDay};
static const struct WildPokemon sRoute15WestEntrance2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute15WestEntrance2F_FishingMonsInfoDay = {20, sRoute15WestEntrance2F_FishingMonsDay};
// 16ばんどうろ 民家
static const struct WildPokemon sRoute16House_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute16House_LandMonsInfoDay = {20, sRoute16House_LandMonsDay};
static const struct WildPokemon sRoute16House_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute16House_WaterMonsInfoDay = {20, sRoute16House_WaterMonsDay};
static const struct WildPokemon sRoute16House_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute16House_FishingMonsInfoDay = {20, sRoute16House_FishingMonsDay};
// 16ばんどうろ きたゲート 1F
static const struct WildPokemon sRoute16NorthEntrance1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute16NorthEntrance1F_LandMonsInfoDay = {20, sRoute16NorthEntrance1F_LandMonsDay};
static const struct WildPokemon sRoute16NorthEntrance1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute16NorthEntrance1F_WaterMonsInfoDay = {20, sRoute16NorthEntrance1F_WaterMonsDay};
static const struct WildPokemon sRoute16NorthEntrance1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute16NorthEntrance1F_FishingMonsInfoDay = {20, sRoute16NorthEntrance1F_FishingMonsDay};
// 16ばんどうろ きたゲート 2F
static const struct WildPokemon sRoute16NorthEntrance2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute16NorthEntrance2F_LandMonsInfoDay = {20, sRoute16NorthEntrance2F_LandMonsDay};
static const struct WildPokemon sRoute16NorthEntrance2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute16NorthEntrance2F_WaterMonsInfoDay = {20, sRoute16NorthEntrance2F_WaterMonsDay};
static const struct WildPokemon sRoute16NorthEntrance2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute16NorthEntrance2F_FishingMonsInfoDay = {20, sRoute16NorthEntrance2F_FishingMonsDay};
// 18ばんどうろ ひがしゲート 1F
static const struct WildPokemon sRoute18EastEntrance1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute18EastEntrance1F_LandMonsInfoDay = {20, sRoute18EastEntrance1F_LandMonsDay};
static const struct WildPokemon sRoute18EastEntrance1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute18EastEntrance1F_WaterMonsInfoDay = {20, sRoute18EastEntrance1F_WaterMonsDay};
static const struct WildPokemon sRoute18EastEntrance1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute18EastEntrance1F_FishingMonsInfoDay = {20, sRoute18EastEntrance1F_FishingMonsDay};
// 18ばんどうろ ひがしゲート 2F
static const struct WildPokemon sRoute18EastEntrance2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute18EastEntrance2F_LandMonsInfoDay = {20, sRoute18EastEntrance2F_LandMonsDay};
static const struct WildPokemon sRoute18EastEntrance2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute18EastEntrance2F_WaterMonsInfoDay = {20, sRoute18EastEntrance2F_WaterMonsDay};
static const struct WildPokemon sRoute18EastEntrance2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute18EastEntrance2F_FishingMonsInfoDay = {20, sRoute18EastEntrance2F_FishingMonsDay};
// 22ばんどうろ きたゲート
static const struct WildPokemon sRoute22NorthEntrance_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute22NorthEntrance_LandMonsInfoDay = {20, sRoute22NorthEntrance_LandMonsDay};
static const struct WildPokemon sRoute22NorthEntrance_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute22NorthEntrance_WaterMonsInfoDay = {20, sRoute22NorthEntrance_WaterMonsDay};
static const struct WildPokemon sRoute22NorthEntrance_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute22NorthEntrance_FishingMonsInfoDay = {20, sRoute22NorthEntrance_FishingMonsDay};
// みさきのこや（マサキのいえ）
static const struct WildPokemon sRoute25SeaCottage_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute25SeaCottage_LandMonsInfoDay = {20, sRoute25SeaCottage_LandMonsDay};
static const struct WildPokemon sRoute25SeaCottage_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sRoute25SeaCottage_WaterMonsInfoDay = {20, sRoute25SeaCottage_WaterMonsDay};
static const struct WildPokemon sRoute25SeaCottage_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute25SeaCottage_FishingMonsInfoDay = {20, sRoute25SeaCottage_FishingMonsDay};
// 7のしま 民家（へや1）
static const struct WildPokemon sSevenIslandHouseRoom1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandHouseRoom1_LandMonsInfoDay = {20, sSevenIslandHouseRoom1_LandMonsDay};
static const struct WildPokemon sSevenIslandHouseRoom1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandHouseRoom1_WaterMonsInfoDay = {20, sSevenIslandHouseRoom1_WaterMonsDay};
static const struct WildPokemon sSevenIslandHouseRoom1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandHouseRoom1_FishingMonsInfoDay = {20, sSevenIslandHouseRoom1_FishingMonsDay};
// 7のしま 民家（へや2）
static const struct WildPokemon sSevenIslandHouseRoom2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandHouseRoom2_LandMonsInfoDay = {20, sSevenIslandHouseRoom2_LandMonsDay};
static const struct WildPokemon sSevenIslandHouseRoom2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandHouseRoom2_WaterMonsInfoDay = {20, sSevenIslandHouseRoom2_WaterMonsDay};
static const struct WildPokemon sSevenIslandHouseRoom2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandHouseRoom2_FishingMonsInfoDay = {20, sSevenIslandHouseRoom2_FishingMonsDay};
// 7のしま フレンドリィショップ
static const struct WildPokemon sSevenIslandMart_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandMart_LandMonsInfoDay = {20, sSevenIslandMart_LandMonsDay};
static const struct WildPokemon sSevenIslandMart_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandMart_WaterMonsInfoDay = {20, sSevenIslandMart_WaterMonsDay};
static const struct WildPokemon sSevenIslandMart_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandMart_FishingMonsInfoDay = {20, sSevenIslandMart_FishingMonsDay};
// 7のしま ポケモンセンター 1F
static const struct WildPokemon sSevenIslandPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandPokemonCenter1F_LandMonsInfoDay = {20, sSevenIslandPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sSevenIslandPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandPokemonCenter1F_WaterMonsInfoDay = {20, sSevenIslandPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sSevenIslandPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandPokemonCenter1F_FishingMonsInfoDay = {20, sSevenIslandPokemonCenter1F_FishingMonsDay};
// 7のしま ポケモンセンター 2F
static const struct WildPokemon sSevenIslandPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandPokemonCenter2F_LandMonsInfoDay = {20, sSevenIslandPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sSevenIslandPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandPokemonCenter2F_WaterMonsInfoDay = {20, sSevenIslandPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sSevenIslandPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandPokemonCenter2F_FishingMonsInfoDay = {20, sSevenIslandPokemonCenter2F_FishingMonsDay};
// 7のしま ふねのりば
static const struct WildPokemon sSevenIslandHarbor_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandHarbor_LandMonsInfoDay = {20, sSevenIslandHarbor_LandMonsDay};
static const struct WildPokemon sSevenIslandHarbor_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandHarbor_WaterMonsInfoDay = {20, sSevenIslandHarbor_WaterMonsDay};
static const struct WildPokemon sSevenIslandHarbor_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandHarbor_FishingMonsInfoDay = {20, sSevenIslandHarbor_FishingMonsDay};
// 1のしま ポケモンセンター 1F
static const struct WildPokemon sOneIslandPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIslandPokemonCenter1F_LandMonsInfoDay = {20, sOneIslandPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sOneIslandPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sOneIslandPokemonCenter1F_WaterMonsInfoDay = {20, sOneIslandPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sOneIslandPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIslandPokemonCenter1F_FishingMonsInfoDay = {20, sOneIslandPokemonCenter1F_FishingMonsDay};
// 1のしま ポケモンセンター 2F
static const struct WildPokemon sOneIslandPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIslandPokemonCenter2F_LandMonsInfoDay = {20, sOneIslandPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sOneIslandPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sOneIslandPokemonCenter2F_WaterMonsInfoDay = {20, sOneIslandPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sOneIslandPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIslandPokemonCenter2F_FishingMonsInfoDay = {20, sOneIslandPokemonCenter2F_FishingMonsDay};
// 1のしま 民家1
static const struct WildPokemon sOneIslandHouse1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIslandHouse1_LandMonsInfoDay = {20, sOneIslandHouse1_LandMonsDay};
static const struct WildPokemon sOneIslandHouse1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sOneIslandHouse1_WaterMonsInfoDay = {20, sOneIslandHouse1_WaterMonsDay};
static const struct WildPokemon sOneIslandHouse1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIslandHouse1_FishingMonsInfoDay = {20, sOneIslandHouse1_FishingMonsDay};
// 1のしま 民家2
static const struct WildPokemon sOneIslandHouse2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIslandHouse2_LandMonsInfoDay = {20, sOneIslandHouse2_LandMonsDay};
static const struct WildPokemon sOneIslandHouse2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sOneIslandHouse2_WaterMonsInfoDay = {20, sOneIslandHouse2_WaterMonsDay};
static const struct WildPokemon sOneIslandHouse2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIslandHouse2_FishingMonsInfoDay = {20, sOneIslandHouse2_FishingMonsDay};
// 1のしま ふねのりば
static const struct WildPokemon sOneIslandHarbor_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIslandHarbor_LandMonsInfoDay = {20, sOneIslandHarbor_LandMonsDay};
static const struct WildPokemon sOneIslandHarbor_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sOneIslandHarbor_WaterMonsInfoDay = {20, sOneIslandHarbor_WaterMonsDay};
static const struct WildPokemon sOneIslandHarbor_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sOneIslandHarbor_FishingMonsInfoDay = {20, sOneIslandHarbor_FishingMonsDay};
// たのしいゲームコーナー
static const struct WildPokemon sTwoIslandJoyfulGameCorner_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sTwoIslandJoyfulGameCorner_LandMonsInfoDay = {20, sTwoIslandJoyfulGameCorner_LandMonsDay};
static const struct WildPokemon sTwoIslandJoyfulGameCorner_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sTwoIslandJoyfulGameCorner_WaterMonsInfoDay = {20, sTwoIslandJoyfulGameCorner_WaterMonsDay};
static const struct WildPokemon sTwoIslandJoyfulGameCorner_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sTwoIslandJoyfulGameCorner_FishingMonsInfoDay = {20, sTwoIslandJoyfulGameCorner_FishingMonsDay};
// 2のしま 民家
static const struct WildPokemon sTwoIslandHouse_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sTwoIslandHouse_LandMonsInfoDay = {20, sTwoIslandHouse_LandMonsDay};
static const struct WildPokemon sTwoIslandHouse_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sTwoIslandHouse_WaterMonsInfoDay = {20, sTwoIslandHouse_WaterMonsDay};
static const struct WildPokemon sTwoIslandHouse_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sTwoIslandHouse_FishingMonsInfoDay = {20, sTwoIslandHouse_FishingMonsDay};
// 2のしま ポケモンセンター 1F
static const struct WildPokemon sTwoIslandPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sTwoIslandPokemonCenter1F_LandMonsInfoDay = {20, sTwoIslandPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sTwoIslandPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sTwoIslandPokemonCenter1F_WaterMonsInfoDay = {20, sTwoIslandPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sTwoIslandPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sTwoIslandPokemonCenter1F_FishingMonsInfoDay = {20, sTwoIslandPokemonCenter1F_FishingMonsDay};
// 2のしま ポケモンセンター 2F
static const struct WildPokemon sTwoIslandPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sTwoIslandPokemonCenter2F_LandMonsInfoDay = {20, sTwoIslandPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sTwoIslandPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sTwoIslandPokemonCenter2F_WaterMonsInfoDay = {20, sTwoIslandPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sTwoIslandPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sTwoIslandPokemonCenter2F_FishingMonsInfoDay = {20, sTwoIslandPokemonCenter2F_FishingMonsDay};
// 2のしま ふねのりば
static const struct WildPokemon sTwoIslandHarbor_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sTwoIslandHarbor_LandMonsInfoDay = {20, sTwoIslandHarbor_LandMonsDay};
static const struct WildPokemon sTwoIslandHarbor_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sTwoIslandHarbor_WaterMonsInfoDay = {20, sTwoIslandHarbor_WaterMonsDay};
static const struct WildPokemon sTwoIslandHarbor_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sTwoIslandHarbor_FishingMonsInfoDay = {20, sTwoIslandHarbor_FishingMonsDay};
// 3のしま 民家1
static const struct WildPokemon sThreeIslandHouse1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandHouse1_LandMonsInfoDay = {20, sThreeIslandHouse1_LandMonsDay};
static const struct WildPokemon sThreeIslandHouse1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sThreeIslandHouse1_WaterMonsInfoDay = {20, sThreeIslandHouse1_WaterMonsDay};
static const struct WildPokemon sThreeIslandHouse1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandHouse1_FishingMonsInfoDay = {20, sThreeIslandHouse1_FishingMonsDay};
// 3のしま ポケモンセンター 1F
static const struct WildPokemon sThreeIslandPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandPokemonCenter1F_LandMonsInfoDay = {20, sThreeIslandPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sThreeIslandPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sThreeIslandPokemonCenter1F_WaterMonsInfoDay = {20, sThreeIslandPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sThreeIslandPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandPokemonCenter1F_FishingMonsInfoDay = {20, sThreeIslandPokemonCenter1F_FishingMonsDay};
// 3のしま ポケモンセンター 2F
static const struct WildPokemon sThreeIslandPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandPokemonCenter2F_LandMonsInfoDay = {20, sThreeIslandPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sThreeIslandPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sThreeIslandPokemonCenter2F_WaterMonsInfoDay = {20, sThreeIslandPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sThreeIslandPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandPokemonCenter2F_FishingMonsInfoDay = {20, sThreeIslandPokemonCenter2F_FishingMonsDay};
// 3のしま フレンドリィショップ
static const struct WildPokemon sThreeIslandMart_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandMart_LandMonsInfoDay = {20, sThreeIslandMart_LandMonsDay};
static const struct WildPokemon sThreeIslandMart_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sThreeIslandMart_WaterMonsInfoDay = {20, sThreeIslandMart_WaterMonsDay};
static const struct WildPokemon sThreeIslandMart_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandMart_FishingMonsInfoDay = {20, sThreeIslandMart_FishingMonsDay};
// 3のしま 民家2
static const struct WildPokemon sThreeIslandHouse2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandHouse2_LandMonsInfoDay = {20, sThreeIslandHouse2_LandMonsDay};
static const struct WildPokemon sThreeIslandHouse2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sThreeIslandHouse2_WaterMonsInfoDay = {20, sThreeIslandHouse2_WaterMonsDay};
static const struct WildPokemon sThreeIslandHouse2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandHouse2_FishingMonsInfoDay = {20, sThreeIslandHouse2_FishingMonsDay};
// 3のしま 民家3
static const struct WildPokemon sThreeIslandHouse3_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandHouse3_LandMonsInfoDay = {20, sThreeIslandHouse3_LandMonsDay};
static const struct WildPokemon sThreeIslandHouse3_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sThreeIslandHouse3_WaterMonsInfoDay = {20, sThreeIslandHouse3_WaterMonsDay};
static const struct WildPokemon sThreeIslandHouse3_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandHouse3_FishingMonsInfoDay = {20, sThreeIslandHouse3_FishingMonsDay};
// 3のしま 民家4
static const struct WildPokemon sThreeIslandHouse4_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandHouse4_LandMonsInfoDay = {20, sThreeIslandHouse4_LandMonsDay};
static const struct WildPokemon sThreeIslandHouse4_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sThreeIslandHouse4_WaterMonsInfoDay = {20, sThreeIslandHouse4_WaterMonsDay};
static const struct WildPokemon sThreeIslandHouse4_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandHouse4_FishingMonsInfoDay = {20, sThreeIslandHouse4_FishingMonsDay};
// 3のしま 民家5
static const struct WildPokemon sThreeIslandHouse5_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandHouse5_LandMonsInfoDay = {20, sThreeIslandHouse5_LandMonsDay};
static const struct WildPokemon sThreeIslandHouse5_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sThreeIslandHouse5_WaterMonsInfoDay = {20, sThreeIslandHouse5_WaterMonsDay};
static const struct WildPokemon sThreeIslandHouse5_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandHouse5_FishingMonsInfoDay = {20, sThreeIslandHouse5_FishingMonsDay};
// 4のしま そだてや
static const struct WildPokemon sFourIslandPokemonDayCare_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandPokemonDayCare_LandMonsInfoDay = {20, sFourIslandPokemonDayCare_LandMonsDay};
static const struct WildPokemon sFourIslandPokemonDayCare_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFourIslandPokemonDayCare_WaterMonsInfoDay = {20, sFourIslandPokemonDayCare_WaterMonsDay};
static const struct WildPokemon sFourIslandPokemonDayCare_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandPokemonDayCare_FishingMonsInfoDay = {20, sFourIslandPokemonDayCare_FishingMonsDay};
// 4のしま ポケモンセンター 1F
static const struct WildPokemon sFourIslandPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandPokemonCenter1F_LandMonsInfoDay = {20, sFourIslandPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sFourIslandPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFourIslandPokemonCenter1F_WaterMonsInfoDay = {20, sFourIslandPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sFourIslandPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandPokemonCenter1F_FishingMonsInfoDay = {20, sFourIslandPokemonCenter1F_FishingMonsDay};
// 4のしま ポケモンセンター 2F
static const struct WildPokemon sFourIslandPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandPokemonCenter2F_LandMonsInfoDay = {20, sFourIslandPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sFourIslandPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFourIslandPokemonCenter2F_WaterMonsInfoDay = {20, sFourIslandPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sFourIslandPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandPokemonCenter2F_FishingMonsInfoDay = {20, sFourIslandPokemonCenter2F_FishingMonsDay};
// 4のしま 民家1
static const struct WildPokemon sFourIslandHouse1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandHouse1_LandMonsInfoDay = {20, sFourIslandHouse1_LandMonsDay};
static const struct WildPokemon sFourIslandHouse1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFourIslandHouse1_WaterMonsInfoDay = {20, sFourIslandHouse1_WaterMonsDay};
static const struct WildPokemon sFourIslandHouse1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandHouse1_FishingMonsInfoDay = {20, sFourIslandHouse1_FishingMonsDay};
// カンナのいえ
static const struct WildPokemon sFourIslandLoreleisHouse_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandLoreleisHouse_LandMonsInfoDay = {20, sFourIslandLoreleisHouse_LandMonsDay};
static const struct WildPokemon sFourIslandLoreleisHouse_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFourIslandLoreleisHouse_WaterMonsInfoDay = {20, sFourIslandLoreleisHouse_WaterMonsDay};
static const struct WildPokemon sFourIslandLoreleisHouse_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandLoreleisHouse_FishingMonsInfoDay = {20, sFourIslandLoreleisHouse_FishingMonsDay};
// 4のしま ふねのりば
static const struct WildPokemon sFourIslandHarbor_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandHarbor_LandMonsInfoDay = {20, sFourIslandHarbor_LandMonsDay};
static const struct WildPokemon sFourIslandHarbor_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFourIslandHarbor_WaterMonsInfoDay = {20, sFourIslandHarbor_WaterMonsDay};
static const struct WildPokemon sFourIslandHarbor_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandHarbor_FishingMonsInfoDay = {20, sFourIslandHarbor_FishingMonsDay};
// 4のしま 民家2
static const struct WildPokemon sFourIslandHouse2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandHouse2_LandMonsInfoDay = {20, sFourIslandHouse2_LandMonsDay};
static const struct WildPokemon sFourIslandHouse2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFourIslandHouse2_WaterMonsInfoDay = {20, sFourIslandHouse2_WaterMonsDay};
static const struct WildPokemon sFourIslandHouse2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandHouse2_FishingMonsInfoDay = {20, sFourIslandHouse2_FishingMonsDay};
// 4のしま フレンドリィショップ
static const struct WildPokemon sFourIslandMart_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandMart_LandMonsInfoDay = {20, sFourIslandMart_LandMonsDay};
static const struct WildPokemon sFourIslandMart_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFourIslandMart_WaterMonsInfoDay = {20, sFourIslandMart_WaterMonsDay};
static const struct WildPokemon sFourIslandMart_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFourIslandMart_FishingMonsInfoDay = {20, sFourIslandMart_FishingMonsDay};
// 5のしま ポケモンセンター 1F
static const struct WildPokemon sFiveIslandPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandPokemonCenter1F_LandMonsInfoDay = {20, sFiveIslandPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sFiveIslandPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandPokemonCenter1F_WaterMonsInfoDay = {20, sFiveIslandPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sFiveIslandPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandPokemonCenter1F_FishingMonsInfoDay = {20, sFiveIslandPokemonCenter1F_FishingMonsDay};
// 5のしま ポケモンセンター 2F
static const struct WildPokemon sFiveIslandPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandPokemonCenter2F_LandMonsInfoDay = {20, sFiveIslandPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sFiveIslandPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandPokemonCenter2F_WaterMonsInfoDay = {20, sFiveIslandPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sFiveIslandPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandPokemonCenter2F_FishingMonsInfoDay = {20, sFiveIslandPokemonCenter2F_FishingMonsDay};
// 5のしま ふねのりば
static const struct WildPokemon sFiveIslandHarbor_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandHarbor_LandMonsInfoDay = {20, sFiveIslandHarbor_LandMonsDay};
static const struct WildPokemon sFiveIslandHarbor_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandHarbor_WaterMonsInfoDay = {20, sFiveIslandHarbor_WaterMonsDay};
static const struct WildPokemon sFiveIslandHarbor_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandHarbor_FishingMonsInfoDay = {20, sFiveIslandHarbor_FishingMonsDay};
// 5のしま 民家1
static const struct WildPokemon sFiveIslandHouse1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandHouse1_LandMonsInfoDay = {20, sFiveIslandHouse1_LandMonsDay};
static const struct WildPokemon sFiveIslandHouse1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandHouse1_WaterMonsInfoDay = {20, sFiveIslandHouse1_WaterMonsDay};
static const struct WildPokemon sFiveIslandHouse1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandHouse1_FishingMonsInfoDay = {20, sFiveIslandHouse1_FishingMonsDay};
// 5のしま 民家2
static const struct WildPokemon sFiveIslandHouse2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandHouse2_LandMonsInfoDay = {20, sFiveIslandHouse2_LandMonsDay};
static const struct WildPokemon sFiveIslandHouse2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandHouse2_WaterMonsInfoDay = {20, sFiveIslandHouse2_WaterMonsDay};
static const struct WildPokemon sFiveIslandHouse2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandHouse2_FishingMonsInfoDay = {20, sFiveIslandHouse2_FishingMonsDay};
// 6のしま ポケモンセンター 1F
static const struct WildPokemon sSixIslandPokemonCenter1F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandPokemonCenter1F_LandMonsInfoDay = {20, sSixIslandPokemonCenter1F_LandMonsDay};
static const struct WildPokemon sSixIslandPokemonCenter1F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandPokemonCenter1F_WaterMonsInfoDay = {20, sSixIslandPokemonCenter1F_WaterMonsDay};
static const struct WildPokemon sSixIslandPokemonCenter1F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandPokemonCenter1F_FishingMonsInfoDay = {20, sSixIslandPokemonCenter1F_FishingMonsDay};
// 6のしま ポケモンセンター 2F
static const struct WildPokemon sSixIslandPokemonCenter2F_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandPokemonCenter2F_LandMonsInfoDay = {20, sSixIslandPokemonCenter2F_LandMonsDay};
static const struct WildPokemon sSixIslandPokemonCenter2F_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandPokemonCenter2F_WaterMonsInfoDay = {20, sSixIslandPokemonCenter2F_WaterMonsDay};
static const struct WildPokemon sSixIslandPokemonCenter2F_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandPokemonCenter2F_FishingMonsInfoDay = {20, sSixIslandPokemonCenter2F_FishingMonsDay};
// 6のしま ふねのりば
static const struct WildPokemon sSixIslandHarbor_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandHarbor_LandMonsInfoDay = {20, sSixIslandHarbor_LandMonsDay};
static const struct WildPokemon sSixIslandHarbor_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandHarbor_WaterMonsInfoDay = {20, sSixIslandHarbor_WaterMonsDay};
static const struct WildPokemon sSixIslandHarbor_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandHarbor_FishingMonsInfoDay = {20, sSixIslandHarbor_FishingMonsDay};
// 6のしま 民家
static const struct WildPokemon sSixIslandHouse_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandHouse_LandMonsInfoDay = {20, sSixIslandHouse_LandMonsDay};
static const struct WildPokemon sSixIslandHouse_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandHouse_WaterMonsInfoDay = {20, sSixIslandHouse_WaterMonsDay};
static const struct WildPokemon sSixIslandHouse_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandHouse_FishingMonsInfoDay = {20, sSixIslandHouse_FishingMonsDay};
// 6のしま フレンドリィショップ
static const struct WildPokemon sSixIslandMart_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandMart_LandMonsInfoDay = {20, sSixIslandMart_LandMonsDay};
static const struct WildPokemon sSixIslandMart_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandMart_WaterMonsInfoDay = {20, sSixIslandMart_WaterMonsDay};
static const struct WildPokemon sSixIslandMart_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandMart_FishingMonsInfoDay = {20, sSixIslandMart_FishingMonsDay};
// 3のしま ふねのりば
static const struct WildPokemon sThreeIslandHarbor_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandHarbor_LandMonsInfoDay = {20, sThreeIslandHarbor_LandMonsDay};
static const struct WildPokemon sThreeIslandHarbor_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sThreeIslandHarbor_WaterMonsInfoDay = {20, sThreeIslandHarbor_WaterMonsDay};
static const struct WildPokemon sThreeIslandHarbor_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sThreeIslandHarbor_FishingMonsInfoDay = {20, sThreeIslandHarbor_FishingMonsDay};
// ゴージャスリゾート（民家）
static const struct WildPokemon sFiveIslandResortGorgeousHouse_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandResortGorgeousHouse_LandMonsInfoDay = {20, sFiveIslandResortGorgeousHouse_LandMonsDay};
static const struct WildPokemon sFiveIslandResortGorgeousHouse_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sFiveIslandResortGorgeousHouse_WaterMonsInfoDay = {20, sFiveIslandResortGorgeousHouse_WaterMonsDay};
static const struct WildPokemon sFiveIslandResortGorgeousHouse_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sFiveIslandResortGorgeousHouse_FishingMonsInfoDay = {20, sFiveIslandResortGorgeousHouse_FishingMonsDay};
// きわのみさき（民家）
static const struct WildPokemon sTwoIslandCapeBrinkHouse_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sTwoIslandCapeBrinkHouse_LandMonsInfoDay = {20, sTwoIslandCapeBrinkHouse_LandMonsDay};
static const struct WildPokemon sTwoIslandCapeBrinkHouse_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sTwoIslandCapeBrinkHouse_WaterMonsInfoDay = {20, sTwoIslandCapeBrinkHouse_WaterMonsDay};
static const struct WildPokemon sTwoIslandCapeBrinkHouse_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sTwoIslandCapeBrinkHouse_FishingMonsInfoDay = {20, sTwoIslandCapeBrinkHouse_FishingMonsDay};
// みずのさんぽみち 民家1
static const struct WildPokemon sSixIslandWaterPathHouse1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandWaterPathHouse1_LandMonsInfoDay = {20, sSixIslandWaterPathHouse1_LandMonsDay};
static const struct WildPokemon sSixIslandWaterPathHouse1_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandWaterPathHouse1_WaterMonsInfoDay = {20, sSixIslandWaterPathHouse1_WaterMonsDay};
static const struct WildPokemon sSixIslandWaterPathHouse1_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandWaterPathHouse1_FishingMonsInfoDay = {20, sSixIslandWaterPathHouse1_FishingMonsDay};
// みずのさんぽみち 民家2
static const struct WildPokemon sSixIslandWaterPathHouse2_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandWaterPathHouse2_LandMonsInfoDay = {20, sSixIslandWaterPathHouse2_LandMonsDay};
static const struct WildPokemon sSixIslandWaterPathHouse2_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSixIslandWaterPathHouse2_WaterMonsInfoDay = {20, sSixIslandWaterPathHouse2_WaterMonsDay};
static const struct WildPokemon sSixIslandWaterPathHouse2_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSixIslandWaterPathHouse2_FishingMonsInfoDay = {20, sSixIslandWaterPathHouse2_FishingMonsDay};
// しっぽうけいこく（民家）
static const struct WildPokemon sSevenIslandSevaultCanyonHouse_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandSevaultCanyonHouse_LandMonsInfoDay = {20, sSevenIslandSevaultCanyonHouse_LandMonsDay};
static const struct WildPokemon sSevenIslandSevaultCanyonHouse_WaterMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
};
static const struct WildPokemonInfo sSevenIslandSevaultCanyonHouse_WaterMonsInfoDay = {20, sSevenIslandSevaultCanyonHouse_WaterMonsDay};
static const struct WildPokemon sSevenIslandSevaultCanyonHouse_FishingMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sSevenIslandSevaultCanyonHouse_FishingMonsInfoDay = {20, sSevenIslandSevaultCanyonHouse_FishingMonsDay};
const struct WildPokemonHeader gWildMonMorningHeaders[] =
{
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};
const struct WildPokemonHeader gWildMonEveningHeaders[] =
{
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};
const struct WildPokemonHeader gWildMonNightHeaders[] =
{
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};
const struct WildPokemonHeader gWildMonDayHeaders[] =
{
	{
		.mapGroup = MAP_GROUP(ROUTE_1),
		.mapNum = MAP_NUM(ROUTE_1),
		.landMonsInfo = &sRoute1_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VIRIDIAN_FOREST),
		.mapNum = MAP_NUM(VIRIDIAN_FOREST),
		.landMonsInfo = &sViridianForest_LandMonsInfoDay,
		.waterMonsInfo = &sViridianForest_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sViridianForest_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(MT_MOON_1F),
		.mapNum = MAP_NUM(MT_MOON_1F),
		.landMonsInfo = &sMtMoon1F_LandMonsInfoDay,
		.waterMonsInfo = &sMtMoon1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sMtMoon1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(MT_MOON_B1F),
		.mapNum = MAP_NUM(MT_MOON_B1F),
		.landMonsInfo = &sMtMoonB1F_LandMonsInfoDay,
		.waterMonsInfo = &sMtMoonB1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sMtMoonB1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(MT_MOON_B2F),
		.mapNum = MAP_NUM(MT_MOON_B2F),
		.landMonsInfo = &sMtMoonB2F_LandMonsInfoDay,
		.waterMonsInfo = &sMtMoonB2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sMtMoonB2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_EXTERIOR),
		.mapNum = MAP_NUM(SSANNE_EXTERIOR),
		.landMonsInfo = &sSsAnneExterior_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnneExterior_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnneExterior_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_1F_CORRIDOR),
		.mapNum = MAP_NUM(SSANNE_1F_CORRIDOR),
		.landMonsInfo = &sSsAnne1FCorridor_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnne1FCorridor_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnne1FCorridor_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_2F_CORRIDOR),
		.mapNum = MAP_NUM(SSANNE_2F_CORRIDOR),
		.landMonsInfo = &sSsAnne2FCorridor_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnne2FCorridor_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnne2FCorridor_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_3F_CORRIDOR),
		.mapNum = MAP_NUM(SSANNE_3F_CORRIDOR),
		.landMonsInfo = &sSsAnne3FCorridor_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnne3FCorridor_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnne3FCorridor_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_B1F_CORRIDOR),
		.mapNum = MAP_NUM(SSANNE_B1F_CORRIDOR),
		.landMonsInfo = &sSsAnneB1FCorridor_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnneB1FCorridor_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnneB1FCorridor_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_DECK),
		.mapNum = MAP_NUM(SSANNE_DECK),
		.landMonsInfo = &sSsAnneDeck_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnneDeck_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnneDeck_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_KITCHEN),
		.mapNum = MAP_NUM(SSANNE_KITCHEN),
		.landMonsInfo = &sSsAnneKitchen_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnneKitchen_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnneKitchen_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_CAPTAINS_OFFICE),
		.mapNum = MAP_NUM(SSANNE_CAPTAINS_OFFICE),
		.landMonsInfo = &sSsAnneCaptainsOffice_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnneCaptainsOffice_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnneCaptainsOffice_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_1F_ROOM1),
		.mapNum = MAP_NUM(SSANNE_1F_ROOM1),
		.landMonsInfo = &sSsAnne1FRoom1_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnne1FRoom1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnne1FRoom1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_1F_ROOM2),
		.mapNum = MAP_NUM(SSANNE_1F_ROOM2),
		.landMonsInfo = &sSsAnne1FRoom2_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnne1FRoom2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnne1FRoom2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_1F_ROOM3),
		.mapNum = MAP_NUM(SSANNE_1F_ROOM3),
		.landMonsInfo = &sSsAnne1FRoom3_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnne1FRoom3_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnne1FRoom3_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_1F_ROOM4),
		.mapNum = MAP_NUM(SSANNE_1F_ROOM4),
		.landMonsInfo = &sSsAnne1FRoom4_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnne1FRoom4_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnne1FRoom4_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_1F_ROOM5),
		.mapNum = MAP_NUM(SSANNE_1F_ROOM5),
		.landMonsInfo = &sSsAnne1FRoom5_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnne1FRoom5_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnne1FRoom5_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_1F_ROOM7),
		.mapNum = MAP_NUM(SSANNE_1F_ROOM7),
		.landMonsInfo = &sSsAnne1FRoom7_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnne1FRoom7_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnne1FRoom7_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_2F_ROOM1),
		.mapNum = MAP_NUM(SSANNE_2F_ROOM1),
		.landMonsInfo = &sSsAnne2FRoom1_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnne2FRoom1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnne2FRoom1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_2F_ROOM2),
		.mapNum = MAP_NUM(SSANNE_2F_ROOM2),
		.landMonsInfo = &sSsAnne2FRoom2_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnne2FRoom2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnne2FRoom2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_2F_ROOM3),
		.mapNum = MAP_NUM(SSANNE_2F_ROOM3),
		.landMonsInfo = &sSsAnne2FRoom3_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnne2FRoom3_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnne2FRoom3_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_2F_ROOM4),
		.mapNum = MAP_NUM(SSANNE_2F_ROOM4),
		.landMonsInfo = &sSsAnne2FRoom4_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnne2FRoom4_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnne2FRoom4_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_2F_ROOM5),
		.mapNum = MAP_NUM(SSANNE_2F_ROOM5),
		.landMonsInfo = &sSsAnne2FRoom5_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnne2FRoom5_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnne2FRoom5_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_2F_ROOM6),
		.mapNum = MAP_NUM(SSANNE_2F_ROOM6),
		.landMonsInfo = &sSsAnne2FRoom6_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnne2FRoom6_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnne2FRoom6_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_B1F_ROOM1),
		.mapNum = MAP_NUM(SSANNE_B1F_ROOM1),
		.landMonsInfo = &sSsAnneB1FRoom1_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnneB1FRoom1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnneB1FRoom1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_B1F_ROOM2),
		.mapNum = MAP_NUM(SSANNE_B1F_ROOM2),
		.landMonsInfo = &sSsAnneB1FRoom2_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnneB1FRoom2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnneB1FRoom2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_B1F_ROOM3),
		.mapNum = MAP_NUM(SSANNE_B1F_ROOM3),
		.landMonsInfo = &sSsAnneB1FRoom3_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnneB1FRoom3_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnneB1FRoom3_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_B1F_ROOM4),
		.mapNum = MAP_NUM(SSANNE_B1F_ROOM4),
		.landMonsInfo = &sSsAnneB1FRoom4_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnneB1FRoom4_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnneB1FRoom4_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_B1F_ROOM5),
		.mapNum = MAP_NUM(SSANNE_B1F_ROOM5),
		.landMonsInfo = &sSsAnneB1FRoom5_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnneB1FRoom5_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnneB1FRoom5_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SSANNE_1F_ROOM6),
		.mapNum = MAP_NUM(SSANNE_1F_ROOM6),
		.landMonsInfo = &sSsAnne1FRoom6_LandMonsInfoDay,
		.waterMonsInfo = &sSsAnne1FRoom6_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSsAnne1FRoom6_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(UNDERGROUND_PATH_NORTH_ENTRANCE),
		.mapNum = MAP_NUM(UNDERGROUND_PATH_NORTH_ENTRANCE),
		.landMonsInfo = &sUndergroundPathNorthEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sUndergroundPathNorthEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sUndergroundPathNorthEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL),
		.mapNum = MAP_NUM(UNDERGROUND_PATH_NORTH_SOUTH_TUNNEL),
		.landMonsInfo = &sUndergroundPathNorthSouthTunnel_LandMonsInfoDay,
		.waterMonsInfo = &sUndergroundPathNorthSouthTunnel_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sUndergroundPathNorthSouthTunnel_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(UNDERGROUND_PATH_SOUTH_ENTRANCE),
		.mapNum = MAP_NUM(UNDERGROUND_PATH_SOUTH_ENTRANCE),
		.landMonsInfo = &sUndergroundPathSouthEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sUndergroundPathSouthEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sUndergroundPathSouthEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(UNDERGROUND_PATH_WEST_ENTRANCE),
		.mapNum = MAP_NUM(UNDERGROUND_PATH_WEST_ENTRANCE),
		.landMonsInfo = &sUndergroundPathWestEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sUndergroundPathWestEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sUndergroundPathWestEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(UNDERGROUND_PATH_EAST_WEST_TUNNEL),
		.mapNum = MAP_NUM(UNDERGROUND_PATH_EAST_WEST_TUNNEL),
		.landMonsInfo = &sUndergroundPathEastWestTunnel_LandMonsInfoDay,
		.waterMonsInfo = &sUndergroundPathEastWestTunnel_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sUndergroundPathEastWestTunnel_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(UNDERGROUND_PATH_EAST_ENTRANCE),
		.mapNum = MAP_NUM(UNDERGROUND_PATH_EAST_ENTRANCE),
		.landMonsInfo = &sUndergroundPathEastEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sUndergroundPathEastEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sUndergroundPathEastEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(DIGLETTS_CAVE_NORTH_ENTRANCE),
		.mapNum = MAP_NUM(DIGLETTS_CAVE_NORTH_ENTRANCE),
		.landMonsInfo = &sDiglettsCaveNorthEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sDiglettsCaveNorthEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sDiglettsCaveNorthEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(DIGLETTS_CAVE_B1F),
		.mapNum = MAP_NUM(DIGLETTS_CAVE_B1F),
		.landMonsInfo = &sDiglettsCaveB1F_LandMonsInfoDay,
		.waterMonsInfo = &sDiglettsCaveB1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sDiglettsCaveB1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(DIGLETTS_CAVE_SOUTH_ENTRANCE),
		.mapNum = MAP_NUM(DIGLETTS_CAVE_SOUTH_ENTRANCE),
		.landMonsInfo = &sDiglettsCaveSouthEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sDiglettsCaveSouthEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sDiglettsCaveSouthEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_1F),
		.mapNum = MAP_NUM(VICTORY_ROAD_1F),
		.landMonsInfo = &sVictoryRoad1F_LandMonsInfoDay,
		.waterMonsInfo = &sVictoryRoad1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sVictoryRoad1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_2F),
		.mapNum = MAP_NUM(VICTORY_ROAD_2F),
		.landMonsInfo = &sVictoryRoad2F_LandMonsInfoDay,
		.waterMonsInfo = &sVictoryRoad2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sVictoryRoad2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_3F),
		.mapNum = MAP_NUM(VICTORY_ROAD_3F),
		.landMonsInfo = &sVictoryRoad3F_LandMonsInfoDay,
		.waterMonsInfo = &sVictoryRoad3F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sVictoryRoad3F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROCKET_HIDEOUT_B1F),
		.mapNum = MAP_NUM(ROCKET_HIDEOUT_B1F),
		.landMonsInfo = &sRocketHideoutB1F_LandMonsInfoDay,
		.waterMonsInfo = &sRocketHideoutB1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRocketHideoutB1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROCKET_HIDEOUT_B2F),
		.mapNum = MAP_NUM(ROCKET_HIDEOUT_B2F),
		.landMonsInfo = &sRocketHideoutB2F_LandMonsInfoDay,
		.waterMonsInfo = &sRocketHideoutB2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRocketHideoutB2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROCKET_HIDEOUT_B3F),
		.mapNum = MAP_NUM(ROCKET_HIDEOUT_B3F),
		.landMonsInfo = &sRocketHideoutB3F_LandMonsInfoDay,
		.waterMonsInfo = &sRocketHideoutB3F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRocketHideoutB3F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROCKET_HIDEOUT_B4F),
		.mapNum = MAP_NUM(ROCKET_HIDEOUT_B4F),
		.landMonsInfo = &sRocketHideoutB4F_LandMonsInfoDay,
		.waterMonsInfo = &sRocketHideoutB4F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRocketHideoutB4F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROCKET_HIDEOUT_ELEVATOR),
		.mapNum = MAP_NUM(ROCKET_HIDEOUT_ELEVATOR),
		.landMonsInfo = &sRocketHideoutElevator_LandMonsInfoDay,
		.waterMonsInfo = &sRocketHideoutElevator_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRocketHideoutElevator_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SILPH_CO_1F),
		.mapNum = MAP_NUM(SILPH_CO_1F),
		.landMonsInfo = &sSilphCo1F_LandMonsInfoDay,
		.waterMonsInfo = &sSilphCo1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSilphCo1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SILPH_CO_2F),
		.mapNum = MAP_NUM(SILPH_CO_2F),
		.landMonsInfo = &sSilphCo2F_LandMonsInfoDay,
		.waterMonsInfo = &sSilphCo2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSilphCo2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SILPH_CO_3F),
		.mapNum = MAP_NUM(SILPH_CO_3F),
		.landMonsInfo = &sSilphCo3F_LandMonsInfoDay,
		.waterMonsInfo = &sSilphCo3F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSilphCo3F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SILPH_CO_4F),
		.mapNum = MAP_NUM(SILPH_CO_4F),
		.landMonsInfo = &sSilphCo4F_LandMonsInfoDay,
		.waterMonsInfo = &sSilphCo4F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSilphCo4F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SILPH_CO_5F),
		.mapNum = MAP_NUM(SILPH_CO_5F),
		.landMonsInfo = &sSilphCo5F_LandMonsInfoDay,
		.waterMonsInfo = &sSilphCo5F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSilphCo5F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SILPH_CO_6F),
		.mapNum = MAP_NUM(SILPH_CO_6F),
		.landMonsInfo = &sSilphCo6F_LandMonsInfoDay,
		.waterMonsInfo = &sSilphCo6F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSilphCo6F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SILPH_CO_7F),
		.mapNum = MAP_NUM(SILPH_CO_7F),
		.landMonsInfo = &sSilphCo7F_LandMonsInfoDay,
		.waterMonsInfo = &sSilphCo7F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSilphCo7F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SILPH_CO_8F),
		.mapNum = MAP_NUM(SILPH_CO_8F),
		.landMonsInfo = &sSilphCo8F_LandMonsInfoDay,
		.waterMonsInfo = &sSilphCo8F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSilphCo8F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SILPH_CO_9F),
		.mapNum = MAP_NUM(SILPH_CO_9F),
		.landMonsInfo = &sSilphCo9F_LandMonsInfoDay,
		.waterMonsInfo = &sSilphCo9F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSilphCo9F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SILPH_CO_10F),
		.mapNum = MAP_NUM(SILPH_CO_10F),
		.landMonsInfo = &sSilphCo10F_LandMonsInfoDay,
		.waterMonsInfo = &sSilphCo10F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSilphCo10F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SILPH_CO_11F),
		.mapNum = MAP_NUM(SILPH_CO_11F),
		.landMonsInfo = &sSilphCo11F_LandMonsInfoDay,
		.waterMonsInfo = &sSilphCo11F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSilphCo11F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SILPH_CO_ELEVATOR),
		.mapNum = MAP_NUM(SILPH_CO_ELEVATOR),
		.landMonsInfo = &sSilphCoElevator_LandMonsInfoDay,
		.waterMonsInfo = &sSilphCoElevator_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSilphCoElevator_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_MANSION_1F),
		.mapNum = MAP_NUM(POKEMON_MANSION_1F),
		.landMonsInfo = &sPokemonMansion1F_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonMansion1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonMansion1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_MANSION_2F),
		.mapNum = MAP_NUM(POKEMON_MANSION_2F),
		.landMonsInfo = &sPokemonMansion2F_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonMansion2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonMansion2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_MANSION_3F),
		.mapNum = MAP_NUM(POKEMON_MANSION_3F),
		.landMonsInfo = &sPokemonMansion3F_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonMansion3F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonMansion3F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_MANSION_B1F),
		.mapNum = MAP_NUM(POKEMON_MANSION_B1F),
		.landMonsInfo = &sPokemonMansionB1F_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonMansionB1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonMansionB1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_CENTER),
		.mapNum = MAP_NUM(SAFARI_ZONE_CENTER),
		.landMonsInfo = &sSafariZoneCenter_LandMonsInfoDay,
		.waterMonsInfo = &sSafariZoneCenter_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSafariZoneCenter_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_EAST),
		.mapNum = MAP_NUM(SAFARI_ZONE_EAST),
		.landMonsInfo = &sSafariZoneEast_LandMonsInfoDay,
		.waterMonsInfo = &sSafariZoneEast_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSafariZoneEast_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_NORTH),
		.mapNum = MAP_NUM(SAFARI_ZONE_NORTH),
		.landMonsInfo = &sSafariZoneNorth_LandMonsInfoDay,
		.waterMonsInfo = &sSafariZoneNorth_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSafariZoneNorth_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_WEST),
		.mapNum = MAP_NUM(SAFARI_ZONE_WEST),
		.landMonsInfo = &sSafariZoneWest_LandMonsInfoDay,
		.waterMonsInfo = &sSafariZoneWest_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSafariZoneWest_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_BUILDING1),
		.mapNum = MAP_NUM(SAFARI_ZONE_BUILDING1),
		.landMonsInfo = &sSafariZoneBuilding1_LandMonsInfoDay,
		.waterMonsInfo = &sSafariZoneBuilding1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSafariZoneBuilding1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_BUILDING2),
		.mapNum = MAP_NUM(SAFARI_ZONE_BUILDING2),
		.landMonsInfo = &sSafariZoneBuilding2_LandMonsInfoDay,
		.waterMonsInfo = &sSafariZoneBuilding2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSafariZoneBuilding2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_BUILDING3),
		.mapNum = MAP_NUM(SAFARI_ZONE_BUILDING3),
		.landMonsInfo = &sSafariZoneBuilding3_LandMonsInfoDay,
		.waterMonsInfo = &sSafariZoneBuilding3_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSafariZoneBuilding3_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_BUILDING4),
		.mapNum = MAP_NUM(SAFARI_ZONE_BUILDING4),
		.landMonsInfo = &sSafariZoneBuilding4_LandMonsInfoDay,
		.waterMonsInfo = &sSafariZoneBuilding4_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSafariZoneBuilding4_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_SECRET_HOUSE),
		.mapNum = MAP_NUM(SAFARI_ZONE_SECRET_HOUSE),
		.landMonsInfo = &sSafariZoneSecretHouse_LandMonsInfoDay,
		.waterMonsInfo = &sSafariZoneSecretHouse_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSafariZoneSecretHouse_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CERULEAN_CAVE_1F),
		.mapNum = MAP_NUM(CERULEAN_CAVE_1F),
		.landMonsInfo = &sCeruleanCave1F_LandMonsInfoDay,
		.waterMonsInfo = &sCeruleanCave1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeruleanCave1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CERULEAN_CAVE_2F),
		.mapNum = MAP_NUM(CERULEAN_CAVE_2F),
		.landMonsInfo = &sCeruleanCave2F_LandMonsInfoDay,
		.waterMonsInfo = &sCeruleanCave2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeruleanCave2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CERULEAN_CAVE_B1F),
		.mapNum = MAP_NUM(CERULEAN_CAVE_B1F),
		.landMonsInfo = &sCeruleanCaveB1F_LandMonsInfoDay,
		.waterMonsInfo = &sCeruleanCaveB1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeruleanCaveB1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_LEAGUE_LORELEIS_ROOM),
		.mapNum = MAP_NUM(POKEMON_LEAGUE_LORELEIS_ROOM),
		.landMonsInfo = &sPokemonLeagueLoreleisRoom_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonLeagueLoreleisRoom_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonLeagueLoreleisRoom_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_LEAGUE_BRUNOS_ROOM),
		.mapNum = MAP_NUM(POKEMON_LEAGUE_BRUNOS_ROOM),
		.landMonsInfo = &sPokemonLeagueBrunosRoom_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonLeagueBrunosRoom_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonLeagueBrunosRoom_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_LEAGUE_AGATHAS_ROOM),
		.mapNum = MAP_NUM(POKEMON_LEAGUE_AGATHAS_ROOM),
		.landMonsInfo = &sPokemonLeagueAgathasRoom_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonLeagueAgathasRoom_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonLeagueAgathasRoom_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_LEAGUE_LANCES_ROOM),
		.mapNum = MAP_NUM(POKEMON_LEAGUE_LANCES_ROOM),
		.landMonsInfo = &sPokemonLeagueLancesRoom_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonLeagueLancesRoom_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonLeagueLancesRoom_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_LEAGUE_CHAMPIONS_ROOM),
		.mapNum = MAP_NUM(POKEMON_LEAGUE_CHAMPIONS_ROOM),
		.landMonsInfo = &sPokemonLeagueChampionsRoom_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonLeagueChampionsRoom_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonLeagueChampionsRoom_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_LEAGUE_HALL_OF_FAME),
		.mapNum = MAP_NUM(POKEMON_LEAGUE_HALL_OF_FAME),
		.landMonsInfo = &sPokemonLeagueHallOfFame_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonLeagueHallOfFame_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonLeagueHallOfFame_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROCK_TUNNEL_1F),
		.mapNum = MAP_NUM(ROCK_TUNNEL_1F),
		.landMonsInfo = &sRockTunnel1F_LandMonsInfoDay,
		.waterMonsInfo = &sRockTunnel1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRockTunnel1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROCK_TUNNEL_B1F),
		.mapNum = MAP_NUM(ROCK_TUNNEL_B1F),
		.landMonsInfo = &sRockTunnelB1F_LandMonsInfoDay,
		.waterMonsInfo = &sRockTunnelB1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRockTunnelB1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_1F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_1F),
		.landMonsInfo = &sSeafoamIslands1F_LandMonsInfoDay,
		.waterMonsInfo = &sSeafoamIslands1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSeafoamIslands1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B1F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B1F),
		.landMonsInfo = &sSeafoamIslandsB1F_LandMonsInfoDay,
		.waterMonsInfo = &sSeafoamIslandsB1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSeafoamIslandsB1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B2F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B2F),
		.landMonsInfo = &sSeafoamIslandsB2F_LandMonsInfoDay,
		.waterMonsInfo = &sSeafoamIslandsB2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSeafoamIslandsB2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B3F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B3F),
		.landMonsInfo = &sSeafoamIslandsB3F_LandMonsInfoDay,
		.waterMonsInfo = &sSeafoamIslandsB3F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSeafoamIslandsB3F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B4F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B4F),
		.landMonsInfo = &sSeafoamIslandsB4F_LandMonsInfoDay,
		.waterMonsInfo = &sSeafoamIslandsB4F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSeafoamIslandsB4F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_1F),
		.mapNum = MAP_NUM(POKEMON_TOWER_1F),
		.landMonsInfo = &sPokemonTower1F_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonTower1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonTower1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_2F),
		.mapNum = MAP_NUM(POKEMON_TOWER_2F),
		.landMonsInfo = &sPokemonTower2F_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonTower2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonTower2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_3F),
		.mapNum = MAP_NUM(POKEMON_TOWER_3F),
		.landMonsInfo = &sPokemonTower3F_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonTower3F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonTower3F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_4F),
		.mapNum = MAP_NUM(POKEMON_TOWER_4F),
		.landMonsInfo = &sPokemonTower4F_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonTower4F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonTower4F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_5F),
		.mapNum = MAP_NUM(POKEMON_TOWER_5F),
		.landMonsInfo = &sPokemonTower5F_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonTower5F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonTower5F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_6F),
		.mapNum = MAP_NUM(POKEMON_TOWER_6F),
		.landMonsInfo = &sPokemonTower6F_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonTower6F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonTower6F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_7F),
		.mapNum = MAP_NUM(POKEMON_TOWER_7F),
		.landMonsInfo = &sPokemonTower7F_LandMonsInfoDay,
		.waterMonsInfo = &sPokemonTower7F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPokemonTower7F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(POWER_PLANT),
		.mapNum = MAP_NUM(POWER_PLANT),
		.landMonsInfo = &sPowerPlant_LandMonsInfoDay,
		.waterMonsInfo = &sPowerPlant_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPowerPlant_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_RUBY_PATH_B4F),
		.mapNum = MAP_NUM(MT_EMBER_RUBY_PATH_B4F),
		.landMonsInfo = &sMtEmberRubyPathB4F_LandMonsInfoDay,
		.waterMonsInfo = &sMtEmberRubyPathB4F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sMtEmberRubyPathB4F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_EXTERIOR),
		.mapNum = MAP_NUM(MT_EMBER_EXTERIOR),
		.landMonsInfo = &sMtEmberExterior_LandMonsInfoDay,
		.waterMonsInfo = &sMtEmberExterior_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sMtEmberExterior_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_SUMMIT_PATH_1F),
		.mapNum = MAP_NUM(MT_EMBER_SUMMIT_PATH_1F),
		.landMonsInfo = &sMtEmberSummitPath1F_LandMonsInfoDay,
		.waterMonsInfo = &sMtEmberSummitPath1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sMtEmberSummitPath1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_SUMMIT_PATH_2F),
		.mapNum = MAP_NUM(MT_EMBER_SUMMIT_PATH_2F),
		.landMonsInfo = &sMtEmberSummitPath2F_LandMonsInfoDay,
		.waterMonsInfo = &sMtEmberSummitPath2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sMtEmberSummitPath2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_SUMMIT_PATH_3F),
		.mapNum = MAP_NUM(MT_EMBER_SUMMIT_PATH_3F),
		.landMonsInfo = &sMtEmberSummitPath3F_LandMonsInfoDay,
		.waterMonsInfo = &sMtEmberSummitPath3F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sMtEmberSummitPath3F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_SUMMIT),
		.mapNum = MAP_NUM(MT_EMBER_SUMMIT),
		.landMonsInfo = &sMtEmberSummit_LandMonsInfoDay,
		.waterMonsInfo = &sMtEmberSummit_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sMtEmberSummit_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_RUBY_PATH_B5F),
		.mapNum = MAP_NUM(MT_EMBER_RUBY_PATH_B5F),
		.landMonsInfo = &sMtEmberRubyPathB5F_LandMonsInfoDay,
		.waterMonsInfo = &sMtEmberRubyPathB5F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sMtEmberRubyPathB5F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_RUBY_PATH_1F),
		.mapNum = MAP_NUM(MT_EMBER_RUBY_PATH_1F),
		.landMonsInfo = &sMtEmberRubyPath1F_LandMonsInfoDay,
		.waterMonsInfo = &sMtEmberRubyPath1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sMtEmberRubyPath1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_RUBY_PATH_B1F),
		.mapNum = MAP_NUM(MT_EMBER_RUBY_PATH_B1F),
		.landMonsInfo = &sMtEmberRubyPathB1F_LandMonsInfoDay,
		.waterMonsInfo = &sMtEmberRubyPathB1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sMtEmberRubyPathB1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_RUBY_PATH_B2F),
		.mapNum = MAP_NUM(MT_EMBER_RUBY_PATH_B2F),
		.landMonsInfo = &sMtEmberRubyPathB2F_LandMonsInfoDay,
		.waterMonsInfo = &sMtEmberRubyPathB2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sMtEmberRubyPathB2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_RUBY_PATH_B3F),
		.mapNum = MAP_NUM(MT_EMBER_RUBY_PATH_B3F),
		.landMonsInfo = &sMtEmberRubyPathB3F_LandMonsInfoDay,
		.waterMonsInfo = &sMtEmberRubyPathB3F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sMtEmberRubyPathB3F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_RUBY_PATH_B1F_STAIRS),
		.mapNum = MAP_NUM(MT_EMBER_RUBY_PATH_B1F_STAIRS),
		.landMonsInfo = &sMtEmberRubyPathB1FStairs_LandMonsInfoDay,
		.waterMonsInfo = &sMtEmberRubyPathB1FStairs_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sMtEmberRubyPathB1FStairs_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_RUBY_PATH_B2F_STAIRS),
		.mapNum = MAP_NUM(MT_EMBER_RUBY_PATH_B2F_STAIRS),
		.landMonsInfo = &sMtEmberRubyPathB2FStairs_LandMonsInfoDay,
		.waterMonsInfo = &sMtEmberRubyPathB2FStairs_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sMtEmberRubyPathB2FStairs_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_BERRY_FOREST),
		.mapNum = MAP_NUM(THREE_ISLAND_BERRY_FOREST),
		.landMonsInfo = &sThreeIslandBerryForest_LandMonsInfoDay,
		.waterMonsInfo = &sThreeIslandBerryForest_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sThreeIslandBerryForest_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FOUR_ISLAND_ICEFALL_CAVE_ENTRANCE),
		.mapNum = MAP_NUM(FOUR_ISLAND_ICEFALL_CAVE_ENTRANCE),
		.landMonsInfo = &sFourIslandIcefallCaveEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sFourIslandIcefallCaveEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFourIslandIcefallCaveEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FOUR_ISLAND_ICEFALL_CAVE_1F),
		.mapNum = MAP_NUM(FOUR_ISLAND_ICEFALL_CAVE_1F),
		.landMonsInfo = &sFourIslandIcefallCave1F_LandMonsInfoDay,
		.waterMonsInfo = &sFourIslandIcefallCave1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFourIslandIcefallCave1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FOUR_ISLAND_ICEFALL_CAVE_B1F),
		.mapNum = MAP_NUM(FOUR_ISLAND_ICEFALL_CAVE_B1F),
		.landMonsInfo = &sFourIslandIcefallCaveB1F_LandMonsInfoDay,
		.waterMonsInfo = &sFourIslandIcefallCaveB1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFourIslandIcefallCaveB1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FOUR_ISLAND_ICEFALL_CAVE_BACK),
		.mapNum = MAP_NUM(FOUR_ISLAND_ICEFALL_CAVE_BACK),
		.landMonsInfo = &sFourIslandIcefallCaveBack_LandMonsInfoDay,
		.waterMonsInfo = &sFourIslandIcefallCaveBack_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFourIslandIcefallCaveBack_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_ROCKET_WAREHOUSE),
		.mapNum = MAP_NUM(FIVE_ISLAND_ROCKET_WAREHOUSE),
		.landMonsInfo = &sFiveIslandRocketWarehouse_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandRocketWarehouse_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandRocketWarehouse_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_DOTTED_HOLE_1F),
		.mapNum = MAP_NUM(SIX_ISLAND_DOTTED_HOLE_1F),
		.landMonsInfo = &sSixIslandDottedHole1F_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandDottedHole1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandDottedHole1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_DOTTED_HOLE_B1F),
		.mapNum = MAP_NUM(SIX_ISLAND_DOTTED_HOLE_B1F),
		.landMonsInfo = &sSixIslandDottedHoleB1F_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandDottedHoleB1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandDottedHoleB1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_DOTTED_HOLE_B2F),
		.mapNum = MAP_NUM(SIX_ISLAND_DOTTED_HOLE_B2F),
		.landMonsInfo = &sSixIslandDottedHoleB2F_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandDottedHoleB2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandDottedHoleB2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_DOTTED_HOLE_B3F),
		.mapNum = MAP_NUM(SIX_ISLAND_DOTTED_HOLE_B3F),
		.landMonsInfo = &sSixIslandDottedHoleB3F_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandDottedHoleB3F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandDottedHoleB3F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_DOTTED_HOLE_B4F),
		.mapNum = MAP_NUM(SIX_ISLAND_DOTTED_HOLE_B4F),
		.landMonsInfo = &sSixIslandDottedHoleB4F_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandDottedHoleB4F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandDottedHoleB4F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_DOTTED_HOLE_SAPPHIRE_ROOM),
		.mapNum = MAP_NUM(SIX_ISLAND_DOTTED_HOLE_SAPPHIRE_ROOM),
		.landMonsInfo = &sSixIslandDottedHoleSapphireRoom_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandDottedHoleSapphireRoom_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandDottedHoleSapphireRoom_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_PATTERN_BUSH),
		.mapNum = MAP_NUM(SIX_ISLAND_PATTERN_BUSH),
		.landMonsInfo = &sSixIslandPatternBush_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandPatternBush_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandPatternBush_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_ALTERING_CAVE),
		.mapNum = MAP_NUM(SIX_ISLAND_ALTERING_CAVE),
		.landMonsInfo = &sSixIslandAlteringCave_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandAlteringCave_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandAlteringCave_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_EXTERIOR),
		.mapNum = MAP_NUM(NAVEL_ROCK_EXTERIOR),
		.landMonsInfo = &sNavelRockExterior_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockExterior_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockExterior_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TRAINER_TOWER_1F),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TRAINER_TOWER_1F),
		.landMonsInfo = &sSevenIslandTrainerTower1F_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTrainerTower1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTrainerTower1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TRAINER_TOWER_2F),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TRAINER_TOWER_2F),
		.landMonsInfo = &sSevenIslandTrainerTower2F_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTrainerTower2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTrainerTower2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TRAINER_TOWER_3F),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TRAINER_TOWER_3F),
		.landMonsInfo = &sSevenIslandTrainerTower3F_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTrainerTower3F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTrainerTower3F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TRAINER_TOWER_4F),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TRAINER_TOWER_4F),
		.landMonsInfo = &sSevenIslandTrainerTower4F_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTrainerTower4F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTrainerTower4F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TRAINER_TOWER_5F),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TRAINER_TOWER_5F),
		.landMonsInfo = &sSevenIslandTrainerTower5F_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTrainerTower5F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTrainerTower5F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TRAINER_TOWER_6F),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TRAINER_TOWER_6F),
		.landMonsInfo = &sSevenIslandTrainerTower6F_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTrainerTower6F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTrainerTower6F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TRAINER_TOWER_7F),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TRAINER_TOWER_7F),
		.landMonsInfo = &sSevenIslandTrainerTower7F_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTrainerTower7F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTrainerTower7F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TRAINER_TOWER_8F),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TRAINER_TOWER_8F),
		.landMonsInfo = &sSevenIslandTrainerTower8F_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTrainerTower8F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTrainerTower8F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TRAINER_TOWER_ROOF),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TRAINER_TOWER_ROOF),
		.landMonsInfo = &sSevenIslandTrainerTowerRoof_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTrainerTowerRoof_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTrainerTowerRoof_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TRAINER_TOWER_LOBBY),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TRAINER_TOWER_LOBBY),
		.landMonsInfo = &sSevenIslandTrainerTowerLobby_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTrainerTowerLobby_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTrainerTowerLobby_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TRAINER_TOWER_ELEVATOR),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TRAINER_TOWER_ELEVATOR),
		.landMonsInfo = &sSevenIslandTrainerTowerElevator_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTrainerTowerElevator_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTrainerTowerElevator_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ENTRANCE),
		.mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ENTRANCE),
		.landMonsInfo = &sFiveIslandLostCaveEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandLostCaveEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandLostCaveEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM1),
		.mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM1),
		.landMonsInfo = &sFiveIslandLostCaveRoom1_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandLostCaveRoom1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandLostCaveRoom1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM2),
		.mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM2),
		.landMonsInfo = &sFiveIslandLostCaveRoom2_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandLostCaveRoom2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandLostCaveRoom2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM3),
		.mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM3),
		.landMonsInfo = &sFiveIslandLostCaveRoom3_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandLostCaveRoom3_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandLostCaveRoom3_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM4),
		.mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM4),
		.landMonsInfo = &sFiveIslandLostCaveRoom4_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandLostCaveRoom4_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandLostCaveRoom4_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM5),
		.mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM5),
		.landMonsInfo = &sFiveIslandLostCaveRoom5_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandLostCaveRoom5_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandLostCaveRoom5_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM6),
		.mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM6),
		.landMonsInfo = &sFiveIslandLostCaveRoom6_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandLostCaveRoom6_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandLostCaveRoom6_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM7),
		.mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM7),
		.landMonsInfo = &sFiveIslandLostCaveRoom7_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandLostCaveRoom7_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandLostCaveRoom7_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM8),
		.mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM8),
		.landMonsInfo = &sFiveIslandLostCaveRoom8_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandLostCaveRoom8_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandLostCaveRoom8_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM9),
		.mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM9),
		.landMonsInfo = &sFiveIslandLostCaveRoom9_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandLostCaveRoom9_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandLostCaveRoom9_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM10),
		.mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM10),
		.landMonsInfo = &sFiveIslandLostCaveRoom10_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandLostCaveRoom10_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandLostCaveRoom10_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM11),
		.mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM11),
		.landMonsInfo = &sFiveIslandLostCaveRoom11_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandLostCaveRoom11_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandLostCaveRoom11_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM12),
		.mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM12),
		.landMonsInfo = &sFiveIslandLostCaveRoom12_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandLostCaveRoom12_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandLostCaveRoom12_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM13),
		.mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM13),
		.landMonsInfo = &sFiveIslandLostCaveRoom13_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandLostCaveRoom13_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandLostCaveRoom13_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_LOST_CAVE_ROOM14),
		.mapNum = MAP_NUM(FIVE_ISLAND_LOST_CAVE_ROOM14),
		.landMonsInfo = &sFiveIslandLostCaveRoom14_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandLostCaveRoom14_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandLostCaveRoom14_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER),
		.landMonsInfo = &sSevenIslandTanobyRuinsMoneanChamber_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTanobyRuinsMoneanChamber_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTanobyRuinsMoneanChamber_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS_LIPTOO_CHAMBER),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_LIPTOO_CHAMBER),
		.landMonsInfo = &sSevenIslandTanobyRuinsLiptooChamber_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTanobyRuinsLiptooChamber_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTanobyRuinsLiptooChamber_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS_WEEPTH_CHAMBER),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_WEEPTH_CHAMBER),
		.landMonsInfo = &sSevenIslandTanobyRuinsWeepthChamber_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTanobyRuinsWeepthChamber_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTanobyRuinsWeepthChamber_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS_DILFORD_CHAMBER),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_DILFORD_CHAMBER),
		.landMonsInfo = &sSevenIslandTanobyRuinsDilfordChamber_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTanobyRuinsDilfordChamber_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTanobyRuinsDilfordChamber_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS_SCUFIB_CHAMBER),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_SCUFIB_CHAMBER),
		.landMonsInfo = &sSevenIslandTanobyRuinsScufibChamber_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTanobyRuinsScufibChamber_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTanobyRuinsScufibChamber_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS_RIXY_CHAMBER),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_RIXY_CHAMBER),
		.landMonsInfo = &sSevenIslandTanobyRuinsRixyChamber_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTanobyRuinsRixyChamber_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTanobyRuinsRixyChamber_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS_VIAPOIS_CHAMBER),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_VIAPOIS_CHAMBER),
		.landMonsInfo = &sSevenIslandTanobyRuinsViapoisChamber_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTanobyRuinsViapoisChamber_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTanobyRuinsViapoisChamber_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_DUNSPARCE_TUNNEL),
		.mapNum = MAP_NUM(THREE_ISLAND_DUNSPARCE_TUNNEL),
		.landMonsInfo = &sThreeIslandDunsparceTunnel_LandMonsInfoDay,
		.waterMonsInfo = &sThreeIslandDunsparceTunnel_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sThreeIslandDunsparceTunnel_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_SEVAULT_CANYON_TANOBY_KEY),
		.mapNum = MAP_NUM(SEVEN_ISLAND_SEVAULT_CANYON_TANOBY_KEY),
		.landMonsInfo = &sSevenIslandSevaultCanyonTanobyKey_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandSevaultCanyonTanobyKey_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandSevaultCanyonTanobyKey_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_1F),
		.mapNum = MAP_NUM(NAVEL_ROCK_1F),
		.landMonsInfo = &sNavelRock1F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRock1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRock1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_SUMMIT),
		.mapNum = MAP_NUM(NAVEL_ROCK_SUMMIT),
		.landMonsInfo = &sNavelRockSummit_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockSummit_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockSummit_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_BASE),
		.mapNum = MAP_NUM(NAVEL_ROCK_BASE),
		.landMonsInfo = &sNavelRockBase_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockBase_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockBase_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_SUMMIT_PATH_2F),
		.mapNum = MAP_NUM(NAVEL_ROCK_SUMMIT_PATH_2F),
		.landMonsInfo = &sNavelRockSummitPath2F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockSummitPath2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockSummitPath2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_SUMMIT_PATH_3F),
		.mapNum = MAP_NUM(NAVEL_ROCK_SUMMIT_PATH_3F),
		.landMonsInfo = &sNavelRockSummitPath3F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockSummitPath3F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockSummitPath3F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_SUMMIT_PATH_4F),
		.mapNum = MAP_NUM(NAVEL_ROCK_SUMMIT_PATH_4F),
		.landMonsInfo = &sNavelRockSummitPath4F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockSummitPath4F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockSummitPath4F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_SUMMIT_PATH_5F),
		.mapNum = MAP_NUM(NAVEL_ROCK_SUMMIT_PATH_5F),
		.landMonsInfo = &sNavelRockSummitPath5F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockSummitPath5F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockSummitPath5F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_BASE_PATH_B1F),
		.mapNum = MAP_NUM(NAVEL_ROCK_BASE_PATH_B1F),
		.landMonsInfo = &sNavelRockBasePathB1F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockBasePathB1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockBasePathB1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_BASE_PATH_B2F),
		.mapNum = MAP_NUM(NAVEL_ROCK_BASE_PATH_B2F),
		.landMonsInfo = &sNavelRockBasePathB2F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockBasePathB2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockBasePathB2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_BASE_PATH_B3F),
		.mapNum = MAP_NUM(NAVEL_ROCK_BASE_PATH_B3F),
		.landMonsInfo = &sNavelRockBasePathB3F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockBasePathB3F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockBasePathB3F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_BASE_PATH_B4F),
		.mapNum = MAP_NUM(NAVEL_ROCK_BASE_PATH_B4F),
		.landMonsInfo = &sNavelRockBasePathB4F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockBasePathB4F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockBasePathB4F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_BASE_PATH_B5F),
		.mapNum = MAP_NUM(NAVEL_ROCK_BASE_PATH_B5F),
		.landMonsInfo = &sNavelRockBasePathB5F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockBasePathB5F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockBasePathB5F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_BASE_PATH_B6F),
		.mapNum = MAP_NUM(NAVEL_ROCK_BASE_PATH_B6F),
		.landMonsInfo = &sNavelRockBasePathB6F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockBasePathB6F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockBasePathB6F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_BASE_PATH_B7F),
		.mapNum = MAP_NUM(NAVEL_ROCK_BASE_PATH_B7F),
		.landMonsInfo = &sNavelRockBasePathB7F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockBasePathB7F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockBasePathB7F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_BASE_PATH_B8F),
		.mapNum = MAP_NUM(NAVEL_ROCK_BASE_PATH_B8F),
		.landMonsInfo = &sNavelRockBasePathB8F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockBasePathB8F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockBasePathB8F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_BASE_PATH_B9F),
		.mapNum = MAP_NUM(NAVEL_ROCK_BASE_PATH_B9F),
		.landMonsInfo = &sNavelRockBasePathB9F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockBasePathB9F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockBasePathB9F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_BASE_PATH_B10F),
		.mapNum = MAP_NUM(NAVEL_ROCK_BASE_PATH_B10F),
		.landMonsInfo = &sNavelRockBasePathB10F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockBasePathB10F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockBasePathB10F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_BASE_PATH_B11F),
		.mapNum = MAP_NUM(NAVEL_ROCK_BASE_PATH_B11F),
		.landMonsInfo = &sNavelRockBasePathB11F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockBasePathB11F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockBasePathB11F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_B1F),
		.mapNum = MAP_NUM(NAVEL_ROCK_B1F),
		.landMonsInfo = &sNavelRockB1F_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockB1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockB1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_FORK),
		.mapNum = MAP_NUM(NAVEL_ROCK_FORK),
		.landMonsInfo = &sNavelRockFork_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockFork_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockFork_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(BIRTH_ISLAND_EXTERIOR),
		.mapNum = MAP_NUM(BIRTH_ISLAND_EXTERIOR),
		.landMonsInfo = &sBirthIslandExterior_LandMonsInfoDay,
		.waterMonsInfo = &sBirthIslandExterior_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sBirthIslandExterior_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_KINDLE_ROAD_EMBER_SPA),
		.mapNum = MAP_NUM(ONE_ISLAND_KINDLE_ROAD_EMBER_SPA),
		.landMonsInfo = &sOneIslandKindleRoadEmberSpa_LandMonsInfoDay,
		.waterMonsInfo = &sOneIslandKindleRoadEmberSpa_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sOneIslandKindleRoadEmberSpa_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(BIRTH_ISLAND_HARBOR),
		.mapNum = MAP_NUM(BIRTH_ISLAND_HARBOR),
		.landMonsInfo = &sBirthIslandHarbor_LandMonsInfoDay,
		.waterMonsInfo = &sBirthIslandHarbor_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sBirthIslandHarbor_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(NAVEL_ROCK_HARBOR),
		.mapNum = MAP_NUM(NAVEL_ROCK_HARBOR),
		.landMonsInfo = &sNavelRockHarbor_LandMonsInfoDay,
		.waterMonsInfo = &sNavelRockHarbor_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sNavelRockHarbor_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(PALLET_TOWN),
		.mapNum = MAP_NUM(PALLET_TOWN),
		.landMonsInfo = &sPalletTown_LandMonsInfoDay,
		.waterMonsInfo = &sPalletTown_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPalletTown_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VIRIDIAN_CITY),
		.mapNum = MAP_NUM(VIRIDIAN_CITY),
		.landMonsInfo = &sViridianCity_LandMonsInfoDay,
		.waterMonsInfo = &sViridianCity_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sViridianCity_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(PEWTER_CITY),
		.mapNum = MAP_NUM(PEWTER_CITY),
		.landMonsInfo = &sPewterCity_LandMonsInfoDay,
		.waterMonsInfo = &sPewterCity_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPewterCity_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CERULEAN_CITY),
		.mapNum = MAP_NUM(CERULEAN_CITY),
		.landMonsInfo = &sCeruleanCity_LandMonsInfoDay,
		.waterMonsInfo = &sCeruleanCity_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeruleanCity_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(LAVENDER_TOWN),
		.mapNum = MAP_NUM(LAVENDER_TOWN),
		.landMonsInfo = &sLavenderTown_LandMonsInfoDay,
		.waterMonsInfo = &sLavenderTown_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sLavenderTown_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VERMILION_CITY),
		.mapNum = MAP_NUM(VERMILION_CITY),
		.landMonsInfo = &sVermilionCity_LandMonsInfoDay,
		.waterMonsInfo = &sVermilionCity_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sVermilionCity_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY),
		.mapNum = MAP_NUM(CELADON_CITY),
		.landMonsInfo = &sCeladonCity_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCity_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCity_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FUCHSIA_CITY),
		.mapNum = MAP_NUM(FUCHSIA_CITY),
		.landMonsInfo = &sFuchsiaCity_LandMonsInfoDay,
		.waterMonsInfo = &sFuchsiaCity_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFuchsiaCity_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CINNABAR_ISLAND),
		.mapNum = MAP_NUM(CINNABAR_ISLAND),
		.landMonsInfo = &sCinnabarIsland_LandMonsInfoDay,
		.waterMonsInfo = &sCinnabarIsland_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCinnabarIsland_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(INDIGO_PLATEAU_EXTERIOR),
		.mapNum = MAP_NUM(INDIGO_PLATEAU_EXTERIOR),
		.landMonsInfo = &sIndigoPlateauExterior_LandMonsInfoDay,
		.waterMonsInfo = &sIndigoPlateauExterior_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sIndigoPlateauExterior_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFFRON_CITY),
		.mapNum = MAP_NUM(SAFFRON_CITY),
		.landMonsInfo = &sSaffronCity_LandMonsInfoDay,
		.waterMonsInfo = &sSaffronCity_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSaffronCity_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFFRON_CITY_CLASSIC),
		.mapNum = MAP_NUM(SAFFRON_CITY_CLASSIC),
		.landMonsInfo = &sSaffronCityClassic_LandMonsInfoDay,
		.waterMonsInfo = &sSaffronCityClassic_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSaffronCityClassic_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND),
		.mapNum = MAP_NUM(ONE_ISLAND),
		.landMonsInfo = &sOneIsland_LandMonsInfoDay,
		.waterMonsInfo = &sOneIsland_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sOneIsland_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(TWO_ISLAND),
		.mapNum = MAP_NUM(TWO_ISLAND),
		.landMonsInfo = &sTwoIsland_LandMonsInfoDay,
		.waterMonsInfo = &sTwoIsland_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sTwoIsland_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND),
		.mapNum = MAP_NUM(THREE_ISLAND),
		.landMonsInfo = &sThreeIsland_LandMonsInfoDay,
		.waterMonsInfo = &sThreeIsland_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sThreeIsland_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FOUR_ISLAND),
		.mapNum = MAP_NUM(FOUR_ISLAND),
		.landMonsInfo = &sFourIsland_LandMonsInfoDay,
		.waterMonsInfo = &sFourIsland_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFourIsland_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND),
		.mapNum = MAP_NUM(FIVE_ISLAND),
		.landMonsInfo = &sFiveIsland_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIsland_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIsland_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND),
		.mapNum = MAP_NUM(SEVEN_ISLAND),
		.landMonsInfo = &sSevenIsland_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIsland_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIsland_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND),
		.mapNum = MAP_NUM(SIX_ISLAND),
		.landMonsInfo = &sSixIsland_LandMonsInfoDay,
		.waterMonsInfo = &sSixIsland_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIsland_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_2),
		.mapNum = MAP_NUM(ROUTE_2),
		.landMonsInfo = &sRoute2_LandMonsInfoDay,
		.waterMonsInfo = &sRoute2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_3),
		.mapNum = MAP_NUM(ROUTE_3),
		.landMonsInfo = &sRoute3_LandMonsInfoDay,
		.waterMonsInfo = &sRoute3_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute3_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_4),
		.mapNum = MAP_NUM(ROUTE_4),
		.landMonsInfo = &sRoute4_LandMonsInfoDay,
		.waterMonsInfo = &sRoute4_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute4_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_5),
		.mapNum = MAP_NUM(ROUTE_5),
		.landMonsInfo = &sRoute5_LandMonsInfoDay,
		.waterMonsInfo = &sRoute5_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute5_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_6),
		.mapNum = MAP_NUM(ROUTE_6),
		.landMonsInfo = &sRoute6_LandMonsInfoDay,
		.waterMonsInfo = &sRoute6_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute6_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_7),
		.mapNum = MAP_NUM(ROUTE_7),
		.landMonsInfo = &sRoute7_LandMonsInfoDay,
		.waterMonsInfo = &sRoute7_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute7_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_8),
		.mapNum = MAP_NUM(ROUTE_8),
		.landMonsInfo = &sRoute8_LandMonsInfoDay,
		.waterMonsInfo = &sRoute8_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute8_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_9),
		.mapNum = MAP_NUM(ROUTE_9),
		.landMonsInfo = &sRoute9_LandMonsInfoDay,
		.waterMonsInfo = &sRoute9_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute9_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_10),
		.mapNum = MAP_NUM(ROUTE_10),
		.landMonsInfo = &sRoute10_LandMonsInfoDay,
		.waterMonsInfo = &sRoute10_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute10_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_11),
		.mapNum = MAP_NUM(ROUTE_11),
		.landMonsInfo = &sRoute11_LandMonsInfoDay,
		.waterMonsInfo = &sRoute11_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute11_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_12),
		.mapNum = MAP_NUM(ROUTE_12),
		.landMonsInfo = &sRoute12_LandMonsInfoDay,
		.waterMonsInfo = &sRoute12_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute12_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_13),
		.mapNum = MAP_NUM(ROUTE_13),
		.landMonsInfo = &sRoute13_LandMonsInfoDay,
		.waterMonsInfo = &sRoute13_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute13_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_14),
		.mapNum = MAP_NUM(ROUTE_14),
		.landMonsInfo = &sRoute14_LandMonsInfoDay,
		.waterMonsInfo = &sRoute14_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute14_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_15),
		.mapNum = MAP_NUM(ROUTE_15),
		.landMonsInfo = &sRoute15_LandMonsInfoDay,
		.waterMonsInfo = &sRoute15_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute15_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_16),
		.mapNum = MAP_NUM(ROUTE_16),
		.landMonsInfo = &sRoute16_LandMonsInfoDay,
		.waterMonsInfo = &sRoute16_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute16_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_17),
		.mapNum = MAP_NUM(ROUTE_17),
		.landMonsInfo = &sRoute17_LandMonsInfoDay,
		.waterMonsInfo = &sRoute17_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute17_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_18),
		.mapNum = MAP_NUM(ROUTE_18),
		.landMonsInfo = &sRoute18_LandMonsInfoDay,
		.waterMonsInfo = &sRoute18_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute18_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_19),
		.mapNum = MAP_NUM(ROUTE_19),
		.landMonsInfo = &sRoute19_LandMonsInfoDay,
		.waterMonsInfo = &sRoute19_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute19_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_20),
		.mapNum = MAP_NUM(ROUTE_20),
		.landMonsInfo = &sRoute20_LandMonsInfoDay,
		.waterMonsInfo = &sRoute20_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute20_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_21_A),
		.mapNum = MAP_NUM(ROUTE_21_A),
		.landMonsInfo = &sRoute21A_LandMonsInfoDay,
		.waterMonsInfo = &sRoute21A_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute21A_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_21_B),
		.mapNum = MAP_NUM(ROUTE_21_B),
		.landMonsInfo = &sRoute21B_LandMonsInfoDay,
		.waterMonsInfo = &sRoute21B_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute21B_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_22),
		.mapNum = MAP_NUM(ROUTE_22),
		.landMonsInfo = &sRoute22_LandMonsInfoDay,
		.waterMonsInfo = &sRoute22_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute22_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_23),
		.mapNum = MAP_NUM(ROUTE_23),
		.landMonsInfo = &sRoute23_LandMonsInfoDay,
		.waterMonsInfo = &sRoute23_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute23_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_24),
		.mapNum = MAP_NUM(ROUTE_24),
		.landMonsInfo = &sRoute24_LandMonsInfoDay,
		.waterMonsInfo = &sRoute24_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute24_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_25),
		.mapNum = MAP_NUM(ROUTE_25),
		.landMonsInfo = &sRoute25_LandMonsInfoDay,
		.waterMonsInfo = &sRoute25_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute25_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_KINDLE_ROAD),
		.mapNum = MAP_NUM(ONE_ISLAND_KINDLE_ROAD),
		.landMonsInfo = &sOneIslandKindleRoad_LandMonsInfoDay,
		.waterMonsInfo = &sOneIslandKindleRoad_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sOneIslandKindleRoad_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_TREASURE_BEACH),
		.mapNum = MAP_NUM(ONE_ISLAND_TREASURE_BEACH),
		.landMonsInfo = &sOneIslandTreasureBeach_LandMonsInfoDay,
		.waterMonsInfo = &sOneIslandTreasureBeach_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sOneIslandTreasureBeach_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(TWO_ISLAND_CAPE_BRINK),
		.mapNum = MAP_NUM(TWO_ISLAND_CAPE_BRINK),
		.landMonsInfo = &sTwoIslandCapeBrink_LandMonsInfoDay,
		.waterMonsInfo = &sTwoIslandCapeBrink_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sTwoIslandCapeBrink_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_BOND_BRIDGE),
		.mapNum = MAP_NUM(THREE_ISLAND_BOND_BRIDGE),
		.landMonsInfo = &sThreeIslandBondBridge_LandMonsInfoDay,
		.waterMonsInfo = &sThreeIslandBondBridge_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sThreeIslandBondBridge_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_PORT),
		.mapNum = MAP_NUM(THREE_ISLAND_PORT),
		.landMonsInfo = &sThreeIslandPort_LandMonsInfoDay,
		.waterMonsInfo = &sThreeIslandPort_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sThreeIslandPort_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_RESORT_GORGEOUS),
		.mapNum = MAP_NUM(FIVE_ISLAND_RESORT_GORGEOUS),
		.landMonsInfo = &sFiveIslandResortGorgeous_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandResortGorgeous_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandResortGorgeous_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_WATER_LABYRINTH),
		.mapNum = MAP_NUM(FIVE_ISLAND_WATER_LABYRINTH),
		.landMonsInfo = &sFiveIslandWaterLabyrinth_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandWaterLabyrinth_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandWaterLabyrinth_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_MEADOW),
		.mapNum = MAP_NUM(FIVE_ISLAND_MEADOW),
		.landMonsInfo = &sFiveIslandMeadow_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandMeadow_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandMeadow_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_MEMORIAL_PILLAR),
		.mapNum = MAP_NUM(FIVE_ISLAND_MEMORIAL_PILLAR),
		.landMonsInfo = &sFiveIslandMemorialPillar_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandMemorialPillar_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandMemorialPillar_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_OUTCAST_ISLAND),
		.mapNum = MAP_NUM(SIX_ISLAND_OUTCAST_ISLAND),
		.landMonsInfo = &sSixIslandOutcastIsland_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandOutcastIsland_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandOutcastIsland_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_GREEN_PATH),
		.mapNum = MAP_NUM(SIX_ISLAND_GREEN_PATH),
		.landMonsInfo = &sSixIslandGreenPath_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandGreenPath_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandGreenPath_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_WATER_PATH),
		.mapNum = MAP_NUM(SIX_ISLAND_WATER_PATH),
		.landMonsInfo = &sSixIslandWaterPath_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandWaterPath_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandWaterPath_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_RUIN_VALLEY),
		.mapNum = MAP_NUM(SIX_ISLAND_RUIN_VALLEY),
		.landMonsInfo = &sSixIslandRuinValley_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandRuinValley_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandRuinValley_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TRAINER_TOWER),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TRAINER_TOWER),
		.landMonsInfo = &sSevenIslandTrainerTower_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTrainerTower_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTrainerTower_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_SEVAULT_CANYON_ENTRANCE),
		.mapNum = MAP_NUM(SEVEN_ISLAND_SEVAULT_CANYON_ENTRANCE),
		.landMonsInfo = &sSevenIslandSevaultCanyonEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandSevaultCanyonEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandSevaultCanyonEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_SEVAULT_CANYON),
		.mapNum = MAP_NUM(SEVEN_ISLAND_SEVAULT_CANYON),
		.landMonsInfo = &sSevenIslandSevaultCanyon_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandSevaultCanyon_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandSevaultCanyon_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS),
		.mapNum = MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS),
		.landMonsInfo = &sSevenIslandTanobyRuins_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandTanobyRuins_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandTanobyRuins_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(PALLET_TOWN_PLAYERS_HOUSE_1F),
		.mapNum = MAP_NUM(PALLET_TOWN_PLAYERS_HOUSE_1F),
		.landMonsInfo = &sPalletTownPlayersHouse1F_LandMonsInfoDay,
		.waterMonsInfo = &sPalletTownPlayersHouse1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPalletTownPlayersHouse1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(PALLET_TOWN_PLAYERS_HOUSE_2F),
		.mapNum = MAP_NUM(PALLET_TOWN_PLAYERS_HOUSE_2F),
		.landMonsInfo = &sPalletTownPlayersHouse2F_LandMonsInfoDay,
		.waterMonsInfo = &sPalletTownPlayersHouse2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPalletTownPlayersHouse2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(PALLET_TOWN_GARYS_HOUSE),
		.mapNum = MAP_NUM(PALLET_TOWN_GARYS_HOUSE),
		.landMonsInfo = &sPalletTownGarysHouse_LandMonsInfoDay,
		.waterMonsInfo = &sPalletTownGarysHouse_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPalletTownGarysHouse_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(PALLET_TOWN_PROFESSOR_OAKS_LAB),
		.mapNum = MAP_NUM(PALLET_TOWN_PROFESSOR_OAKS_LAB),
		.landMonsInfo = &sPalletTownProfessorOaksLab_LandMonsInfoDay,
		.waterMonsInfo = &sPalletTownProfessorOaksLab_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPalletTownProfessorOaksLab_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VIRIDIAN_CITY_HOUSE1),
		.mapNum = MAP_NUM(VIRIDIAN_CITY_HOUSE1),
		.landMonsInfo = &sViridianCityHouse1_LandMonsInfoDay,
		.waterMonsInfo = &sViridianCityHouse1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sViridianCityHouse1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VIRIDIAN_CITY_GYM),
		.mapNum = MAP_NUM(VIRIDIAN_CITY_GYM),
		.landMonsInfo = &sViridianCityGym_LandMonsInfoDay,
		.waterMonsInfo = &sViridianCityGym_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sViridianCityGym_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VIRIDIAN_CITY_HOUSE2),
		.mapNum = MAP_NUM(VIRIDIAN_CITY_HOUSE2),
		.landMonsInfo = &sViridianCityHouse2_LandMonsInfoDay,
		.waterMonsInfo = &sViridianCityHouse2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sViridianCityHouse2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VIRIDIAN_CITY_MART),
		.mapNum = MAP_NUM(VIRIDIAN_CITY_MART),
		.landMonsInfo = &sViridianCityMart_LandMonsInfoDay,
		.waterMonsInfo = &sViridianCityMart_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sViridianCityMart_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VIRIDIAN_CITY_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(VIRIDIAN_CITY_POKEMON_CENTER_1F),
		.landMonsInfo = &sViridianCityPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sViridianCityPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sViridianCityPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VIRIDIAN_CITY_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(VIRIDIAN_CITY_POKEMON_CENTER_2F),
		.landMonsInfo = &sViridianCityPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sViridianCityPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sViridianCityPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(PEWTER_CITY_MUSEUM_1F),
		.mapNum = MAP_NUM(PEWTER_CITY_MUSEUM_1F),
		.landMonsInfo = &sPewterCityMuseum1F_LandMonsInfoDay,
		.waterMonsInfo = &sPewterCityMuseum1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPewterCityMuseum1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(PEWTER_CITY_MUSEUM_2F),
		.mapNum = MAP_NUM(PEWTER_CITY_MUSEUM_2F),
		.landMonsInfo = &sPewterCityMuseum2F_LandMonsInfoDay,
		.waterMonsInfo = &sPewterCityMuseum2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPewterCityMuseum2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(PEWTER_CITY_GYM),
		.mapNum = MAP_NUM(PEWTER_CITY_GYM),
		.landMonsInfo = &sPewterCityGym_LandMonsInfoDay,
		.waterMonsInfo = &sPewterCityGym_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPewterCityGym_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(PEWTER_CITY_MART),
		.mapNum = MAP_NUM(PEWTER_CITY_MART),
		.landMonsInfo = &sPewterCityMart_LandMonsInfoDay,
		.waterMonsInfo = &sPewterCityMart_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPewterCityMart_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(PEWTER_CITY_HOUSE1),
		.mapNum = MAP_NUM(PEWTER_CITY_HOUSE1),
		.landMonsInfo = &sPewterCityHouse1_LandMonsInfoDay,
		.waterMonsInfo = &sPewterCityHouse1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPewterCityHouse1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(PEWTER_CITY_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(PEWTER_CITY_POKEMON_CENTER_1F),
		.landMonsInfo = &sPewterCityPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sPewterCityPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPewterCityPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(PEWTER_CITY_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(PEWTER_CITY_POKEMON_CENTER_2F),
		.landMonsInfo = &sPewterCityPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sPewterCityPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPewterCityPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(PEWTER_CITY_HOUSE2),
		.mapNum = MAP_NUM(PEWTER_CITY_HOUSE2),
		.landMonsInfo = &sPewterCityHouse2_LandMonsInfoDay,
		.waterMonsInfo = &sPewterCityHouse2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sPewterCityHouse2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CERULEAN_CITY_HOUSE1),
		.mapNum = MAP_NUM(CERULEAN_CITY_HOUSE1),
		.landMonsInfo = &sCeruleanCityHouse1_LandMonsInfoDay,
		.waterMonsInfo = &sCeruleanCityHouse1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeruleanCityHouse1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CERULEAN_CITY_HOUSE2),
		.mapNum = MAP_NUM(CERULEAN_CITY_HOUSE2),
		.landMonsInfo = &sCeruleanCityHouse2_LandMonsInfoDay,
		.waterMonsInfo = &sCeruleanCityHouse2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeruleanCityHouse2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CERULEAN_CITY_HOUSE3),
		.mapNum = MAP_NUM(CERULEAN_CITY_HOUSE3),
		.landMonsInfo = &sCeruleanCityHouse3_LandMonsInfoDay,
		.waterMonsInfo = &sCeruleanCityHouse3_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeruleanCityHouse3_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CERULEAN_CITY_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(CERULEAN_CITY_POKEMON_CENTER_1F),
		.landMonsInfo = &sCeruleanCityPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sCeruleanCityPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeruleanCityPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CERULEAN_CITY_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(CERULEAN_CITY_POKEMON_CENTER_2F),
		.landMonsInfo = &sCeruleanCityPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sCeruleanCityPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeruleanCityPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CERULEAN_CITY_GYM),
		.mapNum = MAP_NUM(CERULEAN_CITY_GYM),
		.landMonsInfo = &sCeruleanCityGym_LandMonsInfoDay,
		.waterMonsInfo = &sCeruleanCityGym_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeruleanCityGym_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CERULEAN_CITY_BIKE_SHOP),
		.mapNum = MAP_NUM(CERULEAN_CITY_BIKE_SHOP),
		.landMonsInfo = &sCeruleanCityBikeShop_LandMonsInfoDay,
		.waterMonsInfo = &sCeruleanCityBikeShop_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeruleanCityBikeShop_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CERULEAN_CITY_MART),
		.mapNum = MAP_NUM(CERULEAN_CITY_MART),
		.landMonsInfo = &sCeruleanCityMart_LandMonsInfoDay,
		.waterMonsInfo = &sCeruleanCityMart_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeruleanCityMart_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CERULEAN_CITY_HOUSE4),
		.mapNum = MAP_NUM(CERULEAN_CITY_HOUSE4),
		.landMonsInfo = &sCeruleanCityHouse4_LandMonsInfoDay,
		.waterMonsInfo = &sCeruleanCityHouse4_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeruleanCityHouse4_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CERULEAN_CITY_HOUSE5),
		.mapNum = MAP_NUM(CERULEAN_CITY_HOUSE5),
		.landMonsInfo = &sCeruleanCityHouse5_LandMonsInfoDay,
		.waterMonsInfo = &sCeruleanCityHouse5_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeruleanCityHouse5_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(LAVENDER_TOWN_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(LAVENDER_TOWN_POKEMON_CENTER_1F),
		.landMonsInfo = &sLavenderTownPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sLavenderTownPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sLavenderTownPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(LAVENDER_TOWN_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(LAVENDER_TOWN_POKEMON_CENTER_2F),
		.landMonsInfo = &sLavenderTownPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sLavenderTownPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sLavenderTownPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(LAVENDER_TOWN_VOLUNTEER_POKEMON_HOUSE),
		.mapNum = MAP_NUM(LAVENDER_TOWN_VOLUNTEER_POKEMON_HOUSE),
		.landMonsInfo = &sLavenderTownVolunteerPokemonHouse_LandMonsInfoDay,
		.waterMonsInfo = &sLavenderTownVolunteerPokemonHouse_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sLavenderTownVolunteerPokemonHouse_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(LAVENDER_TOWN_HOUSE1),
		.mapNum = MAP_NUM(LAVENDER_TOWN_HOUSE1),
		.landMonsInfo = &sLavenderTownHouse1_LandMonsInfoDay,
		.waterMonsInfo = &sLavenderTownHouse1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sLavenderTownHouse1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(LAVENDER_TOWN_HOUSE2),
		.mapNum = MAP_NUM(LAVENDER_TOWN_HOUSE2),
		.landMonsInfo = &sLavenderTownHouse2_LandMonsInfoDay,
		.waterMonsInfo = &sLavenderTownHouse2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sLavenderTownHouse2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(LAVENDER_TOWN_MART),
		.mapNum = MAP_NUM(LAVENDER_TOWN_MART),
		.landMonsInfo = &sLavenderTownMart_LandMonsInfoDay,
		.waterMonsInfo = &sLavenderTownMart_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sLavenderTownMart_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VERMILION_CITY_HOUSE1),
		.mapNum = MAP_NUM(VERMILION_CITY_HOUSE1),
		.landMonsInfo = &sVermilionCityHouse1_LandMonsInfoDay,
		.waterMonsInfo = &sVermilionCityHouse1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sVermilionCityHouse1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VERMILION_CITY_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(VERMILION_CITY_POKEMON_CENTER_1F),
		.landMonsInfo = &sVermilionCityPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sVermilionCityPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sVermilionCityPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VERMILION_CITY_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(VERMILION_CITY_POKEMON_CENTER_2F),
		.landMonsInfo = &sVermilionCityPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sVermilionCityPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sVermilionCityPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VERMILION_CITY_POKEMON_FAN_CLUB),
		.mapNum = MAP_NUM(VERMILION_CITY_POKEMON_FAN_CLUB),
		.landMonsInfo = &sVermilionCityPokemonFanClub_LandMonsInfoDay,
		.waterMonsInfo = &sVermilionCityPokemonFanClub_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sVermilionCityPokemonFanClub_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VERMILION_CITY_HOUSE2),
		.mapNum = MAP_NUM(VERMILION_CITY_HOUSE2),
		.landMonsInfo = &sVermilionCityHouse2_LandMonsInfoDay,
		.waterMonsInfo = &sVermilionCityHouse2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sVermilionCityHouse2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VERMILION_CITY_MART),
		.mapNum = MAP_NUM(VERMILION_CITY_MART),
		.landMonsInfo = &sVermilionCityMart_LandMonsInfoDay,
		.waterMonsInfo = &sVermilionCityMart_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sVermilionCityMart_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VERMILION_CITY_GYM),
		.mapNum = MAP_NUM(VERMILION_CITY_GYM),
		.landMonsInfo = &sVermilionCityGym_LandMonsInfoDay,
		.waterMonsInfo = &sVermilionCityGym_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sVermilionCityGym_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(VERMILION_CITY_HOUSE3),
		.mapNum = MAP_NUM(VERMILION_CITY_HOUSE3),
		.landMonsInfo = &sVermilionCityHouse3_LandMonsInfoDay,
		.waterMonsInfo = &sVermilionCityHouse3_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sVermilionCityHouse3_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_DEPARTMENT_STORE_1F),
		.mapNum = MAP_NUM(CELADON_CITY_DEPARTMENT_STORE_1F),
		.landMonsInfo = &sCeladonCityDepartmentStore1F_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityDepartmentStore1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityDepartmentStore1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_DEPARTMENT_STORE_2F),
		.mapNum = MAP_NUM(CELADON_CITY_DEPARTMENT_STORE_2F),
		.landMonsInfo = &sCeladonCityDepartmentStore2F_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityDepartmentStore2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityDepartmentStore2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_DEPARTMENT_STORE_3F),
		.mapNum = MAP_NUM(CELADON_CITY_DEPARTMENT_STORE_3F),
		.landMonsInfo = &sCeladonCityDepartmentStore3F_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityDepartmentStore3F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityDepartmentStore3F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_DEPARTMENT_STORE_4F),
		.mapNum = MAP_NUM(CELADON_CITY_DEPARTMENT_STORE_4F),
		.landMonsInfo = &sCeladonCityDepartmentStore4F_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityDepartmentStore4F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityDepartmentStore4F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_DEPARTMENT_STORE_5F),
		.mapNum = MAP_NUM(CELADON_CITY_DEPARTMENT_STORE_5F),
		.landMonsInfo = &sCeladonCityDepartmentStore5F_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityDepartmentStore5F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityDepartmentStore5F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_DEPARTMENT_STORE_ROOF),
		.mapNum = MAP_NUM(CELADON_CITY_DEPARTMENT_STORE_ROOF),
		.landMonsInfo = &sCeladonCityDepartmentStoreRoof_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityDepartmentStoreRoof_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityDepartmentStoreRoof_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_DEPARTMENT_STORE_ELEVATOR),
		.mapNum = MAP_NUM(CELADON_CITY_DEPARTMENT_STORE_ELEVATOR),
		.landMonsInfo = &sCeladonCityDepartmentStoreElevator_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityDepartmentStoreElevator_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityDepartmentStoreElevator_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_CONDOMINIUMS_1F),
		.mapNum = MAP_NUM(CELADON_CITY_CONDOMINIUMS_1F),
		.landMonsInfo = &sCeladonCityCondominiums1F_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityCondominiums1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityCondominiums1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_CONDOMINIUMS_2F),
		.mapNum = MAP_NUM(CELADON_CITY_CONDOMINIUMS_2F),
		.landMonsInfo = &sCeladonCityCondominiums2F_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityCondominiums2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityCondominiums2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_CONDOMINIUMS_3F),
		.mapNum = MAP_NUM(CELADON_CITY_CONDOMINIUMS_3F),
		.landMonsInfo = &sCeladonCityCondominiums3F_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityCondominiums3F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityCondominiums3F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_CONDOMINIUMS_ROOF),
		.mapNum = MAP_NUM(CELADON_CITY_CONDOMINIUMS_ROOF),
		.landMonsInfo = &sCeladonCityCondominiumsRoof_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityCondominiumsRoof_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityCondominiumsRoof_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_CONDOMINIUMS_ROOF_ROOM),
		.mapNum = MAP_NUM(CELADON_CITY_CONDOMINIUMS_ROOF_ROOM),
		.landMonsInfo = &sCeladonCityCondominiumsRoofRoom_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityCondominiumsRoofRoom_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityCondominiumsRoofRoom_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(CELADON_CITY_POKEMON_CENTER_1F),
		.landMonsInfo = &sCeladonCityPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(CELADON_CITY_POKEMON_CENTER_2F),
		.landMonsInfo = &sCeladonCityPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_GAME_CORNER),
		.mapNum = MAP_NUM(CELADON_CITY_GAME_CORNER),
		.landMonsInfo = &sCeladonCityGameCorner_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityGameCorner_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityGameCorner_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_GAME_CORNER_PRIZE_ROOM),
		.mapNum = MAP_NUM(CELADON_CITY_GAME_CORNER_PRIZE_ROOM),
		.landMonsInfo = &sCeladonCityGameCornerPrizeRoom_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityGameCornerPrizeRoom_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityGameCornerPrizeRoom_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_GYM),
		.mapNum = MAP_NUM(CELADON_CITY_GYM),
		.landMonsInfo = &sCeladonCityGym_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityGym_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityGym_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_RESTAURANT),
		.mapNum = MAP_NUM(CELADON_CITY_RESTAURANT),
		.landMonsInfo = &sCeladonCityRestaurant_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityRestaurant_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityRestaurant_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_HOUSE1),
		.mapNum = MAP_NUM(CELADON_CITY_HOUSE1),
		.landMonsInfo = &sCeladonCityHouse1_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityHouse1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityHouse1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CELADON_CITY_HOTEL),
		.mapNum = MAP_NUM(CELADON_CITY_HOTEL),
		.landMonsInfo = &sCeladonCityHotel_LandMonsInfoDay,
		.waterMonsInfo = &sCeladonCityHotel_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCeladonCityHotel_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE),
		.mapNum = MAP_NUM(FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE),
		.landMonsInfo = &sFuchsiaCitySafariZoneEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sFuchsiaCitySafariZoneEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFuchsiaCitySafariZoneEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FUCHSIA_CITY_MART),
		.mapNum = MAP_NUM(FUCHSIA_CITY_MART),
		.landMonsInfo = &sFuchsiaCityMart_LandMonsInfoDay,
		.waterMonsInfo = &sFuchsiaCityMart_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFuchsiaCityMart_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FUCHSIA_CITY_ZOO_BUILDING),
		.mapNum = MAP_NUM(FUCHSIA_CITY_ZOO_BUILDING),
		.landMonsInfo = &sFuchsiaCityZooBuilding_LandMonsInfoDay,
		.waterMonsInfo = &sFuchsiaCityZooBuilding_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFuchsiaCityZooBuilding_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FUCHSIA_CITY_GYM),
		.mapNum = MAP_NUM(FUCHSIA_CITY_GYM),
		.landMonsInfo = &sFuchsiaCityGym_LandMonsInfoDay,
		.waterMonsInfo = &sFuchsiaCityGym_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFuchsiaCityGym_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FUCHSIA_CITY_HOUSE1),
		.mapNum = MAP_NUM(FUCHSIA_CITY_HOUSE1),
		.landMonsInfo = &sFuchsiaCityHouse1_LandMonsInfoDay,
		.waterMonsInfo = &sFuchsiaCityHouse1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFuchsiaCityHouse1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FUCHSIA_CITY_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(FUCHSIA_CITY_POKEMON_CENTER_1F),
		.landMonsInfo = &sFuchsiaCityPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sFuchsiaCityPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFuchsiaCityPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FUCHSIA_CITY_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(FUCHSIA_CITY_POKEMON_CENTER_2F),
		.landMonsInfo = &sFuchsiaCityPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sFuchsiaCityPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFuchsiaCityPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FUCHSIA_CITY_BUILDING1),
		.mapNum = MAP_NUM(FUCHSIA_CITY_BUILDING1),
		.landMonsInfo = &sFuchsiaCityBuilding1_LandMonsInfoDay,
		.waterMonsInfo = &sFuchsiaCityBuilding1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFuchsiaCityBuilding1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FUCHSIA_CITY_HOUSE2),
		.mapNum = MAP_NUM(FUCHSIA_CITY_HOUSE2),
		.landMonsInfo = &sFuchsiaCityHouse2_LandMonsInfoDay,
		.waterMonsInfo = &sFuchsiaCityHouse2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFuchsiaCityHouse2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FUCHSIA_CITY_HOUSE3),
		.mapNum = MAP_NUM(FUCHSIA_CITY_HOUSE3),
		.landMonsInfo = &sFuchsiaCityHouse3_LandMonsInfoDay,
		.waterMonsInfo = &sFuchsiaCityHouse3_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFuchsiaCityHouse3_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CINNABAR_ISLAND_GYM),
		.mapNum = MAP_NUM(CINNABAR_ISLAND_GYM),
		.landMonsInfo = &sCinnabarIslandGym_LandMonsInfoDay,
		.waterMonsInfo = &sCinnabarIslandGym_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCinnabarIslandGym_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CINNABAR_ISLAND_POKEMON_LAB_ENTRANCE),
		.mapNum = MAP_NUM(CINNABAR_ISLAND_POKEMON_LAB_ENTRANCE),
		.landMonsInfo = &sCinnabarIslandPokemonLabEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sCinnabarIslandPokemonLabEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCinnabarIslandPokemonLabEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CINNABAR_ISLAND_POKEMON_LAB_LOUNGE),
		.mapNum = MAP_NUM(CINNABAR_ISLAND_POKEMON_LAB_LOUNGE),
		.landMonsInfo = &sCinnabarIslandPokemonLabLounge_LandMonsInfoDay,
		.waterMonsInfo = &sCinnabarIslandPokemonLabLounge_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCinnabarIslandPokemonLabLounge_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CINNABAR_ISLAND_POKEMON_LAB_RESEARCH_ROOM),
		.mapNum = MAP_NUM(CINNABAR_ISLAND_POKEMON_LAB_RESEARCH_ROOM),
		.landMonsInfo = &sCinnabarIslandPokemonLabResearchRoom_LandMonsInfoDay,
		.waterMonsInfo = &sCinnabarIslandPokemonLabResearchRoom_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCinnabarIslandPokemonLabResearchRoom_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM),
		.mapNum = MAP_NUM(CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM),
		.landMonsInfo = &sCinnabarIslandPokemonLabExperimentRoom_LandMonsInfoDay,
		.waterMonsInfo = &sCinnabarIslandPokemonLabExperimentRoom_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCinnabarIslandPokemonLabExperimentRoom_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CINNABAR_ISLAND_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(CINNABAR_ISLAND_POKEMON_CENTER_1F),
		.landMonsInfo = &sCinnabarIslandPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sCinnabarIslandPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCinnabarIslandPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CINNABAR_ISLAND_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(CINNABAR_ISLAND_POKEMON_CENTER_2F),
		.landMonsInfo = &sCinnabarIslandPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sCinnabarIslandPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCinnabarIslandPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(CINNABAR_ISLAND_MART),
		.mapNum = MAP_NUM(CINNABAR_ISLAND_MART),
		.landMonsInfo = &sCinnabarIslandMart_LandMonsInfoDay,
		.waterMonsInfo = &sCinnabarIslandMart_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sCinnabarIslandMart_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(INDIGO_PLATEAU_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(INDIGO_PLATEAU_POKEMON_CENTER_1F),
		.landMonsInfo = &sIndigoPlateauPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sIndigoPlateauPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sIndigoPlateauPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(INDIGO_PLATEAU_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(INDIGO_PLATEAU_POKEMON_CENTER_2F),
		.landMonsInfo = &sIndigoPlateauPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sIndigoPlateauPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sIndigoPlateauPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFFRON_CITY_HOUSE1_1F),
		.mapNum = MAP_NUM(SAFFRON_CITY_HOUSE1_1F),
		.landMonsInfo = &sSaffronCityHouse11F_LandMonsInfoDay,
		.waterMonsInfo = &sSaffronCityHouse11F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSaffronCityHouse11F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFFRON_CITY_HOUSE1_2F),
		.mapNum = MAP_NUM(SAFFRON_CITY_HOUSE1_2F),
		.landMonsInfo = &sSaffronCityHouse12F_LandMonsInfoDay,
		.waterMonsInfo = &sSaffronCityHouse12F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSaffronCityHouse12F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFFRON_CITY_DOJO),
		.mapNum = MAP_NUM(SAFFRON_CITY_DOJO),
		.landMonsInfo = &sSaffronCityDojo_LandMonsInfoDay,
		.waterMonsInfo = &sSaffronCityDojo_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSaffronCityDojo_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFFRON_CITY_GYM),
		.mapNum = MAP_NUM(SAFFRON_CITY_GYM),
		.landMonsInfo = &sSaffronCityGym_LandMonsInfoDay,
		.waterMonsInfo = &sSaffronCityGym_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSaffronCityGym_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFFRON_CITY_HOUSE2),
		.mapNum = MAP_NUM(SAFFRON_CITY_HOUSE2),
		.landMonsInfo = &sSaffronCityHouse2_LandMonsInfoDay,
		.waterMonsInfo = &sSaffronCityHouse2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSaffronCityHouse2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFFRON_CITY_MART),
		.mapNum = MAP_NUM(SAFFRON_CITY_MART),
		.landMonsInfo = &sSaffronCityMart_LandMonsInfoDay,
		.waterMonsInfo = &sSaffronCityMart_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSaffronCityMart_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFFRON_CITY_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(SAFFRON_CITY_POKEMON_CENTER_1F),
		.landMonsInfo = &sSaffronCityPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sSaffronCityPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSaffronCityPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFFRON_CITY_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(SAFFRON_CITY_POKEMON_CENTER_2F),
		.landMonsInfo = &sSaffronCityPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sSaffronCityPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSaffronCityPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFFRON_CITY_HOUSE3),
		.mapNum = MAP_NUM(SAFFRON_CITY_HOUSE3),
		.landMonsInfo = &sSaffronCityHouse3_LandMonsInfoDay,
		.waterMonsInfo = &sSaffronCityHouse3_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSaffronCityHouse3_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB),
		.mapNum = MAP_NUM(SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB),
		.landMonsInfo = &sSaffronCityPokemonTrainerFanClub_LandMonsInfoDay,
		.waterMonsInfo = &sSaffronCityPokemonTrainerFanClub_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSaffronCityPokemonTrainerFanClub_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE2_VIRIDIAN_FOREST_SOUTH_ENTRANCE),
		.mapNum = MAP_NUM(ROUTE2_VIRIDIAN_FOREST_SOUTH_ENTRANCE),
		.landMonsInfo = &sRoute2ViridianForestSouthEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sRoute2ViridianForestSouthEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute2ViridianForestSouthEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE2_HOUSE),
		.mapNum = MAP_NUM(ROUTE2_HOUSE),
		.landMonsInfo = &sRoute2House_LandMonsInfoDay,
		.waterMonsInfo = &sRoute2House_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute2House_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE2_EAST_BUILDING),
		.mapNum = MAP_NUM(ROUTE2_EAST_BUILDING),
		.landMonsInfo = &sRoute2EastBuilding_LandMonsInfoDay,
		.waterMonsInfo = &sRoute2EastBuilding_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute2EastBuilding_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE2_VIRIDIAN_FOREST_NORTH_ENTRANCE),
		.mapNum = MAP_NUM(ROUTE2_VIRIDIAN_FOREST_NORTH_ENTRANCE),
		.landMonsInfo = &sRoute2ViridianForestNorthEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sRoute2ViridianForestNorthEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute2ViridianForestNorthEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE4_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(ROUTE4_POKEMON_CENTER_1F),
		.landMonsInfo = &sRoute4PokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sRoute4PokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute4PokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE4_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(ROUTE4_POKEMON_CENTER_2F),
		.landMonsInfo = &sRoute4PokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sRoute4PokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute4PokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE5_POKEMON_DAY_CARE),
		.mapNum = MAP_NUM(ROUTE5_POKEMON_DAY_CARE),
		.landMonsInfo = &sRoute5PokemonDayCare_LandMonsInfoDay,
		.waterMonsInfo = &sRoute5PokemonDayCare_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute5PokemonDayCare_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE5_SOUTH_ENTRANCE),
		.mapNum = MAP_NUM(ROUTE5_SOUTH_ENTRANCE),
		.landMonsInfo = &sRoute5SouthEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sRoute5SouthEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute5SouthEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE6_NORTH_ENTRANCE),
		.mapNum = MAP_NUM(ROUTE6_NORTH_ENTRANCE),
		.landMonsInfo = &sRoute6NorthEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sRoute6NorthEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute6NorthEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE7_EAST_ENTRANCE),
		.mapNum = MAP_NUM(ROUTE7_EAST_ENTRANCE),
		.landMonsInfo = &sRoute7EastEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sRoute7EastEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute7EastEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE8_WEST_ENTRANCE),
		.mapNum = MAP_NUM(ROUTE8_WEST_ENTRANCE),
		.landMonsInfo = &sRoute8WestEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sRoute8WestEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute8WestEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE10_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(ROUTE10_POKEMON_CENTER_1F),
		.landMonsInfo = &sRoute10PokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sRoute10PokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute10PokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE10_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(ROUTE10_POKEMON_CENTER_2F),
		.landMonsInfo = &sRoute10PokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sRoute10PokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute10PokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE11_EAST_ENTRANCE_1F),
		.mapNum = MAP_NUM(ROUTE11_EAST_ENTRANCE_1F),
		.landMonsInfo = &sRoute11EastEntrance1F_LandMonsInfoDay,
		.waterMonsInfo = &sRoute11EastEntrance1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute11EastEntrance1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE11_EAST_ENTRANCE_2F),
		.mapNum = MAP_NUM(ROUTE11_EAST_ENTRANCE_2F),
		.landMonsInfo = &sRoute11EastEntrance2F_LandMonsInfoDay,
		.waterMonsInfo = &sRoute11EastEntrance2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute11EastEntrance2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE12_NORTH_ENTRANCE_1F),
		.mapNum = MAP_NUM(ROUTE12_NORTH_ENTRANCE_1F),
		.landMonsInfo = &sRoute12NorthEntrance1F_LandMonsInfoDay,
		.waterMonsInfo = &sRoute12NorthEntrance1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute12NorthEntrance1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE12_NORTH_ENTRANCE_2F),
		.mapNum = MAP_NUM(ROUTE12_NORTH_ENTRANCE_2F),
		.landMonsInfo = &sRoute12NorthEntrance2F_LandMonsInfoDay,
		.waterMonsInfo = &sRoute12NorthEntrance2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute12NorthEntrance2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE12_FISHING_HOUSE),
		.mapNum = MAP_NUM(ROUTE12_FISHING_HOUSE),
		.landMonsInfo = &sRoute12FishingHouse_LandMonsInfoDay,
		.waterMonsInfo = &sRoute12FishingHouse_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute12FishingHouse_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE15_WEST_ENTRANCE_1F),
		.mapNum = MAP_NUM(ROUTE15_WEST_ENTRANCE_1F),
		.landMonsInfo = &sRoute15WestEntrance1F_LandMonsInfoDay,
		.waterMonsInfo = &sRoute15WestEntrance1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute15WestEntrance1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE15_WEST_ENTRANCE_2F),
		.mapNum = MAP_NUM(ROUTE15_WEST_ENTRANCE_2F),
		.landMonsInfo = &sRoute15WestEntrance2F_LandMonsInfoDay,
		.waterMonsInfo = &sRoute15WestEntrance2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute15WestEntrance2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE16_HOUSE),
		.mapNum = MAP_NUM(ROUTE16_HOUSE),
		.landMonsInfo = &sRoute16House_LandMonsInfoDay,
		.waterMonsInfo = &sRoute16House_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute16House_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE16_NORTH_ENTRANCE_1F),
		.mapNum = MAP_NUM(ROUTE16_NORTH_ENTRANCE_1F),
		.landMonsInfo = &sRoute16NorthEntrance1F_LandMonsInfoDay,
		.waterMonsInfo = &sRoute16NorthEntrance1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute16NorthEntrance1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE16_NORTH_ENTRANCE_2F),
		.mapNum = MAP_NUM(ROUTE16_NORTH_ENTRANCE_2F),
		.landMonsInfo = &sRoute16NorthEntrance2F_LandMonsInfoDay,
		.waterMonsInfo = &sRoute16NorthEntrance2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute16NorthEntrance2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE18_EAST_ENTRANCE_1F),
		.mapNum = MAP_NUM(ROUTE18_EAST_ENTRANCE_1F),
		.landMonsInfo = &sRoute18EastEntrance1F_LandMonsInfoDay,
		.waterMonsInfo = &sRoute18EastEntrance1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute18EastEntrance1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE18_EAST_ENTRANCE_2F),
		.mapNum = MAP_NUM(ROUTE18_EAST_ENTRANCE_2F),
		.landMonsInfo = &sRoute18EastEntrance2F_LandMonsInfoDay,
		.waterMonsInfo = &sRoute18EastEntrance2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute18EastEntrance2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE22_NORTH_ENTRANCE),
		.mapNum = MAP_NUM(ROUTE22_NORTH_ENTRANCE),
		.landMonsInfo = &sRoute22NorthEntrance_LandMonsInfoDay,
		.waterMonsInfo = &sRoute22NorthEntrance_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute22NorthEntrance_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE25_SEA_COTTAGE),
		.mapNum = MAP_NUM(ROUTE25_SEA_COTTAGE),
		.landMonsInfo = &sRoute25SeaCottage_LandMonsInfoDay,
		.waterMonsInfo = &sRoute25SeaCottage_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sRoute25SeaCottage_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_HOUSE_ROOM1),
		.mapNum = MAP_NUM(SEVEN_ISLAND_HOUSE_ROOM1),
		.landMonsInfo = &sSevenIslandHouseRoom1_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandHouseRoom1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandHouseRoom1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_HOUSE_ROOM2),
		.mapNum = MAP_NUM(SEVEN_ISLAND_HOUSE_ROOM2),
		.landMonsInfo = &sSevenIslandHouseRoom2_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandHouseRoom2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandHouseRoom2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_MART),
		.mapNum = MAP_NUM(SEVEN_ISLAND_MART),
		.landMonsInfo = &sSevenIslandMart_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandMart_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandMart_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(SEVEN_ISLAND_POKEMON_CENTER_1F),
		.landMonsInfo = &sSevenIslandPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(SEVEN_ISLAND_POKEMON_CENTER_2F),
		.landMonsInfo = &sSevenIslandPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_HARBOR),
		.mapNum = MAP_NUM(SEVEN_ISLAND_HARBOR),
		.landMonsInfo = &sSevenIslandHarbor_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandHarbor_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandHarbor_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(ONE_ISLAND_POKEMON_CENTER_1F),
		.landMonsInfo = &sOneIslandPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sOneIslandPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sOneIslandPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(ONE_ISLAND_POKEMON_CENTER_2F),
		.landMonsInfo = &sOneIslandPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sOneIslandPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sOneIslandPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_HOUSE1),
		.mapNum = MAP_NUM(ONE_ISLAND_HOUSE1),
		.landMonsInfo = &sOneIslandHouse1_LandMonsInfoDay,
		.waterMonsInfo = &sOneIslandHouse1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sOneIslandHouse1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_HOUSE2),
		.mapNum = MAP_NUM(ONE_ISLAND_HOUSE2),
		.landMonsInfo = &sOneIslandHouse2_LandMonsInfoDay,
		.waterMonsInfo = &sOneIslandHouse2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sOneIslandHouse2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_HARBOR),
		.mapNum = MAP_NUM(ONE_ISLAND_HARBOR),
		.landMonsInfo = &sOneIslandHarbor_LandMonsInfoDay,
		.waterMonsInfo = &sOneIslandHarbor_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sOneIslandHarbor_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(TWO_ISLAND_JOYFUL_GAME_CORNER),
		.mapNum = MAP_NUM(TWO_ISLAND_JOYFUL_GAME_CORNER),
		.landMonsInfo = &sTwoIslandJoyfulGameCorner_LandMonsInfoDay,
		.waterMonsInfo = &sTwoIslandJoyfulGameCorner_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sTwoIslandJoyfulGameCorner_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(TWO_ISLAND_HOUSE),
		.mapNum = MAP_NUM(TWO_ISLAND_HOUSE),
		.landMonsInfo = &sTwoIslandHouse_LandMonsInfoDay,
		.waterMonsInfo = &sTwoIslandHouse_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sTwoIslandHouse_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(TWO_ISLAND_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(TWO_ISLAND_POKEMON_CENTER_1F),
		.landMonsInfo = &sTwoIslandPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sTwoIslandPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sTwoIslandPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(TWO_ISLAND_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(TWO_ISLAND_POKEMON_CENTER_2F),
		.landMonsInfo = &sTwoIslandPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sTwoIslandPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sTwoIslandPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(TWO_ISLAND_HARBOR),
		.mapNum = MAP_NUM(TWO_ISLAND_HARBOR),
		.landMonsInfo = &sTwoIslandHarbor_LandMonsInfoDay,
		.waterMonsInfo = &sTwoIslandHarbor_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sTwoIslandHarbor_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_HOUSE1),
		.mapNum = MAP_NUM(THREE_ISLAND_HOUSE1),
		.landMonsInfo = &sThreeIslandHouse1_LandMonsInfoDay,
		.waterMonsInfo = &sThreeIslandHouse1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sThreeIslandHouse1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(THREE_ISLAND_POKEMON_CENTER_1F),
		.landMonsInfo = &sThreeIslandPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sThreeIslandPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sThreeIslandPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(THREE_ISLAND_POKEMON_CENTER_2F),
		.landMonsInfo = &sThreeIslandPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sThreeIslandPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sThreeIslandPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_MART),
		.mapNum = MAP_NUM(THREE_ISLAND_MART),
		.landMonsInfo = &sThreeIslandMart_LandMonsInfoDay,
		.waterMonsInfo = &sThreeIslandMart_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sThreeIslandMart_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_HOUSE2),
		.mapNum = MAP_NUM(THREE_ISLAND_HOUSE2),
		.landMonsInfo = &sThreeIslandHouse2_LandMonsInfoDay,
		.waterMonsInfo = &sThreeIslandHouse2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sThreeIslandHouse2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_HOUSE3),
		.mapNum = MAP_NUM(THREE_ISLAND_HOUSE3),
		.landMonsInfo = &sThreeIslandHouse3_LandMonsInfoDay,
		.waterMonsInfo = &sThreeIslandHouse3_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sThreeIslandHouse3_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_HOUSE4),
		.mapNum = MAP_NUM(THREE_ISLAND_HOUSE4),
		.landMonsInfo = &sThreeIslandHouse4_LandMonsInfoDay,
		.waterMonsInfo = &sThreeIslandHouse4_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sThreeIslandHouse4_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_HOUSE5),
		.mapNum = MAP_NUM(THREE_ISLAND_HOUSE5),
		.landMonsInfo = &sThreeIslandHouse5_LandMonsInfoDay,
		.waterMonsInfo = &sThreeIslandHouse5_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sThreeIslandHouse5_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FOUR_ISLAND_POKEMON_DAY_CARE),
		.mapNum = MAP_NUM(FOUR_ISLAND_POKEMON_DAY_CARE),
		.landMonsInfo = &sFourIslandPokemonDayCare_LandMonsInfoDay,
		.waterMonsInfo = &sFourIslandPokemonDayCare_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFourIslandPokemonDayCare_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FOUR_ISLAND_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(FOUR_ISLAND_POKEMON_CENTER_1F),
		.landMonsInfo = &sFourIslandPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sFourIslandPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFourIslandPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FOUR_ISLAND_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(FOUR_ISLAND_POKEMON_CENTER_2F),
		.landMonsInfo = &sFourIslandPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sFourIslandPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFourIslandPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FOUR_ISLAND_HOUSE1),
		.mapNum = MAP_NUM(FOUR_ISLAND_HOUSE1),
		.landMonsInfo = &sFourIslandHouse1_LandMonsInfoDay,
		.waterMonsInfo = &sFourIslandHouse1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFourIslandHouse1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FOUR_ISLAND_LORELEIS_HOUSE),
		.mapNum = MAP_NUM(FOUR_ISLAND_LORELEIS_HOUSE),
		.landMonsInfo = &sFourIslandLoreleisHouse_LandMonsInfoDay,
		.waterMonsInfo = &sFourIslandLoreleisHouse_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFourIslandLoreleisHouse_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FOUR_ISLAND_HARBOR),
		.mapNum = MAP_NUM(FOUR_ISLAND_HARBOR),
		.landMonsInfo = &sFourIslandHarbor_LandMonsInfoDay,
		.waterMonsInfo = &sFourIslandHarbor_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFourIslandHarbor_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FOUR_ISLAND_HOUSE2),
		.mapNum = MAP_NUM(FOUR_ISLAND_HOUSE2),
		.landMonsInfo = &sFourIslandHouse2_LandMonsInfoDay,
		.waterMonsInfo = &sFourIslandHouse2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFourIslandHouse2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FOUR_ISLAND_MART),
		.mapNum = MAP_NUM(FOUR_ISLAND_MART),
		.landMonsInfo = &sFourIslandMart_LandMonsInfoDay,
		.waterMonsInfo = &sFourIslandMart_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFourIslandMart_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(FIVE_ISLAND_POKEMON_CENTER_1F),
		.landMonsInfo = &sFiveIslandPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(FIVE_ISLAND_POKEMON_CENTER_2F),
		.landMonsInfo = &sFiveIslandPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_HARBOR),
		.mapNum = MAP_NUM(FIVE_ISLAND_HARBOR),
		.landMonsInfo = &sFiveIslandHarbor_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandHarbor_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandHarbor_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_HOUSE1),
		.mapNum = MAP_NUM(FIVE_ISLAND_HOUSE1),
		.landMonsInfo = &sFiveIslandHouse1_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandHouse1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandHouse1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_HOUSE2),
		.mapNum = MAP_NUM(FIVE_ISLAND_HOUSE2),
		.landMonsInfo = &sFiveIslandHouse2_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandHouse2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandHouse2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_POKEMON_CENTER_1F),
		.mapNum = MAP_NUM(SIX_ISLAND_POKEMON_CENTER_1F),
		.landMonsInfo = &sSixIslandPokemonCenter1F_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandPokemonCenter1F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandPokemonCenter1F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_POKEMON_CENTER_2F),
		.mapNum = MAP_NUM(SIX_ISLAND_POKEMON_CENTER_2F),
		.landMonsInfo = &sSixIslandPokemonCenter2F_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandPokemonCenter2F_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandPokemonCenter2F_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_HARBOR),
		.mapNum = MAP_NUM(SIX_ISLAND_HARBOR),
		.landMonsInfo = &sSixIslandHarbor_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandHarbor_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandHarbor_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_HOUSE),
		.mapNum = MAP_NUM(SIX_ISLAND_HOUSE),
		.landMonsInfo = &sSixIslandHouse_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandHouse_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandHouse_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_MART),
		.mapNum = MAP_NUM(SIX_ISLAND_MART),
		.landMonsInfo = &sSixIslandMart_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandMart_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandMart_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_HARBOR),
		.mapNum = MAP_NUM(THREE_ISLAND_HARBOR),
		.landMonsInfo = &sThreeIslandHarbor_LandMonsInfoDay,
		.waterMonsInfo = &sThreeIslandHarbor_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sThreeIslandHarbor_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(FIVE_ISLAND_RESORT_GORGEOUS_HOUSE),
		.mapNum = MAP_NUM(FIVE_ISLAND_RESORT_GORGEOUS_HOUSE),
		.landMonsInfo = &sFiveIslandResortGorgeousHouse_LandMonsInfoDay,
		.waterMonsInfo = &sFiveIslandResortGorgeousHouse_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sFiveIslandResortGorgeousHouse_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(TWO_ISLAND_CAPE_BRINK_HOUSE),
		.mapNum = MAP_NUM(TWO_ISLAND_CAPE_BRINK_HOUSE),
		.landMonsInfo = &sTwoIslandCapeBrinkHouse_LandMonsInfoDay,
		.waterMonsInfo = &sTwoIslandCapeBrinkHouse_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sTwoIslandCapeBrinkHouse_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_WATER_PATH_HOUSE1),
		.mapNum = MAP_NUM(SIX_ISLAND_WATER_PATH_HOUSE1),
		.landMonsInfo = &sSixIslandWaterPathHouse1_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandWaterPathHouse1_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandWaterPathHouse1_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SIX_ISLAND_WATER_PATH_HOUSE2),
		.mapNum = MAP_NUM(SIX_ISLAND_WATER_PATH_HOUSE2),
		.landMonsInfo = &sSixIslandWaterPathHouse2_LandMonsInfoDay,
		.waterMonsInfo = &sSixIslandWaterPathHouse2_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSixIslandWaterPathHouse2_FishingMonsInfoDay,
	},
	{
		.mapGroup = MAP_GROUP(SEVEN_ISLAND_SEVAULT_CANYON_HOUSE),
		.mapNum = MAP_NUM(SEVEN_ISLAND_SEVAULT_CANYON_HOUSE),
		.landMonsInfo = &sSevenIslandSevaultCanyonHouse_LandMonsInfoDay,
		.waterMonsInfo = &sSevenIslandSevaultCanyonHouse_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = &sSevenIslandSevaultCanyonHouse_FishingMonsInfoDay,
	},
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};
const struct SwarmData gSwarmTable[] =
{
	/*{
		.mapName = 0xFF,
		.species = 0xFFFF,
	},*/
};
#else //Below is for Pokemon Unbound. Feel free to remove.
static const struct WildPokemon sRoute2_LandMonsNight[] =
{
	{9, 11, SPECIES_HOOTHOOT},
	{9, 11, SPECIES_RATTATA},
	{9, 11, SPECIES_RATTATA},
	{9, 11, SPECIES_HOOTHOOT},
	{9, 11, SPECIES_ELECTRIKE},
	{9, 11, SPECIES_AZURILL},
	{9, 11, SPECIES_STUFFUL},
	{9, 11, SPECIES_STUFFUL},
	{10, 11, SPECIES_SCRAGGY},
	{10, 11, SPECIES_RIOLU},
	{11, 11, SPECIES_SCRAGGY},
	{11, 11, SPECIES_RIOLU},
};
static const struct WildPokemonInfo sRoute2_LandMonsInfoNight = {20, sRoute2_LandMonsNight};
static const struct WildPokemon sRoute3_LandMonsNight[] =
{
	{10, 12, SPECIES_WINGULL},
	{10, 12, SPECIES_SENTRET},
	{10, 12, SPECIES_BIDOOF},
	{10, 12, SPECIES_BIDOOF},
	{10, 12, SPECIES_BUIZEL},
	{10, 12, SPECIES_SHELLOS},
	{10, 12, SPECIES_SURSKIT},
	{10, 12, SPECIES_KRABBY},
	{11, 12, SPECIES_KRABBY},
	{11, 12, SPECIES_KRABBY},
	{12, 12, SPECIES_KRABBY},
	{12, 12, SPECIES_KRABBY},
};
static const struct WildPokemonInfo sRoute3_LandMonsInfoNight = {20, sRoute3_LandMonsNight};
static const struct WildPokemon sRoute4_LandMonsNight[] =
{
	{15, 17, SPECIES_HOOTHOOT},
	{15, 17, SPECIES_HOOTHOOT},
	{15, 17, SPECIES_LILLIPUP},
	{15, 17, SPECIES_LILLIPUP},
	{15, 17, SPECIES_EKANS},
	{15, 17, SPECIES_NUMEL},
	{15, 17, SPECIES_MANKEY},
	{15, 17, SPECIES_MANKEY},
	{15, 17, SPECIES_NUMEL},
	{15, 17, SPECIES_RALTS},
	{17, 17, SPECIES_NUMEL},
	{17, 17, SPECIES_RALTS},
};
static const struct WildPokemonInfo sRoute4_LandMonsInfoNight = {20, sRoute4_LandMonsNight};
static const struct WildPokemon sGrimWoods_LandMonsNight[] =
{
	{13, 16, SPECIES_WEEDLE},
	{14, 16, SPECIES_SEEDOT},
	{14, 16, SPECIES_PUMPKABOO},
	{14, 16, SPECIES_PUMPKABOO_M},
	{14, 16, SPECIES_PUMPKABOO_L},
	{14, 16, SPECIES_PUMPKABOO_XL},
	{15, 16, SPECIES_GASTLY},
	{15, 16, SPECIES_SHUPPET},
	{15, 16, SPECIES_DUSKULL},
	{15, 16, SPECIES_PHANTUMP},
	{16, 16, SPECIES_DUSKULL},
	{16, 16, SPECIES_PHANTUMP},
};
static const struct WildPokemonInfo sGrimWoods_LandMonsInfoNight = {20, sGrimWoods_LandMonsNight};
static const struct WildPokemon sRoute5_LandMonsNight[] =
{
	{15, 18, SPECIES_MURKROW},
	{15, 18, SPECIES_ZUBAT},
	{15, 18, SPECIES_NIDORAN_M},
	{15, 18, SPECIES_NIDORAN_F},
	{16, 19, SPECIES_HOUNDOUR},
	{15, 18, SPECIES_ZUBAT},
	{15, 18, SPECIES_NIDORAN_M},
	{15, 18, SPECIES_NIDORAN_F},
	{17, 19, SPECIES_MURKROW},
	{17, 19, SPECIES_DEDENNE},
	{19, 19, SPECIES_NIDORINA},
	{19, 19, SPECIES_NIDORINO},
};
static const struct WildPokemonInfo sRoute5_LandMonsInfoNight = {20, sRoute5_LandMonsNight};
static const struct WildPokemon sRoute6_LandMonsMorning[] =
{
	{20, 22, SPECIES_ZIGZAGOON},
	{20, 22, SPECIES_LEDYBA},
	{20, 22, SPECIES_SHINX},
	{20, 22, SPECIES_DEERLING},
	{20, 22, SPECIES_ZIGZAGOON},
	{20, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_DEERLING},
	{21, 22, SPECIES_KRICKETOT},
	{22, 22, SPECIES_LEDIAN},
	{22, 22, SPECIES_LUXIO},
};
static const struct WildPokemonInfo sRoute6_LandMonsInfoMorning = {20, sRoute6_LandMonsMorning};
static const struct WildPokemon sRoute6_LandMonsNight[] =
{
	{20, 22, SPECIES_ZIGZAGOON},
	{20, 22, SPECIES_SPINARAK},
	{20, 22, SPECIES_SHINX},
	{20, 22, SPECIES_DEERLING},
	{20, 22, SPECIES_ZIGZAGOON},
	{20, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_KRICKETOT},
	{21, 22, SPECIES_DEERLING},
	{21, 22, SPECIES_KRICKETOT},
	{22, 22, SPECIES_ARIADOS},
	{22, 22, SPECIES_LUXIO},
};
static const struct WildPokemonInfo sRoute6_LandMonsInfoNight = {20, sRoute6_LandMonsNight};
static const struct WildPokemon sRoute7_LandMonsNight[] =
{
	{21, 23, SPECIES_RATTATA_A},
	{21, 23, SPECIES_HOOTHOOT},
	{21, 23, SPECIES_BUNEARY},
	{21, 23, SPECIES_DROWZEE},
	{21, 23, SPECIES_ABRA},
	{21, 23, SPECIES_MAREEP},
	{21, 23, SPECIES_SHINX},
	{21, 23, SPECIES_SHINX},
	{22, 23, SPECIES_RATTATA_A},
	{22, 23, SPECIES_BUNEARY},
	{23, 23, SPECIES_LUXIO},
	{23, 23, SPECIES_RATICATE_A},
};
static const struct WildPokemonInfo sRoute7_LandMonsInfoNight = {20, sRoute7_LandMonsNight};
static const struct WildPokemon sRoute8_LandMonsNight[] =
{
	{22, 25, SPECIES_SNOVER},
	{22, 25, SPECIES_SNORUNT},
	{22, 25, SPECIES_SNEASEL},
	{22, 25, SPECIES_SNORUNT},
	{22, 25, SPECIES_CUBCHOO},
	{22, 25, SPECIES_DEERLING_WINTER},
	{22, 25, SPECIES_FURRET},
	{22, 25, SPECIES_FLAAFFY},
	{23, 25, SPECIES_SNOVER},
	{23, 25, SPECIES_SNORUNT},
	{23, 25, SPECIES_MINIOR_SHIELD},
	{23, 25, SPECIES_MINIOR_SHIELD},
};
static const struct WildPokemonInfo sRoute8_LandMonsInfoNight = {20, sRoute8_LandMonsNight};
static const struct WildPokemon sFrozenForest_LandMonsNight[] =
{
	{23, 26, SPECIES_SNOVER},
	{23, 26, SPECIES_SNOVER},
	{23, 26, SPECIES_SNEASEL},
	{23, 26, SPECIES_CUBCHOO},
	{23, 26, SPECIES_CUBCHOO},
	{23, 26, SPECIES_CUBCHOO},
	{23, 26, SPECIES_SNOVER},
	{23, 26, SPECIES_SNEASEL},
	{23, 26, SPECIES_CUBCHOO},
	{23, 26, SPECIES_CUBCHOO},
	{26, 26, SPECIES_CUBCHOO},
	{26, 26, SPECIES_CUBCHOO},
};
static const struct WildPokemonInfo sFrozenForest_LandMonsInfoNight = {20, sFrozenForest_LandMonsNight};
static const struct WildPokemon sRoute11_LandMonsNight[] =
{
	{26, 29, SPECIES_EXEGGCUTE},
	{26, 29, SPECIES_MEOWTH},
	{26, 29, SPECIES_VENONAT},
	{26, 29, SPECIES_VENONAT},
	{26, 29, SPECIES_SPOINK},
	{26, 29, SPECIES_MEDITITE},
	{27, 29, SPECIES_SPOINK},
	{27, 29, SPECIES_MEDITITE},
	{29, 29, SPECIES_PERSIAN},
	{29, 29, SPECIES_ABSOL},
	{29, 29, SPECIES_PERSIAN},
	{29, 29, SPECIES_ABSOL},
};
static const struct WildPokemonInfo sRoute11_LandMonsInfoNight = {20, sRoute11_LandMonsNight};
static const struct WildPokemon sRoute12_LandMonsNight[] =
{
	{29, 32, SPECIES_HOOTHOOT},
	{33, 36, SPECIES_ROCKRUFF},
	{33, 36, SPECIES_INKAY},
	{33, 36, SPECIES_MIENFOO},
	{33, 36, SPECIES_PONYTA},
	{33, 36, SPECIES_SNUBBULL},
	{34, 36, SPECIES_INKAY},
	{34, 36, SPECIES_MIENFOO},
	{34, 36, SPECIES_NOCTOWL},
	{33, 36, SPECIES_TOGEDEMARU},
	{34, 36, SPECIES_NOCTOWL},
	{35, 36, SPECIES_TOGEDEMARU},
};
static const struct WildPokemonInfo sRoute12_LandMonsInfoNight = {20, sRoute12_LandMonsNight};
static const struct WildPokemon sRoute14_LandMonsNight[] =
{
	{37, 40, SPECIES_PELIPPER},
	{37, 40, SPECIES_BIBAREL},
	{37, 40, SPECIES_GOLDUCK},
	{37, 40, SPECIES_GASTRODON},
	{37, 40, SPECIES_FLOATZEL},
	{36, 40, SPECIES_SLOWPOKE},
	{37, 40, SPECIES_GLOOM},
	{37, 40, SPECIES_GLOOM},
	{38, 40, SPECIES_FLOATZEL},
	{37, 40, SPECIES_SLOWPOKE},
	{25, 30, SPECIES_ODDISH},
	{25, 30, SPECIES_ODDISH},
};
static const struct WildPokemonInfo sRoute14_LandMonsInfoNight = {20, sRoute14_LandMonsNight};
static const struct WildPokemon sVivillWoods_LandMonsNight[] =
{
	{30, 35, SPECIES_WEEDLE},
	{30, 35, SPECIES_WURMPLE},
	{30, 35, SPECIES_SCATTERBUG},
	{38, 41, SPECIES_COTTONEE},
	{39, 41, SPECIES_SWADLOON},
	{38, 41, SPECIES_PETILIL},
	{39, 41, SPECIES_SPEWPA},
	{39, 41, SPECIES_KAKUNA},
	{39, 41, SPECIES_SILCOON},
	{39, 41, SPECIES_CASCOON},
	{39, 41, SPECIES_SILCOON},
	{39, 41, SPECIES_CASCOON},
};
static const struct WildPokemonInfo sVivillWoods_LandMonsInfoNight = {20, sVivillWoods_LandMonsNight};
static const struct WildPokemon sRoute17_LandMonsNight[] =
{
	{47, 50, SPECIES_NOCTOWL},
	{47, 50, SPECIES_PELIPPER},
	{47, 50, SPECIES_NOCTOWL},
	{47, 50, SPECIES_PELIPPER},
	{47, 50, SPECIES_NOCTOWL},
	{47, 50, SPECIES_NOCTOWL},
	{47, 50, SPECIES_NOCTOWL},
	{47, 50, SPECIES_NOCTOWL},
	{48, 50, SPECIES_ZANGOOSE},
	{48, 50, SPECIES_SEVIPER},
	{40, 45, SPECIES_BAGON},
	{40, 45, SPECIES_BAGON},
};
static const struct WildPokemonInfo sRoute17_LandMonsInfoNight = {20, sRoute17_LandMonsNight};
static const struct WildPokemon sCootesBog_LandMonsNight[] =
{
	{48, 52, SPECIES_CROAGUNK},
	{49, 52, SPECIES_QUAGSIRE},
	{48, 52, SPECIES_CROAGUNK},
	{50, 52, SPECIES_SLIGGOO},
	{50, 52, SPECIES_SLIGGOO},
	{51, 52, SPECIES_DRAPION},
	{49, 52, SPECIES_CARNIVINE},
	{49, 52, SPECIES_GLOOM},
	{49, 52, SPECIES_GLOOM},
	{52, 52, SPECIES_TOXICROAK},
	{49, 52, SPECIES_GLOOM},
	{52, 52, SPECIES_TOXICROAK},
};
static const struct WildPokemonInfo sCootesBog_LandMonsInfoNight = {20, sCootesBog_LandMonsNight};
static const struct WildPokemon sRoute18_LandMonsNight[] =
{
	{53, 57, SPECIES_NOCTOWL},
	{53, 57, SPECIES_SKUNTANK},
	{53, 57, SPECIES_NOCTOWL},
	{53, 57, SPECIES_SKUNTANK},
	{53, 57, SPECIES_BOUFFALANT},
	{53, 57, SPECIES_BOUFFALANT},
	{53, 57, SPECIES_NOCTOWL},
	{53, 57, SPECIES_SKUNTANK},
	{53, 57, SPECIES_SUDOWOODO},
	{53, 57, SPECIES_AUDINO},
	{53, 57, SPECIES_SUDOWOODO},
	{53, 57, SPECIES_AUDINO},
};
static const struct WildPokemonInfo sRoute18_LandMonsInfoNight = {20, sRoute18_LandMonsNight};
static const struct WildPokemon sRoute1_LandMonsDay[] =
{
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_CHIKORITA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
	{4, 5, SPECIES_PIDGEY},
	{4, 5, SPECIES_RATTATA},
};
static const struct WildPokemonInfo sRoute1_LandMonsInfoDay = {20, sRoute1_LandMonsDay};
const struct WildPokemonHeader gWildMonMorningHeaders[] =
{
	{
		.mapGroup = MAP_GROUP(ROUTE_6),
		.mapNum = MAP_NUM(ROUTE_6),
		.landMonsInfo = &sRoute6_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};
const struct WildPokemonHeader gWildMonEveningHeaders[] =
{
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};
const struct WildPokemonHeader gWildMonNightHeaders[] =
{
	{
		.mapGroup = MAP_GROUP(ROUTE_2),
		.mapNum = MAP_NUM(ROUTE_2),
		.landMonsInfo = &sRoute2_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_3),
		.mapNum = MAP_NUM(ROUTE_3),
		.landMonsInfo = &sRoute3_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_4),
		.mapNum = MAP_NUM(ROUTE_4),
		.landMonsInfo = &sRoute4_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(GRIM_WOODS),
		.mapNum = MAP_NUM(GRIM_WOODS),
		.landMonsInfo = &sGrimWoods_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_5),
		.mapNum = MAP_NUM(ROUTE_5),
		.landMonsInfo = &sRoute5_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_6),
		.mapNum = MAP_NUM(ROUTE_6),
		.landMonsInfo = &sRoute6_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_7),
		.mapNum = MAP_NUM(ROUTE_7),
		.landMonsInfo = &sRoute7_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_8),
		.mapNum = MAP_NUM(ROUTE_8),
		.landMonsInfo = &sRoute8_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(FROZEN_FOREST),
		.mapNum = MAP_NUM(FROZEN_FOREST),
		.landMonsInfo = &sFrozenForest_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_11),
		.mapNum = MAP_NUM(ROUTE_11),
		.landMonsInfo = &sRoute11_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_12),
		.mapNum = MAP_NUM(ROUTE_12),
		.landMonsInfo = &sRoute12_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_14_B),
		.mapNum = MAP_NUM(ROUTE_14_B),
		.landMonsInfo = &sRoute14_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_14_C),
		.mapNum = MAP_NUM(ROUTE_14_C),
		.landMonsInfo = &sRoute14_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VIVILL_WOODS),
		.mapNum = MAP_NUM(VIVILL_WOODS),
		.landMonsInfo = &sVivillWoods_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_17),
		.mapNum = MAP_NUM(ROUTE_17),
		.landMonsInfo = &sRoute17_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(COOTES_BOG),
		.mapNum = MAP_NUM(COOTES_BOG),
		.landMonsInfo = &sCootesBog_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_18_B),
		.mapNum = MAP_NUM(ROUTE_18_B),
		.landMonsInfo = &sRoute18_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};
const struct WildPokemonHeader gWildMonDayHeaders[] =
{
	{
		.mapGroup = MAP_GROUP(ROUTE_1),
		.mapNum = MAP_NUM(ROUTE_1),
		.landMonsInfo = &sRoute1_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};
const struct SwarmData gSwarmTable[] =
{
	{
		.mapName = MAPSEC_ROUTE_1,
		.species = SPECIES_SNEASEL,
	},
	{
		.mapName = MAPSEC_ROUTE_2,
		.species = SPECIES_BURMY,
	},
	{
		.mapName = MAPSEC_FLOWER_PARADISE,
		.species = SPECIES_CHERUBI,
	},
	{
		.mapName = MAPSEC_GRIM_WOODS,
		.species = SPECIES_NINCADA,
	},
	{
		.mapName = MAPSEC_ROUTE_4,
		.species = SPECIES_LITLEO,
	},
	{
		.mapName = MAPSEC_CINDER_VOLCANO,
		.species = SPECIES_VULPIX,
	},
	{
		.mapName = MAPSEC_ROUTE_5,
		.species = SPECIES_PURRLOIN,
	},
	{
		.mapName = MAPSEC_ROUTE_5,
		.species = SPECIES_ELGYEM,
	},
	{
		.mapName = MAPSEC_VALLEY_CAVE,
		.species = SPECIES_DUNSPARCE,
	},
	{
		.mapName = MAPSEC_ROUTE_6,
		.species = SPECIES_SMEARGLE,
	},
	{
		.mapName = MAPSEC_ROUTE_7,
		.species = SPECIES_MR_MIME,
	},
	{
		.mapName = MAPSEC_ROUTE_8,
		.species = SPECIES_STANTLER,
	},
	{
		.mapName = MAPSEC_ROUTE_9,
		.species = SPECIES_KARRABLAST,
	},
	{
		.mapName = MAPSEC_ROUTE_10,
		.species = SPECIES_SHELMET,
	},
	{
		.mapName = MAPSEC_ROUTE_11,
		.species = SPECIES_GLAMEOW,
	},
	{
		.mapName = MAPSEC_THUNDERCAP_MOUNTAIN,
		.species = SPECIES_JOLTIK,
	},
	{
		.mapName = MAPSEC_THUNDERCAP_MOUNTAIN,
		.species = SPECIES_FERROSEED,
	},
	{
		.mapName = MAPSEC_ROUTE_12,
		.species = SPECIES_SWIRLIX,
	},
	{
		.mapName = MAPSEC_ROUTE_12,
		.species = SPECIES_SPRITZEE,
	},
	{
		.mapName = MAPSEC_VIVILL_WOODS,
		.species = SPECIES_PIKACHU,
	},
	{
		.mapName = MAPSEC_ROUTE_16,
		.species = SPECIES_GOTHORITA,
	},
	{
		.mapName = MAPSEC_ROUTE_16,
		.species = SPECIES_DUOSION,
	},
	{
		.mapName = MAPSEC_ROUTE_17,
		.species = SPECIES_VOLBEAT,
	},
	{
		.mapName = MAPSEC_ROUTE_17,
		.species = SPECIES_ILLUMISE,
	},
	{
		.mapName = MAPSEC_COOTES_BOG,
		.species = SPECIES_CROCONAW,
	},
	{
		.mapName = MAPSEC_ROUTE_18,
		.species = SPECIES_BAYLEEF,
	}
};
#endif
#ifdef SWARM_CHANGE_HOURLY
const u8 gSwarmOrders[31][24] =
{
	{2, 1, 14, 21, 5, 16, 3, 23, 7, 4, 18, 19, 13, 17, 6, 0, 8, 9, 20, 22, 10, 11, 15, 12},
	{16, 19, 13, 23, 7, 9, 21, 17, 22, 8, 4, 3, 6, 0, 11, 20, 12, 1, 10, 2, 15, 14, 18, 5},
	{17, 8, 16, 6, 12, 19, 18, 3, 14, 22, 13, 11, 23, 2, 7, 21, 20, 10, 5, 15, 9, 0, 1, 4},
	{13, 6, 15, 3, 14, 12, 0, 18, 10, 5, 2, 17, 16, 7, 9, 1, 4, 19, 11, 23, 21, 8, 20, 22},
	{12, 7, 18, 13, 10, 2, 5, 14, 11, 23, 20, 22, 8, 15, 17, 4, 19, 16, 0, 6, 21, 1, 9, 3},
	{8, 18, 12, 15, 20, 0, 1, 13, 5, 11, 14, 21, 17, 10, 4, 16, 22, 6, 2, 19, 23, 3, 7, 9},
	{13, 11, 7, 20, 22, 3, 14, 10, 18, 6, 5, 12, 15, 23, 19, 17, 21, 0, 9, 8, 2, 16, 4, 1},
	{11, 20, 4, 2, 16, 17, 13, 12, 0, 10, 15, 14, 1, 19, 5, 8, 9, 18, 7, 21, 3, 6, 22, 23},
	{22, 18, 11, 17, 2, 9, 20, 16, 0, 13, 1, 6, 3, 14, 15, 10, 5, 8, 23, 4, 12, 21, 19, 7},
	{2, 5, 11, 7, 3, 23, 19, 1, 9, 16, 13, 15, 21, 8, 20, 12, 18, 4, 14, 10, 6, 17, 22, 0},
	{10, 18, 5, 1, 13, 15, 22, 2, 4, 3, 17, 9, 19, 21, 0, 8, 16, 11, 12, 14, 7, 23, 6, 20},
	{6, 13, 0, 4, 22, 10, 23, 17, 8, 1, 5, 11, 2, 3, 12, 19, 15, 20, 18, 9, 14, 7, 21, 16},
	{0, 22, 17, 11, 8, 15, 9, 4, 2, 7, 21, 13, 12, 6, 14, 18, 10, 23, 1, 3, 5, 20, 16, 19},
	{15, 16, 20, 5, 4, 6, 2, 21, 3, 19, 7, 8, 14, 13, 10, 23, 11, 18, 22, 0, 17, 12, 1, 9},
	{7, 12, 2, 0, 18, 4, 16, 8, 20, 17, 22, 23, 9, 1, 5, 14, 6, 21, 15, 3, 13, 19, 10, 11},
	{21, 4, 8, 14, 15, 7, 17, 19, 6, 0, 9, 1, 20, 11, 2, 23, 12, 18, 3, 16, 22, 13, 5, 10},
	{5, 3, 9, 19, 6, 14, 15, 10, 21, 7, 12, 0, 20, 16, 23, 13, 1, 22, 8, 11, 4, 2, 17, 18},
	{18, 0, 1, 19, 16, 21, 4, 5, 2, 9, 23, 7, 20, 12, 22, 15, 3, 6, 8, 11, 13, 17, 14, 10},
	{15, 16, 21, 9, 19, 6, 12, 20, 13, 18, 8, 0, 10, 22, 3, 7, 23, 5, 4, 17, 11, 2, 14, 1},
	{3, 14, 20, 16, 15, 13, 8, 4, 1, 21, 10, 5, 12, 9, 23, 6, 0, 17, 19, 7, 11, 22, 2, 18},
	{9, 7, 23, 12, 0, 1, 4, 15, 19, 17, 10, 2, 22, 5, 16, 11, 3, 6, 21, 13, 20, 18, 8, 14},
	{1, 21, 19, 17, 15, 23, 10, 6, 9, 12, 11, 0, 4, 3, 8, 22, 7, 14, 16, 20, 18, 5, 13, 2},
	{4, 9, 22, 12, 23, 11, 7, 5, 6, 2, 21, 20, 18, 14, 1, 10, 3, 15, 13, 17, 16, 19, 8, 0},
	{1, 2, 3, 10, 17, 5, 4, 22, 12, 20, 14, 9, 0, 18, 23, 15, 7, 13, 21, 11, 8, 19, 16, 6},
	{20, 23, 0, 19, 8, 18, 11, 22, 15, 14, 6, 2, 4, 12, 13, 3, 17, 7, 21, 16, 1, 9, 5, 10},
	{23, 10, 17, 19, 9, 14, 6, 7, 16, 12, 15, 18, 0, 4, 11, 2, 1, 3, 8, 5, 20, 22, 13, 21},
	{15, 21, 6, 18, 11, 22, 8, 4, 1, 7, 19, 16, 5, 20, 3, 10, 14, 2, 17, 12, 0, 9, 23, 13},
	{14, 17, 10, 9, 1, 8, 11, 7, 23, 15, 0, 5, 20, 19, 2, 16, 13, 3, 6, 18, 22, 4, 12, 21},
	{19, 15, 6, 22, 0, 20, 23, 11, 17, 14, 13, 16, 10, 1, 21, 9, 2, 12, 4, 7, 18, 5, 3, 8},
	{6, 4, 19, 16, 21, 22, 23, 9, 8, 20, 3, 10, 11, 12, 18, 5, 14, 2, 13, 1, 7, 15, 0, 17},
	{3, 18, 22, 8, 6, 1, 2, 0, 12, 14, 16, 4, 7, 9, 5, 13, 23, 17, 21, 20, 19, 10, 11, 15},
};
#endif
const u16 gSwarmTableLength = NELEMS(gSwarmTable);