/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGGroupedTableViewController.h>

@class NSString;

@interface IGSignInHelpViewController : IGGroupedTableViewController {

	NSString* _usernameOrEmail;

}

@property (nonatomic,retain) NSString * usernameOrEmail;              //@synthesize usernameOrEmail=_usernameOrEmail - In the implementation block
-(id)tableView:(id)arg1 subtitleForHeaderInSection:(int)arg2 ;
-(void)appearedFromBackground:(id)arg1 ;
-(void)configureForgotPasswordCell:(id)arg1 forRow:(int)arg2 ;
-(void)configureOtherIssuesCell:(id)arg1 forRow:(int)arg2 ;
-(NSString *)usernameOrEmail;
-(void)setUsernameOrEmail:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

