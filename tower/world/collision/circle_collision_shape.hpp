#pragma once

#include <tower/world/collision/collision_shape.hpp>
#include <tower/world/collision/rectangle_collision_shape.hpp>

namespace tower::world {
struct CircleCollisionShape : CollisionShape {
    explicit CircleCollisionShape(float radius);

    [[nodiscard]] bool is_colliding(const CollisionShape* other) const override;
    [[nodiscard]] bool is_colliding(const glm::vec2& point) const override;

    float radius;
};
}
