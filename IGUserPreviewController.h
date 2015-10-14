/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:02 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>

@class UINavigationController, IGPreviewEventManager, IGUser, IGUserPreviewView, IGFeedNetworkSource, NSArray, NSString;

@interface IGUserPreviewController : UIViewController <IGFeedNetworkSourceDelegate> {

	float _previewWidth;
	UINavigationController* _navigationControllerForPushing;
	IGPreviewEventManager* _logger;
	IGUser* _user;
	IGUserPreviewView* _userPreviewView;
	IGFeedNetworkSource* _feedSource;
	NSArray* _previewItems;

}

@property (assign,nonatomic) float previewWidth;                                                   //@synthesize previewWidth=_previewWidth - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationControllerForPushing;              //@synthesize navigationControllerForPushing=_navigationControllerForPushing - In the implementation block
@property (nonatomic,retain) IGPreviewEventManager * logger;                                       //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) IGUser * user;                                                        //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) IGUserPreviewView * userPreviewView;                                  //@synthesize userPreviewView=_userPreviewView - In the implementation block
@property (nonatomic,retain) IGFeedNetworkSource * feedSource;                                     //@synthesize feedSource=_feedSource - In the implementation block
@property (nonatomic,retain) NSArray * previewItems;                                               //@synthesize previewItems=_previewItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGFeedNetworkSource *)feedSource;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)setFeedSource:(IGFeedNetworkSource *)arg1 ;
-(void)setPreviewWidth:(float)arg1 ;
-(void)setNavigationControllerForPushing:(UINavigationController *)arg1 ;
-(void)showDirectShare;
-(float)previewWidth;
-(UINavigationController *)navigationControllerForPushing;
-(id)previewActionItems;
-(void)updatePreviewItems;
-(void)setUserPreviewView:(IGUserPreviewView *)arg1 ;
-(IGUserPreviewView *)userPreviewView;
-(void)updateUser;
-(void)fetchUserData;
-(void)userFollowStatusChangedNotification:(id)arg1 ;
-(void)editProfile;
-(void)unfollowUser;
-(void)viewProfile;
-(void)toggleNotifications;
-(void)followUser;
-(id)initWithUser:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setPreviewItems:(NSArray *)arg1 ;
-(NSArray *)previewItems;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(IGPreviewEventManager *)logger;
-(void)setLogger:(IGPreviewEventManager *)arg1 ;
@end

