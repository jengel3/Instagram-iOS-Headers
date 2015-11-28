

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary;

@interface IGGK : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _gatekeepers;
	NSDictionary* _atomicUserGKs;

}

@property (retain) NSDictionary * atomicUserGKs;              //@synthesize atomicUserGKs=_atomicUserGKs - In the implementation block
+(id)sharedInstance;
-(id)_gkSerializedFilename;
-(void)_updateGKs:(id)arg1 ;
-(NSDictionary *)atomicUserGKs;
-(void)setAtomicUserGKs:(NSDictionary *)arg1 ;
-(void)_processFetchReponseForUserID:(id)arg1 response:(id)arg2 ;
-(void)_invokeCallback:(/*^block*/id)arg1 error:(id)arg2 userID:(id)arg3 ;
-(char)checkUserID:(id)arg1 gkName:(id)arg2 ;
-(void)fetchGatekeepersForUserID:(id)arg1 whenDone:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
@end

