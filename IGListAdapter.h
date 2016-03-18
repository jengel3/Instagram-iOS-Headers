
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGListVerticalLayoutDataSource.h>
#import <Instagram/IGListVerticalLayoutEstimatingDataSource.h>
#import <Instagram/IGListCollectionContext.h>

@protocol IGNavigationContext, IGPresentationContext, IGListAdapterDelegate, UICollectionViewDelegate, IGListAdapterDataSource, IGListUpdatingDelegate;
@class UICollectionView, IGListItemMap, IGListDisplayHandler, IGListAdapterProxy, UIView, NSString;

@interface IGListAdapter : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGListVerticalLayoutDataSource, IGListVerticalLayoutEstimatingDataSource, IGListCollectionContext> {

	UICollectionView* _collectionView;
	id<IGNavigationContext> _navigationContext;
	id<IGPresentationContext> _presentationContext;
	id<IGListAdapterDelegate> _delegate;
	id<UICollectionViewDelegate> _collectionViewDelegate;
	id<IGListAdapterDataSource> _dataSource;
	id<IGListUpdatingDelegate> _updatingDelegate;
	IGListItemMap* _itemMap;
	IGListDisplayHandler* _displayHandler;
	IGListAdapterProxy* _delegateProxy;
	UIView* _emptyBackgroundView;

}

@property (nonatomic,__weak,readonly) id<IGNavigationContext> navigationContext;                      //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,__weak,readonly) id<IGPresentationContext> presentationContext;                  //@synthesize presentationContext=_presentationContext - In the implementation block
@property (assign,nonatomic,__weak) id<IGListAdapterDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<UICollectionViewDelegate> collectionViewDelegate;              //@synthesize collectionViewDelegate=_collectionViewDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<IGListAdapterDataSource> dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) id<IGListUpdatingDelegate> updatingDelegate;                           //@synthesize updatingDelegate=_updatingDelegate - In the implementation block
@property (nonatomic,readonly) IGListItemMap * itemMap;                                               //@synthesize itemMap=_itemMap - In the implementation block
@property (nonatomic,readonly) IGListDisplayHandler * displayHandler;                                 //@synthesize displayHandler=_displayHandler - In the implementation block
@property (nonatomic,retain) IGListAdapterProxy * delegateProxy;                                      //@synthesize delegateProxy=_delegateProxy - In the implementation block
@property (nonatomic,retain) UIView * emptyBackgroundView;                                            //@synthesize emptyBackgroundView=_emptyBackgroundView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize containerSize; 
-(id)dequeReusableCellOfClass:(Class)arg1 forListItemController:(id)arg2 atIndex:(int)arg3 ;
-(id)cellForItemAtIndex:(int)arg1 listItemController:(id)arg2 ;
-(id<IGNavigationContext>)navigationContext;
-(void)reloadItemsInListItemController:(id)arg1 atIndexes:(id)arg2 ;
-(id)initWithCollectionView:(id)arg1 dataSource:(id)arg2 navigationContext:(id)arg3 presentationContext:(id)arg4 ;
-(void)setCollectionViewDelegate:(id<UICollectionViewDelegate>)arg1 ;
-(void)performUpdatesWithCompletion:(/*^block*/id)arg1 ;
-(CGSize)sizeForItemAtIndexPath:(id)arg1 ;
-(void)reloadItems:(id)arg1 ;
-(id<IGPresentationContext>)presentationContext;
-(unsigned)sectionForItem:(id)arg1 ;
-(void)scrollToItem:(id)arg1 scrollDirection:(int)arg2 animated:(char)arg3 ;
-(void)reloadDataWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteItemsInListItemController:(id)arg1 atIndexes:(id)arg2 ;
-(void)insertItemsInListItemController:(id)arg1 atIndexes:(id)arg2 ;
-(void)reloadListItemController:(id)arg1 animated:(char)arg2 ;
-(unsigned)indexForCell:(id)arg1 listItemController:(id)arg2 ;
-(unsigned)sectionForListItemController:(id)arg1 ;
-(id)dequeReusableSupplementaryViewOfKind:(id)arg1 forListItemController:(id)arg2 class:(Class)arg3 atIndex:(int)arg4 ;
-(void)deselectItemAtIndex:(int)arg1 listItemController:(id)arg2 animated:(char)arg3 ;
-(id)listItemControllerForItem:(id)arg1 ;
-(void)updateItems:(id)arg1 ;
-(id)initWithCollectionView:(id)arg1 dataSource:(id)arg2 updatingDelegate:(id)arg3 navigationContext:(id)arg4 presentationContext:(id)arg5 ;
-(id)layoutAttributesForIndexPath:(id)arg1 ;
-(IGListItemMap *)itemMap;
-(id<IGListUpdatingDelegate>)updatingDelegate;
-(char)isValidSupplementaryViewSourceForElementKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)supplementaryViewSourceAtIndexPath:(id)arg1 ;
-(CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)checkAndRegisterListItemController:(id)arg1 ;
-(void)updateBackgroundViewWithItemCount:(unsigned)arg1 ;
-(CGSize)estimatedSizeForItemAtIndexPath:(id)arg1 ;
-(CGSize)estimatedSizeForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id<UICollectionViewDelegate>)collectionViewDelegate;
-(IGListDisplayHandler *)displayHandler;
-(id)indexPathForItemController:(id)arg1 index:(int)arg2 ;
-(id)indexPathsFromListItemController:(id)arg1 indexes:(id)arg2 ;
-(id)validSupplementaryViewKindsForItemControllerAtIndexPath:(id)arg1 ;
-(id)itemAtSection:(unsigned)arg1 ;
-(UIView *)emptyBackgroundView;
-(void)setEmptyBackgroundView:(UIView *)arg1 ;
-(CGSize)estimatedSizeForItemAtIndexPath:(id)arg1 layout:(id)arg2 ;
-(CGSize)sizeForItemAtIndexPath:(id)arg1 layout:(id)arg2 ;
-(CGSize)estimatedSizeForHeaderAtIndexPath:(id)arg1 layout:(id)arg2 ;
-(CGSize)sizeForHeaderAtIndexPath:(id)arg1 layout:(id)arg2 ;
-(id)cellIdentifierForClass:(Class)arg1 ;
-(IGListAdapterProxy *)delegateProxy;
-(void)setDelegate:(id<IGListAdapterDelegate>)arg1 ;
-(void)dealloc;
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
-(id)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3 ;
-(void)setDelegateProxy:(IGListAdapterProxy *)arg1 ;
-(void)setupCollectionView:(id)arg1 ;
-(CGSize)containerSize;
@end

