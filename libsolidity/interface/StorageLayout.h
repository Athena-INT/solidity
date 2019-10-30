/*
	This file is part of solidity.

	solidity is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	solidity is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with solidity.  If not, see <http://www.gnu.org/licenses/>.
*/
/**
 * Generates the storage layout of a contract.
 */

#pragma once

#include <json/json.h>

namespace dev
{
namespace solidity
{

class ContractDefinition;

class StorageLayout
{
public:
	/// Generates the storage layout of the contract
	/// @param _contractDef The contract definition
	/// @return A JSON representation of the contract's storage layout.
	static Json::Value generate(ContractDefinition const& _contractDef);
};

}
}