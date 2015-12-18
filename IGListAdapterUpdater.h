
#import <Instagram/IGListUpdatingDelegate.h>

@class NSMutableArray, NSArray;

@interface IGListAdapterUpdater : NSObject <IGListUpdatingDelegate> {

	char _queuedReloadData;
	char _batchUpdateInProgress;
	NSMutableArray* _completionBlocks;
	NSArray* _fromObjects;
	NSArray* _toObjects;
	/*^block*/id _objectUpdateBlock;
	/*^block*/id _reloadUpdates;

}

@property (nonatomic,readonly) NSMutableArray * completionBlocks;                           //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,copy) NSArray * fromObjects;                                           //@synthesize fromObjects=_fromObjects - In the implementation block
@property (nonatomic,copy) NSArray * toObjects;                                             //@synthesize toObjects=_toObjects - In the implementation block
@property (nonatomic,copy) id objectUpdateBlock;                                            //@synthesize objectUpdateBlock=_objectUpdateBlock - In the implementation block
@property (nonatomic,copy) id reloadUpdates;                                                //@synthesize reloadUpdates=_reloadUpdates - In the implementation block
@property (assign,getter=hasQueuedReloadData,nonatomic) char queuedReloadData;              //@synthesize queuedReloadData=_queuedReloadData - In the implementation block
@property (assign,nonatomic) char batchUpdateInProgress;                                    //@synthesize batchUpdateInProgress=_batchUpdateInProgress - In the implementation block
-(void)performUpdateWithCollectionView:(id)arg1 fromObjects:(id)arg2 toObjects:(id)arg3 objectUpdateBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)reloadDataWithCollectionView:(id)arg1 objectUpdateBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadItemsInCollectionView:(id)arg1 indexPaths:(id)arg2 ;
-(void)insertItemsIntoCollectionView:(id)arg1 indexPaths:(id)arg2 ;
-(void)deleteItemsFromCollectionView:(id)arg1 indexPaths:(id)arg2 ;
-(char)hasQueuedReloadData;
-(NSArray *)fromObjects;
-(NSArray *)toObjects;
-(void)cleanupState;
-(id)objectUpdateBlock;
-(void)setBatchUpdateInProgress:(char)arg1 ;
-(void)queueUpdateWithCollectionView:(id)arg1 ;
-(void)setFromObjects:(NSArray *)arg1 ;
-(void)setToObjects:(NSArray *)arg1 ;
-(void)setObjectUpdateBlock:(id)arg1 ;
-(void)setReloadUpdates:(id)arg1 ;
-(void)setQueuedReloadData:(char)arg1 ;
-(char)batchUpdateInProgress;
-(void)performReloadDataWithCollectionView:(id)arg1 ;
-(void)performBatchUpdatesWithCollectionView:(id)arg1 ;
-(id)trimmedIndexPaths:(id)arg1 inSections:(id)arg2 ;
-(id)reloadUpdates;
-(char)hasChanges;
-(id)init;
-(NSMutableArray *)completionBlocks;
@end

