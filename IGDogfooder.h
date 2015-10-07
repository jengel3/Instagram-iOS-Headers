/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:08 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


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
-(id)accessTokenForUpdateCheck;
-(id)releaseChannelForUpdateCheck;
-(id)createBuildInfoRequestForReleaseChannel:(id)arg1 accessToken:(id)arg2 ;
-(void)setLatestAppBuildInfo:(IGAppBuildInfo *)arg1 ;
-(void)handleUpdateCheckCompleteWithBuildInfo:(id)arg1 ;
-(void)performBuildInfoRequest:(id)arg1 complete:(/*^block*/id)arg2 ;
-(int)updateMode;
-(void)checkForUpdatesIfNeeded;
-(IGAppBuildInfo *)latestAppBuildInfo;
-(char)needsUpgrade;
-(void)setNeedsUpgrade:(char)arg1 ;
-(double)lastUpdateCheckTime;
-(void)setLastUpdateCheckTime:(double)arg1 ;
-(id)init;
@end

