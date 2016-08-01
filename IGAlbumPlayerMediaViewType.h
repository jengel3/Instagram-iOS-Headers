

@protocol IGAlbumPlayerMediaViewType <NSObject>
@required
-(void)configureWithItem:(id)arg1 delegate:(id)arg2 loggingContext:(id)arg3;
-(void)pauseWithReason:(int)arg1;
-(void)seekToBeginning;
-(char)isViewFinishedLoading;
-(void)stopWithReason:(int)arg1;
-(void)play;
-(void)setAudioEnabled:(char)arg1;
-(id)item;
-(void)prepareForReuse;

@end

