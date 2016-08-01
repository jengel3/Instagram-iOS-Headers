
#import <Instagram/IGViewController.h>
#import <Instagram/IGAlbumCarouselSelectionDelegate.h>
#import <Instagram/IGAlbumItemActionsControllerDelegate.h>
#import <Instagram/IGAlbumViewersListDelegate.h>
#import <Instagram/IGPageViewControllerDataSource.h>
#import <Instagram/IGPageViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGAlbumItemType, IGAlbumOverviewDelegate;
@class IGAlbumCarouselView, IGPageViewController, IGAlbumViewerViewModel, IGUserSession, IGTapButton, UISwipeGestureRecognizer, IGAlbumItemActionsController, IGAlbumOverviewNubView, NSString;

@interface IGAlbumOverviewViewController : IGViewController <IGAlbumCarouselSelectionDelegate, IGAlbumItemActionsControllerDelegate, IGAlbumViewersListDelegate, IGPageViewControllerDataSource, IGPageViewControllerDelegate, UIGestureRecognizerDelegate> {

	char _isScrollingViewersFromInteraction;
	id<IGAlbumItemType> _currentItem;
	id<IGAlbumOverviewDelegate> _delegate;
	float _presentationProgress;
	IGAlbumCarouselView* _carouselView;
	IGPageViewController* _viewersPageViewController;
	IGAlbumViewerViewModel* _viewModel;
	IGUserSession* _userSession;
	IGTapButton* _closeButton;
	IGTapButton* _settingsButton;
	UISwipeGestureRecognizer* _closeSwipeGesture;
	IGAlbumItemActionsController* _itemActionsController;
	IGAlbumOverviewNubView* _nubView;

}

@property (nonatomic,retain) IGAlbumCarouselView * carouselView;                                //@synthesize carouselView=_carouselView - In the implementation block
@property (nonatomic,retain) IGPageViewController * viewersPageViewController;                  //@synthesize viewersPageViewController=_viewersPageViewController - In the implementation block
@property (assign,nonatomic) char isScrollingViewersFromInteraction;                            //@synthesize isScrollingViewersFromInteraction=_isScrollingViewersFromInteraction - In the implementation block
@property (nonatomic,readonly) IGAlbumViewerViewModel * viewModel;                              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) IGUserSession * userSession;                                     //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) IGTapButton * closeButton;                                         //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) IGTapButton * settingsButton;                                      //@synthesize settingsButton=_settingsButton - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * closeSwipeGesture;                      //@synthesize closeSwipeGesture=_closeSwipeGesture - In the implementation block
@property (nonatomic,retain) IGAlbumItemActionsController * itemActionsController;              //@synthesize itemActionsController=_itemActionsController - In the implementation block
@property (nonatomic,retain) IGAlbumOverviewNubView * nubView;                                  //@synthesize nubView=_nubView - In the implementation block
@property (nonatomic,readonly) id<IGAlbumItemType> currentItem;                                 //@synthesize currentItem=_currentItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumOverviewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float presentationProgress;                                        //@synthesize presentationProgress=_presentationProgress - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)closeButtonTapped;
-(id)analyticsModule;
-(char)prefersTabBarHidden;
-(id)initWithUserSession:(id)arg1 ;
-(void)didSelectAlbumCarouselItem:(id)arg1 ;
-(void)setPresentationProgress:(float)arg1 ;
-(IGAlbumCarouselView *)carouselView;
-(IGPageViewController *)viewersPageViewController;
-(void)setCarouselView:(IGAlbumCarouselView *)arg1 ;
-(void)setSettingsButton:(IGTapButton *)arg1 ;
-(void)settingsButtonTapped;
-(void)setNubView:(IGAlbumOverviewNubView *)arg1 ;
-(IGAlbumOverviewNubView *)nubView;
-(void)setViewersPageViewController:(IGPageViewController *)arg1 ;
-(void)handleCloseGesture:(id)arg1 ;
-(void)setCloseSwipeGesture:(UISwipeGestureRecognizer *)arg1 ;
-(UISwipeGestureRecognizer *)closeSwipeGesture;
-(void)setupCollectionViewSyncing;
-(float)presentationProgress;
-(void)scrollToItem:(id)arg1 animated:(char)arg2 ;
-(char)isScrollingViewersFromInteraction;
-(void)settingsDoneButtonTapped;
-(void)setIsScrollingViewersFromInteraction:(char)arg1 ;
-(void)setItemActionsController:(IGAlbumItemActionsController *)arg1 ;
-(IGAlbumItemActionsController *)itemActionsController;
-(void)albumItemActionsControllerWillSavePost:(id)arg1 ;
-(void)albumItemActionsControllerWillDeletePost:(id)arg1 ;
-(void)albumItemActionsControllerWillSharePost:(id)arg1 ;
-(void)albumItemActionsControllerWillReportPost:(id)arg1 ;
-(void)albumItemActionsControllerDidFinish:(id)arg1 ;
-(void)albumViewersListDidTapShare:(id)arg1 ;
-(void)albumViewersListDidTapDelete:(id)arg1 ;
-(void)albumViewersListDidTapSave:(id)arg1 ;
-(void)albumViewersListDidTapRetry:(id)arg1 ;
-(int)numberOfPagesForPageViewController:(id)arg1 ;
-(id)pageViewController:(id)arg1 controllerForIndex:(int)arg2 ;
-(void)pageViewController:(id)arg1 didChangeCurrentViewControllerToController:(id)arg2 atIndex:(int)arg3 ;
-(void)pageViewControllerWillBeginDragging:(id)arg1 ;
-(void)pageViewControllerDidFinishScrolling:(id)arg1 ;
-(void)setViewModel:(id)arg1 currentViewerItem:(id)arg2 ;
-(id)selectedCell;
-(IGAlbumViewerViewModel *)viewModel;
-(void)setCloseButton:(IGTapButton *)arg1 ;
-(void)setDelegate:(id<IGAlbumOverviewDelegate>)arg1 ;
-(id<IGAlbumOverviewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id<IGAlbumItemType>)currentItem;
-(IGUserSession *)userSession;
-(IGTapButton *)settingsButton;
-(IGTapButton *)closeButton;
-(char)prefersNavigationBarHidden;
@end

