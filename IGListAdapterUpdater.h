
#import <Instagram/IGListUpdatingDelegate.h>

@protocol IGListAdapterUpdaterDelegate;
@class NSMutableArray, NSArray, NSMutableSet, NSMutableIndexSet;

@interface IGListAdapterUpdater : NSObject <IGListUpdatingDelegate> {

	char _movesAsDeletesInserts;
	char _queuedUpdateIsAnimated;
	char _queuedReloadData;
	char _batchUpdateOrReloadInProgress;
	id<IGListAdapterUpdaterDelegate> _delegate;
	NSMutableArray* _completionBlocks;
	NSArray* _fromItems;
	NSArray* _toItems;
	NSArray* _pendingTransitionToItems;
	NSMutableSet* _deleteIndexPaths;
	NSMutableSet* _insertIndexPaths;
	NSMutableSet* _reloadIndexPaths;
	NSMutableIndexSet* _reloadSections;
	/*^block*/id _itemTransitionBlock;
	NSMutableArray* _itemUpdateBlocks;
	/*^block*/id _reloadUpdates;

}

@property (nonatomic,readonly) NSMutableArray * completionBlocks;                           //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,copy) NSArray * fromItems;                                             //@synthesize fromItems=_fromItems - In the implementation block
@property (nonatomic,copy) NSArray * toItems;                                               //@synthesize toItems=_toItems - In the implementation block
@property (nonatomic,copy) NSArray * pendingTransitionToItems;                              //@synthesize pendingTransitionToItems=_pendingTransitionToItems - In the implementation block
@property (assign,nonatomic) char queuedUpdateIsAnimated;                                   //@synthesize queuedUpdateIsAnimated=_queuedUpdateIsAnimated - In the implementation block
@property (nonatomic,readonly) NSMutableSet * deleteIndexPaths;                             //@synthesize deleteIndexPaths=_deleteIndexPaths - In the implementation block
@property (nonatomic,readonly) NSMutableSet * insertIndexPaths;                             //@synthesize insertIndexPaths=_insertIndexPaths - In the implementation block
@property (nonatomic,readonly) NSMutableSet * reloadIndexPaths;                             //@synthesize reloadIndexPaths=_reloadIndexPaths - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * reloadSections;                          //@synthesize reloadSections=_reloadSections - In the implementation block
@property (nonatomic,copy) id itemTransitionBlock;                                          //@synthesize itemTransitionBlock=_itemTransitionBlock - In the implementation block
@property (nonatomic,copy) NSMutableArray * itemUpdateBlocks;                               //@synthesize itemUpdateBlocks=_itemUpdateBlocks - In the implementation block
@property (nonatomic,copy) id reloadUpdates;                                                //@synthesize reloadUpdates=_reloadUpdates - In the implementation block
@property (assign,getter=hasQueuedReloadData,nonatomic) char queuedReloadData;              //@synthesize queuedReloadData=_queuedReloadData - In the implementation block
@property (assign,nonatomic) char batchUpdateOrReloadInProgress;                            //@synthesize batchUpdateOrReloadInProgress=_batchUpdateOrReloadInProgress - In the implementation block
@property (assign,nonatomic,__weak) id<IGListAdapterUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char movesAsDeletesInserts;                                    //@synthesize movesAsDeletesInserts=_movesAsDeletesInserts - In the implementation block
-(NSMutableSet *)insertIndexPaths;
-(NSMutableSet *)deleteIndexPaths;
-(NSMutableSet *)reloadIndexPaths;
-(void)setMovesAsDeletesInserts:(char)arg1 ;
-(id)itemLookupPointerFunctions;
-(void)performUpdateWithCollectionView:(id)arg1 fromItems:(id)arg2 toItems:(id)arg3 animated:(char)arg4 itemTransitionBlock:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)reloadDataWithCollectionView:(id)arg1 itemUpdateBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadCollectionView:(id)arg1 sections:(id)arg2 ;
-(void)reloadItemsInCollectionView:(id)arg1 indexPaths:(id)arg2 ;
-(void)insertItemsIntoCollectionView:(id)arg1 indexPaths:(id)arg2 ;
-(void)deleteItemsFromCollectionView:(id)arg1 indexPaths:(id)arg2 ;
-(void)performUpdateWithCollectionView:(id)arg1 animated:(char)arg2 itemUpdates:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(char)hasQueuedReloadData;
-(NSMutableArray *)itemUpdateBlocks;
-(NSArray *)fromItems;
-(NSArray *)toItems;
-(id)reloadUpdates;
-(void)setBatchUpdateOrReloadInProgress:(char)arg1 ;
-(void)cleanupState;
-(void)cleanupUpdateBlockState;
-(id)itemTransitionBlock;
-(char)queuedUpdateIsAnimated;
-(void)beginPerformBatchUpdatesToItems:(id)arg1 ;
-(void)performBatchUpdatesItemBlockApplied;
-(void)endPerformBatchUpdates;
-(id)flushCollectionView:(id)arg1 withDiffResult:(id)arg2 reloadSections:(id)arg3 deleteIndexPaths:(id)arg4 insertIndexPaths:(id)arg5 reloadIndexPaths:(id)arg6 ;
-(void)queueUpdateWithCollectionView:(id)arg1 ;
-(char)movesAsDeletesInserts;
-(void)setPendingTransitionToItems:(NSArray *)arg1 ;
-(void)setQueuedUpdateIsAnimated:(char)arg1 ;
-(void)setFromItems:(NSArray *)arg1 ;
-(void)setToItems:(NSArray *)arg1 ;
-(void)setReloadUpdates:(id)arg1 ;
-(void)setQueuedReloadData:(char)arg1 ;
-(void)setItemTransitionBlock:(id)arg1 ;
-(char)batchUpdateOrReloadInProgress;
-(void)performReloadDataWithCollectionView:(id)arg1 ;
-(void)performBatchUpdatesWithCollectionView:(id)arg1 ;
-(NSArray *)pendingTransitionToItems;
-(id)filterIndexPaths:(id)arg1 removingSections:(id)arg2 ;
-(id)trimmedIndexPaths:(id)arg1 inSections:(id)arg2 ;
-(void)setItemUpdateBlocks:(NSMutableArray *)arg1 ;
-(char)hasChanges;
-(void)setDelegate:(id<IGListAdapterUpdaterDelegate>)arg1 ;
-(id)init;
-(id<IGListAdapterUpdaterDelegate>)delegate;
-(NSMutableArray *)completionBlocks;
-(NSMutableIndexSet *)reloadSections;
@end

