// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ENTITYSPAWN_SPIRE_NET_PACKET_H_
#define FLATBUFFERS_GENERATED_ENTITYSPAWN_SPIRE_NET_PACKET_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 25,
             "Non-compatible flatbuffers version included");

#include "types.hpp"

namespace spire {
namespace net {
namespace packet {

struct EntitySpawn;
struct EntitySpawnBuilder;

struct EntitySpawn FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef EntitySpawnBuilder Builder;
  struct Traits;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ENTITY_TYPE = 4,
    VT_ENTITY_CLASS = 6,
    VT_ENTITY_ID = 8,
    VT_POSITION = 10,
    VT_ROTATION = 12
  };
  spire::net::packet::EntityType entity_type() const {
    return static_cast<spire::net::packet::EntityType>(GetField<uint8_t>(VT_ENTITY_TYPE, 0));
  }
  spire::net::packet::EntityClass entity_class() const {
    return static_cast<spire::net::packet::EntityClass>(GetField<uint16_t>(VT_ENTITY_CLASS, 0));
  }
  uint32_t entity_id() const {
    return GetField<uint32_t>(VT_ENTITY_ID, 0);
  }
  const spire::net::packet::Vector2 *position() const {
    return GetStruct<const spire::net::packet::Vector2 *>(VT_POSITION);
  }
  float rotation() const {
    return GetField<float>(VT_ROTATION, 0.0f);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_ENTITY_TYPE, 1) &&
           VerifyField<uint16_t>(verifier, VT_ENTITY_CLASS, 2) &&
           VerifyField<uint32_t>(verifier, VT_ENTITY_ID, 4) &&
           VerifyField<spire::net::packet::Vector2>(verifier, VT_POSITION, 4) &&
           VerifyField<float>(verifier, VT_ROTATION, 4) &&
           verifier.EndTable();
  }
};

struct EntitySpawnBuilder {
  typedef EntitySpawn Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_entity_type(spire::net::packet::EntityType entity_type) {
    fbb_.AddElement<uint8_t>(EntitySpawn::VT_ENTITY_TYPE, static_cast<uint8_t>(entity_type), 0);
  }
  void add_entity_class(spire::net::packet::EntityClass entity_class) {
    fbb_.AddElement<uint16_t>(EntitySpawn::VT_ENTITY_CLASS, static_cast<uint16_t>(entity_class), 0);
  }
  void add_entity_id(uint32_t entity_id) {
    fbb_.AddElement<uint32_t>(EntitySpawn::VT_ENTITY_ID, entity_id, 0);
  }
  void add_position(const spire::net::packet::Vector2 *position) {
    fbb_.AddStruct(EntitySpawn::VT_POSITION, position);
  }
  void add_rotation(float rotation) {
    fbb_.AddElement<float>(EntitySpawn::VT_ROTATION, rotation, 0.0f);
  }
  explicit EntitySpawnBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<EntitySpawn> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<EntitySpawn>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<EntitySpawn> CreateEntitySpawn(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    spire::net::packet::EntityType entity_type = spire::net::packet::EntityType::NONE,
    spire::net::packet::EntityClass entity_class = spire::net::packet::EntityClass::NONE,
    uint32_t entity_id = 0,
    const spire::net::packet::Vector2 *position = nullptr,
    float rotation = 0.0f) {
  EntitySpawnBuilder builder_(_fbb);
  builder_.add_rotation(rotation);
  builder_.add_position(position);
  builder_.add_entity_id(entity_id);
  builder_.add_entity_class(entity_class);
  builder_.add_entity_type(entity_type);
  return builder_.Finish();
}

struct EntitySpawn::Traits {
  using type = EntitySpawn;
  static auto constexpr Create = CreateEntitySpawn;
};

inline const spire::net::packet::EntitySpawn *GetEntitySpawn(const void *buf) {
  return ::flatbuffers::GetRoot<spire::net::packet::EntitySpawn>(buf);
}

inline const spire::net::packet::EntitySpawn *GetSizePrefixedEntitySpawn(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<spire::net::packet::EntitySpawn>(buf);
}

inline bool VerifyEntitySpawnBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<spire::net::packet::EntitySpawn>(nullptr);
}

inline bool VerifySizePrefixedEntitySpawnBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<spire::net::packet::EntitySpawn>(nullptr);
}

inline void FinishEntitySpawnBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<spire::net::packet::EntitySpawn> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedEntitySpawnBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<spire::net::packet::EntitySpawn> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace packet
}  // namespace net
}  // namespace spire

#endif  // FLATBUFFERS_GENERATED_ENTITYSPAWN_SPIRE_NET_PACKET_H_
