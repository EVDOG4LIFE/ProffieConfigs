#ifdef CONFIG_TOP
#include "proffieboard_config.h"
#define NUM_BLADES 2
#define NUM_BUTTONS 2
#define VOLUME 1200
const unsigned int maxLedsPerStrip = 130;
#define CLASH_THRESHOLD_G 3.5
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define ENABLE_SERIAL
#define DISABLE_DIAGNOSTIC_COMMANDS


#define ORIENTATION ORIENTATION_USB_TOWARDS_BLADE

#define FETT263_TWIST_ON_NO_BM
#define FETT263_TWIST_ON
#define FETT263_TWIST_OFF


#define FETT263_STAB_ON_NO_BM
#define FETT263_STAB_ON


#define FETT263_SWING_ON_SPEED 600
#define FETT263_SWING_ON_NO_BM
#define FETT263_SWING_ON
#define FETT263_SWING_OFF

#define MOTION_TIMEOUT 60 * 3 * 1000


#define FETT263_THRUST_ON

#define FETT263_THRUST_OFF

#define ENABLE_SERIAL

// Max 20 characters
#define BLE_PASSWORD "your password"
// Max 32 characters.
#define BLE_NAME "Your Saber Name"
// Max 9 characters
#define BLE_SHORTNAME "Saber"
#define MOTION_TIMEOUT 60 * 3 * 800

#endif



#ifdef CONFIG_PROP

#include "../props/saber_fett263_buttons.h"

#endif

