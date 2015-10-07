/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:10 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGFlickrAuthViewControllerDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class NSString;

@interface IGFlickrHelper : NSObject <IGFlickrAuthViewControllerDelegate, IGServiceHelperProtocol> {

	NSString* _tokenKey;
	NSString* _tokenSecret;
	NSString* _username;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHelper;
-(id)sharingInfo;
-(void)logoutAndUnlink;
-(void)setTokenKey:(id)arg1 tokenSecret:(id)arg2 username:(id)arg3 save:(char)arg4 ;
-(id)currentUsername;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)requiresLocationCoordinate;
-(char)hasEverBeenConfigured;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(id)shortServiceName;
-(char)needsToReauthorize;
-(void)reauthorizeIfNeeded;
-(id)viewControllerForAdvancedOptions;
-(id)callbackURLString;
-(void)flickrAuthController:(id)arg1 didLoginWithTokenKey:(id)arg2 tokenSecret:(id)arg3 username:(id)arg4 ;
-(void)flickrAuthControllerLoginFailed:(id)arg1 ;
-(void)loadTokens;
-(char)hasTokens;
-(id)oldFlickrToken;
-(char)isConfigured;
-(id)init;
-(id)serviceName;
-(void)logout;
@end

