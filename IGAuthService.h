/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:10 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IGAuthenticatedUser;

@interface IGAuthService : NSObject {

	IGAuthenticatedUser* _currentUser;
	unsigned _numLoginAttempts;

}

@property (nonatomic,retain) IGAuthenticatedUser * currentUser;              //@synthesize currentUser=_currentUser - In the implementation block
@property (assign,nonatomic) unsigned numLoginAttempts;                      //@synthesize numLoginAttempts=_numLoginAttempts - In the implementation block
+(id)sharedAuthService;
-(id)cookieWithName:(id)arg1 value:(id)arg2 ;
-(id)cookieWithName:(id)arg1 ;
-(void)logInWithDictionary:(id)arg1 ;
-(void)logOutWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)logInWithUsername:(id)arg1 password:(id)arg2 userInfo:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)logInWithUsername:(id)arg1 token:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)logInWithUsername:(id)arg1 twoFactorIdentifier:(id)arg2 verificationCode:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)unarchiveCurrentUser;
-(void)archiveCurrentUser;
-(unsigned)numLoginAttempts;
-(void)setNumLoginAttempts:(unsigned)arg1 ;
-(void)loginForURL:(id)arg1 params:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)handleLoginForResponse:(id)arg1 ;
-(void)setCurrentUser:(IGAuthenticatedUser *)arg1 ;
-(id)uniqueID;
-(IGAuthenticatedUser *)currentUser;
-(void)clearCookies;
-(id)cookies;
@end

