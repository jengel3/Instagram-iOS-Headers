
#import <Instagram/IGDogfooder.h>

@interface IGDogfooderProd : IGDogfooder
-(void)checkForUpdatesWithForce:(char)arg1 ;
-(id)accessTokenForUpdateCheck;
-(id)releaseChannelForUpdateCheck;
-(int)updateMode;
-(void)continueUpdate;
-(void)cancelUpdate;
-(char)isFBEmployee;
@end

