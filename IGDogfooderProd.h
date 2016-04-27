
#import <Instagram/IGDogfooder.h>
#import <Instagram/IGDogfooderProtocol.h>

@class NSURL, NSString;

@interface IGDogfooderProd : IGDogfooder <IGDogfooderProtocol> {

	NSURL* _latestAppBuildURL;
	double _lastUpdateCheckTime;

}

@property (nonatomic,retain) NSURL * latestAppBuildURL;               //@synthesize latestAppBuildURL=_latestAppBuildURL - In the implementation block
@property (assign,nonatomic) double lastUpdateCheckTime;              //@synthesize lastUpdateCheckTime=_lastUpdateCheckTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)updateMode;
-(void)continueUpdate;
-(void)checkForUpdatesWithForce:(char)arg1 ;
-(char)isFBEmployee;
-(void)checkForUpdatesWithForceInternal:(char)arg1 ;
-(NSURL *)latestAppBuildURL;
-(id)accessTokenForUpdateCheck;
-(id)releaseChannelForUpdateCheck;
-(id)createBuildInfoRequestForReleaseChannel:(id)arg1 accessToken:(id)arg2 ;
-(void)setLatestAppBuildURL:(NSURL *)arg1 ;
-(void)performBuildInfoRequest:(id)arg1 complete:(/*^block*/id)arg2 ;
-(void)cancelUpdate;
-(double)lastUpdateCheckTime;
-(void)setLastUpdateCheckTime:(double)arg1 ;
-(void)userChanged;
-(id)init;
@end

