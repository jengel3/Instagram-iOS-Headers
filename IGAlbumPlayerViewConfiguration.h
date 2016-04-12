

@interface IGAlbumPlayerViewConfiguration : NSObject {

	char _looping;
	char _audioEnabled;

}

@property (getter=isLooping,nonatomic,readonly) char looping;                        //@synthesize looping=_looping - In the implementation block
@property (getter=isAudioEnabled,nonatomic,readonly) char audioEnabled;              //@synthesize audioEnabled=_audioEnabled - In the implementation block
-(id)initWithLooping:(char)arg1 audioEnabled:(char)arg2 ;
-(char)isAudioEnabled;
-(char)isLooping;
@end

