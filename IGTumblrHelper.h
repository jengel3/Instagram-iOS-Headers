/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:46 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGXAuthServiceHelper.h>

@class IGSwitch;

@interface IGTumblrHelper : IGXAuthServiceHelper {

	IGSwitch* _followSwitch;

}
+(id)sharedTumblrHelper;
-(id)loginErrorMessage;
-(int)numberOfExtraRowsForLogin;
-(void)prepareCell:(id)arg1 forIndexPath:(id)arg2 ;
-(char)isConfigurable;
-(char)hasEverBeenConfigured;
-(char)isAvailableInCurrentLocale;
-(id)shortServiceName;
-(id)viewControllerForAdvancedOptions;
-(void)onTumblrLoginCompleted:(id)arg1 ;
-(id)followSwitch;
-(void)followTicket:(id)arg1 didSucceedWithData:(id)arg2 ;
-(void)followTicket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)followInstagram;
-(int)usernameType;
-(id)serviceName;
-(void)dealloc;
-(id)init;
-(id)URLString;
-(id)consumerKey;
-(id)consumerSecret;
@end

