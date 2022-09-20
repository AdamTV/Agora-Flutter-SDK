/// Generated by terra, DO NOT MODIFY BY HAND.

#ifndef FAKE_ILOCALSPATIALAUDIOENGINE_INTERNAL_H_
#define FAKE_ILOCALSPATIALAUDIOENGINE_INTERNAL_H_

#include "IAgoraSpatialAudio.h"

namespace agora {
namespace rtc {
class FakeILocalSpatialAudioEngineInternal
    : public agora::rtc::ILocalSpatialAudioEngine {
  virtual void release() override {}

  virtual int setMaxAudioRecvCount(int maxCount) override { return 0; }

  virtual int setAudioRecvRange(float range) override { return 0; }

  virtual int setDistanceUnit(float unit) override { return 0; }

  virtual int updateSelfPosition(float *position, float *axisForward,
                                 float *axisRight, float *axisUp) override {
    return 0;
  }

  virtual int
  updateSelfPositionEx(float *position, float *axisForward, float *axisRight,
                       float *axisUp,
                       agora::rtc::RtcConnection const &connection) override {
    return 0;
  }

  virtual int updatePlayerPositionInfo(
      int playerId,
      agora::rtc::RemoteVoicePositionInfo const &positionInfo) override {
    return 0;
  }

  virtual int setParameters(char const *params) override { return 0; }

  virtual int muteLocalAudioStream(bool mute) override { return 0; }

  virtual int muteAllRemoteAudioStreams(bool mute) override { return 0; }

  virtual int setZones(agora::rtc::SpatialAudioZone const *zones,
                       unsigned int zoneCount) override {
    return 0;
  }

  virtual int setPlayerAttenuation(int playerId, double attenuation,
                                   bool forceSet) override {
    return 0;
  }

  virtual int muteRemoteAudioStream(agora::rtc::uid_t uid, bool mute) override {
    return 0;
  }

  virtual int
  initialize(agora::rtc::LocalSpatialAudioConfig const &config) override {
    return 0;
  }

  virtual int updateRemotePosition(
      agora::rtc::uid_t uid,
      agora::rtc::RemoteVoicePositionInfo const &posInfo) override {
    return 0;
  }

  virtual int
  updateRemotePositionEx(agora::rtc::uid_t uid,
                         agora::rtc::RemoteVoicePositionInfo const &posInfo,
                         agora::rtc::RtcConnection const &connection) override {
    return 0;
  }

  virtual int removeRemotePosition(agora::rtc::uid_t uid) override { return 0; }

  virtual int
  removeRemotePositionEx(agora::rtc::uid_t uid,
                         agora::rtc::RtcConnection const &connection) override {
    return 0;
  }

  virtual int clearRemotePositions() override { return 0; }

  virtual int
  clearRemotePositionsEx(agora::rtc::RtcConnection const &connection) override {
    return 0;
  }

  virtual int setRemoteAudioAttenuation(agora::rtc::uid_t uid,
                                        double attenuation,
                                        bool forceSet) override {
    return 0;
  }
};

} // namespace rtc
} // namespace agora

#endif // FAKE_ILOCALSPATIALAUDIOENGINE_INTERNAL_H_
