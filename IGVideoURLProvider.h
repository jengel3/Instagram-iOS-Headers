

@protocol IGVideoURLProvider <NSObject>
@required
-(id)videoURLForVideoVersion:(int)arg1;
-(id)videoURLForCurrentNetworkConditions;
-(id)isAudioDetected;

@end

