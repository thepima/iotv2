#include "Resource.h"

#include <string_view>

/**
 *
 * @param name
 * @param type
 * @retur n
 */
Resource::Resource(std::string_view name, Type type)
: name(name), isAvailable(true), resourceType(type) {}

/**
 * @brief Returns the name of the resource.
 *
 * @return A non
 */
std::string_view Resource::getName() const {
    return name;
}

/**
 *
 * @return
 */
Type Resource::getResourceType() const {
    return resourceType;
}
