/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/FBWebViewProcessPoolContaining.h>
#import <Instagram/IGUserSessionClearableObject.h>

@class NSString;

@interface IGWebViewProcessPoolContainer : NSObject <FBWebViewProcessPoolContaining, IGUserSessionClearableObject> {

	/*^block*/id _invalidationHandler;

}

@property (nonatomic,copy) id invalidationHandler;                  //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(void)registerHandlerToBeCalledOnSessionInvalidation:(/*^block*/id)arg1 ;
-(void)invalidate;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
@end
