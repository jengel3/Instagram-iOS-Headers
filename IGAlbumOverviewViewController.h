
#import <Instagram/IGViewController.h>
#import <Instagram/IGAlbumCarouselSelectionDelegate.h>
#import <Instagram/IGAlbumItemActionsControllerDelegate.h>
#import <Instagram/IGAlbumViewersListDelegate.h>
#import <Instagram/IGPageViewControllerDataSource.h>
#import <Instagram/IGPageViewControllerDelegate.h>

@protocol IGAlbumItemType, IGAlbumOverviewDelegate;
@class IGAlbumCarouselView, IGPageViewController, NSArray, IGUserSession, IGTapButton, IGAlbumItemActionsController, NSString;

@interface IGAlbumOverviewViewController : IGViewController <IGAlbumCarouselSelectionDelegate, IGAlbumItemActionsControllerDelegate, IGAlbumViewersListDelegate, IGPageViewControllerDataSource, IGPageViewControllerDelegate> {

	id<IGAlbumItemType> _currentItem;
	id<IGAlbumOverviewDelegate> _delegate;
	IGAlbumCarouselView* _carouselView;
	IGPageViewController* _viewersPageViewController;
	NSArray* _items;
	IGUserSession* _userSession;
	IGTapButton* _closeButton;
	IGAlbumItemActionsController* _itemActionsController;

}

@property (nonatomic,retain) IGAlbumCarouselView * carouselView;                                //@synthesize carouselView=_carouselView - In the implementation block
@property (nonatomic,retain) IGPageViewController * viewersPageViewController;                  //@synthesize viewersPageViewController=_viewersPageViewController - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) IGUserSession * userSession;                                     //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) IGTapButton * closeButton;                                         //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) IGAlbumItemActionsController * itemActionsController;              //@synthesize itemActionsController=_itemActionsController - In the implementation block
@property (nonatomic,readonly) id<IGAlbumItemType> currentItem;                                 //@synthesize currentItem=_currentItem - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumOverviewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)closeButtonTapped;
-(id)analyticsModule;
-(void)didSelectAlbumCarouselItem:(id)arg1 ;
-(void)setItemActionsController:(IGAlbumItemActionsController *)arg1 ;
-(IGAlbumItemActionsController *)itemActionsController;
-(id)initWithItems:(id)arg1 currentItem:(id)arg2 userSession:(id)arg3 ;
-(void)albumItemActionsController:(id)arg1 didDeleteItem:(id)arg2 ;
-(void)albumItemActionsController:(id)arg1 didRemoveUploadForItem:(id)arg2 ;
-(void)albumItemActionsControllerDidFinish:(id)arg1 ;
-(void)setViewersPageViewController:(IGPageViewController *)arg1 ;
-(IGPageViewController *)viewersPageViewController;
-(void)setCarouselView:(IGAlbumCarouselView *)arg1 ;
-(IGAlbumCarouselView *)carouselView;
-(void)scrollToItem:(id)arg1 animated:(char)arg2 ;
-(void)albumViewersListDidTapShare:(id)arg1 ;
-(void)albumViewersListDidTapDelete:(id)arg1 ;
-(int)numberOfPagesForPageViewController:(id)arg1 ;
-(id)pageViewController:(id)arg1 controllerForIndex:(int)arg2 ;
-(void)pageViewController:(id)arg1 didChangeCurrentViewControllerToController:(id)arg2 atIndex:(int)arg3 ;
-(void)setCloseButton:(IGTapButton *)arg1 ;
-(void)setDelegate:(id<IGAlbumOverviewDelegate>)arg1 ;
-(id<IGAlbumOverviewDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(NSArray *)items;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(id<IGAlbumItemType>)currentItem;
-(IGUserSession *)userSession;
-(IGTapButton *)closeButton;
-(char)prefersNavigationBarHidden;
@end

