/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGTextFieldDelegate.h>

@class IGTableViewInsetInfoView, IGTextField, IGUser, NSString;

@interface IGResetPasswordViewController : IGGroupedTableViewController <IGTextFieldDelegate> {

	IGTableViewInsetInfoView* _footerView;
	IGTextField* _passwordField;
	IGTextField* _repeatPasswordField;
	IGUser* _user;
	NSString* _token;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithToken:(id)arg1 user:(id)arg2 ;
-(void)userUpdated:(id)arg1 ;
-(void)signIn;
-(char)validateLengthAllowZeroLength:(char)arg1 ;
-(char)validateMatching;
-(void)setUser:(id)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
@end

