#pragma once

#include <glm/vec2.hpp>

namespace spire {
struct CollisionShape {
    virtual ~CollisionShape() = default;

    [[nodiscard]] virtual bool is_colliding(const CollisionShape& other) const = 0;
    [[nodiscard]] virtual bool is_colliding(const glm::vec2& point) const = 0;
};
}
