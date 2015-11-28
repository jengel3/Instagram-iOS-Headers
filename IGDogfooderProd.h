
#import <Instagram/IGDogfooder.h>

@interface IGDogfooderProd : IGDogfooder
-(id)accessTokenForUpdateCheck;
-(id)releaseChannelForUpdateCheck;
-(int)updateMode;
-(void)checkForUpdatesIfNeeded;
-(char)isFBEmployee;
@end

