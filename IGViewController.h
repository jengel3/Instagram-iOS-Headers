
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGAnalyticsRaindropProtocol.h>

@class IGAnalyticsMetadata, IGRaindropNavEvent, IGMutableRaindropRankInfo, UIBarButtonItem, NSString, IGRaindropNavState, IGKeyboardManager, NSMutableArray, IGNavigationController, IGTabBarController;

@interface IGViewController : UIViewController <IGAnalyticsRaindropProtocol> {

	UIBarButtonItem* _backItem;
	IGAnalyticsMetadata* _analyticsMetadata;
	char _showsCancelButton;
	char _isInPopover;
	NSString* _backButtonTitle;
	UIBarButtonItem* _loadingBarButtonItem;
	int _statusBarStyle;
	NSString* _clickPoint;
	IGMutableRaindropRankInfo* _surfaceRankInfo;
	IGRaindropNavState* _navState;
	int _cancelButtonSide;
	IGKeyboardManager* _keyboardManager;
	NSMutableArray* _previewingContexts;

}

@property (nonatomic,copy) NSString * backButtonTitle;                                     //@synthesize backButtonTitle=_backButtonTitle - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * loadingBarButtonItem;                       //@synthesize loadingBarButtonItem=_loadingBarButtonItem - In the implementation block
@property (assign,nonatomic) char showsCancelButton;                                       //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets preferredContentInsets; 
@property (nonatomic,readonly) IGNavigationController * navigationController; 
@property (nonatomic,readonly) IGTabBarController * tabBarController; 
@property (nonatomic,readonly) char disableNavigationGesture; 
@property (nonatomic,readonly) char disableNonEdgeNavigationGesture; 
@property (assign,nonatomic) char isInPopover;                                             //@synthesize isInPopover=_isInPopover - In the implementation block
@property (assign,nonatomic) int statusBarStyle;                                           //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (assign,nonatomic) NSString * clickPoint;                                        //@synthesize clickPoint=_clickPoint - In the implementation block
@property (nonatomic,readonly) IGMutableRaindropRankInfo * surfaceRankInfo;                //@synthesize surfaceRankInfo=_surfaceRankInfo - In the implementation block
@property (nonatomic,retain) IGRaindropNavState * navState;                                //@synthesize navState=_navState - In the implementation block
@property (assign,nonatomic) int cancelButtonSide;                                         //@synthesize cancelButtonSide=_cancelButtonSide - In the implementation block
@property (nonatomic,__weak,readonly) IGKeyboardManager * keyboardManager;                 //@synthesize keyboardManager=_keyboardManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * previewingContexts;                          //@synthesize previewingContexts=_previewingContexts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IGAnalyticsMetadata * analyticsMetadata; 
@property (nonatomic,readonly) IGRaindropNavEvent * currentNavEvent; 
@property (nonatomic,readonly) int viewType; 
@property (nonatomic,readonly) char enableNavState; 
-(void)showModalDismissButtonWithTitle:(id)arg1 style:(int)arg2 side:(int)arg3 ;
-(void)onCancelModal;
-(IGAnalyticsMetadata *)analyticsMetadata;
-(UIBarButtonItem *)loadingBarButtonItem;
-(char)enableNavState;
-(char)prefersTabBarHidden;
-(char)disableNavigationGesture;
-(char)disableNonEdgeNavigationGesture;
-(IGMutableRaindropRankInfo *)surfaceRankInfo;
-(void)setShowsCancelButton:(char)arg1 style:(int)arg2 ;
-(id)previewActionBarItems;
-(void)updateAnalyticsMetadata:(id)arg1 ;
-(IGRaindropNavEvent *)currentNavEvent;
-(IGKeyboardManager *)keyboardManager;
-(void)setNavState:(IGRaindropNavState *)arg1 ;
-(IGRaindropNavState *)navState;
-(void)hideModalDismissButton;
-(int)cancelButtonSide;
-(NSMutableArray *)previewingContexts;
-(char)shouldContinueUserActivity;
-(void)onPop;
-(void)showCancelButtonWithTitle:(id)arg1 ;
-(void)setLoadingBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setCancelButtonSide:(int)arg1 ;
-(void)setPreviewingContexts:(NSMutableArray *)arg1 ;
-(void)setIsInPopover:(char)arg1 ;
-(void)setClickPoint:(NSString *)arg1 ;
-(NSString *)clickPoint;
-(void)setTitle:(id)arg1 ;
-(id)navigationItem;
-(int)statusBarStyle;
-(int)preferredStatusBarStyle;
-(char)prefersStatusBarHidden;
-(void)setStatusBarStyle:(int)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(id)backItem;
-(NSString *)backButtonTitle;
-(void)setBackButtonTitle:(NSString *)arg1 ;
-(int)viewType;
-(IGNavigationController *)navigationController;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)automaticallyAdjustsScrollViewInsets;
-(id)registerForPreviewingWithDelegate:(id)arg1 sourceView:(id)arg2 ;
-(void)unregisterForPreviewingWithContext:(id)arg1 ;
-(IGTabBarController *)tabBarController;
-(char)hidesBottomBarWhenPushed;
-(void)setHidesBottomBarWhenPushed:(char)arg1 ;
-(UIEdgeInsets)preferredContentInsets;
-(void)keyboardDidShow:(id)arg1 ;
-(void)keyboardDidHide:(id)arg1 ;
-(void)setShowsCancelButton:(char)arg1 ;
-(char)showsCancelButton;
-(void)updateUserActivity:(id)arg1 userInfo:(id)arg2 webpageURL:(id)arg3 ;
-(char)isInPopover;
-(char)prefersNavigationBarHidden;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
@end

