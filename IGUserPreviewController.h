
#import <Instagram/IGViewController.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGPreviewingAction.h>

@class UINavigationController, IGPreviewEventManager, IGUser, IGUserPreviewView, IGFeedNetworkSource, NSArray, NSString;

@interface IGUserPreviewController : IGViewController <IGFeedNetworkSourceDelegate, IGPreviewingAction> {

	float _previewWidth;
	UINavigationController* _navigationControllerForPushing;
	IGPreviewEventManager* _logger;
	IGUser* _user;
	IGUserPreviewView* _userPreviewView;
	IGFeedNetworkSource* _feedSource;
	NSArray* _previewItems;

}

@property (nonatomic,retain) IGUser * user;                                                        //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) IGUserPreviewView * userPreviewView;                                  //@synthesize userPreviewView=_userPreviewView - In the implementation block
@property (nonatomic,retain) IGFeedNetworkSource * feedSource;                                     //@synthesize feedSource=_feedSource - In the implementation block
@property (nonatomic,retain) NSArray * previewItems;                                               //@synthesize previewItems=_previewItems - In the implementation block
@property (assign,nonatomic) float previewWidth;                                                   //@synthesize previewWidth=_previewWidth - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationControllerForPushing;              //@synthesize navigationControllerForPushing=_navigationControllerForPushing - In the implementation block
@property (nonatomic,retain) IGPreviewEventManager * logger;                                       //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)setFeedSource:(IGFeedNetworkSource *)arg1 ;
-(IGFeedNetworkSource *)feedSource;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)showDirectShare;
-(void)viewProfile;
-(UINavigationController *)navigationControllerForPushing;
-(float)previewWidth;
-(id)previewActionBarItems;
-(void)setPreviewWidth:(float)arg1 ;
-(void)updatePreviewItems;
-(void)setUserPreviewView:(IGUserPreviewView *)arg1 ;
-(IGUserPreviewView *)userPreviewView;
-(void)updateUser;
-(void)fetchUserData;
-(void)userFollowStatusChangedNotification:(id)arg1 ;
-(void)editProfile;
-(void)unfollowUser;
-(void)toggleNotifications;
-(void)followUser;
-(void)setNavigationControllerForPushing:(UINavigationController *)arg1 ;
-(char)enableNavState;
-(IGPreviewEventManager *)logger;
-(void)setLogger:(IGPreviewEventManager *)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(id)previewActionItems;
-(void)setPreviewItems:(NSArray *)arg1 ;
-(NSArray *)previewItems;
@end

