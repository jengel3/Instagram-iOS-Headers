
#import <Instagram/IGListUpdatingDelegate.h>

@class NSMutableArray, NSArray;

@interface IGListAdapterUpdater : NSObject <IGListUpdatingDelegate> {

	char _queuedReloadData;
	char _batchUpdateInProgress;
	NSMutableArray* _completionBlocks;
	NSArray* _fromItems;
	NSArray* _toItems;
	NSArray* _pendingTransitionToItems;
	/*^block*/id _itemUpdateBlock;
	/*^block*/id _reloadUpdates;

}

@property (nonatomic,readonly) NSMutableArray * completionBlocks;                           //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,copy) NSArray * fromItems;                                             //@synthesize fromItems=_fromItems - In the implementation block
@property (nonatomic,copy) NSArray * toItems;                                               //@synthesize toItems=_toItems - In the implementation block
@property (nonatomic,copy) NSArray * pendingTransitionToItems;                              //@synthesize pendingTransitionToItems=_pendingTransitionToItems - In the implementation block
@property (nonatomic,copy) id itemUpdateBlock;                                              //@synthesize itemUpdateBlock=_itemUpdateBlock - In the implementation block
@property (nonatomic,copy) id reloadUpdates;                                                //@synthesize reloadUpdates=_reloadUpdates - In the implementation block
@property (assign,getter=hasQueuedReloadData,nonatomic) char queuedReloadData;              //@synthesize queuedReloadData=_queuedReloadData - In the implementation block
@property (assign,nonatomic) char batchUpdateInProgress;                                    //@synthesize batchUpdateInProgress=_batchUpdateInProgress - In the implementation block
-(id)itemLookupPointerFunctions;
-(void)performUpdateWithCollectionView:(id)arg1 fromItems:(id)arg2 toItems:(id)arg3 itemUpdateBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)reloadDataWithCollectionView:(id)arg1 itemUpdateBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadCollectionView:(id)arg1 sections:(id)arg2 animated:(char)arg3 ;
-(void)reloadItemsInCollectionView:(id)arg1 indexPaths:(id)arg2 ;
-(void)insertItemsIntoCollectionView:(id)arg1 indexPaths:(id)arg2 ;
-(void)deleteItemsFromCollectionView:(id)arg1 indexPaths:(id)arg2 ;
-(char)hasQueuedReloadData;
-(NSArray *)fromItems;
-(NSArray *)toItems;
-(id)reloadUpdates;
-(void)cleanupState;
-(id)itemUpdateBlock;
-(void)beginPerformBatchUpdatesToItems:(id)arg1 ;
-(void)performBatchUpdatesItemBlockApplied;
-(void)endPerformBatchUpdates;
-(void)queueUpdateWithCollectionView:(id)arg1 ;
-(void)setBatchUpdateInProgress:(char)arg1 ;
-(void)setPendingTransitionToItems:(NSArray *)arg1 ;
-(void)setFromItems:(NSArray *)arg1 ;
-(void)setToItems:(NSArray *)arg1 ;
-(void)setItemUpdateBlock:(id)arg1 ;
-(void)setReloadUpdates:(id)arg1 ;
-(void)setQueuedReloadData:(char)arg1 ;
-(char)batchUpdateInProgress;
-(void)performReloadDataWithCollectionView:(id)arg1 ;
-(void)performBatchUpdatesWithCollectionView:(id)arg1 ;
-(NSArray *)pendingTransitionToItems;
-(id)trimmedIndexPaths:(id)arg1 inSections:(id)arg2 ;
-(char)hasChanges;
-(id)init;
-(NSMutableArray *)completionBlocks;
@end

