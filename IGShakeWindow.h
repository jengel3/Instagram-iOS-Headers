/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>
#import <Instagram/IGRageShakeViewControllerDelegate.h>

@class IGUser, NSString;

@interface IGShakeWindow : UIWindow <IGRageShakeViewControllerDelegate> {

	char _isReporting;
	IGUser* _userToSuggest;
	double _motionStart;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didDismissRageShakeViewController:(id)arg1 didSendReport:(char)arg2 ;
-(id)windowDescriptionData;
-(void)promptBugReporter;
-(void)showBugReporterForType:(int)arg1 ;
-(id)screenshotData;
-(void)presentReportThankYouAlert;
-(void)reportCrash;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)motionEnded:(int)arg1 withEvent:(id)arg2 ;
-(void)motionBegan:(int)arg1 withEvent:(id)arg2 ;
@end

