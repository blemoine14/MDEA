/*
 * This file is part of MDEA.
 * MDEA is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * MDEA is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * You should have received a copy of the GNU Lesser General Public License
 * along with MDEA.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <CppUTest/TestHarness.h>
#include "model/Population.h"
#include "utils/Directory.h"

TEST_GROUP(PopulationTests) {};

TEST(PopulationTests, TestPopulationLoad) {
  Population* testc = new Population("tests/sample-rep");

  Directory d("./tests/sample-rep");
  auto nb = d.getNbFiles(".chr");

  LONGS_EQUAL(nb/Chromosom::getNbModels(),testc->size());
  delete testc;
}
