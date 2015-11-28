

@class AVAudioPlayer;

@interface IGEventViewerSoundEffectPlayer : NSObject {

	AVAudioPlayer* _player;

}

@property (nonatomic,retain) AVAudioPlayer * player;              //@synthesize player=_player - In the implementation block
-(void)playOpeningSound;
-(void)playClosingSound;
-(void)playSoundWithName:(id)arg1 ;
-(void)setPlayer:(AVAudioPlayer *)arg1 ;
-(AVAudioPlayer *)player;
@end

