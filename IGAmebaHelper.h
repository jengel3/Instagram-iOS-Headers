/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGAmebaAuthDelegate.h>
#import <Instagram/IGAmebaThemesDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class NSString, NSDictionary;

@interface IGAmebaHelper : NSObject <IGAmebaAuthDelegate, IGAmebaThemesDelegate, IGServiceHelperProtocol> {

	NSString* _accessToken;
	NSDictionary* _currentThemeSetting;
	NSString* _username;
	NSString* _refreshToken;

}

@property (nonatomic,copy) NSString * accessToken;                          //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) NSString * shortServiceName; 
@property (nonatomic,readonly) NSString * clientID; 
@property (nonatomic,readonly) NSString * callbackURLString; 
@property (nonatomic,readonly) NSString * authURLString; 
@property (nonatomic,copy) NSDictionary * currentThemeSetting;              //@synthesize currentThemeSetting=_currentThemeSetting - In the implementation block
@property (nonatomic,copy) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * refreshToken;                         //@synthesize refreshToken=_refreshToken - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHelper;
-(id)sharingInfo;
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
-(id)init;
-(NSString *)accessToken;
-(void)logout;
-(NSString *)clientID;
-(void)setAccessToken:(NSString *)arg1 ;
-(char)isConfigured;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

