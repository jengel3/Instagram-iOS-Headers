/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:09 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/FBRequestDelegate.h>
#import <Instagram/FBLoginDialogDelegate.h>

@protocol FBSessionDelegate;
@class NSMutableSet, FBSession, FBSessionManualTokenCachingStrategy, FBDialog, NSString, FBRequest, NSDate, FBFrictionlessRequestSettings;

@interface Facebook : NSObject <FBRequestDelegate, FBLoginDialogDelegate> {

	id<FBSessionDelegate> _sessionDelegate;
	NSMutableSet* _requests;
	FBSession* _session;
	FBSessionManualTokenCachingStrategy* _tokenCaching;
	FBDialog* _fbDialog;
	NSString* _appId;
	NSString* _urlSchemeSuffix;
	char _isExtendingAccessToken;
	FBRequest* _requestExtendingAccessToken;
	NSDate* _lastAccessTokenUpdate;
	FBFrictionlessRequestSettings* _frictionlessRequestSettings;
	char _hasUpdatedAccessToken;

}

@property (nonatomic,copy) NSString * accessToken; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (assign,nonatomic) id<FBSessionDelegate> sessionDelegate;                           //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
@property (nonatomic,copy) NSString * urlSchemeSuffix;                                        //@synthesize urlSchemeSuffix=_urlSchemeSuffix - In the implementation block
@property (nonatomic,readonly) char isFrictionlessRequestsEnabled; 
@property (nonatomic,retain) FBSession * session;                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * appId;                                                  //@synthesize appId=_appId - In the implementation block
@property (assign,nonatomic) char hasUpdatedAccessToken;                                      //@synthesize hasUpdatedAccessToken=_hasUpdatedAccessToken - In the implementation block
@property (nonatomic,retain) FBSessionManualTokenCachingStrategy * tokenCaching;              //@synthesize tokenCaching=_tokenCaching - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(char)handleOpenURL:(id)arg1 ;
-(NSString *)urlSchemeSuffix;
-(void)request:(id)arg1 didLoad:(id)arg2 ;
-(id)requestWithGraphPath:(id)arg1 andDelegate:(id)arg2 ;
-(char)isFrictionlessEnabledForRecipient:(id)arg1 ;
-(void)requestLoading:(id)arg1 ;
-(void)request:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)request:(id)arg1 didLoadRawResponse:(id)arg2 ;
-(char)isFrictionlessEnabledForRecipients:(id)arg1 ;
-(void)fbDialogLogin:(id)arg1 expirationDate:(id)arg2 params:(id)arg3 ;
-(void)fbDialogNotLogin:(char)arg1 ;
-(id)initWithAppId:(id)arg1 urlSchemeSuffix:(id)arg2 andDelegate:(id)arg3 ;
-(void)setSessionDelegate:(id<FBSessionDelegate>)arg1 ;
-(FBSessionManualTokenCachingStrategy *)tokenCaching;
-(void)invalidateSession;
-(void)observeFinishedContextValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)observeTokenContextValueForKeyPath:(id)arg1 change:(id)arg2 ;
-(char)hasUpdatedAccessToken;
-(void)setHasUpdatedAccessToken:(char)arg1 ;
-(id)requestWithParams:(id)arg1 andDelegate:(id)arg2 ;
-(void)extendAccessToken;
-(char)isSessionValid;
-(id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 ;
-(void)updateSessionIfTokenUpdated;
-(void)extendAccessTokenIfNeeded;
-(id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4 ;
-(void)dialog:(id)arg1 andParams:(id)arg2 andDelegate:(id)arg3 ;
-(char)isFrictionlessRequestsEnabled;
-(void)reloadFrictionlessRecipientCache;
-(id)initWithAppId:(id)arg1 andDelegate:(id)arg2 ;
-(id)getOwnBaseUrl;
-(id)parseURLParams:(id)arg1 ;
-(void)authorize:(id)arg1 ;
-(void)logout:(id)arg1 ;
-(id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andDelegate:(id)arg3 ;
-(void)dialog:(id)arg1 andDelegate:(id)arg2 ;
-(void)enableFrictionlessRequests;
-(void)setTokenCaching:(FBSessionManualTokenCachingStrategy *)arg1 ;
-(void)setUrlSchemeSuffix:(NSString *)arg1 ;
-(char)shouldExtendAccessToken;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<FBSessionDelegate>)sessionDelegate;
-(FBSession *)session;
-(void)setSession:(FBSession *)arg1 ;
-(void)logout;
-(NSDate *)expirationDate;
-(NSString *)appId;
-(void)setAppId:(NSString *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setAccessToken:(NSString *)arg1 ;
-(NSString *)accessToken;
@end

