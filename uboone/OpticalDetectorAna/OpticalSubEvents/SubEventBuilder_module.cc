////////////////////////////////////////////////////////////////////////
// Class:       SubEventBuilder
// Module Type: SubEventBuilder
// File:        SubEventBuilder_module.cc
//
// Generated at Thu Oct  8 13:18:22 2015 by Taritree Wongjirad using artmod
// from cetpkgsupport v1_08_06.
////////////////////////////////////////////////////////////////////////

#include "art/Framework/Core/EDProducer.h"
#include "art/Framework/Core/ModuleMacros.h"
#include "art/Framework/Principal/Event.h"
#include "art/Framework/Principal/Handle.h"
#include "art/Framework/Principal/Run.h"
#include "art/Framework/Principal/SubRun.h"
#include "art/Utilities/InputTag.h"
#include "fhiclcpp/ParameterSet.h"
#include "messagefacility/MessageLogger/MessageLogger.h"

#include <memory>

#include "uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/SubEvent.hh"
#include "uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/SubEventList.hh"
#include "uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/SubEventModule.hh"
#include "uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/SubEventModConfig.hh"
#include "uboone/OpticalDetectorAna/OpticalSubEvents/subevent_algo/WaveformData.hh"

class SubEventBuilder;

class SubEventBuilder : public art::EDProducer {
public:
  explicit SubEventBuilder(fhicl::ParameterSet const & p);
  // The destructor generated by the compiler is fine for classes
  // without bare pointers or other resource use.

  // Plugins should not be copied or assigned.
  SubEventBuilder(SubEventBuilder const &) = delete;
  SubEventBuilder(SubEventBuilder &&) = delete;
  SubEventBuilder & operator = (SubEventBuilder const &) = delete;
  SubEventBuilder & operator = (SubEventBuilder &&) = delete;

  // Required functions.
  void produce(art::Event & e) override;


private:

  // Declare member data here.

};


SubEventBuilder::SubEventBuilder(fhicl::ParameterSet const & p)
// :
// Initialize member data here.
{
  // Call appropriate produces<>() functions here.
  produces< std::vector< subevent::SubEvent > >();
}

void SubEventBuilder::produce(art::Event & e)
{
  // Implementation of required member function here.
  
}

void SubEventBuilder::prepWaveforms( art::Event& e, WaveformData& wfms ) {
  
  art::Handle< raw::OpDetWaveform > hgwfmHandle;
  event.getByLabel( opdetHandle, fOpDetInputModule, "OpdetBeamHighGain" );
  
  art::Handle< raw::OpDetWaveform > lgwfmHandle;
  event.getByLabel( opdetHandle, fOpDetInputModule, "OpdetBeamLowGain" );

  for ( auto const& opdetData: (*hgwfmHandle) ) {
    optdata::Channel_t channel = opdetData.
  }
  

}

DEFINE_ART_MODULE(SubEventBuilder)
