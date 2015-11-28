
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGMediaRequestDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface IGBulkMediaRequestManager : NSObject <IGMediaRequestDelegate> {

	char _wasSuccessful;
	/*^block*/id _completionHandler;
	NSMutableArray* _requests;
	NSObject*<OS_dispatch_queue> _requestQueue;

}

@property (copy) id completionHandler;                                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * requests;                              //@synthesize requests=_requests - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
@property (assign,nonatomic) char wasSuccessful;                                     //@synthesize wasSuccessful=_wasSuccessful - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadMediaForPosts:(id)arg1 withConfiguration:(SCD_Struct_IG56)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)bulkFetchImageURLs:(id)arg1 priority:(int)arg2 ;
-(void)bulkFetchVideoURLs:(id)arg1 priority:(int)arg2 length:(long long)arg3 ;
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)mediaRequest:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3 ;
-(void)stopObservingRequests;
-(void)trimRequests;
-(void)setWasSuccessful:(char)arg1 ;
-(void)checkIfFinishedWithSuccess:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)addRequest:(id)arg1 ;
-(NSMutableArray *)requests;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(char)wasSuccessful;
@end

