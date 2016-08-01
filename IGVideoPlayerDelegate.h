

@protocol IGVideoPlayerDelegate <NSObject>
@required
-(void)videoPlayer:(id)arg1 didLoadPixelBuffer:(CVBufferRef)arg2 withTime:(SCD_Struct_IG53)arg3;
-(void)videoPlayer:(id)arg1 didFinishPlayingWithAnimation:(char)arg2;

@end

