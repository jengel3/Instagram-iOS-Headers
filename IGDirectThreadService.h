

@class IGDirectThreadNetworker, IGDirectCache;

@interface IGDirectThreadService : NSObject {

	IGDirectThreadNetworker* _threadNetworker;

}

@property (nonatomic,readonly) IGDirectCache * cache; 
@property (nonatomic,readonly) IGDirectThreadNetworker * threadNetworker;              //@synthesize threadNetworker=_threadNetworker - In the implementation block
@property (nonatomic,readonly) char isNetworkReachable; 
-(void)refreshThreadWithId:(id)arg1 cursor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchThreadWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(IGDirectThreadNetworker *)threadNetworker;
-(id)threadWithId:(id)arg1 ;
-(id)threadWithUsers:(id)arg1 ;
-(id)updatedThreadFromDictionary:(id)arg1 mergeOption:(unsigned)arg2 ;
-(void)fetchThreadWithUsers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addUsers:(id)arg1 toThread:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteMessage:(id)arg1 fromThread:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSeenTimestampForThread:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setUnfinishedMessageForThreadId:(id)arg1 unfinishedMessage:(id)arg2 ;
-(void)leaveThreadWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)renameThreadToName:(id)arg1 threadId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)isNetworkReachable;
-(id)init;
-(IGDirectCache *)cache;
@end