#ifdef CONFIG_PRESETS
Preset presets[] = {
  { "Transmission", "tracks/mando.wav",
  StylePtr<Layers<StyleFire<StripesX<Int<3000>,Scale<SlowNoise<Int<2000>>,Int<-1000>,Int<-5000>>,BrownNoiseFlicker<RotateColorsX<Variation,Rgb<95,0,210>>,Black,100>,
  RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<21,0,52>>,RotateColorsX<Variation,Rgb<4,0,8>>>,RotateColorsX<Variation,Rgb<115,15,220>>,RotateColorsX<Variation,Rgb<42,0,105>>>,RotateColorsX<Variation,
  Rgb<30,0,66>>,0,5,FireConfig<3,3000,0>,FireConfig<3,3000,0>,FireConfig<3,3000,0>,FireConfig<3,3000,0>>,AlphaL<Stripes<2500,-3000,Red,Rgb<60,0,0>,Pulsing<Rgb<30,0,0>,Black,800>>,
  SwingSpeed<600>>,LockupTrL<Layers<AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
  AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,White,
  TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,
  TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,
  Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,
  SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,
  TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeSparkTip<White,2056>,TrConcat<TrWipe<200>,Mix<SmoothStep<Int<27500>,Int<-2000>>,Black,RotateColorsX<Variation,Rgb<95,0,210>>>,
  TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<200>,Int<300>,Int<200>,Int<0>>,Mix<SmoothStep<Int<22000>,Int<-2000>>,Black,RotateColorsX<Variation,Rgb<95,0,210>>>,
  TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<250>,Int<300>,Int<250>,Int<0>>,Mix<SmoothStep<Int<16500>,Int<-2000>>,Black,RotateColorsX<Variation,Rgb<95,0,210>>>,
  TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<300>,Int<300>,Int<300>,Int<0>>,Mix<SmoothStep<Int<11000>,Int<-2000>>,Black,RotateColorsX<Variation,Rgb<95,0,210>>>,
  TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<350>,Int<300>,Int<350>,Int<0>>,Mix<SmoothStep<Int<5500>,Int<-2000>>,Black,RotateColorsX<Variation,Rgb<95,0,210>>>,
  TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<400>,Int<300>,Int<400>,Int<0>>,Black,TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<400>,Int<300>,Int<400>,Int<0>>,Black,TrInstant>,Black>,
  TransitionEffectL<TrConcat<TrInstant,AlphaL<BrownNoiseFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,Int<30>>,SmoothStep<Scale<SlowNoise<Int<2000>>,Int<1000>,Int<4000>>,Int<-4000>>>,TrDelay<2000>>,
  EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrDelay<1500>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,30>,Bump<Int<0>,Int<3000>>>,TrFade<2000>,
  AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,30>,Bump<Int<0>,Int<4000>>>,TrFade<2500>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,30>,Bump<Int<0>,Int<5000>>>,TrBoing<1950,7>>,
  EFFECT_PREON>,TransitionEffectL<TrConcat<TrInstant,TransitionLoopL<TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<500>,Int<200>,Int<500>,Int<32768>>>,TrDelay<1500>,
  TransitionLoopL<TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<300>,Int<300>,Int<300>,Int<32768>>>,TrDelay<2000>,TransitionLoopL<TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<100>,Int<400>,Int<100>,
  Int<32768>>>,TrDelay<3000>,AlphaL<RotateColorsX<Variation,Rgb<95,0,210>>,Bump<Int<0>,Int<6000>>>,TrBoing<1450,5>>,EFFECT_PREON>>>(),
	StylePtr<Layers<StyleFire<StripesX<Int<3000>,Scale<SlowNoise<Int<2000>>,Int<-1000>,Int<-5000>>,BrownNoiseFlicker<RotateColorsX<Variation,Rgb<95,0,210>>,Black,100>,
	RandomPerLEDFlicker<RotateColorsX<Variation,Rgb<21,0,52>>,RotateColorsX<Variation,Rgb<4,0,8>>>,RotateColorsX<Variation,Rgb<115,15,220>>,RotateColorsX<Variation,Rgb<42,0,105>>>,RotateColorsX<Variation,
	Rgb<30,0,66>>,0,5,FireConfig<3,3000,0>,FireConfig<3,3000,0>,FireConfig<3,3000,0>,FireConfig<3,3000,0>>,AlphaL<Stripes<2500,-3000,Red,Rgb<60,0,0>,Pulsing<Rgb<30,0,0>,Black,800>>,
	SwingSpeed<600>>,LockupTrL<Layers<AlphaL<AudioFlickerL<White>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,
	AlphaL<White,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>>,Int<10000>>>>,TrConcat<TrInstant,White,TrFade<400>>,TrConcat<TrInstant,White,
	TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<White,AudioFlicker<White,Blue>,50,1>,TrConcat<TrInstant,AlphaL<White,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,
	TrConcat<TrInstant,HumpFlickerL<AlphaL<White,Int<16000>>,30>,TrSmoothFade<600>>>,ResponsiveStabL<Red,TrWipeIn<600>,TrWipe<600>>,ResponsiveBlastL<White,Int<400>,Scale<SwingSpeed<200>,
	Int<100>,Int<400>>,Int<400>>,ResponsiveClashL<White,TrInstant,TrFade<400>,Scale<BladeAngle<0,16000>,Int<4000>,Int<26000>>,Int<6000>,Int<20000>>,LockupTrL<AlphaL<BrownNoiseFlickerL<White,Int<300>>,
	SmoothStep<Int<30000>,Int<5000>>>,TrWipeIn<400>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Mix<TwistAngle<>,Red,Orange>,SmoothStep<Int<28000>,Int<5000>>>,TrWipeIn<600>,
	TrFade<300>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeSparkTip<White,2056>,TrConcat<TrWipe<200>,Mix<SmoothStep<Int<27500>,Int<-2000>>,Black,RotateColorsX<Variation,Rgb<95,0,210>>>,
	TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<200>,Int<300>,Int<200>,Int<0>>,Mix<SmoothStep<Int<22000>,Int<-2000>>,Black,RotateColorsX<Variation,Rgb<95,0,210>>>,
	TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<250>,Int<300>,Int<250>,Int<0>>,Mix<SmoothStep<Int<16500>,Int<-2000>>,Black,RotateColorsX<Variation,Rgb<95,0,210>>>,
	TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<300>,Int<300>,Int<300>,Int<0>>,Mix<SmoothStep<Int<11000>,Int<-2000>>,Black,RotateColorsX<Variation,Rgb<95,0,210>>>,
	TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<350>,Int<300>,Int<350>,Int<0>>,Mix<SmoothStep<Int<5500>,Int<-2000>>,Black,RotateColorsX<Variation,Rgb<95,0,210>>>,
	TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<400>,Int<300>,Int<400>,Int<0>>,Black,TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<400>,Int<300>,Int<400>,Int<0>>,Black,TrInstant>,Black>,
	TransitionEffectL<TrConcat<TrInstant,AlphaL<BrownNoiseFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,Int<30>>,SmoothStep<Scale<SlowNoise<Int<2000>>,Int<1000>,Int<4000>>,Int<-4000>>>,TrDelay<2000>>,
	EFFECT_RETRACTION>,TransitionEffectL<TrConcat<TrDelay<1500>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,30>,Bump<Int<0>,Int<3000>>>,TrFade<2000>,
	AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,30>,Bump<Int<0>,Int<4000>>>,TrFade<2500>,AlphaL<HumpFlickerL<RotateColorsX<Variation,Rgb<95,0,210>>,30>,Bump<Int<0>,Int<5000>>>,TrBoing<1950,7>>,
	EFFECT_PREON>,TransitionEffectL<TrConcat<TrInstant,TransitionLoopL<TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<500>,Int<200>,Int<500>,Int<32768>>>,TrDelay<1500>,
	TransitionLoopL<TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<300>,Int<300>,Int<300>,Int<32768>>>,TrDelay<2000>,TransitionLoopL<TrWaveX<RotateColorsX<Variation,Rgb<95,0,210>>,Int<100>,Int<400>,Int<100>,
	Int<32768>>>,TrDelay<3000>,AlphaL<RotateColorsX<Variation,Rgb<95,0,210>>,Bump<Int<0>,Int<6000>>>,TrBoing<1450,5>>,EFFECT_PREON>>>(), },
 { "Anakin3", "tracks/Anakin3.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(), },
{ "Hero", "tracks/Anakin3.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(), },
{ "Tusken", "tracks/Anakin3.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(), },
{ "Tusken2", "tracks/Anakin3.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(), },
{ "Villain", "tracks/Anakin3.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(), },
 { "Obiwan3", "tracks/Obiwan3.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(), },
 { "Grievous", "tracks/Grievous.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Green,Rgb<0,150,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Green,Rgb<0,150,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(), },
 { "Ventress", "tracks/Ventress.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb<150,0,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb<150,0,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(), },
 { "QuiGon", "tracks/QuiGon.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Green,Rgb<0,150,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(),
 StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Green,Rgb<0,150,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(), },
 { "Maul1", "tracks/Maul1.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb<150,0,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(),
    StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb<150,0,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(), },
 { "Reyskywalker", "tracks/Reyskywalker.wav",
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<255,200,0>,Rgb<150,100,0>>,White>,AudioFlicker<Magenta,White>>,White>,300,400>>(),
StylePtr<InOutHelper<OnSpark<AudioFlicker<Rgb<255,200,0>,Rgb<150,100,0>>,OnSpark<DeepSkyBlue,Green,600>,600>,800,400>>(), },
 { "Windu", "tracks/Windu.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Magenta,Rgb<150,0,150>>,White>,AudioFlicker<Blue,Yellow>>,White>,500,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Magenta,Rgb<150,0,150>>,White>,AudioFlicker<Blue,Yellow>>,White>,500,500>>(), },
 { "Palpatine", "tracks/Palpatine.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb<150,0,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb<150,0,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(), },
 { "Dooku", "tracks/Dooku.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb<150,0,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb<150,0,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(), },
 { "Luke5", "tracks/Luke5.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<50,100,255>,Rgb<25,50,100>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,500,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<50,100,255>,Rgb<25,50,100>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,500,500>>(), },
 { "Ben", "tracks/Ben.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Cyan,Rgb<0,150,150>>,Red>,AudioFlicker<Red,White>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Cyan,Rgb<0,150,150>>,Red>,AudioFlicker<Red,White>>,White>,300,500>>(), },
 { "Ahsoka1", "tracks/Ahsoka1.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(), },
 { "Vader", "tracks/Vader.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb<150,0,0>>,White>,AudioFlicker<Blue,White>>,White>,800,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb<150,0,0>>,White>,AudioFlicker<Blue,White>>,White>,800,500>>(), },
 { "Ahsoka2", "tracks/Ahsoka2.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,Gradient<AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,HumpFlicker<LightYellow,Red,30>,AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>>,Gradient<AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,HumpFlicker<Cyan,Coral,30>>>,White,50,200>,White,200,150>,Rgb<100,100,100>,100>,400,200>>(),    StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,Gradient<AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,HumpFlicker<LightYellow,Red,30>,AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>>,Gradient<AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,HumpFlicker<Cyan,Coral,30>>>,White,50,200>,White,200,150>,Rgb<100,100,100>,100>,400,200>>(), },
 { "Rey", "tracks/Rey.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(), },
 { "KyloRen", "tracks/KyloRen.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,Gradient<HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<Yellow,Green,50>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>>,Gradient<HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<Yellow,Green,50>>>,Pink>,Pink>,Pink,400>,300,400>>(),
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,Gradient<HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<Yellow,Green,50>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>>,Gradient<HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<Yellow,Green,50>>>,Pink>,Pink>,Pink,400>,300,400>>(), },
 { "Leia", "tracks/Leia.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Cyan,Rgb<0,150,150>>,Red>,AudioFlicker<Red,White>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Cyan,Rgb<0,150,150>>,Red>,AudioFlicker<Red,White>>,White>,300,500>>(), },
 { "Guards", "tracks/Guards.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<255,200,0>,Rgb<150,100,0>>,White>,AudioFlicker<Magenta,White>>,White>,300,400>>(),
 StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<255,200,0>,Rgb<150,100,0>>,White>,AudioFlicker<Magenta,White>>,White>,300,400>>(), },
 { "Kestis", "tracks/Kestis.wav",
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Stripes<10000,-1500,RotateColorsX<Variation,DarkOrange>,RotateColorsX<Variation,Rgb<250,50,0>>,RotateColorsX<Variation,Rgb<125,25,0>>,RotateColorsX<Variation,Rgb<250,50,0>>,Pulsing<RotateColorsX<Variation,DarkOrange>,RotateColorsX<Variation,Rgb<180,35,0>>,800>,RotateColorsX<Variation,Rgb<125,25,0>>,RotateColorsX<Variation,Rgb<250,50,0>>>,Cyan>,AudioFlicker<Blue,White>>,White>,300,500>>(),
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Stripes<10000,-1500,RotateColorsX<Variation,DarkOrange>,RotateColorsX<Variation,Rgb<250,50,0>>,RotateColorsX<Variation,Rgb<125,25,0>>,RotateColorsX<Variation,Rgb<250,50,0>>,Pulsing<RotateColorsX<Variation,DarkOrange>,RotateColorsX<Variation,Rgb<180,35,0>>,800>,RotateColorsX<Variation,Rgb<125,25,0>>,RotateColorsX<Variation,Rgb<250,50,0>>>,Cyan>,AudioFlicker<Blue,White>>,White>,300,500>>(), },
 { "Secondsister", "tracks/Secondsister.wav",
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Stripes<8000,-1300,RotateColorsX<Variation,Rgb<255,0,10>>,RotateColorsX<Variation,Rgb<200,0,8>>,RotateColorsX<Variation,Rgb<255,0,10>>,RotateColorsX<Variation,Rgb<150,0,5>>,Pulsing<RotateColorsX<Variation,Rgb<255,0,5>>,RotateColorsX<Variation,Rgb<220,0,9>>,800>,RotateColorsX<Variation,Rgb<255,0,7>>,RotateColorsX<Variation,Rgb<150,0,5>>>,White>,AudioFlicker<White,Rgb<50,50,50>>>,White>,300,500>>(),
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Stripes<8000,-1300,RotateColorsX<Variation,Rgb<255,0,10>>,RotateColorsX<Variation,Rgb<200,0,8>>,RotateColorsX<Variation,Rgb<255,0,10>>,RotateColorsX<Variation,Rgb<150,0,5>>,Pulsing<RotateColorsX<Variation,Rgb<255,0,5>>,RotateColorsX<Variation,Rgb<220,0,9>>,800>,RotateColorsX<Variation,Rgb<255,0,7>>,RotateColorsX<Variation,Rgb<150,0,5>>>,White>,AudioFlicker<White,Rgb<50,50,50>>>,White>,300,500>>(), },
 { "Maricols", "tracks/Maricols.wav",
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Stripes<8000,-1300,RotateColorsX<Variation,Rgb<255,0,10>>,RotateColorsX<Variation,Rgb<200,0,8>>,RotateColorsX<Variation,Rgb<255,0,10>>,RotateColorsX<Variation,Rgb<150,0,5>>,Pulsing<RotateColorsX<Variation,Rgb<255,0,5>>,RotateColorsX<Variation,Rgb<220,0,9>>,800>,RotateColorsX<Variation,Rgb<255,0,7>>,RotateColorsX<Variation,Rgb<150,0,5>>>,White>,AudioFlicker<White,Rgb<50,50,50>>>,White>,300,500>>(),
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<Stripes<8000,-1300,RotateColorsX<Variation,Rgb<255,0,10>>,RotateColorsX<Variation,Rgb<200,0,8>>,RotateColorsX<Variation,Rgb<255,0,10>>,RotateColorsX<Variation,Rgb<150,0,5>>,Pulsing<RotateColorsX<Variation,Rgb<255,0,5>>,RotateColorsX<Variation,Rgb<220,0,9>>,800>,RotateColorsX<Variation,Rgb<255,0,7>>,RotateColorsX<Variation,Rgb<150,0,5>>>,White>,AudioFlicker<White,Rgb<50,50,50>>>,White>,300,500>>(), },
 { "Luke6", "tracks/Luke6.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<50,255,0>,Rgb<20,150,0>>,White>,AudioFlicker<Blue,Yellow>,AudioFlicker<Tomato,Yellow>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<50,255,0>,Rgb<20,150,0>>,White>,AudioFlicker<Blue,Yellow>,AudioFlicker<Tomato,Yellow>>,White>,300,500>>(), },
 { "Finn", "tracks/Finn.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(), },
 { "Bastilla", "tracks/Bastilla.wav",
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<255,200,0>,Rgb<150,100,0>>,White>,AudioFlicker<Magenta,White>>,White>,300,400>>(),
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<255,200,0>,Rgb<150,100,0>>,White>,AudioFlicker<Magenta,White>>,White>,300,400>>(), },
 { "Empress", "tracks/Empress.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,Gradient<HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<Yellow,Green,50>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>>,Gradient<HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<Yellow,Green,50>>>,Pink>,Pink>,Pink,400>,300,400>>(),
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,Gradient<HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<Yellow,Green,50>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>>,Gradient<HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<DarkOrange,BrownNoiseFlicker<Red,Black,50>,15>,HumpFlicker<Yellow,Green,50>>>,Pink>,Pink>,Pink,400>,300,400>>(), },
 { "Yoda", "tracks/Yoda.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Green,Rgb<0,150,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Green,Rgb<0,150,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(), },
 { "Ezra", "tracks/Ezra.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<10,20,255>,Rgb<5,10,130>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,300,500>>(), },
 { "Maul2", "tracks/Maul2.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb<150,0,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb<150,0,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(), },
 { "Savage", "tracks/Savage.wav",
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb<150,0,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(),
StylePtr<InOutHelper<SimpleClash<Lockup<Blast<AudioFlicker<Red,Rgb<150,0,0>>,White>,AudioFlicker<Blue,White>>,White>,300,500>>(), },
 { "Obiwan4", "tracks/Obiwan4.wav",
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<50,100,255>,Rgb<25,50,100>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,800,500>>(),
StylePtr<InOutSparkTip<SimpleClash<Lockup<Blast<AudioFlicker<Rgb<50,100,255>,Rgb<25,50,100>>,White>,AudioFlicker<Rgb<100,0,255>,Rgb<150,150,150>>,AudioFlicker<Red,Rgb<150,150,150>>>,White>,800,500>>(), },
 { "Mandalorian", "tracks/Mandalorian.wav",
StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,Gradient<AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,HumpFlicker<LightYellow,Red,30>,AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>>,Gradient<AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,HumpFlicker<Cyan,Coral,30>>>,White,50,200>,White,200,150>,Rgb<100,100,100>,100>,400,200>>(),    StylePtr<InOutHelper<OnSpark<Blast<LocalizedClash<Lockup<AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,Gradient<AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,HumpFlicker<LightYellow,Red,30>,AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>>,Gradient<AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,AudioFlicker<Rgb<100,100,100>,Rgb<30,30,30>>,HumpFlicker<Cyan,Coral,30>>>,White,50,200>,White,200,150>,Rgb<100,100,100>,100>,400,200>>(), },
  { "Power", "tracks/Power.wav",
    &style_charging,
	StylePtr<InOutHelper<OnSpark<AudioFlicker<Green,Rgb16<0,38402,0>>,OnSpark<GreenYellow,DeepSkyBlue,200>,400>,10,800>>(), "0"},
};
BladeConfig blades[] = {
 { 0, WS281XBladePtr<130, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    WS281XBladePtr<130, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin4, bladePowerPin5> >(), CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
