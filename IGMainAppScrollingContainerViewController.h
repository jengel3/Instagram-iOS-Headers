
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Instagram/IGAlbumCreationViewControllerNavigationDelegate.h>
#import <Instagram/IGMainAppScrollGestureDelegate.h>
#import <Instagram/IGCustomViewController.h>

@class IGMainAppCollectionView, UIViewController, IGAlbumCreationViewController, IGTabBarController, IGNavigationController, IGUserSession, IGStoryCaptureAnimationController, NSString;

@interface IGMainAppScrollingContainerViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, IGAlbumCreationViewControllerNavigationDelegate, IGMainAppScrollGestureDelegate, IGCustomViewController> {

	IGMainAppCollectionView* _collectionView;
	UIViewController* _activeViewController;
	IGAlbumCreationViewController* _cameraViewController;
	int _cameraEntryPoint;
	int _cameraExitPoint;
	IGTabBarController* _tabBarController;
	IGNavigationController* _directInboxNavController;
	IGUserSession* _userSession;
	IGStoryCaptureAnimationController* _storyCaptureAnimationController;

}

@property (nonatomic,readonly) IGMainAppCollectionView * collectionView;                                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIViewController * activeViewController;                                          //@synthesize activeViewController=_activeViewController - In the implementation block
@property (nonatomic,retain) IGAlbumCreationViewController * cameraViewController;                             //@synthesize cameraViewController=_cameraViewController - In the implementation block
@property (assign,nonatomic) int cameraEntryPoint;                                                             //@synthesize cameraEntryPoint=_cameraEntryPoint - In the implementation block
@property (assign,nonatomic) int cameraExitPoint;                                                              //@synthesize cameraExitPoint=_cameraExitPoint - In the implementation block
@property (nonatomic,retain) IGTabBarController * tabBarController;                                            //@synthesize tabBarController=_tabBarController - In the implementation block
@property (nonatomic,retain) IGNavigationController * directInboxNavController;                                //@synthesize directInboxNavController=_directInboxNavController - In the implementation block
@property (nonatomic,retain) IGUserSession * userSession;                                                      //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) IGStoryCaptureAnimationController * storyCaptureAnimationController;              //@synthesize storyCaptureAnimationController=_storyCaptureAnimationController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)canBeginScrollingToOtherTab;
-(void)focusTabBarControllerAnimated:(char)arg1 ;
-(void)didTapDirectCloseButton:(id)arg1 ;
-(void)focusItem:(int)arg1 animated:(char)arg2 ;
-(void)setCameraEntryPoint:(int)arg1 ;
-(IGNavigationController *)directInboxNavController;
-(int)cameraEntryPoint;
-(void)setCameraExitPoint:(int)arg1 ;
-(int)cameraExitPoint;
-(id)activeViewControllerForContentOffset:(CGPoint)arg1 ;
-(IGStoryCaptureAnimationController *)storyCaptureAnimationController;
-(void)setStoryCaptureAnimationController:(IGStoryCaptureAnimationController *)arg1 ;
-(void)creationViewController:(id)arg1 didEnterState:(int)arg2 ;
-(void)creationViewController:(id)arg1 didFinishWithExitPoint:(int)arg2 ;
-(void)creationViewControllerDidSharePost:(id)arg1 ;
-(void)creationViewController:(id)arg1 sharePostDidDismissWithExitPoint:(int)arg2 ;
-(id)ig_keyViewControllers;
-(id)initWithUserSession:(id)arg1 tabBarController:(id)arg2 ;
-(void)focusCameraViewControllerWithEntryPoint:(int)arg1 animated:(char)arg2 ;
-(void)focusDirectInboxViewControllerAnimated:(char)arg1 ;
-(id)controllerForItem:(int)arg1 ;
-(char)isViewingInbox;
-(void)setDirectInboxNavController:(IGNavigationController *)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)viewDidLayoutSubviews;
-(IGMainAppCollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(IGTabBarController *)tabBarController;
-(int)currentItem;
-(void)setCameraViewController:(IGAlbumCreationViewController *)arg1 ;
-(IGAlbumCreationViewController *)cameraViewController;
-(IGUserSession *)userSession;
-(void)setUserSession:(IGUserSession *)arg1 ;
-(UIViewController *)activeViewController;
-(void)setTabBarController:(IGTabBarController *)arg1 ;
-(void)setActiveViewController:(UIViewController *)arg1 ;
@end

