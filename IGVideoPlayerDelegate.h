

@protocol IGVideoPlayerDelegate <NSObject>
@required
-(void)videoPlayerDidLoadPixelBuffer:(CVBufferRef)arg1 withTime:(SCD_Struct_IG44)arg2;
-(void)videoPlayerDidFinishPlayingWithAnimation:(char)arg1;

@end

