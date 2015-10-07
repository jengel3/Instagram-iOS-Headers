/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:11 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGImageViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol IGSwitchUsersControllerDelegate;
@class UITableView, NSArray, NSString;

@interface IGSwitchUsersController : NSObject <IGImageViewDelegate, UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	id<IGSwitchUsersControllerDelegate> _delegate;
	NSArray* _usersArray;
	int _currentUserIndex;
	unsigned _switchUsersMode;

}

@property (nonatomic,retain) UITableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<IGSwitchUsersControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * usersArray;                                             //@synthesize usersArray=_usersArray - In the implementation block
@property (assign,nonatomic) int currentUserIndex;                                             //@synthesize currentUserIndex=_currentUserIndex - In the implementation block
@property (assign,nonatomic) unsigned switchUsersMode;                                         //@synthesize switchUsersMode=_switchUsersMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)imageViewLoadedImage:(id)arg1 ;
-(id)initWithSwitchUsersMode:(unsigned)arg1 ;
-(float)minimumTableViewHeight;
-(void)updateCurrentUserIndex;
-(void)updateUserData;
-(NSArray *)usersArray;
-(void)setCurrentUserIndex:(int)arg1 ;
-(void)setUsersArray:(NSArray *)arg1 ;
-(unsigned)switchUsersMode;
-(id)currentUserCellForTableView:(id)arg1 ;
-(id)userCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)addAccountCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(int)currentUserIndex;
-(void)setSwitchUsersMode:(unsigned)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGSwitchUsersControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<IGSwitchUsersControllerDelegate>)delegate;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
@end
