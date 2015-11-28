

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableOrderedSet, NSObject;

@interface IGLRUCache : NSObject {

	int _totalCostLimit;
	NSMutableDictionary* _objects;
	NSMutableOrderedSet* _queue;
	int _totalCost;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (assign,nonatomic) int totalCostLimit;                                      //@synthesize totalCostLimit=_totalCostLimit - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * objects;                         //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * queue;                           //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) int totalCost;                                           //@synthesize totalCost=_totalCost - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
-(id)initWithTotalCostLimit:(int)arg1 ;
-(void)evictCachedObjectsIfNeeded;
-(int)totalCost;
-(void)setTotalCost:(int)arg1 ;
-(int)totalCostLimit;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(NSMutableDictionary *)objects;
-(NSMutableOrderedSet *)queue;
-(void)removeAllObjects;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setTotalCostLimit:(int)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(int)arg3 ;
@end

