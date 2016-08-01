
#import <Instagram/IGViewController.h>
#import <Instagram/IGHONFeedNetworkSourceDelegate.h>
#import <Instagram/IGHONFullSizeMessageViewDelegate.h>
#import <Instagram/IGHONHeaderDismissViewDelegate.h>
#import <Instagram/IGHONSelectionViewDelegate.h>
#import <Instagram/IGListAdapterDataSource.h>

@class IGHONFeedNetworkSource, IGListCollectionView, IGListAdapter, NSArray, IGHONHeaderDismissView, IGHONSelectionPromptView, UISegmentedControl, IGHONFullSizeMessageView, IGAlertBar, NSString;

@interface IGHONViewController : IGViewController <IGHONFeedNetworkSourceDelegate, IGHONFullSizeMessageViewDelegate, IGHONHeaderDismissViewDelegate, IGHONSelectionViewDelegate, IGListAdapterDataSource> {

	IGHONFeedNetworkSource* _networkSource;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	NSArray* _items;
	IGHONHeaderDismissView* _headerDismissView;
	IGHONSelectionPromptView* _selectionPromptView;
	UISegmentedControl* _segmentedControl;
	IGHONFullSizeMessageView* _completedView;
	IGHONFullSizeMessageView* _errorView;
	IGAlertBar* _alertBar;

}

@property (nonatomic,readonly) IGHONFeedNetworkSource * networkSource;                      //@synthesize networkSource=_networkSource - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                 //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,retain) NSArray * items;                                               //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) IGHONHeaderDismissView * headerDismissView;                  //@synthesize headerDismissView=_headerDismissView - In the implementation block
@property (nonatomic,readonly) IGHONSelectionPromptView * selectionPromptView;              //@synthesize selectionPromptView=_selectionPromptView - In the implementation block
@property (nonatomic,readonly) UISegmentedControl * segmentedControl;                       //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,readonly) IGHONFullSizeMessageView * completedView;                    //@synthesize completedView=_completedView - In the implementation block
@property (nonatomic,readonly) IGHONFullSizeMessageView * errorView;                        //@synthesize errorView=_errorView - In the implementation block
@property (nonatomic,readonly) IGAlertBar * alertBar;                                       //@synthesize alertBar=_alertBar - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(IGListAdapter *)listAdapter;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)setupCollectionViewAndAdapter;
-(id)extraDictionaryForFeedItem:(id)arg1 ;
-(IGHONFeedNetworkSource *)networkSource;
-(void)headerDismissViewDidDismiss:(id)arg1 ;
-(void)selectionView:(id)arg1 didSelectIndex:(int)arg2 ;
-(void)selectionViewDidSelectSkip:(id)arg1 ;
-(void)setupHeaderDismissView;
-(void)setupSelectionPromptView;
-(void)setupSegmentedControl;
-(void)configureTitleTextAttributes;
-(void)segmentedControlChangedValue:(id)arg1 ;
-(IGHONSelectionPromptView *)selectionPromptView;
-(char)progressToNextItem;
-(id)currentItemController;
-(void)presentFailedToProgressError;
-(void)updatePromptForCurrentItem:(int)arg1 ;
-(IGHONFullSizeMessageView *)completedView;
-(void)presentFullSizeMessageView:(id)arg1 ;
-(IGAlertBar *)alertBar;
-(void)networkSource:(id)arg1 bundles:(id)arg2 ;
-(void)networkSource:(id)arg1 failedWithError:(id)arg2 ;
-(void)fullSizeViewDidTapButton:(id)arg1 ;
-(IGHONHeaderDismissView *)headerDismissView;
-(id)init;
-(char)prefersStatusBarHidden;
-(int)preferredStatusBarUpdateAnimation;
-(void)viewDidLayoutSubviews;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(IGListCollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(UISegmentedControl *)segmentedControl;
-(IGHONFullSizeMessageView *)errorView;
@end

