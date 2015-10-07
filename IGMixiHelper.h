/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:10 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGMixiAuthDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class NSString;

@interface IGMixiHelper : NSObject <IGMixiAuthDelegate, IGServiceHelperProtocol> {

	NSString* _accessToken;
	NSString* _serviceName;
	NSString* _shortServiceName;

}

@property (nonatomic,copy) NSString * accessToken;                   //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                   //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * shortServiceName;              //@synthesize shortServiceName=_shortServiceName - In the implementation block
@property (assign,nonatomic) int currentPrivacySetting; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHelper;
-(id)sharingInfo;
-(void)logoutAndUnlink;
-(void)setNeedsReauthorization;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)requiresLocationCoordinate;
-(char)hasEverBeenConfigured;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(NSString *)shortServiceName;
-(char)needsToReauthorize;
-(void)reauthorizeIfNeeded;
-(id)viewControllerForAdvancedOptions;
-(char)hasSelectedPrivacySetting;
-(id)authURLString;
-(id)callbackURLString;
-(id)accessTokenKey;
-(void)setAccessAndRefreshToken:(id)arg1 expirationInSeconds:(int)arg2 refreshToken:(id)arg3 ;
-(void)reauthorize;
-(void)fetchTokenFinished:(id)arg1 ;
-(void)onFetchTokenFailed;
-(void)reauthorizationNeedsLogin;
-(int)currentPrivacySetting;
-(id)getLabelForPrivacySetting:(int)arg1 ;
-(void)mixiAuthControllerLoginFailed:(id)arg1 ;
-(void)mixiAuthController:(id)arg1 didLoginWithCode:(id)arg2 ;
-(id)getMixiConstantForPrivacySetting:(int)arg1 ;
-(void)reauthorizationFinished;
-(void)setShortServiceName:(NSString *)arg1 ;
-(char)isConfigured;
-(id)refreshToken;
-(void)setCurrentPrivacySetting:(int)arg1 ;
-(id)init;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(void)logout;
-(id)clientID;
-(void)setAccessToken:(NSString *)arg1 ;
-(NSString *)accessToken;
@end

