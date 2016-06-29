
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGReelFullscreenItemControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol IGAlbumSubcriptionTrayFullscreenControllerPresenterDelegate;
@class IGReelSubscriptionTrayItemModel, UIView, IGListCollectionView, IGListAdapter, NSArray, IGAlbumFullscreenViewController, NSString;

@interface IGAlbumSubcriptionTrayFullscreenControllerPresenter : UIViewController <IGListAdapterDataSource, IGReelFullscreenItemControllerDelegate, UIScrollViewDelegate> {

	char _xScrollLocked;
	char _yScrollLocked;
	id<IGAlbumSubcriptionTrayFullscreenControllerPresenterDelegate> _delegate;
	IGReelSubscriptionTrayItemModel* _focusedModelItem;
	UIView* _backgroundView;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGReelSubscriptionTrayItemModel* _secondaryModelItem;
	NSArray* _modelItems;
	CGPoint _scrollOffsetLock;
	CGPoint _scrollPositionBeforeDrag;

}

@property (nonatomic,retain) IGListCollectionView * collectionView;                                                        //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGListAdapter * listAdapter;                                                                  //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,retain) IGReelSubscriptionTrayItemModel * focusedModelItem;                                           //@synthesize focusedModelItem=_focusedModelItem - In the implementation block
@property (nonatomic,retain) IGReelSubscriptionTrayItemModel * secondaryModelItem;                                         //@synthesize secondaryModelItem=_secondaryModelItem - In the implementation block
@property (nonatomic,retain) NSArray * modelItems;                                                                         //@synthesize modelItems=_modelItems - In the implementation block
@property (assign,nonatomic) CGPoint scrollOffsetLock;                                                                     //@synthesize scrollOffsetLock=_scrollOffsetLock - In the implementation block
@property (assign,nonatomic) char xScrollLocked;                                                                           //@synthesize xScrollLocked=_xScrollLocked - In the implementation block
@property (assign,nonatomic) char yScrollLocked;                                                                           //@synthesize yScrollLocked=_yScrollLocked - In the implementation block
@property (assign,nonatomic) CGPoint scrollPositionBeforeDrag;                                                             //@synthesize scrollPositionBeforeDrag=_scrollPositionBeforeDrag - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumSubcriptionTrayFullscreenControllerPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGAlbumFullscreenViewController * currentChildViewController; 
@property (nonatomic,readonly) UIView * backgroundView;                                                                    //@synthesize backgroundView=_backgroundView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)setUpCollectionView;
-(void)scrollToInitialItem;
-(IGAlbumFullscreenViewController *)currentChildViewController;
-(void)rewindToPreviousChannel;
-(void)proceedToNextChannel;
-(void)setScrollPositionBeforeDrag:(CGPoint)arg1 ;
-(void)scrollViewScrolledVertically:(id)arg1 ;
-(void)scrollViewScrolledHorizontally:(id)arg1 ;
-(void)lockXScrollToValue:(float)arg1 ;
-(void)updateBackgroundForDragDistance:(float)arg1 ;
-(id)focusedCell;
-(void)lockYScrollToValue:(float)arg1 ;
-(void)scrollingEnded;
-(void)clearScrollLock;
-(void)focusedReelDidChange;
-(id)getMostVisibleItem;
-(void)syncServerSeenStateForFocusedModelItem;
-(char)yScrollLocked;
-(char)xScrollLocked;
-(IGListAdapter *)listAdapter;
-(void)scrollToItem:(id)arg1 animated:(char)arg2 ;
-(void)fullscreenItemController:(id)arg1 didFinishWithReason:(unsigned)arg2 ;
-(id)initWithModelItems:(id)arg1 currentModelItem:(id)arg2 delegate:(id)arg3 ;
-(IGReelSubscriptionTrayItemModel *)focusedModelItem;
-(void)setFocusedModelItem:(IGReelSubscriptionTrayItemModel *)arg1 ;
-(void)setListAdapter:(IGListAdapter *)arg1 ;
-(IGReelSubscriptionTrayItemModel *)secondaryModelItem;
-(void)setSecondaryModelItem:(IGReelSubscriptionTrayItemModel *)arg1 ;
-(NSArray *)modelItems;
-(void)setModelItems:(NSArray *)arg1 ;
-(CGPoint)scrollOffsetLock;
-(void)setScrollOffsetLock:(CGPoint)arg1 ;
-(void)setXScrollLocked:(char)arg1 ;
-(void)setYScrollLocked:(char)arg1 ;
-(CGPoint)scrollPositionBeforeDrag;
-(void)setDelegate:(id<IGAlbumSubcriptionTrayFullscreenControllerPresenterDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<IGAlbumSubcriptionTrayFullscreenControllerPresenterDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(UIView *)backgroundView;
-(IGListCollectionView *)collectionView;
-(void)viewDidLoad;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewWillDisappear:(char)arg1 ;
-(void)dismiss;
-(void)setCollectionView:(IGListCollectionView *)arg1 ;
@end

