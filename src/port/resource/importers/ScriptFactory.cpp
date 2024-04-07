#include "ScriptFactory.h"
#include "../type/Script.h"
#include "spdlog/spdlog.h"
#include "ResourceUtil.h"

namespace SF64 {
std::shared_ptr<LUS::IResource> ResourceFactoryBinaryScriptV0::ReadResource(std::shared_ptr<LUS::File> file) {
    if (!FileHasValidFormatAndReader(file)) {
        return nullptr;
    }

    auto script = std::make_shared<Script>(file->InitData);
    auto reader = std::get<std::shared_ptr<LUS::BinaryReader>>(file->Reader);

    auto size = reader->ReadUInt32();

    for (uint32_t i = 0; i < size; i++) {
        script->mScripts.push_back(LoadChild<uint16_t*>(reader->ReadUInt64()));
    }

    return script;
}
} // namespace LUS