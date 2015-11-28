

@protocol IGVideoPlayerDelegate <NSObject>
@required
-(void)videoPlayerDidLoadPixelBuffer:(CVBufferRef)arg1 withTime:(SCD_Struct_IG43)arg2;
-(void)videoPlayerDidFinishPlaying;

@end

