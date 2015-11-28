

@protocol IGFetchedResultsControllerDelegate;
@class IGFeedNetworkSource, NSArray, NSMutableSet;

@interface IGFetchedResultsController : NSObject {

	char _blockUpdatedNotifications;
	id<IGFetchedResultsControllerDelegate> _delegate;
	IGFeedNetworkSource* _feedSource;
	NSArray* _previousObjects;
	NSArray* _currentObjects;
	NSMutableSet* _updatedObjects;

}

@property (assign,nonatomic,__weak) id<IGFetchedResultsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) IGFeedNetworkSource * feedSource;                             //@synthesize feedSource=_feedSource - In the implementation block
@property (nonatomic,retain) NSArray * previousObjects;                                           //@synthesize previousObjects=_previousObjects - In the implementation block
@property (nonatomic,retain) NSArray * currentObjects;                                            //@synthesize currentObjects=_currentObjects - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedObjects;                                       //@synthesize updatedObjects=_updatedObjects - In the implementation block
@property (assign) char blockUpdatedNotifications;                                                //@synthesize blockUpdatedNotifications=_blockUpdatedNotifications - In the implementation block
+(void)getChangesFromObjects:(id)arg1 toObjects:(id)arg2 addedIndexSet:(id*)arg3 removedIndexSet:(id*)arg4 ;
+(void)getUpdatesFromOldPostsSet:(id)arg1 toNewPostsSet:(id)arg2 forRemovedIndexes:(id*)arg3 addedIndexes:(id*)arg4 updatedIndexes:(id*)arg5 ;
-(IGFeedNetworkSource *)feedSource;
-(void)setFeedSource:(IGFeedNetworkSource *)arg1 ;
-(void)onPostUpdated:(id)arg1 ;
-(id)initWithFeedSource:(id)arg1 ;
-(void)didUpdateToObjects:(id)arg1 ;
-(NSArray *)currentObjects;
-(char)blockUpdatedNotifications;
-(void)setBlockUpdatedNotifications:(char)arg1 ;
-(void)setPreviousObjects:(NSArray *)arg1 ;
-(NSArray *)previousObjects;
-(void)setCurrentObjects:(NSArray *)arg1 ;
-(void)setUpdatedObjects:(NSMutableSet *)arg1 ;
-(void)setDelegate:(id<IGFetchedResultsControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGFetchedResultsControllerDelegate>)delegate;
-(NSMutableSet *)updatedObjects;
@end

