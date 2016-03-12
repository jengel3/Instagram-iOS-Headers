

@class IGAppBuildInfo;

@interface IGDogfooder : NSObject {

	char _needsUpgrade;
	IGAppBuildInfo* _latestAppBuildInfo;
	double _lastUpdateCheckTime;

}

@property (nonatomic,retain) IGAppBuildInfo * latestAppBuildInfo;              //@synthesize latestAppBuildInfo=_latestAppBuildInfo - In the implementation block
@property (assign,nonatomic) char needsUpgrade;                                //@synthesize needsUpgrade=_needsUpgrade - In the implementation block
@property (assign,nonatomic) double lastUpdateCheckTime;                       //@synthesize lastUpdateCheckTime=_lastUpdateCheckTime - In the implementation block
+(id)dogfooderForCurrentBuild;
+(id)sharedDogfooder;
-(void)userChanged;
-(void)checkForUpdatesWithForce:(char)arg1 ;
-(id)accessTokenForUpdateCheck;
-(id)releaseChannelForUpdateCheck;
-(id)createBuildInfoRequestForReleaseChannel:(id)arg1 accessToken:(id)arg2 ;
-(void)setLatestAppBuildInfo:(IGAppBuildInfo *)arg1 ;
-(void)handleUpdateCheckCompleteWithBuildInfo:(id)arg1 ;
-(void)performBuildInfoRequest:(id)arg1 complete:(/*^block*/id)arg2 ;
-(int)updateMode;
-(void)continueUpdate;
-(void)cancelUpdate;
-(IGAppBuildInfo *)latestAppBuildInfo;
-(char)needsUpgrade;
-(void)setNeedsUpgrade:(char)arg1 ;
-(double)lastUpdateCheckTime;
-(void)setLastUpdateCheckTime:(double)arg1 ;
-(void)dealloc;
-(id)init;
@end

