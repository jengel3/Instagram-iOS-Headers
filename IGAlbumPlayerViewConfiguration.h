

@interface IGAlbumPlayerViewConfiguration : NSObject {

	char _audioEnabled;

}

@property (getter=isAudioEnabled,nonatomic,readonly) char audioEnabled;              //@synthesize audioEnabled=_audioEnabled - In the implementation block
-(id)initWithAudioEnabled:(char)arg1 ;
-(char)isAudioEnabled;
@end

