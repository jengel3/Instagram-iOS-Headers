
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGAnalyticsModule.h>
#import <Instagram/IGAnalyticsRaindropProtocol.h>
#import <Instagram/IGViewControllerType.h>
#import <Instagram/IGInlineGalleryHost.h>

@class UIBarButtonItem, IGAnalyticsMetadata, NSString, IGScreenshotObserver, IGMutableRaindropRankInfo, IGRaindropNavState, IGKeyboardManager, UILongPressGestureRecognizer, NSMutableArray, IGNavigationController, IGTabBarController, IGRaindropNavEvent;

@interface IGViewController : UIViewController <IGAnalyticsModule, IGAnalyticsRaindropProtocol, IGViewControllerType, IGInlineGalleryHost> {

	UIBarButtonItem* _backItem;
	IGAnalyticsMetadata* _analyticsMetadata;
	char _showsCancelButton;
	char _isInPopover;
	UIBarButtonItem* _loadingBarButtonItem;
	int _statusBarStyle;
	NSString* _clickPoint;
	NSString* _entityId;
	IGScreenshotObserver* _screenshotObserver;
	IGMutableRaindropRankInfo* _surfaceRankInfo;
	IGRaindropNavState* _navState;
	int _cancelButtonSide;
	IGKeyboardManager* _keyboardManager;
	UILongPressGestureRecognizer* _longPressRecognizer;
	NSMutableArray* _previewingContexts;

}

@property (nonatomic,retain) UIBarButtonItem * loadingBarButtonItem;                          //@synthesize loadingBarButtonItem=_loadingBarButtonItem - In the implementation block
@property (assign,nonatomic) char showsCancelButton;                                          //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets preferredContentInsets; 
@property (nonatomic,readonly) IGNavigationController * navigationController; 
@property (nonatomic,readonly) IGTabBarController * tabBarController; 
@property (nonatomic,readonly) char disableNavigationGesture; 
@property (nonatomic,readonly) char disableNonEdgeNavigationGesture; 
@property (assign,nonatomic) char isInPopover;                                                //@synthesize isInPopover=_isInPopover - In the implementation block
@property (assign,nonatomic) int statusBarStyle;                                              //@synthesize statusBarStyle=_statusBarStyle - In the implementation block
@property (nonatomic,retain) NSString * clickPoint;                                           //@synthesize clickPoint=_clickPoint - In the implementation block
@property (nonatomic,retain) NSString * entityId;                                             //@synthesize entityId=_entityId - In the implementation block
@property (nonatomic,readonly) IGScreenshotObserver * screenshotObserver;                     //@synthesize screenshotObserver=_screenshotObserver - In the implementation block
@property (nonatomic,readonly) IGMutableRaindropRankInfo * surfaceRankInfo;                   //@synthesize surfaceRankInfo=_surfaceRankInfo - In the implementation block
@property (nonatomic,retain) IGRaindropNavState * navState;                                   //@synthesize navState=_navState - In the implementation block
@property (assign,nonatomic) int cancelButtonSide;                                            //@synthesize cancelButtonSide=_cancelButtonSide - In the implementation block
@property (nonatomic,__weak,readonly) IGKeyboardManager * keyboardManager;                    //@synthesize keyboardManager=_keyboardManager - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressRecognizer;              //@synthesize longPressRecognizer=_longPressRecognizer - In the implementation block
@property (nonatomic,retain) NSMutableArray * previewingContexts;                             //@synthesize previewingContexts=_previewingContexts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IGAnalyticsMetadata * analyticsMetadata; 
@property (nonatomic,readonly) IGRaindropNavEvent * currentNavEvent; 
@property (nonatomic,readonly) int viewType; 
@property (nonatomic,readonly) char enableNavState; 
-(void)showModalDismissButtonWithTitle:(id)arg1 side:(int)arg2 ;
-(void)onCancelModal;
-(id)analyticsModule;
-(UIBarButtonItem *)loadingBarButtonItem;
-(IGAnalyticsMetadata *)analyticsMetadata;
-(char)prefersTabBarHidden;
-(char)enableNavState;
-(char)disableNavigationGesture;
-(char)disableNonEdgeNavigationGesture;
-(IGRaindropNavEvent *)currentNavEvent;
-(IGMutableRaindropRankInfo *)surfaceRankInfo;
-(IGRaindropNavState *)navState;
-(UILongPressGestureRecognizer *)longPressRecognizer;
-(NSString *)entityId;
-(void)setEntityId:(NSString *)arg1 ;
-(char)canHostInlineGallery:(char)arg1 ;
-(IGScreenshotObserver *)screenshotObserver;
-(id)previewActionBarItems;
-(void)updateAnalyticsMetadata:(id)arg1 ;
-(IGKeyboardManager *)keyboardManager;
-(void)setNavState:(IGRaindropNavState *)arg1 ;
-(void)hideModalDismissButton;
-(int)cancelButtonSide;
-(void)didLongPress:(id)arg1 ;
-(NSMutableArray *)previewingContexts;
-(void)setPreviewingContexts:(NSMutableArray *)arg1 ;
-(char)shouldContinueUserActivity;
-(void)setLoadingBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setCancelButtonSide:(int)arg1 ;
-(void)setLongPressRecognizer:(UILongPressGestureRecognizer *)arg1 ;
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
-(int)viewType;
-(IGNavigationController *)navigationController;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)extendedLayoutIncludesOpaqueBars;
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

