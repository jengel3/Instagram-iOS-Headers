/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:01 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGAmebaAuthDelegate.h>
#import <Instagram/IGAmebaThemesDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class NSString, NSDictionary, IGNonCurrentUserDefaults;

@interface IGAmebaHelper : NSObject <IGAmebaAuthDelegate, IGAmebaThemesDelegate, IGServiceHelperProtocol> {

	NSString* _accessToken;
	NSString* _serviceName;
	NSDictionary* _currentThemeSetting;
	IGNonCurrentUserDefaults* _sessionUserDefaults;
	NSString* _username;
	NSString* _refreshToken;

}

@property (nonatomic,copy) NSString * accessToken;                                        //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                                    //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSString * shortServiceName; 
@property (nonatomic,readonly) NSString * clientID; 
@property (nonatomic,readonly) NSString * callbackURLString; 
@property (nonatomic,readonly) NSString * authURLString; 
@property (nonatomic,copy) NSDictionary * currentThemeSetting;                            //@synthesize currentThemeSetting=_currentThemeSetting - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (nonatomic,copy) NSString * username;                                           //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * refreshToken;                                       //@synthesize refreshToken=_refreshToken - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceName;
+(id)sharedHelper;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(id)sharingInfo;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(void)logoutAndUnlink;
-(id)currentUsername;
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
-(NSDictionary *)currentThemeSetting;
-(void)themesViewController:(id)arg1 didSelectTheme:(id)arg2 ;
-(NSString *)authURLString;
-(NSString *)callbackURLString;
-(void)amebaAuthControllerLoginFailed:(id)arg1 ;
-(void)amebaAuthController:(id)arg1 didLoginWithCode:(id)arg2 ;
-(id)accessTokenKey;
-(void)setAccessAndRefreshToken:(id)arg1 expirationInSeconds:(int)arg2 refreshToken:(id)arg3 ;
-(void)setCurrentUsername:(id)arg1 ;
-(void)reauthorize;
-(void)fetchTokenFinished:(id)arg1 ;
-(void)onFetchTokenFailed;
-(void)reauthorizationNeedsLogin;
-(void)setCurrentThemeSetting:(NSDictionary *)arg1 ;
-(NSString *)serviceName;
-(void)setRefreshToken:(NSString *)arg1 ;
-(NSString *)refreshToken;
-(NSString *)accessToken;
-(void)logout;
-(NSString *)clientID;
-(void)setAccessToken:(NSString *)arg1 ;
-(char)isConfigured;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

