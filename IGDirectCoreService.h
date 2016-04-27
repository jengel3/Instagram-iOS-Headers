

@class NSOrderedSet, IGDirectThreadStore;

@interface IGDirectCoreService : NSObject

@property (nonatomic,readonly) NSOrderedSet * inboxThreads; 
@property (nonatomic,readonly) unsigned inboxSubscriptionStatus; 
@property (nonatomic,readonly) IGDirectThreadStore * threadStore; 
-(IGDirectThreadStore *)threadStore;
-(void)fetchThreadWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSOrderedSet *)inboxThreads;
-(unsigned)inboxSubscriptionStatus;
-(id)threadWithId:(id)arg1 ;
-(void)refreshWithNextMaxId:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
@end

