

@protocol OS_dispatch_queue;
@class NSObject;

@interface IGDeviceBasedLoginAccountStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)sharedStore;
-(void)fetchAccountsOnQueue:(id)arg1 completion:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)fetchAccountForUserPK:(id)arg1 onQueue:(id)arg2 completion:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)fetchCredentialForUserPK:(id)arg1 onQueue:(id)arg2 completion:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)writeAccountData:(id)arg1 forUserPK:(id)arg2 onQueue:(id)arg3 completion:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)removeAccountForUserPK:(id)arg1 onQueue:(id)arg2 completion:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
@end

