

@class NSOrderedSet, NSArray, NSString;

@interface IGDirectInboxResponseData : NSObject {

	NSOrderedSet* _threads;
	NSArray* _pendingRequestUsers;
	NSString* _nextMaxId;
	int _pendingRequestCount;
	int _unseenShareCount;
	int _unseenPendingRequestCount;

}

@property (nonatomic,copy,readonly) NSOrderedSet * threads;                     //@synthesize threads=_threads - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingRequestUsers;              //@synthesize pendingRequestUsers=_pendingRequestUsers - In the implementation block
@property (nonatomic,copy,readonly) NSString * nextMaxId;                       //@synthesize nextMaxId=_nextMaxId - In the implementation block
@property (nonatomic,readonly) int pendingRequestCount;                         //@synthesize pendingRequestCount=_pendingRequestCount - In the implementation block
@property (nonatomic,readonly) int unseenShareCount;                            //@synthesize unseenShareCount=_unseenShareCount - In the implementation block
@property (nonatomic,readonly) int unseenPendingRequestCount;                   //@synthesize unseenPendingRequestCount=_unseenPendingRequestCount - In the implementation block
-(id)initWithThreads:(id)arg1 pendingRequestUsers:(id)arg2 pendingRequestCount:(int)arg3 nextMaxId:(id)arg4 unseenShareCount:(int)arg5 unseenPendingRequestCount:(int)arg6 ;
-(NSArray *)pendingRequestUsers;
-(NSString *)nextMaxId;
-(int)pendingRequestCount;
-(int)unseenShareCount;
-(int)unseenPendingRequestCount;
-(NSOrderedSet *)threads;
@end

