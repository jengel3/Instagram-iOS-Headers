
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGListCollectionContext.h>

@protocol IGListAdapterDataSource, IGListAdapterDelegate, UICollectionViewDelegate, UIScrollViewDelegate, IGListUpdatingDelegate;
@class UICollectionView, UIViewController, IGListItemMap, IGListDisplayHandler, IGListWorkingRangeHandler, IGListAdapterProxy, UIView, NSMutableSet, IGListCollectionView, NSString;

@interface IGListAdapter : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGListCollectionContext> {

	UICollectionView* _collectionView;
	char _isInUpdateBlock;
	UIViewController* _viewController;
	id<IGListAdapterDataSource> _dataSource;
	id<IGListAdapterDelegate> _delegate;
	id<UICollectionViewDelegate> _collectionViewDelegate;
	id<UIScrollViewDelegate> _scrollViewDelegate;
	id<IGListUpdatingDelegate> _updatingDelegate;
	IGListItemMap* _itemMap;
	IGListDisplayHandler* _displayHandler;
	IGListWorkingRangeHandler* _workingRangeHandler;
	IGListAdapterProxy* _delegateProxy;
	UIView* _emptyBackgroundView;
	IGListItemMap* _previousItemMap;
	NSMutableSet* _registeredCellClasses;
	NSMutableSet* _registeredSupplementaryViewClasses;

}

@property (nonatomic,readonly) id<IGListUpdatingDelegate> updatingDelegate;                           //@synthesize updatingDelegate=_updatingDelegate - In the implementation block
@property (nonatomic,readonly) IGListItemMap * itemMap;                                               //@synthesize itemMap=_itemMap - In the implementation block
@property (nonatomic,readonly) IGListDisplayHandler * displayHandler;                                 //@synthesize displayHandler=_displayHandler - In the implementation block
@property (nonatomic,readonly) IGListWorkingRangeHandler * workingRangeHandler;                       //@synthesize workingRangeHandler=_workingRangeHandler - In the implementation block
@property (nonatomic,retain) IGListAdapterProxy * delegateProxy;                                      //@synthesize delegateProxy=_delegateProxy - In the implementation block
@property (nonatomic,retain) UIView * emptyBackgroundView;                                            //@synthesize emptyBackgroundView=_emptyBackgroundView - In the implementation block
@property (assign,nonatomic) char isInUpdateBlock;                                                    //@synthesize isInUpdateBlock=_isInUpdateBlock - In the implementation block
@property (nonatomic,retain) IGListItemMap * previousItemMap;                                         //@synthesize previousItemMap=_previousItemMap - In the implementation block
@property (nonatomic,retain) NSMutableSet * registeredCellClasses;                                    //@synthesize registeredCellClasses=_registeredCellClasses - In the implementation block
@property (nonatomic,retain) NSMutableSet * registeredSupplementaryViewClasses;                       //@synthesize registeredSupplementaryViewClasses=_registeredSupplementaryViewClasses - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;                                //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) IGListCollectionView * collectionView; 
@property (assign,nonatomic,__weak) id<IGListAdapterDataSource> dataSource;                           //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGListAdapterDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UICollectionViewDelegate> collectionViewDelegate;              //@synthesize collectionViewDelegate=_collectionViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollViewDelegate;                      //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize containerSize; 
-(id)dequeReusableCellOfClass:(Class)arg1 forListItemController:(id)arg2 atIndex:(int)arg3 ;
-(id)cellForItemAtIndex:(int)arg1 listItemController:(id)arg2 ;
-(id)initWithUpdatingDelegate:(id)arg1 viewController:(id)arg2 workingRangeSize:(unsigned)arg3 ;
-(id)visibleListItemControllers;
-(void)scrollToItem:(id)arg1 supplementaryKinds:(id)arg2 scrollDirection:(int)arg3 animated:(char)arg4 ;
-(void)reloadDataWithCompletion:(/*^block*/id)arg1 ;
-(unsigned)sectionForItem:(id)arg1 ;
-(void)performUpdatesAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned)sectionForListItemController:(id)arg1 ;
-(void)deselectItemAtIndex:(int)arg1 listItemController:(id)arg2 animated:(char)arg3 ;
-(id)listItemControllerForItem:(id)arg1 ;
-(void)reloadItems:(id)arg1 ;
-(CGSize)sizeForItemAtIndexPath:(id)arg1 ;
-(void)setCollectionViewDelegate:(id<UICollectionViewDelegate>)arg1 ;
-(void)deleteItemsInListItemController:(id)arg1 atIndexes:(id)arg2 ;
-(void)insertItemsInListItemController:(id)arg1 atIndexes:(id)arg2 ;
-(void)performBatchAnimated:(char)arg1 updates:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadListItemController:(id)arg1 ;
-(unsigned)indexForCell:(id)arg1 listItemController:(id)arg2 ;
-(void)reloadItemsInListItemController:(id)arg1 atIndexes:(id)arg2 ;
-(id)dequeReusableSupplementaryViewOfKind:(id)arg1 forListItemController:(id)arg2 class:(Class)arg3 atIndex:(int)arg4 ;
-(id)itemAtSection:(unsigned)arg1 ;
-(void)updateAfterPublicSettingsChange;
-(void)createProxyAndUpdateCollectionViewDelegate;
-(void)updateItems:(id)arg1 ;
-(void)updateCollectionViewDelegate;
-(id)layoutAttributesForIndexPath:(id)arg1 supplementaryKinds:(id)arg2 ;
-(IGListItemMap *)itemMap;
-(id<IGListUpdatingDelegate>)updatingDelegate;
-(void)setPreviousItemMap:(IGListItemMap *)arg1 ;
-(id)itemMapAdjustForUpdateBlock:(char)arg1 ;
-(id)supplementaryViewSourceAtIndexPath:(id)arg1 ;
-(void)updateBackgroundViewWithItemCount:(unsigned)arg1 ;
-(char)isInUpdateBlock;
-(IGListItemMap *)previousItemMap;
-(id<UICollectionViewDelegate>)collectionViewDelegate;
-(IGListDisplayHandler *)displayHandler;
-(IGListWorkingRangeHandler *)workingRangeHandler;
-(id)indexPathForItemController:(id)arg1 index:(int)arg2 ;
-(id)reusableViewIdentifierForClass:(Class)arg1 ;
-(NSMutableSet *)registeredCellClasses;
-(NSMutableSet *)registeredSupplementaryViewClasses;
-(id)indexPathsFromListItemController:(id)arg1 indexes:(id)arg2 adjustForUpdateBlock:(char)arg3 ;
-(void)setIsInUpdateBlock:(char)arg1 ;
-(CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)visibleCellsForListItemController:(id)arg1 ;
-(UIView *)emptyBackgroundView;
-(void)setEmptyBackgroundView:(UIView *)arg1 ;
-(void)setRegisteredCellClasses:(NSMutableSet *)arg1 ;
-(void)setRegisteredSupplementaryViewClasses:(NSMutableSet *)arg1 ;
-(IGListAdapterProxy *)delegateProxy;
-(void)setDataSource:(id<IGListAdapterDataSource>)arg1 ;
-(void)setDelegate:(id<IGListAdapterDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<IGListAdapterDataSource>)dataSource;
-(id<IGListAdapterDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3 ;
-(id)items;
-(IGListCollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3 ;
-(void)setCollectionView:(IGListCollectionView *)arg1 ;
-(id<UIScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(void)setDelegateProxy:(IGListAdapterProxy *)arg1 ;
-(CGSize)containerSize;
@end

